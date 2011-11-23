module qt.gui.QListView;

public import qt.gui.QListView_aux;
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
public import qt.gui.QAbstractItemView;
public import qt.gui.QPaintDevice;
public import qt.gui.QDropEvent;
public import qt.core.QAbstractItemModel;
public import qt.gui.QItemSelectionModel;
public import qt.gui.QHideEvent;
public import qt.core.QPoint;
public import qt.core.QTimerEvent;
public import qt.core.QModelIndex;
public import qt.core.QChildEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QAbstractItemView;
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


public class QListView : QAbstractItemView
{
    public enum ResizeMode {
        Fixed = 0,
        Adjust = 1
    }

    alias ResizeMode.Fixed Fixed;
    alias ResizeMode.Adjust Adjust;

    public enum LayoutMode {
        SinglePass = 0,
        Batched = 1
    }

    alias LayoutMode.SinglePass SinglePass;
    alias LayoutMode.Batched Batched;

    public enum ViewMode {
        ListMode = 0,
        IconMode = 1
    }

    alias ViewMode.ListMode ListMode;
    alias ViewMode.IconMode IconMode;

    public enum Flow {
        LeftToRight = 0,
        TopToBottom = 1
    }

    alias Flow.LeftToRight LeftToRight;
    alias Flow.TopToBottom TopToBottom;

    public enum Movement {
        Static = 0,
        Free = 1,
        Snap = 2
    }

    alias Movement.Static Static;
    alias Movement.Free Free;
    alias Movement.Snap Snap;


    private static const string[] __signalSignatures = [
            "indexesMoved(QList<QModelIndex>)"    ];

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

