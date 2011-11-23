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
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QHeaderView_shell.h"
#include <iostream>
#include <qheaderview.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QHeaderViewEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QHeaderViewEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_createEntity(void *nativeId, void* dId)
{
    new QHeaderViewEntity((QObject*)nativeId, dId);
}

QHeaderView_QtDShell::QHeaderView_QtDShell(void *d_ptr, Qt::Orientation  orientation0, QWidget*  parent1)
    : QHeaderView(orientation0, parent1),
      QObjectLink(this, d_ptr)
{
}

QHeaderView_QtDShell::~QHeaderView_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QHeaderView_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QHeaderView::metaObject();
}

int QHeaderView_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QHeaderView::qt_metacall(_c, _id, _a);
}

int QHeaderView_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QHeaderView::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch, (void *dId, void* editor0, int hint1))
void QHeaderView_QtDShell::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
    qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_commitData_QWidget_dispatch, (void *dId, void* editor0))
void QHeaderView_QtDShell::commitData(QWidget*  editor0)
{
    qtd_QAbstractItemView_commitData_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* old1))
void QHeaderView_QtDShell::currentChanged(const QModelIndex&  current0, const QModelIndex&  old1)
{
    qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(current0), &qtd_from_QModelIndex(old1));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1))
void QHeaderView_QtDShell::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(topLeft0), &qtd_from_QModelIndex(bottomRight1));
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QHeaderView_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_doItemsLayout_dispatch, (void *dId))
void QHeaderView_QtDShell::doItemsLayout()
{
    qtd_QAbstractItemView_doItemsLayout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* event0))
void QHeaderView_QtDShell::dragEnterEvent(QDragEnterEvent*  event0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* event0))
void QHeaderView_QtDShell::dragLeaveEvent(QDragLeaveEvent*  event0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* event0))
void QHeaderView_QtDShell::dragMoveEvent(QDragMoveEvent*  event0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* event0))
void QHeaderView_QtDShell::dropEvent(QDropEvent*  event0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch, (void *dId, QModelIndexAccessor* index0, int trigger1, void* event2))
bool  QHeaderView_QtDShell::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
    return qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_editorDestroyed_QObject_dispatch, (void *dId, void* editor0))
void QHeaderView_QtDShell::editorDestroyed(QObject*  editor0)
{
    qtd_QAbstractItemView_editorDestroyed_QObject_dispatch(QObjectLink::getLink(this)->dId, (QObject* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QHeaderView_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QHeaderView_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QHeaderView_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QHeaderView_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QHeaderView_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QHeaderView_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_horizontalOffset_const_dispatch, (void *dId))
int  QHeaderView_QtDShell::horizontalOffset() const
{
    return qtd_QAbstractItemView_horizontalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarAction_int_dispatch, (void *dId, int action0))
void QHeaderView_QtDShell::horizontalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QHeaderView_QtDShell::horizontalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_indexAt_QPoint_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QPoint* p0))
QModelIndex  QHeaderView_QtDShell::indexAt(const QPoint&  p0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_indexAt_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QPoint& )p0);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QHeaderView_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QHeaderView_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
bool  QHeaderView_QtDShell::isIndexHidden(const QModelIndex&  index0) const
{
    return qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QHeaderView_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_keyboardSearch_string_dispatch, (void *dId, const unsigned short* search0, int search0_size))
void QHeaderView_QtDShell::keyboardSearch(const QString&  search0)
{
    qtd_QAbstractItemView_keyboardSearch_string_dispatch(QObjectLink::getLink(this)->dId, search0.utf16(), search0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QHeaderView_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QHeaderView_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QHeaderView_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QHeaderView_QtDShell::mouseDoubleClickEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QHeaderView_QtDShell::mouseMoveEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QHeaderView_QtDShell::mousePressEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QHeaderView_QtDShell::mouseReleaseEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int arg__1, int arg__2))
QModelIndex  QHeaderView_QtDShell::moveCursor(QAbstractItemView::CursorAction  arg__1, Qt::KeyboardModifiers  arg__2)
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QAbstractItemView::CursorAction )arg__1, (Qt::KeyboardModifiers )arg__2);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QHeaderView_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QHeaderView_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QHeaderView_paintSection_QPainter_QRect_int_const_dispatch, (void *dId, void* painter0, QRect* rect1, int logicalIndex2))
QTD_FUNC(GUI, QHeaderView_paintSection_QPainter_QRect_int_const_dispatch)
void QHeaderView_QtDShell::paintSection(QPainter*  painter0, const QRect&  rect1, int  logicalIndex2) const
{
    qtd_QHeaderView_paintSection_QPainter_QRect_int_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRect& )rect1, (int )logicalIndex2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_reset_dispatch, (void *dId))
void QHeaderView_QtDShell::reset()
{
    qtd_QAbstractItemView_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QHeaderView_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QHeaderView_QtDShell::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QHeaderView_QtDShell::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QHeaderView_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch, (void *dId, QModelIndexAccessor* index0, int hint1))
void QHeaderView_QtDShell::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
    qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::ScrollHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QHeaderView_sectionSizeFromContents_int_const_dispatch, (void *dId, QSize *__d_return_value, int logicalIndex0))
QTD_FUNC(GUI, QHeaderView_sectionSizeFromContents_int_const_dispatch)
QSize  QHeaderView_QtDShell::sectionSizeFromContents(int  logicalIndex0) const
{
    QSize __d_return_value;
    qtd_QHeaderView_sectionSizeFromContents_int_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (int )logicalIndex0);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectAll_dispatch, (void *dId))
