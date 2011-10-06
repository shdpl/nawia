#ifndef QTABLEVIEW_SHELL_H
#define QTABLEVIEW_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtableview.h>

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
#include <qtableview.h>
#include <qvariant.h>
#include <qwidget.h>

class QTableView_QtDShell : public QTableView, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QTableView_QtDShell(void *d_ptr, QWidget*  parent0);
    ~QTableView_QtDShell();

    void actionEvent(QActionEvent*  arg__1);
    void changeEvent(QEvent*  arg__1);
    void childEvent(QChildEvent*  arg__1);
    void closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1);
    void closeEvent(QCloseEvent*  arg__1);
    void commitData(QWidget*  editor0);
    void contextMenuEvent(QContextMenuEvent*  arg__1);
    void currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1);
    void customEvent(QEvent*  arg__1);
    void dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1);
    int  devType() const;
    void doItemsLayout();
    void dragEnterEvent(QDragEnterEvent*  event0);
    void dragLeaveEvent(QDragLeaveEvent*  event0);
    void dragMoveEvent(QDragMoveEvent*  event0);
    void dropEvent(QDropEvent*  event0);
    bool  edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2);
    void editorDestroyed(QObject*  editor0);
    void enterEvent(QEvent*  arg__1);
    bool  event(QEvent*  event0);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void focusInEvent(QFocusEvent*  event0);
    bool  focusNextPrevChild(bool  next0);
    void focusOutEvent(QFocusEvent*  event0);
    int  heightForWidth(int  arg__1) const;
    void hideEvent(QHideEvent*  arg__1);
    int  horizontalOffset() const;
    void horizontalScrollbarAction(int  action0);
    void horizontalScrollbarValueChanged(int  value0);
    QModelIndex  indexAt(const QPoint&  p0) const;
    void inputMethodEvent(QInputMethodEvent*  event0);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  query0) const;
    bool  isIndexHidden(const QModelIndex&  index0) const;
    void keyPressEvent(QKeyEvent*  event0);
    void keyReleaseEvent(QKeyEvent*  arg__1);
    void keyboardSearch(const QString&  search0);
    void languageChange();
    void leaveEvent(QEvent*  arg__1);
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QSize  minimumSizeHint() const;
    void mouseDoubleClickEvent(QMouseEvent*  event0);
    void mouseMoveEvent(QMouseEvent*  event0);
    void mousePressEvent(QMouseEvent*  event0);
    void mouseReleaseEvent(QMouseEvent*  event0);
    QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1);
    void moveEvent(QMoveEvent*  arg__1);
    QPaintEngine*  paintEngine() const;
    void paintEvent(QPaintEvent*  e0);
    void reset();
    void resizeEvent(QResizeEvent*  event0);
    void rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2);
    void rowsInserted(const QModelIndex&  parent0, int  start1, int  end2);
    void scrollContentsBy(int  dx0, int  dy1);
    void scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1);
    void selectAll();
    QList<QModelIndex >  selectedIndexes() const;
    void selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1);
    QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const;
    void setModel(QAbstractItemModel*  model0);
    void setRootIndex(const QModelIndex&  index0);
    void setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1);
    void setSelectionModel(QItemSelectionModel*  selectionModel0);
    void setVisible(bool  visible0);
    void showEvent(QShowEvent*  arg__1);
    QSize  sizeHint() const;
    int  sizeHintForColumn(int  column0) const;
    int  sizeHintForRow(int  row0) const;
    void startDrag(Qt::DropActions  supportedActions0);
    void tabletEvent(QTabletEvent*  arg__1);
    void timerEvent(QTimerEvent*  event0);
    void updateEditorData();
    void updateEditorGeometries();
    void updateGeometries();
    int  verticalOffset() const;
    void verticalScrollbarAction(int  action0);
    void verticalScrollbarValueChanged(int  value0);
    QStyleOptionViewItem  viewOptions() const;
    bool  viewportEvent(QEvent*  event0);
    QRect  visualRect(const QModelIndex&  index0) const;
    QRegion  visualRegionForSelection(const QItemSelection&  selection0) const;
    void wheelEvent(QWheelEvent*  arg__1);
    void edit(const QModelIndex&  index0);
    void __public_columnCountChanged(int  oldCount0, int  newCount1);
    void __public_columnMoved(int  column0, int  oldIndex1, int  newIndex2);
    void __public_columnResized(int  column0, int  oldWidth1, int  newWidth2);
    void __public_destroy(bool  destroyWindow0, bool  destroySubWindows1);
    QPoint  __public_dirtyRegionOffset() const;
    void __public_doAutoScroll();
    void __public_drawFrame(QPainter*  arg__1);
    int  __public_dropIndicatorPosition() const;
    void __public_executeDelayedItemsLayout();
    bool  __public_focusNextChild();
    bool  __public_focusPreviousChild();
    void __public_resetInputContext();
    void __public_rowCountChanged(int  oldCount0, int  newCount1);
    void __public_rowMoved(int  row0, int  oldIndex1, int  newIndex2);
    void __public_rowResized(int  row0, int  oldHeight1, int  newHeight2);
    void __public_scheduleDelayedItemsLayout();
    void __public_scrollDirtyRegion(int  dx0, int  dy1);
    QObject*  __public_sender() const;
    void __public_setDirtyRegion(const QRegion&  region0);
    void __public_setState(int  state0);
    void __public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3);
    void __public_setupViewport(QWidget*  viewport0);
    void __public_startAutoScroll();
    int  __public_state() const;
    void __public_stopAutoScroll();
    void __public_updateMicroFocus();
    void __public_activated(const QModelIndex&  index0);
    void __public_clicked(const QModelIndex&  index0);
    void __public_customContextMenuRequested(const QPoint&  pos0);
    void __public_doubleClicked(const QModelIndex&  index0);
    void __public_entered(const QModelIndex&  index0);
    void __public_pressed(const QModelIndex&  index0);
    void __public_viewportEntered();
    void __override_actionEvent(QActionEvent*  arg__1, bool static_call);
    void __override_changeEvent(QEvent*  arg__1, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_closeEditor(QWidget*  editor0, int  hint1, bool static_call);
    void __override_closeEvent(QCloseEvent*  arg__1, bool static_call);
    void __override_commitData(QWidget*  editor0, bool static_call);
    void __override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call);
    void __override_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    void __override_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, bool static_call);
    int  __override_devType(bool static_call) const;
    void __override_doItemsLayout(bool static_call);
    void __override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call);
    void __override_dragLeaveEvent(QDragLeaveEvent*  event0, bool static_call);
    void __override_dragMoveEvent(QDragMoveEvent*  event0, bool static_call);
    void __override_dropEvent(QDropEvent*  event0, bool static_call);
    bool  __override_edit(const QModelIndex&  index0, int  trigger1, QEvent*  event2, bool static_call);
    void __override_editorDestroyed(QObject*  editor0, bool static_call);
    void __override_enterEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  event0, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_focusInEvent(QFocusEvent*  event0, bool static_call);
    bool  __override_focusNextPrevChild(bool  next0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  event0, bool static_call);
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    void __override_hideEvent(QHideEvent*  arg__1, bool static_call);
    int  __override_horizontalOffset(bool static_call) const;
    void __override_horizontalScrollbarAction(int  action0, bool static_call);
    void __override_horizontalScrollbarValueChanged(int  value0, bool static_call);
    QModelIndex  __override_indexAt(const QPoint&  p0, bool static_call) const;
    void __override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call);
    QVariant  __override_inputMethodQuery(int  query0, bool static_call) const;
    bool  __override_isIndexHidden(const QModelIndex&  index0, bool static_call) const;
    void __override_keyPressEvent(QKeyEvent*  event0, bool static_call);
    void __override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call);
    void __override_keyboardSearch(const QString&  search0, bool static_call);
    void __override_languageChange(bool static_call);
    void __override_leaveEvent(QEvent*  arg__1, bool static_call);
    int  __override_metric(int  arg__1, bool static_call) const;
    QSize  __override_minimumSizeHint(bool static_call) const;
    void __override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call);
    void __override_mouseMoveEvent(QMouseEvent*  event0, bool static_call);
    void __override_mousePressEvent(QMouseEvent*  event0, bool static_call);
    void __override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call);
    QModelIndex  __override_moveCursor(int  cursorAction0, int  modifiers1, bool static_call);
    void __override_moveEvent(QMoveEvent*  arg__1, bool static_call);
    QPaintEngine*  __override_paintEngine(bool static_call) const;
    void __override_paintEvent(QPaintEvent*  e0, bool static_call);
    void __override_reset(bool static_call);
    void __override_resizeEvent(QResizeEvent*  event0, bool static_call);
    void __override_rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2, bool static_call);
    void __override_rowsInserted(const QModelIndex&  parent0, int  start1, int  end2, bool static_call);
    void __override_scrollContentsBy(int  dx0, int  dy1, bool static_call);
    void __override_scrollTo(const QModelIndex&  index0, int  hint1, bool static_call);
    void __override_selectAll(bool static_call);
    QList<QModelIndex >  __override_selectedIndexes(bool static_call) const;
    void __override_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1, bool static_call);
    int  __override_selectionCommand(const QModelIndex&  index0, const QEvent*  event1, bool static_call) const;
    void __override_setModel(QAbstractItemModel*  model0, bool static_call);
    void __override_setRootIndex(const QModelIndex&  index0, bool static_call);
    void __override_setSelection(const QRect&  rect0, int  command1, bool static_call);
    void __override_setSelectionModel(QItemSelectionModel*  selectionModel0, bool static_call);
    void __override_setVisible(bool  visible0, bool static_call);
    void __override_showEvent(QShowEvent*  arg__1, bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    int  __override_sizeHintForColumn(int  column0, bool static_call) const;
    int  __override_sizeHintForRow(int  row0, bool static_call) const;
    void __override_startDrag(int  supportedActions0, bool static_call);
    void __override_tabletEvent(QTabletEvent*  arg__1, bool static_call);
    void __override_timerEvent(QTimerEvent*  event0, bool static_call);
    void __override_updateEditorData(bool static_call);
    void __override_updateEditorGeometries(bool static_call);
    void __override_updateGeometries(bool static_call);
    int  __override_verticalOffset(bool static_call) const;
    void __override_verticalScrollbarAction(int  action0, bool static_call);
    void __override_verticalScrollbarValueChanged(int  value0, bool static_call);
    QStyleOptionViewItem  __override_viewOptions(bool static_call) const;
    bool  __override_viewportEvent(QEvent*  event0, bool static_call);
    QRect  __override_visualRect(const QModelIndex&  index0, bool static_call) const;
    QRegion  __override_visualRegionForSelection(const QItemSelection&  selection0, bool static_call) const;
    void __override_wheelEvent(QWheelEvent*  arg__1, bool static_call);
};

#endif // QTABLEVIEW_SHELL_H