    protected final void indexesMoved(QList!(QModelIndex) indexes) {
        qtd_QListView_indexesMoved_QList(qtdNativeId, &indexes);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QListView_QListView_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int batchSize() const {
        return qtd_QListView_batchSize_const(qtdNativeId);
    }

    public final void clearPropertyFlags() {
        qtd_QListView_clearPropertyFlags(qtdNativeId);
    }

    protected final QSize contentsSize() const {
        QSize res;
        qtd_QListView_contentsSize_const(qtdNativeId, &res);
        return res;
    }

    public final QListView.Flow flow() const {
        return cast(QListView.Flow) qtd_QListView_flow_const(qtdNativeId);
    }

    public final QSize gridSize() const {
        QSize res;
        qtd_QListView_gridSize_const(qtdNativeId, &res);
        return res;
    }

    protected final void internalDrag(int supportedActions) {
        qtd_QListView_internalDrag_DropActions(qtdNativeId, supportedActions);
    }

    protected final void internalDrop(QDropEvent e) {
        qtd_QListView_internalDrop_QDropEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public final bool isRowHidden(int row) const {
        return qtd_QListView_isRowHidden_int_const(qtdNativeId, row);
    }

    public final bool isSelectionRectVisible() const {
        return qtd_QListView_isSelectionRectVisible_const(qtdNativeId);
    }

    public final bool isWrapping() const {
        return qtd_QListView_isWrapping_const(qtdNativeId);
    }

    public final QListView.LayoutMode layoutMode() const {
        return cast(QListView.LayoutMode) qtd_QListView_layoutMode_const(qtdNativeId);
    }

    public final int modelColumn() const {
        return qtd_QListView_modelColumn_const(qtdNativeId);
    }

    public final QListView.Movement movement() const {
        return cast(QListView.Movement) qtd_QListView_movement_const(qtdNativeId);
    }

    protected final QRect rectForIndex(const(QModelIndex) index) const {
        QRect res;
        qtd_QListView_rectForIndex_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    protected final void resizeContents(int width, int height) {
        qtd_QListView_resizeContents_int_int(qtdNativeId, width, height);
    }

    public final QListView.ResizeMode resizeMode() const {
        return cast(QListView.ResizeMode) qtd_QListView_resizeMode_const(qtdNativeId);
    }

    public final void setBatchSize(int batchSize) {
        qtd_QListView_setBatchSize_int(qtdNativeId, batchSize);
    }

    public final void setFlow(QListView.Flow flow) {
        qtd_QListView_setFlow_Flow(qtdNativeId, flow);
    }

    public final void setGridSize(const(QSize) size) {
        qtd_QListView_setGridSize_QSize(qtdNativeId, size);
    }

    public final void setLayoutMode(QListView.LayoutMode mode) {
        qtd_QListView_setLayoutMode_LayoutMode(qtdNativeId, mode);
    }

    public final void setModelColumn(int column) {
        qtd_QListView_setModelColumn_int(qtdNativeId, column);
    }

    public final void setMovement(QListView.Movement movement) {
        qtd_QListView_setMovement_Movement(qtdNativeId, movement);
    }

    protected final void setPositionForIndex(const(QPoint) position, const(QModelIndex) index) {
        qtd_QListView_setPositionForIndex_QPoint_QModelIndex(qtdNativeId, position, index);
    }

    public final void setResizeMode(QListView.ResizeMode mode) {
        qtd_QListView_setResizeMode_ResizeMode(qtdNativeId, mode);
    }

    public final void setRowHidden(int row, bool hide) {
        qtd_QListView_setRowHidden_int_bool(qtdNativeId, row, hide);
    }

    public final void setSelectionRectVisible(bool show) {
        qtd_QListView_setSelectionRectVisible_bool(qtdNativeId, show);
    }

    public final void setSpacing(int space) {
        qtd_QListView_setSpacing_int(qtdNativeId, space);
    }

    public final void setUniformItemSizes(bool enable) {
        qtd_QListView_setUniformItemSizes_bool(qtdNativeId, enable);
    }

    public final void setViewMode(QListView.ViewMode mode) {
        qtd_QListView_setViewMode_ViewMode(qtdNativeId, mode);
    }

    public final void setWordWrap(bool on) {
        qtd_QListView_setWordWrap_bool(qtdNativeId, on);
    }

    public final void setWrapping(bool enable) {
        qtd_QListView_setWrapping_bool(qtdNativeId, enable);
    }

    public final int spacing() const {
        return qtd_QListView_spacing_const(qtdNativeId);
    }

    public final bool uniformItemSizes() const {
        return qtd_QListView_uniformItemSizes_const(qtdNativeId);
    }

    public final QListView.ViewMode viewMode() const {
        return cast(QListView.ViewMode) qtd_QListView_viewMode_const(qtdNativeId);
    }

    public final bool wordWrap() const {
        return qtd_QListView_wordWrap_const(qtdNativeId);
    }

    protected void currentChanged(const(QModelIndex) current, const(QModelIndex) previous) {
        qtd_QListView_currentChanged_QModelIndex_QModelIndex(qtdNativeId, current, previous);
    }

    protected void dataChanged(const(QModelIndex) topLeft, const(QModelIndex) bottomRight) {
        qtd_QListView_dataChanged_QModelIndex_QModelIndex(qtdNativeId, topLeft, bottomRight);
    }

    public void doItemsLayout() {
        qtd_QListView_doItemsLayout(qtdNativeId);
    }

    protected void dragLeaveEvent(QDragLeaveEvent e) {
        qtd_QListView_dragLeaveEvent_QDragLeaveEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void dragMoveEvent(QDragMoveEvent e) {
        qtd_QListView_dragMoveEvent_QDragMoveEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void dropEvent(QDropEvent e) {
        qtd_QListView_dropEvent_QDropEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QListView_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected int horizontalOffset() const {
        return qtd_QListView_horizontalOffset_const(qtdNativeId);
    }

    public QModelIndex indexAt(const(QPoint) p) const {
        QModelIndex res;
        qtd_QListView_indexAt_QPoint_const(qtdNativeId, &res, p);
        return res;
    }

    protected bool isIndexHidden(const(QModelIndex) index) const {
        return qtd_QListView_isIndexHidden_QModelIndex_const(qtdNativeId, index);
    }

    protected void mouseMoveEvent(QMouseEvent e) {
        qtd_QListView_mouseMoveEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent e) {
        qtd_QListView_mouseReleaseEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected QModelIndex moveCursor(QAbstractItemView.CursorAction cursorAction, int modifiers) {
        QModelIndex res;
        qtd_QListView_moveCursor_CursorAction_KeyboardModifiers(qtdNativeId, &res, cursorAction, modifiers);
        return res;
    }

    protected void paintEvent(QPaintEvent e) {
        qtd_QListView_paintEvent_QPaintEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public void reset() {
        qtd_QListView_reset(qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent e) {
        qtd_QListView_resizeEvent_QResizeEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void rowsAboutToBeRemoved(const(QModelIndex) parent_, int start, int end) {
        qtd_QListView_rowsAboutToBeRemoved_QModelIndex_int_int(qtdNativeId, parent_, start, end);
    }

    protected void rowsInserted(const(QModelIndex) parent_, int start, int end) {
        qtd_QListView_rowsInserted_QModelIndex_int_int(qtdNativeId, parent_, start, end);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QListView_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    public void scrollTo(const(QModelIndex) index, QAbstractItemView.ScrollHint hint = QAbstractItemView.ScrollHint.EnsureVisible) {
        qtd_QListView_scrollTo_QModelIndex_ScrollHint(qtdNativeId, index, hint);
    }

    protected QList!(QModelIndex) selectedIndexes() const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QListView_selectedIndexes_const(qtdNativeId, &res);
        return res;
    }

    protected void selectionChanged(const(QItemSelection) selected, const(QItemSelection) deselected) {
        qtd_QListView_selectionChanged_QItemSelection_QItemSelection(qtdNativeId, selected is null ? null : (cast(QItemSelection)selected).qtdNativeId, deselected is null ? null : (cast(QItemSelection)deselected).qtdNativeId);
    }

    public void setRootIndex(const(QModelIndex) index) {
        qtd_QListView_setRootIndex_QModelIndex(qtdNativeId, index);
    }

    protected void setSelection(const(QRect) rect, int command) {
        qtd_QListView_setSelection_QRect_SelectionFlags(qtdNativeId, rect, command);
    }

    protected void startDrag(int supportedActions) {
        qtd_QListView_startDrag_DropActions(qtdNativeId, supportedActions);
    }

    protected void timerEvent(QTimerEvent e) {
        qtd_QListView_timerEvent_QTimerEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void updateGeometries() {
        qtd_QListView_updateGeometries(qtdNativeId);
    }

    protected int verticalOffset() const {
        return qtd_QListView_verticalOffset_const(qtdNativeId);
    }

    protected QStyleOptionViewItem viewOptions() const {
        void* ret = qtd_QListView_viewOptions_const(qtdNativeId);
        QStyleOptionViewItem __d_return_value = new QStyleOptionViewItem(ret);
        return __d_return_value;
    }

    public QRect visualRect(const(QModelIndex) index) const {
        QRect res;
        qtd_QListView_visualRect_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    protected QRegion visualRegionForSelection(const(QItemSelection) selection) const {
        void* ret = qtd_QListView_visualRegionForSelection_QItemSelection_const(qtdNativeId, selection is null ? null : (cast(QItemSelection)selection).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QListView_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QListView);
    }

    static QListView __getObject(void* nativeId) {
        return static_cast!(QListView)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QListView_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QListView_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QListView(nativeId, initFlags);
        QListView.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QList!(QModelIndex))("indexesMoved"), index));

    }

    public alias void __isQtType_QListView;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QListView_indexesMoved_QList(void* __this_nativeId,
 void* indexes0);

// C wrappers
private extern(C) void* qtd_QListView_QListView_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QListView_batchSize_const(void* __this_nativeId);
private extern(C) void  qtd_QListView_clearPropertyFlags(void* __this_nativeId);
private extern(C) void  qtd_QListView_contentsSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QListView_flow_const(void* __this_nativeId);
private extern(C) void  qtd_QListView_gridSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QListView_internalDrag_DropActions(void* __this_nativeId,
 int supportedActions0);
private extern(C) void  qtd_QListView_internalDrop_QDropEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QListView_isRowHidden_int_const(void* __this_nativeId,
 int row0);
private extern(C) bool  qtd_QListView_isSelectionRectVisible_const(void* __this_nativeId);
private extern(C) bool  qtd_QListView_isWrapping_const(void* __this_nativeId);
private extern(C) int  qtd_QListView_layoutMode_const(void* __this_nativeId);
private extern(C) int  qtd_QListView_modelColumn_const(void* __this_nativeId);
private extern(C) int  qtd_QListView_movement_const(void* __this_nativeId);
private extern(C) void  qtd_QListView_rectForIndex_QModelIndex_const(void* __this_nativeId,
 QRect * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QListView_resizeContents_int_int(void* __this_nativeId,
 int width0,
 int height1);
private extern(C) int  qtd_QListView_resizeMode_const(void* __this_nativeId);
private extern(C) void  qtd_QListView_setBatchSize_int(void* __this_nativeId,
 int batchSize0);
private extern(C) void  qtd_QListView_setFlow_Flow(void* __this_nativeId,
 int flow0);
private extern(C) void  qtd_QListView_setGridSize_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QListView_setLayoutMode_LayoutMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QListView_setModelColumn_int(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QListView_setMovement_Movement(void* __this_nativeId,
 int movement0);
private extern(C) void  qtd_QListView_setPositionForIndex_QPoint_QModelIndex(void* __this_nativeId,
 QPoint position0,
 const(QModelIndexAccessor) index1);
private extern(C) void  qtd_QListView_setResizeMode_ResizeMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QListView_setRowHidden_int_bool(void* __this_nativeId,
 int row0,
 bool hide1);
private extern(C) void  qtd_QListView_setSelectionRectVisible_bool(void* __this_nativeId,
 bool show0);
private extern(C) void  qtd_QListView_setSpacing_int(void* __this_nativeId,
 int space0);
private extern(C) void  qtd_QListView_setUniformItemSizes_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QListView_setViewMode_ViewMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QListView_setWordWrap_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QListView_setWrapping_bool(void* __this_nativeId,
 bool enable0);
private extern(C) int  qtd_QListView_spacing_const(void* __this_nativeId);
private extern(C) bool  qtd_QListView_uniformItemSizes_const(void* __this_nativeId);
private extern(C) int  qtd_QListView_viewMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QListView_wordWrap_const(void* __this_nativeId);
private extern(C) void  qtd_QListView_currentChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) current0,
 const(QModelIndexAccessor) previous1);
private extern(C) void  qtd_QListView_dataChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) topLeft0,
 const(QModelIndexAccessor) bottomRight1);
private extern(C) void  qtd_QListView_doItemsLayout(void* __this_nativeId);
private extern(C) void  qtd_QListView_dragLeaveEvent_QDragLeaveEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QListView_dragMoveEvent_QDragMoveEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QListView_dropEvent_QDropEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QListView_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) int  qtd_QListView_horizontalOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QListView_indexAt_QPoint_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint p0);
private extern(C) bool  qtd_QListView_isIndexHidden_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QListView_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QListView_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QListView_moveCursor_CursorAction_KeyboardModifiers(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int cursorAction0,
 int modifiers1);
private extern(C) void  qtd_QListView_paintEvent_QPaintEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QListView_reset(void* __this_nativeId);
private extern(C) void  qtd_QListView_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QListView_rowsAboutToBeRemoved_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int start1,
 int end2);
private extern(C) void  qtd_QListView_rowsInserted_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int start1,
 int end2);
private extern(C) void  qtd_QListView_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QListView_scrollTo_QModelIndex_ScrollHint(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int hint1);
private extern(C) void  qtd_QListView_selectedIndexes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QListView_selectionChanged_QItemSelection_QItemSelection(void* __this_nativeId,
 void* selected0,
 void* deselected1);
private extern(C) void  qtd_QListView_setRootIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QListView_setSelection_QRect_SelectionFlags(void* __this_nativeId,
 QRect rect0,
 int command1);
private extern(C) void  qtd_QListView_startDrag_DropActions(void* __this_nativeId,
 int supportedActions0);
private extern(C) void  qtd_QListView_timerEvent_QTimerEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QListView_updateGeometries(void* __this_nativeId);
private extern(C) int  qtd_QListView_verticalOffset_const(void* __this_nativeId);
private extern(C) void*  qtd_QListView_viewOptions_const(void* __this_nativeId);
private extern(C) void  qtd_QListView_visualRect_QModelIndex_const(void* __this_nativeId,
 QRect * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QListView_visualRegionForSelection_QItemSelection_const(void* __this_nativeId,
 void* selection0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QListView_initCallBacks(void* virtuals);

extern(C) void static_init_QListView() {
    qtd_QListView_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QListView_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QListView) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QListView_activated_handle(void* dId, void** args) {
        auto d_object = cast(QListView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QListView_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QListView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.clicked_emit(index0);
}*/
/*private extern(C) void qtd_QListView_doubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QListView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.doubleClicked_emit(index0);
}*/
/*private extern(C) void qtd_QListView_entered_handle(void* dId, void** args) {
        auto d_object = cast(QListView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.entered_emit(index0);
}*/
/*private extern(C) void qtd_QListView_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QListView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.pressed_emit(index0);
}*/
/*private extern(C) void qtd_QListView_viewportEntered_handle(void* dId, void** args) {
        auto d_object = cast(QListView) dId;
        //d_object.viewportEntered_emit();
}*/
/*private extern(C) void qtd_QListView_indexesMoved_handle(void* dId, void** args) {
        auto d_object = cast(QListView) dId;
        QList!(QModelIndex) indexes0;
        qtd_qt_gui_QModelIndex_fromcpp_QList(args[1], &indexes0);

        //d_object.indexesMoved_emit(indexes0);
}*/

extern(C) QMetaObjectNative* qtd_QListView_staticMetaObject();

extern(C) void qtd_QListView_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QListView_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