void QHeaderView_QtDShell::selectAll()
{
    qtd_QAbstractItemView_selectAll_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectedIndexes_const_dispatch, (void *dId, void * __d_arr))
QList<QModelIndex >  QHeaderView_QtDShell::selectedIndexes() const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemView_selectedIndexes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch, (void *dId, void* selected0, void* deselected1))
void QHeaderView_QtDShell::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
    qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selected0, &(QItemSelection& )deselected1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch, (void *dId, QModelIndexAccessor* index0, void* event1))
QItemSelectionModel::SelectionFlags  QHeaderView_QtDShell::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
    return (QFlags<QItemSelectionModel::SelectionFlag>) qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setModel_QAbstractItemModel_dispatch, (void *dId, void* model0))
void QHeaderView_QtDShell::setModel(QAbstractItemModel*  model0)
{
    qtd_QAbstractItemView_setModel_QAbstractItemModel_dispatch(QObjectLink::getLink(this)->dId, (QAbstractItemModel* )model0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setRootIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* index0))
void QHeaderView_QtDShell::setRootIndex(const QModelIndex&  index0)
{
    qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch, (void *dId, QRect* rect0, int flags1))
void QHeaderView_QtDShell::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  flags1)
{
    qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0, (QItemSelectionModel::SelectionFlags )flags1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch, (void *dId, void* selectionModel0))
void QHeaderView_QtDShell::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
    qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch(QObjectLink::getLink(this)->dId, (QItemSelectionModel* )selectionModel0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QHeaderView_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QHeaderView_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForColumn_int_const_dispatch, (void *dId, int column0))
int  QHeaderView_QtDShell::sizeHintForColumn(int  column0) const
{
    return qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )column0);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForRow_int_const_dispatch, (void *dId, int row0))
int  QHeaderView_QtDShell::sizeHintForRow(int  row0) const
{
    return qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )row0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_startDrag_DropActions_dispatch, (void *dId, int supportedActions0))
void QHeaderView_QtDShell::startDrag(Qt::DropActions  supportedActions0)
{
    qtd_QAbstractItemView_startDrag_DropActions_dispatch(QObjectLink::getLink(this)->dId, (Qt::DropActions )supportedActions0);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QHeaderView_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorData_dispatch, (void *dId))
void QHeaderView_QtDShell::updateEditorData()
{
    qtd_QAbstractItemView_updateEditorData_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorGeometries_dispatch, (void *dId))
void QHeaderView_QtDShell::updateEditorGeometries()
{
    qtd_QAbstractItemView_updateEditorGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateGeometries_dispatch, (void *dId))
void QHeaderView_QtDShell::updateGeometries()
{
    qtd_QAbstractItemView_updateGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_verticalOffset_const_dispatch, (void *dId))
int  QHeaderView_QtDShell::verticalOffset() const
{
    return qtd_QAbstractItemView_verticalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarAction_int_dispatch, (void *dId, int action0))
void QHeaderView_QtDShell::verticalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QHeaderView_QtDShell::verticalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_viewOptions_const_dispatch, (void *dId))
QStyleOptionViewItem  QHeaderView_QtDShell::viewOptions() const
{
    QStyleOptionViewItem *__qt_return_value = (QStyleOptionViewItem*) qtd_QAbstractItemView_viewOptions_const_dispatch(QObjectLink::getLink(this)->dId);
    return QStyleOptionViewItem(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* e0))
bool  QHeaderView_QtDShell::viewportEvent(QEvent*  e0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_visualRect_QModelIndex_const_dispatch, (void *dId, QRect *__d_return_value, QModelIndexAccessor* index0))
QRect  QHeaderView_QtDShell::visualRect(const QModelIndex&  index0) const
{
    QRect __d_return_value;
    qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch, (void *dId, void* selection0))
