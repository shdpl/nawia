module qt.gui.QAbstractItemView;

public import qt.gui.QAbstractItemView_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QAbstractItemDelegate;
public import qt.gui.QPaintDevice;
public import qt.gui.QAbstractItemDelegate;
public import qt.gui.QDropEvent;
public import qt.core.QAbstractItemModel;
public import qt.gui.QItemSelectionModel;
public import qt.gui.QHideEvent;
public import qt.core.QPoint;
public import qt.core.QTimerEvent;
public import qt.core.QModelIndex;
public import qt.core.QChildEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QObject;
public import qt.gui.QResizeEvent;
public import qt.gui.QPaintEngine;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QWheelEvent;
public import qt.gui.QItemSelection;
public import qt.gui.QCloseEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.core.QRect;
public import qt.gui.QInputMethodEvent;
public import qt.core.QSize;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QStyleOptionViewItem;
public import qt.gui.QAbstractScrollArea;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QWidget;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QRegion;
public import qt.gui.QDragLeaveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractItemView : QAbstractScrollArea
{
    public enum DragDropMode {
        NoDragDrop = 0,
        DragOnly = 1,
        DropOnly = 2,
        DragDrop = 3,
        InternalMove = 4
    }

    alias DragDropMode.NoDragDrop NoDragDrop;
    alias DragDropMode.DragOnly DragOnly;
    alias DragDropMode.DropOnly DropOnly;
    alias DragDropMode.DragDrop DragDrop;
    alias DragDropMode.InternalMove InternalMove;

    public enum SelectionBehavior {
        SelectItems = 0,
        SelectRows = 1,
        SelectColumns = 2
    }

    alias SelectionBehavior.SelectItems SelectItems;
    alias SelectionBehavior.SelectRows SelectRows;
    alias SelectionBehavior.SelectColumns SelectColumns;

    public enum EditTrigger {
        NoEditTriggers = 0,
        CurrentChanged = 1,
        DoubleClicked = 2,
        SelectedClicked = 4,
        EditKeyPressed = 8,
        AnyKeyPressed = 16,
        AllEditTriggers = 31
    }

    alias EditTrigger.NoEditTriggers NoEditTriggers;
    alias EditTrigger.CurrentChanged CurrentChanged;
    alias EditTrigger.DoubleClicked DoubleClicked;
    alias EditTrigger.SelectedClicked SelectedClicked;
    alias EditTrigger.EditKeyPressed EditKeyPressed;
    alias EditTrigger.AnyKeyPressed AnyKeyPressed;
    alias EditTrigger.AllEditTriggers AllEditTriggers;

    public enum ScrollMode {
        ScrollPerItem = 0,
        ScrollPerPixel = 1
    }

    alias ScrollMode.ScrollPerItem ScrollPerItem;
    alias ScrollMode.ScrollPerPixel ScrollPerPixel;

    public enum CursorAction {
        MoveUp = 0,
        MoveDown = 1,
        MoveLeft = 2,
        MoveRight = 3,
        MoveHome = 4,
        MoveEnd = 5,
        MovePageUp = 6,
        MovePageDown = 7,
        MoveNext = 8,
        MovePrevious = 9
    }

    alias CursorAction.MoveUp MoveUp;
    alias CursorAction.MoveDown MoveDown;
    alias CursorAction.MoveLeft MoveLeft;
    alias CursorAction.MoveRight MoveRight;
    alias CursorAction.MoveHome MoveHome;
    alias CursorAction.MoveEnd MoveEnd;
    alias CursorAction.MovePageUp MovePageUp;
    alias CursorAction.MovePageDown MovePageDown;
    alias CursorAction.MoveNext MoveNext;
    alias CursorAction.MovePrevious MovePrevious;

    public enum DropIndicatorPosition {
        OnItem = 0,
        AboveItem = 1,
        BelowItem = 2,
        OnViewport = 3
    }

    alias DropIndicatorPosition.OnItem OnItem;
    alias DropIndicatorPosition.AboveItem AboveItem;
    alias DropIndicatorPosition.BelowItem BelowItem;
    alias DropIndicatorPosition.OnViewport OnViewport;

    public enum ScrollHint {
        EnsureVisible = 0,
        PositionAtTop = 1,
        PositionAtBottom = 2,
        PositionAtCenter = 3
    }

    alias ScrollHint.EnsureVisible EnsureVisible;
    alias ScrollHint.PositionAtTop PositionAtTop;
    alias ScrollHint.PositionAtBottom PositionAtBottom;
    alias ScrollHint.PositionAtCenter PositionAtCenter;

    public enum SelectionMode {
        NoSelection = 0,
        SingleSelection = 1,
        MultiSelection = 2,
        ExtendedSelection = 3,
        ContiguousSelection = 4
    }

    alias SelectionMode.NoSelection NoSelection;
    alias SelectionMode.SingleSelection SingleSelection;
    alias SelectionMode.MultiSelection MultiSelection;
    alias SelectionMode.ExtendedSelection ExtendedSelection;
    alias SelectionMode.ContiguousSelection ContiguousSelection;

    public enum State {
        NoState = 0,
        DraggingState = 1,
        DragSelectingState = 2,
        EditingState = 3,
        ExpandingState = 4,
        CollapsingState = 5,
        AnimatingState = 6
    }

    alias State.NoState NoState;
    alias State.DraggingState DraggingState;
    alias State.DragSelectingState DragSelectingState;
    alias State.EditingState EditingState;
    alias State.ExpandingState ExpandingState;
    alias State.CollapsingState CollapsingState;
    alias State.AnimatingState AnimatingState;


Object __rcItemModel = null;

Object __rcItemDelegate = null;

Object __rcItemSelectionModel = null;

    private static const string[] __signalSignatures = [
            "activated(QModelIndex)", 
            "clicked(QModelIndex)", 
            "doubleClicked(QModelIndex)", 
            "entered(QModelIndex)", 
            "pressed(QModelIndex)", 
            "viewportEntered()"    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }

    protected final void activated(const(QModelIndex) index) {
        qtd_QAbstractItemView_activated_QModelIndex(qtdNativeId, index);
    }

    protected final void clicked(const(QModelIndex) index) {
        qtd_QAbstractItemView_clicked_QModelIndex(qtdNativeId, index);
    }

    protected final void doubleClicked(const(QModelIndex) index) {
        qtd_QAbstractItemView_doubleClicked_QModelIndex(qtdNativeId, index);
    }

    protected final void entered(const(QModelIndex) index) {
        qtd_QAbstractItemView_entered_QModelIndex(qtdNativeId, index);
    }

    protected final void pressed(const(QModelIndex) index) {
        qtd_QAbstractItemView_pressed_QModelIndex(qtdNativeId, index);
    }

    protected final void viewportEntered() {
        qtd_QAbstractItemView_viewportEntered(qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QAbstractItemView_QAbstractItemView_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool alternatingRowColors() const {
        return qtd_QAbstractItemView_alternatingRowColors_const(qtdNativeId);
    }

    public final int autoScrollMargin() const {
        return qtd_QAbstractItemView_autoScrollMargin_const(qtdNativeId);
    }

    public final void clearSelection() {
        qtd_QAbstractItemView_clearSelection(qtdNativeId);
    }

    public final void closePersistentEditor(const(QModelIndex) index) {
        qtd_QAbstractItemView_closePersistentEditor_QModelIndex(qtdNativeId, index);
    }

    public final QModelIndex currentIndex() const {
        QModelIndex res;
        qtd_QAbstractItemView_currentIndex_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.DropAction defaultDropAction() const {
        return cast(Qt.DropAction) qtd_QAbstractItemView_defaultDropAction_const(qtdNativeId);
    }

    protected final QPoint dirtyRegionOffset() const {
        QPoint res;
        qtd_QAbstractItemView_dirtyRegionOffset_const(qtdNativeId, &res);
        return res;
    }

    protected final void doAutoScroll() {
        qtd_QAbstractItemView_doAutoScroll(qtdNativeId);
    }

    public final QAbstractItemView.DragDropMode dragDropMode() const {
        return cast(QAbstractItemView.DragDropMode) qtd_QAbstractItemView_dragDropMode_const(qtdNativeId);
    }

    public final bool dragDropOverwriteMode() const {
        return qtd_QAbstractItemView_dragDropOverwriteMode_const(qtdNativeId);
    }

    public final bool dragEnabled() const {
        return qtd_QAbstractItemView_dragEnabled_const(qtdNativeId);
    }

    protected final QAbstractItemView.DropIndicatorPosition dropIndicatorPosition() const {
        return cast(QAbstractItemView.DropIndicatorPosition) qtd_QAbstractItemView_dropIndicatorPosition_const(qtdNativeId);
    }

    public final void edit(const(QModelIndex) index) {
        qtd_QAbstractItemView_edit_QModelIndex(qtdNativeId, index);
    }

    public final int editTriggers() const {
        return qtd_QAbstractItemView_editTriggers_const(qtdNativeId);
    }

    protected final void executeDelayedItemsLayout() {
        qtd_QAbstractItemView_executeDelayedItemsLayout(qtdNativeId);
    }

    public final bool hasAutoScroll() const {
        return qtd_QAbstractItemView_hasAutoScroll_const(qtdNativeId);
    }

    public final QAbstractItemView.ScrollMode horizontalScrollMode() const {
        return cast(QAbstractItemView.ScrollMode) qtd_QAbstractItemView_horizontalScrollMode_const(qtdNativeId);
    }

    public final QSize iconSize() const {
        QSize res;
        qtd_QAbstractItemView_iconSize_const(qtdNativeId, &res);
        return res;
    }

    public final QWidget indexWidget(const(QModelIndex) index) const {
        void *ret = qtd_QAbstractItemView_indexWidget_QModelIndex_const(qtdNativeId, index);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QAbstractItemDelegate itemDelegate() const {
        void *ret = qtd_QAbstractItemView_itemDelegate_const(qtdNativeId);
        QAbstractItemDelegate __d_return_value = QAbstractItemDelegate.__getObject(ret);
        return __d_return_value;
    }

    public final QAbstractItemDelegate itemDelegate(const(QModelIndex) index) const {
        void *ret = qtd_QAbstractItemView_itemDelegate_QModelIndex_const(qtdNativeId, index);
        QAbstractItemDelegate __d_return_value = QAbstractItemDelegate.__getObject(ret);
        return __d_return_value;
    }

    public final QAbstractItemDelegate itemDelegateForColumn(int column) const {
        void *ret = qtd_QAbstractItemView_itemDelegateForColumn_int_const(qtdNativeId, column);
        QAbstractItemDelegate __d_return_value = QAbstractItemDelegate.__getObject(ret);
        return __d_return_value;
    }

    public final QAbstractItemDelegate itemDelegateForRow(int row) const {
        void *ret = qtd_QAbstractItemView_itemDelegateForRow_int_const(qtdNativeId, row);
        QAbstractItemDelegate __d_return_value = QAbstractItemDelegate.__getObject(ret);
        return __d_return_value;
    }

    public final QAbstractItemModel model() const {
        void *ret = qtd_QAbstractItemView_model_const(qtdNativeId);
        QAbstractItemModel __d_return_value = QAbstractItemModel.__getObject(ret);
        return __d_return_value;
    }

    public final void openPersistentEditor(const(QModelIndex) index) {
        qtd_QAbstractItemView_openPersistentEditor_QModelIndex(qtdNativeId, index);
    }

    public final QModelIndex rootIndex() const {
        QModelIndex res;
        qtd_QAbstractItemView_rootIndex_const(qtdNativeId, &res);
        return res;
    }

    protected final void scheduleDelayedItemsLayout() {
        qtd_QAbstractItemView_scheduleDelayedItemsLayout(qtdNativeId);
    }

    protected final void scrollDirtyRegion(int dx, int dy) {
        qtd_QAbstractItemView_scrollDirtyRegion_int_int(qtdNativeId, dx, dy);
    }

    public final void scrollToBottom() {
        qtd_QAbstractItemView_scrollToBottom(qtdNativeId);
    }

    public final void scrollToTop() {
        qtd_QAbstractItemView_scrollToTop(qtdNativeId);
    }

    public final QAbstractItemView.SelectionBehavior selectionBehavior() const {
        return cast(QAbstractItemView.SelectionBehavior) qtd_QAbstractItemView_selectionBehavior_const(qtdNativeId);
    }

    public final QAbstractItemView.SelectionMode selectionMode() const {
        return cast(QAbstractItemView.SelectionMode) qtd_QAbstractItemView_selectionMode_const(qtdNativeId);
    }

    public final QItemSelectionModel selectionModel() const {
        void *ret = qtd_QAbstractItemView_selectionModel_const(qtdNativeId);
        QItemSelectionModel __d_return_value = QItemSelectionModel.__getObject(ret);
        return __d_return_value;
    }

    public final void setAlternatingRowColors(bool enable) {
        qtd_QAbstractItemView_setAlternatingRowColors_bool(qtdNativeId, enable);
    }

    public final void setAutoScroll(bool enable) {
        qtd_QAbstractItemView_setAutoScroll_bool(qtdNativeId, enable);
    }

    public final void setAutoScrollMargin(int margin) {
        qtd_QAbstractItemView_setAutoScrollMargin_int(qtdNativeId, margin);
    }

    public final void setCurrentIndex(const(QModelIndex) index) {
        qtd_QAbstractItemView_setCurrentIndex_QModelIndex(qtdNativeId, index);
    }

    public final void setDefaultDropAction(Qt.DropAction dropAction) {
        qtd_QAbstractItemView_setDefaultDropAction_DropAction(qtdNativeId, dropAction);
    }

    protected final void setDirtyRegion(const(QRegion) region) {
        qtd_QAbstractItemView_setDirtyRegion_QRegion(qtdNativeId, region is null ? null : (cast(QRegion)region).qtdNativeId);
    }

    public final void setDragDropMode(QAbstractItemView.DragDropMode behavior) {
        qtd_QAbstractItemView_setDragDropMode_DragDropMode(qtdNativeId, behavior);
    }

    public final void setDragDropOverwriteMode(bool overwrite) {
        qtd_QAbstractItemView_setDragDropOverwriteMode_bool(qtdNativeId, overwrite);
    }

    public final void setDragEnabled(bool enable) {
        qtd_QAbstractItemView_setDragEnabled_bool(qtdNativeId, enable);
    }

    public final void setDropIndicatorShown(bool enable) {
        qtd_QAbstractItemView_setDropIndicatorShown_bool(qtdNativeId, enable);
    }

    public final void setEditTriggers(int triggers) {
        qtd_QAbstractItemView_setEditTriggers_EditTriggers(qtdNativeId, triggers);
    }

    public final void setHorizontalScrollMode(QAbstractItemView.ScrollMode mode) {
        qtd_QAbstractItemView_setHorizontalScrollMode_ScrollMode(qtdNativeId, mode);
    }

    public final void setIconSize(const(QSize) size) {
        qtd_QAbstractItemView_setIconSize_QSize(qtdNativeId, size);
    }

    public final void setIndexWidget(const(QModelIndex) index, QWidget widget) {
        qtd_QAbstractItemView_setIndexWidget_QModelIndex_QWidget(qtdNativeId, index, widget is null ? null : widget.qtdNativeId);
    }

    public final void setItemDelegate(QAbstractItemDelegate delegate_) {
        {
            __rcItemDelegate = cast(Object) delegate_;
        }
        qtd_QAbstractItemView_setItemDelegate_QAbstractItemDelegate(qtdNativeId, delegate_ is null ? null : delegate_.qtdNativeId);
    }

    public final void setItemDelegateForColumn(int column, QAbstractItemDelegate delegate_) {
        qtd_QAbstractItemView_setItemDelegateForColumn_int_QAbstractItemDelegate(qtdNativeId, column, delegate_ is null ? null : delegate_.qtdNativeId);
        if (delegate_ is null)
            __rcDelegatesForColumns.remove(column);
        else
            __rcDelegatesForColumns[column] = delegate_;


    }

    public final void setItemDelegateForRow(int row, QAbstractItemDelegate delegate_) {
        qtd_QAbstractItemView_setItemDelegateForRow_int_QAbstractItemDelegate(qtdNativeId, row, delegate_ is null ? null : delegate_.qtdNativeId);
        if (delegate_ is null)
            __rcDelegatesForRows.remove(row);
        else
            __rcDelegatesForRows[row] = delegate_;


    }

    public final void setSelectionBehavior(QAbstractItemView.SelectionBehavior behavior) {
        qtd_QAbstractItemView_setSelectionBehavior_SelectionBehavior(qtdNativeId, behavior);
    }

    public final void setSelectionMode(QAbstractItemView.SelectionMode mode) {
        qtd_QAbstractItemView_setSelectionMode_SelectionMode(qtdNativeId, mode);
    }

    protected final void setState(QAbstractItemView.State state) {
        qtd_QAbstractItemView_setState_State(qtdNativeId, state);
    }

    public final void setTabKeyNavigation(bool enable) {
        qtd_QAbstractItemView_setTabKeyNavigation_bool(qtdNativeId, enable);
    }

    public final void setTextElideMode(Qt.TextElideMode mode) {
        qtd_QAbstractItemView_setTextElideMode_TextElideMode(qtdNativeId, mode);
    }

    public final void setVerticalScrollMode(QAbstractItemView.ScrollMode mode) {
        qtd_QAbstractItemView_setVerticalScrollMode_ScrollMode(qtdNativeId, mode);
    }

    public final bool showDropIndicator() const {
        return qtd_QAbstractItemView_showDropIndicator_const(qtdNativeId);
    }

    public final QSize sizeHintForIndex(const(QModelIndex) index) const {
        QSize res;
        qtd_QAbstractItemView_sizeHintForIndex_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    protected final void startAutoScroll() {
        qtd_QAbstractItemView_startAutoScroll(qtdNativeId);
    }

    protected final QAbstractItemView.State state() const {
        return cast(QAbstractItemView.State) qtd_QAbstractItemView_state_const(qtdNativeId);
    }

    protected final void stopAutoScroll() {
        qtd_QAbstractItemView_stopAutoScroll(qtdNativeId);
    }

    public final bool tabKeyNavigation() const {
        return qtd_QAbstractItemView_tabKeyNavigation_const(qtdNativeId);
    }

    public final Qt.TextElideMode textElideMode() const {
        return cast(Qt.TextElideMode) qtd_QAbstractItemView_textElideMode_const(qtdNativeId);
    }

    public final void update(const(QModelIndex) index) {
        qtd_QAbstractItemView_update_QModelIndex(qtdNativeId, index);
    }

    public final QAbstractItemView.ScrollMode verticalScrollMode() const {
        return cast(QAbstractItemView.ScrollMode) qtd_QAbstractItemView_verticalScrollMode_const(qtdNativeId);
    }

    protected void closeEditor(QWidget editor, QAbstractItemDelegate.EndEditHint hint) {
        qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint(qtdNativeId, editor is null ? null : editor.qtdNativeId, hint);
    }

    protected void commitData(QWidget editor) {
        qtd_QAbstractItemView_commitData_QWidget(qtdNativeId, editor is null ? null : editor.qtdNativeId);
    }

    protected void currentChanged(const(QModelIndex) current, const(QModelIndex) previous) {
        qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex(qtdNativeId, current, previous);
    }

    protected void dataChanged(const(QModelIndex) topLeft, const(QModelIndex) bottomRight) {
        qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex(qtdNativeId, topLeft, bottomRight);
    }

    public void doItemsLayout() {
        qtd_QAbstractItemView_doItemsLayout(qtdNativeId);
    }

    protected void dragEnterEvent(QDragEnterEvent event) {
        qtd_QAbstractItemView_dragEnterEvent_QDragEnterEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void dragLeaveEvent(QDragLeaveEvent event) {
        qtd_QAbstractItemView_dragLeaveEvent_QDragLeaveEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void dragMoveEvent(QDragMoveEvent event) {
        qtd_QAbstractItemView_dragMoveEvent_QDragMoveEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void dropEvent(QDropEvent event) {
        qtd_QAbstractItemView_dropEvent_QDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected bool edit(const(QModelIndex) index, QAbstractItemView.EditTrigger trigger, QEvent event) {
        return qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent(qtdNativeId, index, trigger, event is null ? null : event.qtdNativeId);
    }

    protected void editorDestroyed(QObject editor) {
        qtd_QAbstractItemView_editorDestroyed_QObject(qtdNativeId, editor is null ? null : editor.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QAbstractItemView_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent event) {
        qtd_QAbstractItemView_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QAbstractItemView_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void focusOutEvent(QFocusEvent event) {
        qtd_QAbstractItemView_focusOutEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected abstract int horizontalOffset() const;

    protected void horizontalScrollbarAction(int action) {
        qtd_QAbstractItemView_horizontalScrollbarAction_int(qtdNativeId, action);
    }

    protected void horizontalScrollbarValueChanged(int value) {
        qtd_QAbstractItemView_horizontalScrollbarValueChanged_int(qtdNativeId, value);
    }

    public abstract QModelIndex indexAt(const(QPoint) point) const;

    protected void inputMethodEvent(QInputMethodEvent event) {
        qtd_QAbstractItemView_inputMethodEvent_QInputMethodEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery query) const {
        void* ret = qtd_QAbstractItemView_inputMethodQuery_InputMethodQuery_const(qtdNativeId, query);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected abstract bool isIndexHidden(const(QModelIndex) index) const;

    protected void keyPressEvent(QKeyEvent event) {
        qtd_QAbstractItemView_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void keyboardSearch(string search) {
        qtd_QAbstractItemView_keyboardSearch_string(qtdNativeId, search);
    }

    protected void mouseDoubleClickEvent(QMouseEvent event) {
        qtd_QAbstractItemView_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent event) {
        qtd_QAbstractItemView_mouseMoveEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent event) {
        qtd_QAbstractItemView_mousePressEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent event) {
        qtd_QAbstractItemView_mouseReleaseEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected abstract QModelIndex moveCursor(QAbstractItemView.CursorAction cursorAction, int modifiers);

    public void reset() {
        qtd_QAbstractItemView_reset(qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent event) {
        qtd_QAbstractItemView_resizeEvent_QResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void rowsAboutToBeRemoved(const(QModelIndex) parent_, int start, int end) {
        qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int(qtdNativeId, parent_, start, end);
    }

    protected void rowsInserted(const(QModelIndex) parent_, int start, int end) {
        qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int(qtdNativeId, parent_, start, end);
    }

    public abstract void scrollTo(const(QModelIndex) index, QAbstractItemView.ScrollHint hint = QAbstractItemView.ScrollHint.EnsureVisible);

    public void selectAll() {
        qtd_QAbstractItemView_selectAll(qtdNativeId);
    }

    protected QList!(QModelIndex) selectedIndexes() const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QAbstractItemView_selectedIndexes_const(qtdNativeId, &res);
        return res;
    }

    protected void selectionChanged(const(QItemSelection) selected, const(QItemSelection) deselected) {
        qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection(qtdNativeId, selected is null ? null : (cast(QItemSelection)selected).qtdNativeId, deselected is null ? null : (cast(QItemSelection)deselected).qtdNativeId);
    }

    protected int selectionCommand(const(QModelIndex) index, QEvent event = null) const {
        return qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const(qtdNativeId, index, event is null ? null : (cast(QEvent)event).qtdNativeId);
    }

    public void setModel(QAbstractItemModel model) {
        {
            __rcItemModel = cast(Object) model;
        }
        qtd_QAbstractItemView_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
        // setModel() creates a new selection model for the object
        __rcItemSelectionModel = null;


    }

    public void setRootIndex(const(QModelIndex) index) {
        qtd_QAbstractItemView_setRootIndex_QModelIndex(qtdNativeId, index);
    }

    protected abstract void setSelection(const(QRect) rect, int command);

    public void setSelectionModel(QItemSelectionModel selectionModel) {
        /*if (selectionModel is null)
            throw new NullPointerException("Argument 'selectionModel': null not expected."); */
        {
            __rcItemSelectionModel = cast(Object) selectionModel;
        }
        qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel(qtdNativeId, selectionModel is null ? null : selectionModel.qtdNativeId);
    }

    public int sizeHintForColumn(int column) const {
        return qtd_QAbstractItemView_sizeHintForColumn_int_const(qtdNativeId, column);
    }

    public int sizeHintForRow(int row) const {
        return qtd_QAbstractItemView_sizeHintForRow_int_const(qtdNativeId, row);
    }

    protected void startDrag(int supportedActions) {
        qtd_QAbstractItemView_startDrag_DropActions(qtdNativeId, supportedActions);
    }

    protected void timerEvent(QTimerEvent event) {
        qtd_QAbstractItemView_timerEvent_QTimerEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void updateEditorData() {
        qtd_QAbstractItemView_updateEditorData(qtdNativeId);
    }

    protected void updateEditorGeometries() {
        qtd_QAbstractItemView_updateEditorGeometries(qtdNativeId);
    }

    protected void updateGeometries() {
        qtd_QAbstractItemView_updateGeometries(qtdNativeId);
    }

    protected abstract int verticalOffset() const;

    protected void verticalScrollbarAction(int action) {
        qtd_QAbstractItemView_verticalScrollbarAction_int(qtdNativeId, action);
    }

    protected void verticalScrollbarValueChanged(int value) {
        qtd_QAbstractItemView_verticalScrollbarValueChanged_int(qtdNativeId, value);
    }

    protected QStyleOptionViewItem viewOptions() const {
        void* ret = qtd_QAbstractItemView_viewOptions_const(qtdNativeId);
        QStyleOptionViewItem __d_return_value = new QStyleOptionViewItem(ret);
        return __d_return_value;
    }

    protected bool viewportEvent(QEvent event) {
        return qtd_QAbstractItemView_viewportEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public abstract QRect visualRect(const(QModelIndex) index) const;

    protected abstract QRegion visualRegionForSelection(const(QItemSelection) selection) const;
// Field accessors
    private static const string[] __slotSignatures = [
            "clearSelection()", 
            "edit(QModelIndex)", 
            "scrollToBottom()", 
            "scrollToTop()", 
            "setCurrentIndex(QModelIndex)", 
            "update(QModelIndex)", 
            "closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)", 
            "commitData(QWidget*)", 
            "currentChanged(QModelIndex,QModelIndex)", 
            "dataChanged(QModelIndex,QModelIndex)", 
            "doItemsLayout()", 
            "editorDestroyed(QObject*)", 
            "horizontalScrollbarAction(int)", 
            "horizontalScrollbarValueChanged(int)", 
            "reset()", 
            "rowsAboutToBeRemoved(QModelIndex,int,int)", 
            "rowsInserted(QModelIndex,int,int)", 
            "selectAll()", 
            "selectionChanged(QItemSelection,QItemSelection)", 
            "setRootIndex(QModelIndex)", 
            "updateEditorData()", 
            "updateEditorGeometries()", 
            "updateGeometries()", 
            "verticalScrollbarAction(int)", 
            "verticalScrollbarValueChanged(int)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractItemView_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractItemView);
    }

    static QAbstractItemView __getObject(void* nativeId) {
        return static_cast!(QAbstractItemView)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractItemView_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractItemView_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractItemView_ConcreteWrapper(nativeId, initFlags);
        QAbstractItemView.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("activated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("clicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("doubleClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("entered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("pressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!()("viewportEntered"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clearSelection"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex))("edit"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("scrollToBottom"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("scrollToTop"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex))("setCurrentIndex"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex))("update"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(QWidget,QAbstractItemDelegate.EndEditHint)("closeEditor"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!(QWidget)("commitData"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[8]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex),const(QModelIndex))("currentChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[9]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex),const(QModelIndex))("dataChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[10]);
        mo.addMethod(new QMetaSlot(signature!()("doItemsLayout"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[11]);
        mo.addMethod(new QMetaSlot(signature!(QObject)("editorDestroyed"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[12]);
        mo.addMethod(new QMetaSlot(signature!(int)("horizontalScrollbarAction"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[13]);
        mo.addMethod(new QMetaSlot(signature!(int)("horizontalScrollbarValueChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[14]);
        mo.addMethod(new QMetaSlot(signature!()("reset"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[15]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex),int,int)("rowsAboutToBeRemoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[16]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex),int,int)("rowsInserted"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[17]);
        mo.addMethod(new QMetaSlot(signature!()("selectAll"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[18]);
        mo.addMethod(new QMetaSlot(signature!(const(QItemSelection),const(QItemSelection))("selectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[19]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex))("setRootIndex"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[20]);
        mo.addMethod(new QMetaSlot(signature!()("updateEditorData"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[21]);
        mo.addMethod(new QMetaSlot(signature!()("updateEditorGeometries"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[22]);
        mo.addMethod(new QMetaSlot(signature!()("updateGeometries"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[23]);
        mo.addMethod(new QMetaSlot(signature!(int)("verticalScrollbarAction"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[24]);
        mo.addMethod(new QMetaSlot(signature!(int)("verticalScrollbarValueChanged"), index));

    }

    public alias void __isQtType_QAbstractItemView;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    private QAbstractItemDelegate[int] __rcDelegatesForColumns;
    private QAbstractItemDelegate[int] __rcDelegatesForRows;

}

    public class QAbstractItemView_ConcreteWrapper : QAbstractItemView {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         protected int horizontalOffset() const {
            return qtd_QAbstractItemView_horizontalOffset_const(qtdNativeId);
        }

        override         public QModelIndex indexAt(const(QPoint) point) const {
            QModelIndex res;
            qtd_QAbstractItemView_indexAt_QPoint_const(qtdNativeId, &res, point);
            return res;
        }

        override         protected bool isIndexHidden(const(QModelIndex) index) const {
            return qtd_QAbstractItemView_isIndexHidden_QModelIndex_const(qtdNativeId, index);
        }

        override         protected QModelIndex moveCursor(QAbstractItemView.CursorAction cursorAction, int modifiers) {
            QModelIndex res;
            qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers(qtdNativeId, &res, cursorAction, modifiers);
            return res;
        }

        override         public void scrollTo(const(QModelIndex) index, QAbstractItemView.ScrollHint hint = QAbstractItemView.ScrollHint.EnsureVisible) {
            qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint(qtdNativeId, index, hint);
        }

        override         protected void setSelection(const(QRect) rect, int command) {
            qtd_QAbstractItemView_setSelection_QRect_SelectionFlags(qtdNativeId, rect, command);
        }

        override         protected int verticalOffset() const {
            return qtd_QAbstractItemView_verticalOffset_const(qtdNativeId);
        }

        override         public QRect visualRect(const(QModelIndex) index) const {
            QRect res;
            qtd_QAbstractItemView_visualRect_QModelIndex_const(qtdNativeId, &res, index);
            return res;
        }

        override         protected QRegion visualRegionForSelection(const(QItemSelection) selection) const {
            void* ret = qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const(qtdNativeId, selection is null ? null : (cast(QItemSelection)selection).qtdNativeId);
            QRegion __d_return_value = new QRegion(ret);
            return __d_return_value;
        }
    }


// C wrappers for signal emitters
private extern(C) void  qtd_QAbstractItemView_activated_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_clicked_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_doubleClicked_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_entered_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_pressed_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_viewportEntered(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QAbstractItemView_QAbstractItemView_QWidget(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QAbstractItemView_alternatingRowColors_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemView_autoScrollMargin_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_clearSelection(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_closePersistentEditor_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_currentIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) int  qtd_QAbstractItemView_defaultDropAction_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_dirtyRegionOffset_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QAbstractItemView_doAutoScroll(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemView_dragDropMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractItemView_dragDropOverwriteMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractItemView_dragEnabled_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemView_dropIndicatorPosition_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_edit_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) int  qtd_QAbstractItemView_editTriggers_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_executeDelayedItemsLayout(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractItemView_hasAutoScroll_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemView_horizontalScrollMode_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_iconSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QAbstractItemView_indexWidget_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QAbstractItemView_itemDelegate_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractItemView_itemDelegate_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QAbstractItemView_itemDelegateForColumn_int_const(void* __this_nativeId,
 int column0);
private extern(C) void*  qtd_QAbstractItemView_itemDelegateForRow_int_const(void* __this_nativeId,
 int row0);
private extern(C) void*  qtd_QAbstractItemView_model_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_openPersistentEditor_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_rootIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) void  qtd_QAbstractItemView_scheduleDelayedItemsLayout(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_scrollDirtyRegion_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QAbstractItemView_scrollToBottom(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_scrollToTop(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemView_selectionBehavior_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemView_selectionMode_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractItemView_selectionModel_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_setAlternatingRowColors_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QAbstractItemView_setAutoScroll_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QAbstractItemView_setAutoScrollMargin_int(void* __this_nativeId,
 int margin0);
private extern(C) void  qtd_QAbstractItemView_setCurrentIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_setDefaultDropAction_DropAction(void* __this_nativeId,
 int dropAction0);
private extern(C) void  qtd_QAbstractItemView_setDirtyRegion_QRegion(void* __this_nativeId,
 void* region0);
private extern(C) void  qtd_QAbstractItemView_setDragDropMode_DragDropMode(void* __this_nativeId,
 int behavior0);
private extern(C) void  qtd_QAbstractItemView_setDragDropOverwriteMode_bool(void* __this_nativeId,
 bool overwrite0);
private extern(C) void  qtd_QAbstractItemView_setDragEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QAbstractItemView_setDropIndicatorShown_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QAbstractItemView_setEditTriggers_EditTriggers(void* __this_nativeId,
 int triggers0);
private extern(C) void  qtd_QAbstractItemView_setHorizontalScrollMode_ScrollMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QAbstractItemView_setIconSize_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QAbstractItemView_setIndexWidget_QModelIndex_QWidget(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* widget1);
private extern(C) void  qtd_QAbstractItemView_setItemDelegate_QAbstractItemDelegate(void* __this_nativeId,
 void* delegate0);
private extern(C) void  qtd_QAbstractItemView_setItemDelegateForColumn_int_QAbstractItemDelegate(void* __this_nativeId,
 int column0,
 void* delegate1);
private extern(C) void  qtd_QAbstractItemView_setItemDelegateForRow_int_QAbstractItemDelegate(void* __this_nativeId,
 int row0,
 void* delegate1);
private extern(C) void  qtd_QAbstractItemView_setSelectionBehavior_SelectionBehavior(void* __this_nativeId,
 int behavior0);
private extern(C) void  qtd_QAbstractItemView_setSelectionMode_SelectionMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QAbstractItemView_setState_State(void* __this_nativeId,
 int state0);
private extern(C) void  qtd_QAbstractItemView_setTabKeyNavigation_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QAbstractItemView_setTextElideMode_TextElideMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QAbstractItemView_setVerticalScrollMode_ScrollMode(void* __this_nativeId,
 int mode0);
private extern(C) bool  qtd_QAbstractItemView_showDropIndicator_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_sizeHintForIndex_QModelIndex_const(void* __this_nativeId,
 QSize * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_startAutoScroll(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemView_state_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_stopAutoScroll(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractItemView_tabKeyNavigation_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemView_textElideMode_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_update_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) int  qtd_QAbstractItemView_verticalScrollMode_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint(void* __this_nativeId,
 void* editor0,
 int hint1);
private extern(C) void  qtd_QAbstractItemView_commitData_QWidget(void* __this_nativeId,
 void* editor0);
private extern(C) void  qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) current0,
 const(QModelIndexAccessor) previous1);
private extern(C) void  qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) topLeft0,
 const(QModelIndexAccessor) bottomRight1);
private extern(C) void  qtd_QAbstractItemView_doItemsLayout(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_dragEnterEvent_QDragEnterEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_dragLeaveEvent_QDragLeaveEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_dragMoveEvent_QDragMoveEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_dropEvent_QDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int trigger1,
 void* event2);
private extern(C) void  qtd_QAbstractItemView_editorDestroyed_QObject(void* __this_nativeId,
 void* editor0);
private extern(C) bool  qtd_QAbstractItemView_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QAbstractItemView_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QAbstractItemView_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) int  qtd_QAbstractItemView_horizontalOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_horizontalScrollbarAction_int(void* __this_nativeId,
 int action0);
private extern(C) void  qtd_QAbstractItemView_horizontalScrollbarValueChanged_int(void* __this_nativeId,
 int value0);
private extern(C) void  qtd_QAbstractItemView_indexAt_QPoint_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint point0);
private extern(C) void  qtd_QAbstractItemView_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QAbstractItemView_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int query0);
private extern(C) bool  qtd_QAbstractItemView_isIndexHidden_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_keyboardSearch_string(void* __this_nativeId,
 string search0);
private extern(C) void  qtd_QAbstractItemView_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int cursorAction0,
 int modifiers1);
private extern(C) void  qtd_QAbstractItemView_reset(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int start1,
 int end2);
private extern(C) void  qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int start1,
 int end2);
private extern(C) void  qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int hint1);
private extern(C) void  qtd_QAbstractItemView_selectAll(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_selectedIndexes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection(void* __this_nativeId,
 void* selected0,
 void* deselected1);
private extern(C) int  qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* event1);
private extern(C) void  qtd_QAbstractItemView_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0);
private extern(C) void  qtd_QAbstractItemView_setRootIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QAbstractItemView_setSelection_QRect_SelectionFlags(void* __this_nativeId,
 QRect rect0,
 int command1);
private extern(C) void  qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel(void* __this_nativeId,
 void* selectionModel0);
private extern(C) int  qtd_QAbstractItemView_sizeHintForColumn_int_const(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QAbstractItemView_sizeHintForRow_int_const(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QAbstractItemView_startDrag_DropActions(void* __this_nativeId,
 int supportedActions0);
private extern(C) void  qtd_QAbstractItemView_timerEvent_QTimerEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_updateEditorData(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_updateEditorGeometries(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_updateGeometries(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemView_verticalOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemView_verticalScrollbarAction_int(void* __this_nativeId,
 int action0);
private extern(C) void  qtd_QAbstractItemView_verticalScrollbarValueChanged_int(void* __this_nativeId,
 int value0);
private extern(C) void*  qtd_QAbstractItemView_viewOptions_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractItemView_viewportEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractItemView_visualRect_QModelIndex_const(void* __this_nativeId,
 QRect * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const(void* __this_nativeId,
 void* selection0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* editor0, int hint1) qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch; }
extern(C) void qtd_export_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch(void *dId, void* editor0, int hint1){
    auto d_object = cast(QAbstractItemView) dId;
    scope editor0_d_ref = new QWidget(editor0, QtdObjectInitFlags.onStack);

    auto hint1_enum = cast(QAbstractItemDelegate.EndEditHint) hint1;
    d_object.closeEditor(editor0_d_ref, hint1_enum);
}

extern(C){ extern void function(void *dId, void* editor0) qtd_QAbstractItemView_commitData_QWidget_dispatch; }
extern(C) void qtd_export_QAbstractItemView_commitData_QWidget_dispatch(void *dId, void* editor0){
    auto d_object = cast(QAbstractItemView) dId;
    scope editor0_d_ref = new QWidget(editor0, QtdObjectInitFlags.onStack);

    d_object.commitData(editor0_d_ref);
}

extern(C){ extern void function(void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* previous1) qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch; }
extern(C) void qtd_export_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch(void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* previous1){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.currentChanged(*current0, *previous1);
}

extern(C){ extern void function(void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1) qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch; }
extern(C) void qtd_export_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch(void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.dataChanged(*topLeft0, *bottomRight1);
}

extern(C){ extern void function(void *dId) qtd_QAbstractItemView_doItemsLayout_dispatch; }
extern(C) void qtd_export_QAbstractItemView_doItemsLayout_dispatch(void *dId){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.doItemsLayout();
}

extern(C){ extern bool function(void *dId, QModelIndexAccessor* index0, int trigger1, void* event2) qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch; }
extern(C) bool qtd_export_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch(void *dId, QModelIndexAccessor* index0, int trigger1, void* event2){
    auto d_object = cast(QAbstractItemView) dId;
    auto trigger1_enum = cast(QAbstractItemView.EditTrigger) trigger1;
    scope event2_d_ref = new QEvent(event2, QtdObjectInitFlags.onStack);
    auto return_value = d_object.edit(*index0, trigger1_enum, event2_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, void* editor0) qtd_QAbstractItemView_editorDestroyed_QObject_dispatch; }
extern(C) void qtd_export_QAbstractItemView_editorDestroyed_QObject_dispatch(void *dId, void* editor0){
    auto d_object = cast(QAbstractItemView) dId;
    scope editor0_d_ref = new QObject(editor0, QtdObjectInitFlags.onStack);

    d_object.editorDestroyed(editor0_d_ref);
}

extern(C){ extern int function(void *dId) qtd_QAbstractItemView_horizontalOffset_const_dispatch; }
extern(C) int qtd_export_QAbstractItemView_horizontalOffset_const_dispatch(void *dId){
    auto d_object = cast(QAbstractItemView) dId;
    auto return_value = d_object.horizontalOffset();
    return return_value;
}

extern(C){ extern void function(void *dId, int action0) qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch; }
extern(C) void qtd_export_QAbstractItemView_horizontalScrollbarAction_int_dispatch(void *dId, int action0){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.horizontalScrollbarAction(action0);
}

extern(C){ extern void function(void *dId, int value0) qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch; }
extern(C) void qtd_export_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch(void *dId, int value0){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.horizontalScrollbarValueChanged(value0);
}

extern(C){ extern void function(void *dId, QModelIndexAccessor *__d_return_value, QPoint* point0) qtd_QAbstractItemView_indexAt_QPoint_const_dispatch; }
extern(C) void qtd_export_QAbstractItemView_indexAt_QPoint_const_dispatch(void *dId, QModelIndexAccessor *__d_return_value, QPoint* point0){
    auto d_object = cast(QAbstractItemView) dId;
    *__d_return_value = d_object.indexAt(*point0);
}

extern(C){ extern bool function(void *dId, QModelIndexAccessor* index0) qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch; }
extern(C) bool qtd_export_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor* index0){
    auto d_object = cast(QAbstractItemView) dId;
    auto return_value = d_object.isIndexHidden(*index0);
    return return_value;
}

extern(C){ extern void function(void *dId, wchar* search0, int search0_size) qtd_QAbstractItemView_keyboardSearch_string_dispatch; }
extern(C) void qtd_export_QAbstractItemView_keyboardSearch_string_dispatch(void *dId, wchar* search0, int search0_size){
    auto d_object = cast(QAbstractItemView) dId;
    string search0_d_ref = toUTF8(search0[0..search0_size]);
    d_object.keyboardSearch(search0_d_ref);
}

extern(C){ extern void function(void *dId, QModelIndexAccessor *__d_return_value, int cursorAction0, int modifiers1) qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch; }
extern(C) void qtd_export_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch(void *dId, QModelIndexAccessor *__d_return_value, int cursorAction0, int modifiers1){
    auto d_object = cast(QAbstractItemView) dId;
    auto cursorAction0_enum = cast(QAbstractItemView.CursorAction) cursorAction0;
    *__d_return_value = d_object.moveCursor(cursorAction0_enum, modifiers1);
}

extern(C){ extern void function(void *dId) qtd_QAbstractItemView_reset_dispatch; }
extern(C) void qtd_export_QAbstractItemView_reset_dispatch(void *dId){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.reset();
}

extern(C){ extern void function(void *dId, QModelIndexAccessor* parent0, int start1, int end2) qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch; }
extern(C) void qtd_export_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch(void *dId, QModelIndexAccessor* parent0, int start1, int end2){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.rowsAboutToBeRemoved(*parent0, start1, end2);
}

extern(C){ extern void function(void *dId, QModelIndexAccessor* parent0, int start1, int end2) qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch; }
extern(C) void qtd_export_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch(void *dId, QModelIndexAccessor* parent0, int start1, int end2){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.rowsInserted(*parent0, start1, end2);
}

extern(C){ extern void function(void *dId, QModelIndexAccessor* index0, int hint1) qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch; }
extern(C) void qtd_export_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch(void *dId, QModelIndexAccessor* index0, int hint1){
    auto d_object = cast(QAbstractItemView) dId;
    auto hint1_enum = cast(QAbstractItemView.ScrollHint) hint1;
    d_object.scrollTo(*index0, hint1_enum);
}

extern(C){ extern void function(void *dId) qtd_QAbstractItemView_selectAll_dispatch; }
extern(C) void qtd_export_QAbstractItemView_selectAll_dispatch(void *dId){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.selectAll();
}

extern(C){ extern void function(void *dId, QList!(QModelIndex)* __d_arr) qtd_QAbstractItemView_selectedIndexes_const_dispatch; }
extern(C) void qtd_export_QAbstractItemView_selectedIndexes_const_dispatch(void *dId, QList!(QModelIndex)* __d_arr){
    auto d_object = cast(QAbstractItemView) dId;
    auto return_value = d_object.selectedIndexes();
    *__d_arr = return_value;
}

extern(C){ extern void function(void *dId, void* selected0, void* deselected1) qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch; }
extern(C) void qtd_export_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch(void *dId, void* selected0, void* deselected1){
    auto d_object = cast(QAbstractItemView) dId;
    scope selected0_d_ref = new QItemSelection(selected0, QtdObjectInitFlags.onStack);
    scope deselected1_d_ref = new QItemSelection(deselected1, QtdObjectInitFlags.onStack);
    d_object.selectionChanged(selected0_d_ref, deselected1_d_ref);
}

extern(C){ extern int function(void *dId, QModelIndexAccessor* index0, void* event1) qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch; }
extern(C) int qtd_export_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch(void *dId, QModelIndexAccessor* index0, void* event1){
    auto d_object = cast(QAbstractItemView) dId;
    scope event1_d_ref = new QEvent(event1, QtdObjectInitFlags.onStack);
    auto return_value = d_object.selectionCommand(*index0, event1_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, void* model0) qtd_QAbstractItemView_setModel_QAbstractItemModel_dispatch; }
extern(C) void qtd_export_QAbstractItemView_setModel_QAbstractItemModel_dispatch(void *dId, void* model0){
    auto d_object = cast(QAbstractItemView) dId;
    scope model0_d_ref = new QAbstractItemModel_ConcreteWrapper(model0, QtdObjectInitFlags.onStack);

    d_object.setModel(model0_d_ref);
}

extern(C){ extern void function(void *dId, QModelIndexAccessor* index0) qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch; }
extern(C) void qtd_export_QAbstractItemView_setRootIndex_QModelIndex_dispatch(void *dId, QModelIndexAccessor* index0){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.setRootIndex(*index0);
}

extern(C){ extern void function(void *dId, QRect* rect0, int command1) qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch; }
extern(C) void qtd_export_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch(void *dId, QRect* rect0, int command1){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.setSelection(*rect0, command1);
}

extern(C){ extern void function(void *dId, void* selectionModel0) qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch; }
extern(C) void qtd_export_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch(void *dId, void* selectionModel0){
    auto d_object = cast(QAbstractItemView) dId;
    scope selectionModel0_d_ref = new QItemSelectionModel(selectionModel0, QtdObjectInitFlags.onStack);

    d_object.setSelectionModel(selectionModel0_d_ref);
}

extern(C){ extern int function(void *dId, int column0) qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch; }
extern(C) int qtd_export_QAbstractItemView_sizeHintForColumn_int_const_dispatch(void *dId, int column0){
    auto d_object = cast(QAbstractItemView) dId;
    auto return_value = d_object.sizeHintForColumn(column0);
    return return_value;
}

extern(C){ extern int function(void *dId, int row0) qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch; }
extern(C) int qtd_export_QAbstractItemView_sizeHintForRow_int_const_dispatch(void *dId, int row0){
    auto d_object = cast(QAbstractItemView) dId;
    auto return_value = d_object.sizeHintForRow(row0);
    return return_value;
}

extern(C){ extern void function(void *dId, int supportedActions0) qtd_QAbstractItemView_startDrag_DropActions_dispatch; }
extern(C) void qtd_export_QAbstractItemView_startDrag_DropActions_dispatch(void *dId, int supportedActions0){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.startDrag(supportedActions0);
}

extern(C){ extern void function(void *dId) qtd_QAbstractItemView_updateEditorData_dispatch; }
extern(C) void qtd_export_QAbstractItemView_updateEditorData_dispatch(void *dId){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.updateEditorData();
}

extern(C){ extern void function(void *dId) qtd_QAbstractItemView_updateEditorGeometries_dispatch; }
extern(C) void qtd_export_QAbstractItemView_updateEditorGeometries_dispatch(void *dId){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.updateEditorGeometries();
}

extern(C){ extern void function(void *dId) qtd_QAbstractItemView_updateGeometries_dispatch; }
extern(C) void qtd_export_QAbstractItemView_updateGeometries_dispatch(void *dId){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.updateGeometries();
}

extern(C){ extern int function(void *dId) qtd_QAbstractItemView_verticalOffset_const_dispatch; }
extern(C) int qtd_export_QAbstractItemView_verticalOffset_const_dispatch(void *dId){
    auto d_object = cast(QAbstractItemView) dId;
    auto return_value = d_object.verticalOffset();
    return return_value;
}

extern(C){ extern void function(void *dId, int action0) qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch; }
extern(C) void qtd_export_QAbstractItemView_verticalScrollbarAction_int_dispatch(void *dId, int action0){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.verticalScrollbarAction(action0);
}

extern(C){ extern void function(void *dId, int value0) qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch; }
extern(C) void qtd_export_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch(void *dId, int value0){
    auto d_object = cast(QAbstractItemView) dId;
    d_object.verticalScrollbarValueChanged(value0);
}

extern(C){ extern void* function(void *dId) qtd_QAbstractItemView_viewOptions_const_dispatch; }
extern(C) void* qtd_export_QAbstractItemView_viewOptions_const_dispatch(void *dId){
    auto d_object = cast(QAbstractItemView) dId;
    QStyleOptionViewItem ret_value = d_object.viewOptions();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, QRect *__d_return_value, QModelIndexAccessor* index0) qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractItemView_visualRect_QModelIndex_const_dispatch(void *dId, QRect *__d_return_value, QModelIndexAccessor* index0){
    auto d_object = cast(QAbstractItemView) dId;
    *__d_return_value = d_object.visualRect(*index0);
}

extern(C){ extern void* function(void *dId, void* selection0) qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch; }
extern(C) void* qtd_export_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch(void *dId, void* selection0){
    auto d_object = cast(QAbstractItemView) dId;
    scope selection0_d_ref = new QItemSelection(selection0, QtdObjectInitFlags.onStack);
    QRegion ret_value = d_object.visualRegionForSelection(selection0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QAbstractItemView_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractItemView() {
    void*[38] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch;
    virt_arr[1] = &qtd_export_QAbstractItemView_commitData_QWidget_dispatch;
    virt_arr[2] = &qtd_export_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch;
    virt_arr[3] = &qtd_export_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch;
    virt_arr[4] = &qtd_export_QAbstractItemView_doItemsLayout_dispatch;
    virt_arr[5] = &qtd_export_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch;
    virt_arr[6] = &qtd_export_QAbstractItemView_editorDestroyed_QObject_dispatch;
    virt_arr[7] = &qtd_export_QAbstractItemView_horizontalOffset_const_dispatch;
    virt_arr[8] = &qtd_export_QAbstractItemView_horizontalScrollbarAction_int_dispatch;
    virt_arr[9] = &qtd_export_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch;
    virt_arr[10] = &qtd_export_QAbstractItemView_indexAt_QPoint_const_dispatch;
    virt_arr[11] = &qtd_export_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch;
    virt_arr[12] = &qtd_export_QAbstractItemView_keyboardSearch_string_dispatch;
    virt_arr[13] = &qtd_export_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch;
    virt_arr[14] = &qtd_export_QAbstractItemView_reset_dispatch;
    virt_arr[15] = &qtd_export_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch;
    virt_arr[16] = &qtd_export_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch;
    virt_arr[17] = &qtd_export_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch;
    virt_arr[18] = &qtd_export_QAbstractItemView_selectAll_dispatch;
    virt_arr[19] = &qtd_export_QAbstractItemView_selectedIndexes_const_dispatch;
    virt_arr[20] = &qtd_export_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch;
    virt_arr[21] = &qtd_export_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch;
    virt_arr[22] = &qtd_export_QAbstractItemView_setModel_QAbstractItemModel_dispatch;
    virt_arr[23] = &qtd_export_QAbstractItemView_setRootIndex_QModelIndex_dispatch;
    virt_arr[24] = &qtd_export_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch;
    virt_arr[25] = &qtd_export_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch;
    virt_arr[26] = &qtd_export_QAbstractItemView_sizeHintForColumn_int_const_dispatch;
    virt_arr[27] = &qtd_export_QAbstractItemView_sizeHintForRow_int_const_dispatch;
    virt_arr[28] = &qtd_export_QAbstractItemView_startDrag_DropActions_dispatch;
    virt_arr[29] = &qtd_export_QAbstractItemView_updateEditorData_dispatch;
    virt_arr[30] = &qtd_export_QAbstractItemView_updateEditorGeometries_dispatch;
    virt_arr[31] = &qtd_export_QAbstractItemView_updateGeometries_dispatch;
    virt_arr[32] = &qtd_export_QAbstractItemView_verticalOffset_const_dispatch;
    virt_arr[33] = &qtd_export_QAbstractItemView_verticalScrollbarAction_int_dispatch;
    virt_arr[34] = &qtd_export_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch;
    virt_arr[35] = &qtd_export_QAbstractItemView_viewOptions_const_dispatch;
    virt_arr[36] = &qtd_export_QAbstractItemView_visualRect_QModelIndex_const_dispatch;
    virt_arr[37] = &qtd_export_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch;
    qtd_QAbstractItemView_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractItemView_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemView) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QAbstractItemView_activated_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QAbstractItemView_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.clicked_emit(index0);
}*/
/*private extern(C) void qtd_QAbstractItemView_doubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.doubleClicked_emit(index0);
}*/
/*private extern(C) void qtd_QAbstractItemView_entered_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.entered_emit(index0);
}*/
/*private extern(C) void qtd_QAbstractItemView_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.pressed_emit(index0);
}*/
/*private extern(C) void qtd_QAbstractItemView_viewportEntered_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemView) dId;
        //d_object.viewportEntered_emit();
}*/

extern(C) QMetaObjectNative* qtd_QAbstractItemView_staticMetaObject();

extern(C) void qtd_QAbstractItemView_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractItemView_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