QRegion  QHeaderView_QtDShell::visualRegionForSelection(const QItemSelection&  selection0) const
{
    QRegion *__qt_return_value = (QRegion*) qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selection0);
    return QRegion(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QHeaderView_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_initCallBacks(VoidFunc *virts) {
    qtd_QHeaderView_paintSection_QPainter_QRect_int_const_dispatch = (qtd_QHeaderView_paintSection_QPainter_QRect_int_const_dispatch_t) virts[0];
    qtd_QHeaderView_sectionSizeFromContents_int_const_dispatch = (qtd_QHeaderView_sectionSizeFromContents_int_const_dispatch_t) virts[1];
}
// Functions in shell class
void QHeaderView_QtDShell::edit(const QModelIndex&  index0)
{
    QAbstractItemView::edit((const QModelIndex& )index0);
}

// public overrides for functions that are protected in the base class
void QHeaderView_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

QPoint  QHeaderView_QtDShell::__public_dirtyRegionOffset() const
{
    return QAbstractItemView::dirtyRegionOffset();
}

void QHeaderView_QtDShell::__public_doAutoScroll()
{
    QAbstractItemView::doAutoScroll();
}

void QHeaderView_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

int  QHeaderView_QtDShell::__public_dropIndicatorPosition() const
{
    return QAbstractItemView::dropIndicatorPosition();
}

void QHeaderView_QtDShell::__public_executeDelayedItemsLayout()
{
    QAbstractItemView::executeDelayedItemsLayout();
}

bool  QHeaderView_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QHeaderView_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QHeaderView_QtDShell::__public_initStyleOption(QStyleOptionHeader*  option0) const
{
    QHeaderView::initStyleOption((QStyleOptionHeader* )option0);
}

void QHeaderView_QtDShell::__public_initialize()
{
    QHeaderView::initialize();
}

void QHeaderView_QtDShell::__public_initializeSections()
{
    QHeaderView::initializeSections();
}

void QHeaderView_QtDShell::__public_initializeSections(int  start0, int  end1)
{
    QHeaderView::initializeSections((int )start0, (int )end1);
}

void QHeaderView_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

void QHeaderView_QtDShell::__public_resizeSections()
{
    QHeaderView::resizeSections();
}

void QHeaderView_QtDShell::__public_scheduleDelayedItemsLayout()
{
    QAbstractItemView::scheduleDelayedItemsLayout();
}

void QHeaderView_QtDShell::__public_scrollDirtyRegion(int  dx0, int  dy1)
{
    QAbstractItemView::scrollDirtyRegion((int )dx0, (int )dy1);
}

void QHeaderView_QtDShell::__public_sectionsAboutToBeRemoved(const QModelIndex&  parent0, int  logicalFirst1, int  logicalLast2)
{
    QHeaderView::sectionsAboutToBeRemoved((const QModelIndex& )parent0, (int )logicalFirst1, (int )logicalLast2);
}

void QHeaderView_QtDShell::__public_sectionsInserted(const QModelIndex&  parent0, int  logicalFirst1, int  logicalLast2)
{
    QHeaderView::sectionsInserted((const QModelIndex& )parent0, (int )logicalFirst1, (int )logicalLast2);
}

QObject*  QHeaderView_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QHeaderView_QtDShell::__public_setDirtyRegion(const QRegion&  region0)
{
    QAbstractItemView::setDirtyRegion((const QRegion& )region0);
}

void QHeaderView_QtDShell::__public_setState(int  state0)
{
    QAbstractItemView::setState((QAbstractItemView::State )state0);
}

void QHeaderView_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QHeaderView_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QHeaderView_QtDShell::__public_startAutoScroll()
{
    QAbstractItemView::startAutoScroll();
}

int  QHeaderView_QtDShell::__public_state() const
{
    return QAbstractItemView::state();
}

void QHeaderView_QtDShell::__public_stopAutoScroll()
{
    QAbstractItemView::stopAutoScroll();
}

void QHeaderView_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QHeaderView_QtDShell::__public_updateSection(int  logicalIndex0)
{
    QHeaderView::updateSection((int )logicalIndex0);
}

void QHeaderView_QtDShell::__public_activated(const QModelIndex&  index0)
{
    QAbstractItemView::activated((const QModelIndex& )index0);
}

void QHeaderView_QtDShell::__public_clicked(const QModelIndex&  index0)
{
    QAbstractItemView::clicked((const QModelIndex& )index0);
}

void QHeaderView_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QHeaderView_QtDShell::__public_doubleClicked(const QModelIndex&  index0)
{
    QAbstractItemView::doubleClicked((const QModelIndex& )index0);
}

void QHeaderView_QtDShell::__public_entered(const QModelIndex&  index0)
{
    QAbstractItemView::entered((const QModelIndex& )index0);
}

void QHeaderView_QtDShell::__public_geometriesChanged()
{
    QHeaderView::geometriesChanged();
}

void QHeaderView_QtDShell::__public_pressed(const QModelIndex&  index0)
{
    QAbstractItemView::pressed((const QModelIndex& )index0);
}

void QHeaderView_QtDShell::__public_sectionAutoResize(int  logicalIndex0, int  mode1)
{
    QHeaderView::sectionAutoResize((int )logicalIndex0, (QHeaderView::ResizeMode )mode1);
}

void QHeaderView_QtDShell::__public_sectionClicked(int  logicalIndex0)
{
    QHeaderView::sectionClicked((int )logicalIndex0);
}

void QHeaderView_QtDShell::__public_sectionCountChanged(int  oldCount0, int  newCount1)
{
    QHeaderView::sectionCountChanged((int )oldCount0, (int )newCount1);
}

void QHeaderView_QtDShell::__public_sectionDoubleClicked(int  logicalIndex0)
{
    QHeaderView::sectionDoubleClicked((int )logicalIndex0);
}

void QHeaderView_QtDShell::__public_sectionEntered(int  logicalIndex0)
{
    QHeaderView::sectionEntered((int )logicalIndex0);
}

void QHeaderView_QtDShell::__public_sectionHandleDoubleClicked(int  logicalIndex0)
{
    QHeaderView::sectionHandleDoubleClicked((int )logicalIndex0);
}

void QHeaderView_QtDShell::__public_sectionMoved(int  logicalIndex0, int  oldVisualIndex1, int  newVisualIndex2)
{
    QHeaderView::sectionMoved((int )logicalIndex0, (int )oldVisualIndex1, (int )newVisualIndex2);
}

void QHeaderView_QtDShell::__public_sectionPressed(int  logicalIndex0)
{
    QHeaderView::sectionPressed((int )logicalIndex0);
}

void QHeaderView_QtDShell::__public_sectionResized(int  logicalIndex0, int  oldSize1, int  newSize2)
{
    QHeaderView::sectionResized((int )logicalIndex0, (int )oldSize1, (int )newSize2);
}

void QHeaderView_QtDShell::__public_sortIndicatorChanged(int  logicalIndex0, int  order1)
{
    QHeaderView::sortIndicatorChanged((int )logicalIndex0, (Qt::SortOrder )order1);
}

void QHeaderView_QtDShell::__public_viewportEntered()
{
    QAbstractItemView::viewportEntered();
}

// Write virtual function overries used to decide on static/virtual calls
void QHeaderView_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QHeaderView_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QHeaderView_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QHeaderView_QtDShell::__override_closeEditor(QWidget*  editor0, int  hint1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    } else {
        closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    }
}

void QHeaderView_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QHeaderView_QtDShell::__override_commitData(QWidget*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::commitData((QWidget* )editor0);
    } else {
        commitData((QWidget* )editor0);
    }
}

void QHeaderView_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QHeaderView_QtDShell::__override_currentChanged(const QModelIndex&  current0, const QModelIndex&  old1, bool static_call)
{
    if (static_call) {
        QHeaderView::currentChanged((const QModelIndex& )current0, (const QModelIndex& )old1);
    } else {
        currentChanged((const QModelIndex& )current0, (const QModelIndex& )old1);
    }
}

void QHeaderView_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QHeaderView_QtDShell::__override_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, bool static_call)
{
    if (static_call) {
        QHeaderView::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    } else {
        dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    }
}

int  QHeaderView_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QHeaderView_QtDShell::__override_doItemsLayout(bool static_call)
{
    if (static_call) {
        QHeaderView::doItemsLayout();
    } else {
        doItemsLayout();
    }
}

void QHeaderView_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragEnterEvent((QDragEnterEvent* )event0);
    } else {
        dragEnterEvent((QDragEnterEvent* )event0);
    }
}

void QHeaderView_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragLeaveEvent((QDragLeaveEvent* )event0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )event0);
    }
}

void QHeaderView_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragMoveEvent((QDragMoveEvent* )event0);
    } else {
        dragMoveEvent((QDragMoveEvent* )event0);
    }
}

void QHeaderView_QtDShell::__override_dropEvent(QDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dropEvent((QDropEvent* )event0);
    } else {
        dropEvent((QDropEvent* )event0);
    }
}

bool  QHeaderView_QtDShell::__override_edit(const QModelIndex&  index0, int  trigger1, QEvent*  event2, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    } else {
        return edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    }
}

void QHeaderView_QtDShell::__override_editorDestroyed(QObject*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::editorDestroyed((QObject* )editor0);
    } else {
        editorDestroyed((QObject* )editor0);
    }
}

void QHeaderView_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QHeaderView_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QHeaderView::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QHeaderView_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QHeaderView_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QHeaderView_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QHeaderView_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QHeaderView_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QHeaderView_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

int  QHeaderView_QtDShell::__override_horizontalOffset(bool static_call) const
{
    if (static_call) {
        return QHeaderView::horizontalOffset();
    } else {
        return horizontalOffset();
    }
}

void QHeaderView_QtDShell::__override_horizontalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarAction((int )action0);
    } else {
        horizontalScrollbarAction((int )action0);
    }
}

void QHeaderView_QtDShell::__override_horizontalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarValueChanged((int )value0);
    } else {
        horizontalScrollbarValueChanged((int )value0);
    }
}

QModelIndex  QHeaderView_QtDShell::__override_indexAt(const QPoint&  p0, bool static_call) const
{
    if (static_call) {
        return QHeaderView::indexAt((const QPoint& )p0);
    } else {
        return indexAt((const QPoint& )p0);
    }
}

void QHeaderView_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QHeaderView_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QHeaderView_QtDShell::__override_isIndexHidden(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QHeaderView::isIndexHidden((const QModelIndex& )index0);
    } else {
        return isIndexHidden((const QModelIndex& )index0);
    }
}

void QHeaderView_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QHeaderView_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QHeaderView_QtDShell::__override_keyboardSearch(const QString&  search0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyboardSearch((const QString& )search0);
    } else {
        keyboardSearch((const QString& )search0);
    }
}

void QHeaderView_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QHeaderView_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QHeaderView_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QHeaderView_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QHeaderView_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QHeaderView::mouseDoubleClickEvent((QMouseEvent* )e0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )e0);
    }
}

void QHeaderView_QtDShell::__override_mouseMoveEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QHeaderView::mouseMoveEvent((QMouseEvent* )e0);
    } else {
        mouseMoveEvent((QMouseEvent* )e0);
    }
}

void QHeaderView_QtDShell::__override_mousePressEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QHeaderView::mousePressEvent((QMouseEvent* )e0);
    } else {
        mousePressEvent((QMouseEvent* )e0);
    }
}

void QHeaderView_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QHeaderView::mouseReleaseEvent((QMouseEvent* )e0);
    } else {
        mouseReleaseEvent((QMouseEvent* )e0);
    }
}

QModelIndex  QHeaderView_QtDShell::__override_moveCursor(int  arg__1, int  arg__2, bool static_call)
{
    if (static_call) {
        return QHeaderView::moveCursor((QAbstractItemView::CursorAction )arg__1, (Qt::KeyboardModifiers )arg__2);
    } else {
        return moveCursor((QAbstractItemView::CursorAction )arg__1, (Qt::KeyboardModifiers )arg__2);
    }
}

void QHeaderView_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QHeaderView_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QHeaderView_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        QHeaderView::paintEvent((QPaintEvent* )e0);
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QHeaderView_QtDShell::__override_paintSection(QPainter*  painter0, const QRect&  rect1, int  logicalIndex2, bool static_call) const
{
    if (static_call) {
        QHeaderView::paintSection((QPainter* )painter0, (const QRect& )rect1, (int )logicalIndex2);
    } else {
        paintSection((QPainter* )painter0, (const QRect& )rect1, (int )logicalIndex2);
    }
}

void QHeaderView_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QHeaderView::reset();
    } else {
        reset();
    }
}

void QHeaderView_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QHeaderView_QtDShell::__override_rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QAbstractItemView::rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QHeaderView_QtDShell::__override_rowsInserted(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QHeaderView::rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QHeaderView_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QHeaderView::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QHeaderView_QtDShell::__override_scrollTo(const QModelIndex&  index0, int  hint1, bool static_call)
{
    if (static_call) {
        QHeaderView::scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    } else {
        scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    }
}

QSize  QHeaderView_QtDShell::__override_sectionSizeFromContents(int  logicalIndex0, bool static_call) const
{
    if (static_call) {
        return QHeaderView::sectionSizeFromContents((int )logicalIndex0);
    } else {
        return sectionSizeFromContents((int )logicalIndex0);
    }
}

void QHeaderView_QtDShell::__override_selectAll(bool static_call)
{
    if (static_call) {
        QAbstractItemView::selectAll();
    } else {
        selectAll();
    }
}

QList<QModelIndex >  QHeaderView_QtDShell::__override_selectedIndexes(bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectedIndexes();
    } else {
        return selectedIndexes();
    }
}

void QHeaderView_QtDShell::__override_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    } else {
        selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    }
}

int  QHeaderView_QtDShell::__override_selectionCommand(const QModelIndex&  index0, const QEvent*  event1, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    } else {
        return selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    }
}

void QHeaderView_QtDShell::__override_setModel(QAbstractItemModel*  model0, bool static_call)
{
    if (static_call) {
        QHeaderView::setModel((QAbstractItemModel* )model0);
    } else {
        setModel((QAbstractItemModel* )model0);
    }
}

void QHeaderView_QtDShell::__override_setRootIndex(const QModelIndex&  index0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::setRootIndex((const QModelIndex& )index0);
    } else {
        setRootIndex((const QModelIndex& )index0);
    }
}

void QHeaderView_QtDShell::__override_setSelection(const QRect&  rect0, int  flags1, bool static_call)
{
    if (static_call) {
        QHeaderView::setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )flags1);
    } else {
        setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )flags1);
    }
}

void QHeaderView_QtDShell::__override_setSelectionModel(QItemSelectionModel*  selectionModel0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::setSelectionModel((QItemSelectionModel* )selectionModel0);
    } else {
        setSelectionModel((QItemSelectionModel* )selectionModel0);
    }
}

void QHeaderView_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QHeaderView_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QHeaderView_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QHeaderView::sizeHint();
    } else {
        return sizeHint();
    }
}

int  QHeaderView_QtDShell::__override_sizeHintForColumn(int  column0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForColumn((int )column0);
    } else {
        return sizeHintForColumn((int )column0);
    }
}

int  QHeaderView_QtDShell::__override_sizeHintForRow(int  row0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForRow((int )row0);
    } else {
        return sizeHintForRow((int )row0);
    }
}

void QHeaderView_QtDShell::__override_startDrag(int  supportedActions0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::startDrag((Qt::DropActions )supportedActions0);
    } else {
        startDrag((Qt::DropActions )supportedActions0);
    }
}

void QHeaderView_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QHeaderView_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

void QHeaderView_QtDShell::__override_updateEditorData(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorData();
    } else {
        updateEditorData();
    }
}

void QHeaderView_QtDShell::__override_updateEditorGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorGeometries();
    } else {
        updateEditorGeometries();
    }
}

void QHeaderView_QtDShell::__override_updateGeometries(bool static_call)
{
    if (static_call) {
        QHeaderView::updateGeometries();
    } else {
        updateGeometries();
    }
}

int  QHeaderView_QtDShell::__override_verticalOffset(bool static_call) const
{
    if (static_call) {
        return QHeaderView::verticalOffset();
    } else {
        return verticalOffset();
    }
}

void QHeaderView_QtDShell::__override_verticalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarAction((int )action0);
    } else {
        verticalScrollbarAction((int )action0);
    }
}

void QHeaderView_QtDShell::__override_verticalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarValueChanged((int )value0);
    } else {
        verticalScrollbarValueChanged((int )value0);
    }
}

QStyleOptionViewItem  QHeaderView_QtDShell::__override_viewOptions(bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::viewOptions();
    } else {
        return viewOptions();
    }
}

bool  QHeaderView_QtDShell::__override_viewportEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QHeaderView::viewportEvent((QEvent* )e0);
    } else {
        return viewportEvent((QEvent* )e0);
    }
}

QRect  QHeaderView_QtDShell::__override_visualRect(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QHeaderView::visualRect((const QModelIndex& )index0);
    } else {
        return visualRect((const QModelIndex& )index0);
    }
}

QRegion  QHeaderView_QtDShell::__override_visualRegionForSelection(const QItemSelection&  selection0, bool static_call) const
{
    if (static_call) {
        return QHeaderView::visualRegionForSelection((const QItemSelection& )selection0);
    } else {
        return visualRegionForSelection((const QItemSelection& )selection0);
    }
}

void QHeaderView_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QHeaderView::geometriesChanged()
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_geometriesChanged
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_geometriesChanged();

}

// QHeaderView::sectionAutoResize(int logicalIndex, QHeaderView::ResizeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionAutoResize_int_ResizeMode
(void* __this_nativeId,
 int logicalIndex0,
 int mode1)
{
    QHeaderView::ResizeMode __qt_mode1 = (QHeaderView::ResizeMode) mode1;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionAutoResize((int )logicalIndex0, (QHeaderView::ResizeMode )__qt_mode1);

}

// QHeaderView::sectionClicked(int logicalIndex)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionClicked_int
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionClicked((int )logicalIndex0);

}

// QHeaderView::sectionCountChanged(int oldCount, int newCount)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionCountChanged_int_int
(void* __this_nativeId,
 int oldCount0,
 int newCount1)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionCountChanged((int )oldCount0, (int )newCount1);

}

// QHeaderView::sectionDoubleClicked(int logicalIndex)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionDoubleClicked_int
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionDoubleClicked((int )logicalIndex0);

}

// QHeaderView::sectionEntered(int logicalIndex)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionEntered_int
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionEntered((int )logicalIndex0);

}

// QHeaderView::sectionHandleDoubleClicked(int logicalIndex)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionHandleDoubleClicked_int
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionHandleDoubleClicked((int )logicalIndex0);

}

// QHeaderView::sectionMoved(int logicalIndex, int oldVisualIndex, int newVisualIndex)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionMoved_int_int_int
(void* __this_nativeId,
 int logicalIndex0,
 int oldVisualIndex1,
 int newVisualIndex2)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionMoved((int )logicalIndex0, (int )oldVisualIndex1, (int )newVisualIndex2);

}

// QHeaderView::sectionPressed(int logicalIndex)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionPressed_int
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionPressed((int )logicalIndex0);

}

// QHeaderView::sectionResized(int logicalIndex, int oldSize, int newSize)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionResized_int_int_int
(void* __this_nativeId,
 int logicalIndex0,
 int oldSize1,
 int newSize2)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionResized((int )logicalIndex0, (int )oldSize1, (int )newSize2);

}

// QHeaderView::sortIndicatorChanged(int logicalIndex, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sortIndicatorChanged_int_SortOrder
(void* __this_nativeId,
 int logicalIndex0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sortIndicatorChanged((int )logicalIndex0, (Qt::SortOrder )__qt_order1);

}

// ---externC---
// QHeaderView::QHeaderView(Qt::Orientation orientation, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QHeaderView_QHeaderView_Orientation_QWidget
(void *d_ptr,
 int orientation0,
 void* parent1)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QHeaderView_QtDShell *__qt_this = new QHeaderView_QtDShell(d_ptr, (Qt::Orientation )__qt_orientation0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QHeaderView::cascadingSectionResizes() const
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_cascadingSectionResizes_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->cascadingSectionResizes();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::count() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_count_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::defaultAlignment() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_defaultAlignment_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->defaultAlignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::defaultSectionSize() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_defaultSectionSize_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->defaultSectionSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::headerDataChanged(Qt::Orientation orientation, int logicalFirst, int logicalLast)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_headerDataChanged_Orientation_int_int
(void* __this_nativeId,
 int orientation0,
 int logicalFirst1,
 int logicalLast2)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->headerDataChanged((Qt::Orientation )__qt_orientation0, (int )logicalFirst1, (int )logicalLast2);

}

// QHeaderView::hiddenSectionCount() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_hiddenSectionCount_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->hiddenSectionCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::hideSection(int logicalIndex)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_hideSection_int
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->hideSection((int )logicalIndex0);

}

// QHeaderView::highlightSections() const
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_highlightSections_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->highlightSections();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::initStyleOption(QStyleOptionHeader * option) const
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_initStyleOption_nativepointerQStyleOptionHeader_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionHeader*  __qt_option0 = (QStyleOptionHeader* ) option0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionHeader* )__qt_option0);

}

// QHeaderView::initialize()
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_initialize
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_initialize();

}

// QHeaderView::initializeSections()
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_initializeSections
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_initializeSections();

}

// QHeaderView::initializeSections(int start, int end)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_initializeSections_int_int
(void* __this_nativeId,
 int start0,
 int end1)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_initializeSections((int )start0, (int )end1);

}

// QHeaderView::isClickable() const
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_isClickable_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isClickable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::isMovable() const
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_isMovable_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isMovable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::isSectionHidden(int logicalIndex) const
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_isSectionHidden_int_const
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSectionHidden((int )logicalIndex0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::isSortIndicatorShown() const
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_isSortIndicatorShown_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSortIndicatorShown();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::length() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_length_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->length();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::logicalIndex(int visualIndex) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_logicalIndex_int_const
(void* __this_nativeId,
 int visualIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->logicalIndex((int )visualIndex0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::logicalIndexAt(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_logicalIndexAt_QPoint_const
(void* __this_nativeId,
 QPoint pos0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->logicalIndexAt((const QPoint& )pos0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::logicalIndexAt(int position) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_logicalIndexAt_int_const
(void* __this_nativeId,
 int position0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->logicalIndexAt((int )position0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::logicalIndexAt(int x, int y) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_logicalIndexAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->logicalIndexAt((int )x0, (int )y1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::minimumSectionSize() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_minimumSectionSize_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->minimumSectionSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::moveSection(int from, int to)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_moveSection_int_int
(void* __this_nativeId,
 int from0,
 int to1)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->moveSection((int )from0, (int )to1);

}

// QHeaderView::offset() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_offset_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->offset();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_orientation_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::resizeMode(int logicalIndex) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_resizeMode_int_const
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->resizeMode((int )logicalIndex0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::resizeSection(int logicalIndex, int size)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_resizeSection_int_int
(void* __this_nativeId,
 int logicalIndex0,
 int size1)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->resizeSection((int )logicalIndex0, (int )size1);

}

// QHeaderView::resizeSections()
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_resizeSections
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_resizeSections();

}

// QHeaderView::resizeSections(QHeaderView::ResizeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_resizeSections_ResizeMode
(void* __this_nativeId,
 int mode0)
{
    QHeaderView::ResizeMode __qt_mode0 = (QHeaderView::ResizeMode) mode0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->resizeSections((QHeaderView::ResizeMode )__qt_mode0);

}

// QHeaderView::restoreState(const QByteArray & state)
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_restoreState_QByteArray
(void* __this_nativeId,
 void* state0)
{
    const QByteArray&  __qt_state0 = (const QByteArray& ) *(QByteArray *)state0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->restoreState((const QByteArray& )__qt_state0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::saveState() const
QTD_EXTERN QTD_EXPORT void* qtd_QHeaderView_saveState_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->saveState();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QHeaderView::sectionPosition(int logicalIndex) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_sectionPosition_int_const
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sectionPosition((int )logicalIndex0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::sectionSize(int logicalIndex) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_sectionSize_int_const
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sectionSize((int )logicalIndex0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::sectionSizeHint(int logicalIndex) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_sectionSizeHint_int_const
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sectionSizeHint((int )logicalIndex0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::sectionViewportPosition(int logicalIndex) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_sectionViewportPosition_int_const
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sectionViewportPosition((int )logicalIndex0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::sectionsAboutToBeRemoved(const QModelIndex & parent_, int logicalFirst, int logicalLast)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionsAboutToBeRemoved_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int logicalFirst1,
 int logicalLast2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionsAboutToBeRemoved((const QModelIndex& )__qt_parent0, (int )logicalFirst1, (int )logicalLast2);

}

// QHeaderView::sectionsHidden() const
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_sectionsHidden_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->sectionsHidden();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::sectionsInserted(const QModelIndex & parent_, int logicalFirst, int logicalLast)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionsInserted_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int logicalFirst1,
 int logicalLast2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_sectionsInserted((const QModelIndex& )__qt_parent0, (int )logicalFirst1, (int )logicalLast2);

}

// QHeaderView::sectionsMoved() const
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_sectionsMoved_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->sectionsMoved();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::setCascadingSectionResizes(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setCascadingSectionResizes_bool
(void* __this_nativeId,
 bool enable0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setCascadingSectionResizes((bool )enable0);

}

// QHeaderView::setClickable(bool clickable)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setClickable_bool
(void* __this_nativeId,
 bool clickable0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setClickable((bool )clickable0);

}

// QHeaderView::setDefaultAlignment(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setDefaultAlignment_Alignment
(void* __this_nativeId,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setDefaultAlignment((Qt::Alignment )__qt_alignment0);

}

// QHeaderView::setDefaultSectionSize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setDefaultSectionSize_int
(void* __this_nativeId,
 int size0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setDefaultSectionSize((int )size0);

}

// QHeaderView::setHighlightSections(bool highlight)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setHighlightSections_bool
(void* __this_nativeId,
 bool highlight0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setHighlightSections((bool )highlight0);

}

// QHeaderView::setMinimumSectionSize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setMinimumSectionSize_int
(void* __this_nativeId,
 int size0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setMinimumSectionSize((int )size0);

}

// QHeaderView::setMovable(bool movable)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setMovable_bool
(void* __this_nativeId,
 bool movable0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setMovable((bool )movable0);

}

// QHeaderView::setOffset(int offset)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setOffset_int
(void* __this_nativeId,
 int offset0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setOffset((int )offset0);

}

// QHeaderView::setOffsetToLastSection()
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setOffsetToLastSection
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setOffsetToLastSection();

}

// QHeaderView::setOffsetToSectionPosition(int visualIndex)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setOffsetToSectionPosition_int
(void* __this_nativeId,
 int visualIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setOffsetToSectionPosition((int )visualIndex0);

}

// QHeaderView::setResizeMode(QHeaderView::ResizeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setResizeMode_ResizeMode
(void* __this_nativeId,
 int mode0)
{
    QHeaderView::ResizeMode __qt_mode0 = (QHeaderView::ResizeMode) mode0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setResizeMode((QHeaderView::ResizeMode )__qt_mode0);

}

// QHeaderView::setResizeMode(int logicalIndex, QHeaderView::ResizeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setResizeMode_int_ResizeMode
(void* __this_nativeId,
 int logicalIndex0,
 int mode1)
{
    QHeaderView::ResizeMode __qt_mode1 = (QHeaderView::ResizeMode) mode1;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setResizeMode((int )logicalIndex0, (QHeaderView::ResizeMode )__qt_mode1);

}

// QHeaderView::setSectionHidden(int logicalIndex, bool hide)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setSectionHidden_int_bool
(void* __this_nativeId,
 int logicalIndex0,
 bool hide1)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setSectionHidden((int )logicalIndex0, (bool )hide1);

}

// QHeaderView::setSortIndicator(int logicalIndex, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setSortIndicator_int_SortOrder
(void* __this_nativeId,
 int logicalIndex0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setSortIndicator((int )logicalIndex0, (Qt::SortOrder )__qt_order1);

}

// QHeaderView::setSortIndicatorShown(bool show)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setSortIndicatorShown_bool
(void* __this_nativeId,
 bool show0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setSortIndicatorShown((bool )show0);

}

// QHeaderView::setStretchLastSection(bool stretch)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setStretchLastSection_bool
(void* __this_nativeId,
 bool stretch0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->setStretchLastSection((bool )stretch0);

}

// QHeaderView::showSection(int logicalIndex)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_showSection_int
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->showSection((int )logicalIndex0);

}

// QHeaderView::sortIndicatorOrder() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_sortIndicatorOrder_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sortIndicatorOrder();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::sortIndicatorSection() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_sortIndicatorSection_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sortIndicatorSection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::stretchLastSection() const
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_stretchLastSection_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->stretchLastSection();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::stretchSectionCount() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_stretchSectionCount_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->stretchSectionCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::swapSections(int first, int second)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_swapSections_int_int
(void* __this_nativeId,
 int first0,
 int second1)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->swapSections((int )first0, (int )second1);

}

// QHeaderView::updateSection(int logicalIndex)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_updateSection_int
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    __qt_this->__public_updateSection((int )logicalIndex0);

}

// QHeaderView::visualIndex(int logicalIndex) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_visualIndex_int_const
(void* __this_nativeId,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->visualIndex((int )logicalIndex0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::visualIndexAt(int position) const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_visualIndexAt_int_const
(void* __this_nativeId,
 int position0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->visualIndexAt((int )position0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::currentChanged(const QModelIndex & current, const QModelIndex & old)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_currentChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor current0,
 QModelIndexAccessor old1)
{
    QModelIndex __qt_current0 = qtd_to_QModelIndex(current0);
    QModelIndex __qt_old1 = qtd_to_QModelIndex(old1);
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_currentChanged((const QModelIndex& )__qt_current0, (const QModelIndex& )__qt_old1, __do_static_call);

}

// QHeaderView::dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_dataChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor topLeft0,
 QModelIndexAccessor bottomRight1)
{
    QModelIndex __qt_topLeft0 = qtd_to_QModelIndex(topLeft0);
    QModelIndex __qt_bottomRight1 = qtd_to_QModelIndex(bottomRight1);
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dataChanged((const QModelIndex& )__qt_topLeft0, (const QModelIndex& )__qt_bottomRight1, __do_static_call);

}

// QHeaderView::doItemsLayout()
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_doItemsLayout
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_doItemsLayout(__do_static_call);

}

// QHeaderView::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::horizontalOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_horizontalOffset_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_horizontalOffset(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::indexAt(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_indexAt_QPoint_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint p0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_indexAt((const QPoint& )p0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QHeaderView::isIndexHidden(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_isIndexHidden_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isIndexHidden((const QModelIndex& )__qt_index0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::mouseDoubleClickEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QHeaderView::mouseMoveEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QHeaderView::mousePressEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QHeaderView::mouseReleaseEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QHeaderView::moveCursor(QAbstractItemView::CursorAction arg__1, QFlags<Qt::KeyboardModifier> arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_moveCursor_CursorAction_KeyboardModifiers
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int arg__1,
 int arg__2)
{
    int __qt_arg__1 = arg__1;
    QFlags<Qt::KeyboardModifier> __qt_arg__2 = (QFlags<Qt::KeyboardModifier>) arg__2;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_moveCursor(__qt_arg__1, (Qt::KeyboardModifiers )__qt_arg__2, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QHeaderView::paintEvent(QPaintEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* e0)
{
    QPaintEvent*  __qt_e0 = (QPaintEvent* ) e0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_e0, __do_static_call);

}

// QHeaderView::paintSection(QPainter * painter, const QRect & rect, int logicalIndex) const
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_paintSection_QPainter_QRect_int_const
(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int logicalIndex2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintSection((QPainter* )__qt_painter0, (const QRect& )rect1, (int )logicalIndex2, __do_static_call);

}

// QHeaderView::reset()
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_reset
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_reset(__do_static_call);

}

// QHeaderView::rowsInserted(const QModelIndex & parent_, int start, int end)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_rowsInserted_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int start1,
 int end2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_rowsInserted((const QModelIndex& )__qt_parent0, (int )start1, (int )end2, __do_static_call);

}

// QHeaderView::scrollContentsBy(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_scrollContentsBy_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollContentsBy((int )dx0, (int )dy1, __do_static_call);

}

// QHeaderView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_scrollTo_QModelIndex_ScrollHint
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int hint1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView::ScrollHint __qt_hint1 = (QAbstractItemView::ScrollHint) hint1;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollTo((const QModelIndex& )__qt_index0, (QAbstractItemView::ScrollHint )__qt_hint1, __do_static_call);

}

// QHeaderView::sectionSizeFromContents(int logicalIndex) const
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sectionSizeFromContents_int_const
(void* __this_nativeId,
 QSize * __d_return_value,
 int logicalIndex0)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sectionSizeFromContents((int )logicalIndex0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QHeaderView::setModel(QAbstractItemModel * model)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setModel_QAbstractItemModel
(void* __this_nativeId,
 void* model0)
{
    QAbstractItemModel*  __qt_model0 = (QAbstractItemModel* ) model0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setModel((QAbstractItemModel* )__qt_model0, __do_static_call);

}

// QHeaderView::setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_setSelection_QRect_SelectionFlags
(void* __this_nativeId,
 QRect rect0,
 int flags1)
{
    QFlags<QItemSelectionModel::SelectionFlag> __qt_flags1 = (QFlags<QItemSelectionModel::SelectionFlag>) flags1;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )__qt_flags1, __do_static_call);

}

// QHeaderView::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QHeaderView::updateGeometries()
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_updateGeometries
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateGeometries(__do_static_call);

}

// QHeaderView::verticalOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QHeaderView_verticalOffset_const
(void* __this_nativeId)
{
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_verticalOffset(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::viewportEvent(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QHeaderView_viewportEvent_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_viewportEvent((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHeaderView::visualRect(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QHeaderView_visualRect_QModelIndex_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_visualRect((const QModelIndex& )__qt_index0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QHeaderView::visualRegionForSelection(const QItemSelection & selection) const
QTD_EXTERN QTD_EXPORT void* qtd_QHeaderView_visualRegionForSelection_QItemSelection_const
(void* __this_nativeId,
 void* selection0)
{
    const QItemSelection&  __qt_selection0 = (const QItemSelection& ) *(QItemSelection *)selection0;
    QHeaderView_QtDShell *__qt_this = (QHeaderView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRegion  __qt_return_value = __qt_this->__override_visualRegionForSelection((const QItemSelection& )__qt_selection0, __do_static_call);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QHeaderView_staticMetaObject() {
    return (void*)&QHeaderView::staticMetaObject;
}


