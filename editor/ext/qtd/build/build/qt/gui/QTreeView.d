module qt.gui.QTreeView;

public import qt.gui.QTreeView_aux;
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
public import qt.gui.QHeaderView;
public import qt.core.QChildEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QAbstractItemView;
public import qt.core.QObject;
public import qt.gui.QPainter;
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


public class QTreeView : QAbstractItemView
{

    private static const string[] __signalSignatures = [
            "collapsed(QModelIndex)", 
            "expanded(QModelIndex)"    ];

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

    protected final void collapsed(const(QModelIndex) index) {
        qtd_QTreeView_collapsed_QModelIndex(qtdNativeId, index);
    }

    protected final void expanded(const(QModelIndex) index) {
        qtd_QTreeView_expanded_QModelIndex(qtdNativeId, index);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QTreeView_QTreeView_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool allColumnsShowFocus() const {
        return qtd_QTreeView_allColumnsShowFocus_const(qtdNativeId);
    }

    public final int autoExpandDelay() const {
        return qtd_QTreeView_autoExpandDelay_const(qtdNativeId);
    }

    public final void collapse(const(QModelIndex) index) {
        qtd_QTreeView_collapse_QModelIndex(qtdNativeId, index);
    }

    public final void collapseAll() {
        qtd_QTreeView_collapseAll(qtdNativeId);
    }

    public final int columnAt(int x) const {
        return qtd_QTreeView_columnAt_int_const(qtdNativeId, x);
    }

    protected final void columnCountChanged(int oldCount, int newCount) {
        qtd_QTreeView_columnCountChanged_int_int(qtdNativeId, oldCount, newCount);
    }

    protected final void columnMoved() {
        qtd_QTreeView_columnMoved(qtdNativeId);
    }

    protected final void columnResized(int column, int oldSize, int newSize) {
        qtd_QTreeView_columnResized_int_int_int(qtdNativeId, column, oldSize, newSize);
    }

    public final int columnViewportPosition(int column) const {
        return qtd_QTreeView_columnViewportPosition_int_const(qtdNativeId, column);
    }

    public final int columnWidth(int column) const {
        return qtd_QTreeView_columnWidth_int_const(qtdNativeId, column);
    }

    protected final void drawTree(QPainter painter, const(QRegion) region) const {
        qtd_QTreeView_drawTree_QPainter_QRegion_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, region is null ? null : (cast(QRegion)region).qtdNativeId);
    }

    public final void expand(const(QModelIndex) index) {
        qtd_QTreeView_expand_QModelIndex(qtdNativeId, index);
    }

    public final void expandAll() {
        qtd_QTreeView_expandAll(qtdNativeId);
    }

    public final void expandToDepth(int depth) {
        qtd_QTreeView_expandToDepth_int(qtdNativeId, depth);
    }

    public final bool expandsOnDoubleClick() const {
        return qtd_QTreeView_expandsOnDoubleClick_const(qtdNativeId);
    }

    public final QHeaderView header() const {
        void *ret = qtd_QTreeView_header_const(qtdNativeId);
        QHeaderView __d_return_value = QHeaderView.__getObject(ret);
        return __d_return_value;
    }

    public final void hideColumn(int column) {
        qtd_QTreeView_hideColumn_int(qtdNativeId, column);
    }

    public final int indentation() const {
        return qtd_QTreeView_indentation_const(qtdNativeId);
    }

    public final QModelIndex indexAbove(const(QModelIndex) index) const {
        QModelIndex res;
        qtd_QTreeView_indexAbove_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public final QModelIndex indexBelow(const(QModelIndex) index) const {
        QModelIndex res;
        qtd_QTreeView_indexBelow_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    protected final int indexRowSizeHint(const(QModelIndex) index) const {
        return qtd_QTreeView_indexRowSizeHint_QModelIndex_const(qtdNativeId, index);
    }

    public final bool isAnimated() const {
        return qtd_QTreeView_isAnimated_const(qtdNativeId);
    }

    public final bool isColumnHidden(int column) const {
        return qtd_QTreeView_isColumnHidden_int_const(qtdNativeId, column);
    }

    public final bool isExpanded(const(QModelIndex) index) const {
        return qtd_QTreeView_isExpanded_QModelIndex_const(qtdNativeId, index);
    }

    public final bool isFirstColumnSpanned(int row, const(QModelIndex) parent_) const {
        return qtd_QTreeView_isFirstColumnSpanned_int_QModelIndex_const(qtdNativeId, row, parent_);
    }

    public final bool isHeaderHidden() const {
        return qtd_QTreeView_isHeaderHidden_const(qtdNativeId);
    }

    public final bool isRowHidden(int row, const(QModelIndex) parent_) const {
        return qtd_QTreeView_isRowHidden_int_QModelIndex_const(qtdNativeId, row, parent_);
    }

    public final bool isSortingEnabled() const {
        return qtd_QTreeView_isSortingEnabled_const(qtdNativeId);
    }

    public final bool itemsExpandable() const {
        return qtd_QTreeView_itemsExpandable_const(qtdNativeId);
    }

    protected final void reexpand() {
        qtd_QTreeView_reexpand(qtdNativeId);
    }

    public final void resizeColumnToContents(int column) {
        qtd_QTreeView_resizeColumnToContents_int(qtdNativeId, column);
    }

    public final bool rootIsDecorated() const {
        return qtd_QTreeView_rootIsDecorated_const(qtdNativeId);
    }

    protected final int rowHeight(const(QModelIndex) index) const {
        return qtd_QTreeView_rowHeight_QModelIndex_const(qtdNativeId, index);
    }

    protected final void rowsRemoved(const(QModelIndex) parent_, int first, int last) {
        qtd_QTreeView_rowsRemoved_QModelIndex_int_int(qtdNativeId, parent_, first, last);
    }

    public final void setAllColumnsShowFocus(bool enable) {
        qtd_QTreeView_setAllColumnsShowFocus_bool(qtdNativeId, enable);
    }

    public final void setAnimated(bool enable) {
        qtd_QTreeView_setAnimated_bool(qtdNativeId, enable);
    }

    public final void setAutoExpandDelay(int delay) {
        qtd_QTreeView_setAutoExpandDelay_int(qtdNativeId, delay);
    }

    public final void setColumnHidden(int column, bool hide) {
        qtd_QTreeView_setColumnHidden_int_bool(qtdNativeId, column, hide);
    }

    public final void setColumnWidth(int column, int width) {
        qtd_QTreeView_setColumnWidth_int_int(qtdNativeId, column, width);
    }

    public final void setExpanded(const(QModelIndex) index, bool expand) {
        qtd_QTreeView_setExpanded_QModelIndex_bool(qtdNativeId, index, expand);
    }

    public final void setExpandsOnDoubleClick(bool enable) {
        qtd_QTreeView_setExpandsOnDoubleClick_bool(qtdNativeId, enable);
    }

    public final void setFirstColumnSpanned(int row, const(QModelIndex) parent_, bool span) {
        qtd_QTreeView_setFirstColumnSpanned_int_QModelIndex_bool(qtdNativeId, row, parent_, span);
    }

    public final void setHeader(QHeaderView header) {
        qtd_QTreeView_setHeader_QHeaderView(qtdNativeId, header is null ? null : header.qtdNativeId);
    }

    public final void setHeaderHidden(bool hide) {
        qtd_QTreeView_setHeaderHidden_bool(qtdNativeId, hide);
    }

    public final void setIndentation(int i) {
        qtd_QTreeView_setIndentation_int(qtdNativeId, i);
    }

    public final void setItemsExpandable(bool enable) {
        qtd_QTreeView_setItemsExpandable_bool(qtdNativeId, enable);
    }

    public final void setRootIsDecorated(bool show) {
        qtd_QTreeView_setRootIsDecorated_bool(qtdNativeId, show);
    }

    public final void setRowHidden(int row, const(QModelIndex) parent_, bool hide) {
        qtd_QTreeView_setRowHidden_int_QModelIndex_bool(qtdNativeId, row, parent_, hide);
    }

    public final void setSortingEnabled(bool enable) {
        qtd_QTreeView_setSortingEnabled_bool(qtdNativeId, enable);
    }

    public final void setUniformRowHeights(bool uniform) {
        qtd_QTreeView_setUniformRowHeights_bool(qtdNativeId, uniform);
    }

    public final void setWordWrap(bool on) {
        qtd_QTreeView_setWordWrap_bool(qtdNativeId, on);
    }

    public final void showColumn(int column) {
        qtd_QTreeView_showColumn_int(qtdNativeId, column);
    }

    public final void sortByColumn(int column, Qt.SortOrder order) {
        qtd_QTreeView_sortByColumn_int_SortOrder(qtdNativeId, column, order);
    }

    public final bool uniformRowHeights() const {
        return qtd_QTreeView_uniformRowHeights_const(qtdNativeId);
    }

    public final bool wordWrap() const {
        return qtd_QTreeView_wordWrap_const(qtdNativeId);
    }

    protected void currentChanged(const(QModelIndex) current, const(QModelIndex) previous) {
        qtd_QTreeView_currentChanged_QModelIndex_QModelIndex(qtdNativeId, current, previous);
    }

    protected void dataChanged(const(QModelIndex) topLeft, const(QModelIndex) bottomRight) {
        qtd_QTreeView_dataChanged_QModelIndex_QModelIndex(qtdNativeId, topLeft, bottomRight);
    }

    public void doItemsLayout() {
        qtd_QTreeView_doItemsLayout(qtdNativeId);
    }

    protected void dragMoveEvent(QDragMoveEvent event) {
        qtd_QTreeView_dragMoveEvent_QDragMoveEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void drawBranches(QPainter painter, const(QRect) rect, const(QModelIndex) index) const {
        qtd_QTreeView_drawBranches_QPainter_QRect_QModelIndex_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, index);
    }

    protected void drawRow(QPainter painter, const(QStyleOptionViewItem) options, const(QModelIndex) index) const {
        qtd_QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, options is null ? null : (cast(QStyleOptionViewItem)options).qtdNativeId, index);
    }

    protected int horizontalOffset() const {
        return qtd_QTreeView_horizontalOffset_const(qtdNativeId);
    }

    protected void horizontalScrollbarAction(int action) {
        qtd_QTreeView_horizontalScrollbarAction_int(qtdNativeId, action);
    }

    public QModelIndex indexAt(const(QPoint) p) const {
        QModelIndex res;
        qtd_QTreeView_indexAt_QPoint_const(qtdNativeId, &res, p);
        return res;
    }

    protected bool isIndexHidden(const(QModelIndex) index) const {
        return qtd_QTreeView_isIndexHidden_QModelIndex_const(qtdNativeId, index);
    }

    protected void keyPressEvent(QKeyEvent event) {
        qtd_QTreeView_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void keyboardSearch(string search) {
        qtd_QTreeView_keyboardSearch_string(qtdNativeId, search);
    }

    protected void mouseDoubleClickEvent(QMouseEvent event) {
        qtd_QTreeView_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent event) {
        qtd_QTreeView_mouseMoveEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent event) {
        qtd_QTreeView_mousePressEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent event) {
        qtd_QTreeView_mouseReleaseEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected QModelIndex moveCursor(QAbstractItemView.CursorAction cursorAction, int modifiers) {
        QModelIndex res;
        qtd_QTreeView_moveCursor_CursorAction_KeyboardModifiers(qtdNativeId, &res, cursorAction, modifiers);
        return res;
    }

    protected void paintEvent(QPaintEvent event) {
        qtd_QTreeView_paintEvent_QPaintEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void reset() {
        qtd_QTreeView_reset(qtdNativeId);
    }

    protected void rowsAboutToBeRemoved(const(QModelIndex) parent_, int start, int end) {
        qtd_QTreeView_rowsAboutToBeRemoved_QModelIndex_int_int(qtdNativeId, parent_, start, end);
    }

    protected void rowsInserted(const(QModelIndex) parent_, int start, int end) {
        qtd_QTreeView_rowsInserted_QModelIndex_int_int(qtdNativeId, parent_, start, end);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QTreeView_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    public void scrollTo(const(QModelIndex) index, QAbstractItemView.ScrollHint hint = QAbstractItemView.ScrollHint.EnsureVisible) {
        qtd_QTreeView_scrollTo_QModelIndex_ScrollHint(qtdNativeId, index, hint);
    }

    public void selectAll() {
        qtd_QTreeView_selectAll(qtdNativeId);
    }

    protected QList!(QModelIndex) selectedIndexes() const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QTreeView_selectedIndexes_const(qtdNativeId, &res);
        return res;
    }

    protected void selectionChanged(const(QItemSelection) selected, const(QItemSelection) deselected) {
        qtd_QTreeView_selectionChanged_QItemSelection_QItemSelection(qtdNativeId, selected is null ? null : (cast(QItemSelection)selected).qtdNativeId, deselected is null ? null : (cast(QItemSelection)deselected).qtdNativeId);
    }

    public void setModel(QAbstractItemModel model) {
        {
            __rcItemModel = cast(Object) model;
        }
        qtd_QTreeView_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
        // setModel() creates a new selection model for the object
        __rcItemSelectionModel = null;


    }

    public void setRootIndex(const(QModelIndex) index) {
        qtd_QTreeView_setRootIndex_QModelIndex(qtdNativeId, index);
    }

    protected void setSelection(const(QRect) rect, int command) {
        qtd_QTreeView_setSelection_QRect_SelectionFlags(qtdNativeId, rect, command);
    }

    public void setSelectionModel(QItemSelectionModel selectionModel) {
        /*if (selectionModel is null)
            throw new NullPointerException("Argument 'selectionModel': null not expected."); */
        {
            __rcItemSelectionModel = cast(Object) selectionModel;
        }
        qtd_QTreeView_setSelectionModel_QItemSelectionModel(qtdNativeId, selectionModel is null ? null : selectionModel.qtdNativeId);
    }

    public int sizeHintForColumn(int column) const {
        return qtd_QTreeView_sizeHintForColumn_int_const(qtdNativeId, column);
    }

    protected void timerEvent(QTimerEvent event) {
        qtd_QTreeView_timerEvent_QTimerEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void updateGeometries() {
        qtd_QTreeView_updateGeometries(qtdNativeId);
    }

    protected int verticalOffset() const {
        return qtd_QTreeView_verticalOffset_const(qtdNativeId);
    }

    protected bool viewportEvent(QEvent event) {
        return qtd_QTreeView_viewportEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QRect visualRect(const(QModelIndex) index) const {
        QRect res;
        qtd_QTreeView_visualRect_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    protected QRegion visualRegionForSelection(const(QItemSelection) selection) const {
        void* ret = qtd_QTreeView_visualRegionForSelection_QItemSelection_const(qtdNativeId, selection is null ? null : (cast(QItemSelection)selection).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "collapse(QModelIndex)", 
            "collapseAll()", 
            "columnCountChanged(int,int)", 
            "columnMoved()", 
            "columnResized(int,int,int)", 
            "expand(QModelIndex)", 
            "expandAll()", 
            "expandToDepth(int)", 
            "hideColumn(int)", 
            "reexpand()", 
            "resizeColumnToContents(int)", 
            "rowsRemoved(QModelIndex,int,int)", 
            "showColumn(int)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTreeView_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTreeView);
    }

    static QTreeView __getObject(void* nativeId) {
        return static_cast!(QTreeView)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTreeView_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTreeView_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTreeView(nativeId, initFlags);
        QTreeView.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("collapsed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("expanded"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex))("collapse"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("collapseAll"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(int,int)("columnCountChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("columnMoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(int,int,int)("columnResized"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex))("expand"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!()("expandAll"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!(int)("expandToDepth"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[8]);
        mo.addMethod(new QMetaSlot(signature!(int)("hideColumn"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[9]);
        mo.addMethod(new QMetaSlot(signature!()("reexpand"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[10]);
        mo.addMethod(new QMetaSlot(signature!(int)("resizeColumnToContents"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[11]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex),int,int)("rowsRemoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[12]);
        mo.addMethod(new QMetaSlot(signature!(int)("showColumn"), index));

    }

    public alias void __isQtType_QTreeView;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTreeView_collapsed_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QTreeView_expanded_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);

// C wrappers
private extern(C) void* qtd_QTreeView_QTreeView_QWidget(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QTreeView_allColumnsShowFocus_const(void* __this_nativeId);
private extern(C) int  qtd_QTreeView_autoExpandDelay_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_collapse_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QTreeView_collapseAll(void* __this_nativeId);
private extern(C) int  qtd_QTreeView_columnAt_int_const(void* __this_nativeId,
 int x0);
private extern(C) void  qtd_QTreeView_columnCountChanged_int_int(void* __this_nativeId,
 int oldCount0,
 int newCount1);
private extern(C) void  qtd_QTreeView_columnMoved(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_columnResized_int_int_int(void* __this_nativeId,
 int column0,
 int oldSize1,
 int newSize2);
private extern(C) int  qtd_QTreeView_columnViewportPosition_int_const(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QTreeView_columnWidth_int_const(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QTreeView_drawTree_QPainter_QRegion_const(void* __this_nativeId,
 void* painter0,
 void* region1);
private extern(C) void  qtd_QTreeView_expand_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QTreeView_expandAll(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_expandToDepth_int(void* __this_nativeId,
 int depth0);
private extern(C) bool  qtd_QTreeView_expandsOnDoubleClick_const(void* __this_nativeId);
private extern(C) void*  qtd_QTreeView_header_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_hideColumn_int(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QTreeView_indentation_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_indexAbove_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QTreeView_indexBelow_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) int  qtd_QTreeView_indexRowSizeHint_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QTreeView_isAnimated_const(void* __this_nativeId);
private extern(C) bool  qtd_QTreeView_isColumnHidden_int_const(void* __this_nativeId,
 int column0);
private extern(C) bool  qtd_QTreeView_isExpanded_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QTreeView_isFirstColumnSpanned_int_QModelIndex_const(void* __this_nativeId,
 int row0,
 const(QModelIndexAccessor) parent1);
private extern(C) bool  qtd_QTreeView_isHeaderHidden_const(void* __this_nativeId);
private extern(C) bool  qtd_QTreeView_isRowHidden_int_QModelIndex_const(void* __this_nativeId,
 int row0,
 const(QModelIndexAccessor) parent1);
private extern(C) bool  qtd_QTreeView_isSortingEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QTreeView_itemsExpandable_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_reexpand(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_resizeColumnToContents_int(void* __this_nativeId,
 int column0);
private extern(C) bool  qtd_QTreeView_rootIsDecorated_const(void* __this_nativeId);
private extern(C) int  qtd_QTreeView_rowHeight_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QTreeView_rowsRemoved_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int first1,
 int last2);
private extern(C) void  qtd_QTreeView_setAllColumnsShowFocus_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTreeView_setAnimated_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTreeView_setAutoExpandDelay_int(void* __this_nativeId,
 int delay0);
private extern(C) void  qtd_QTreeView_setColumnHidden_int_bool(void* __this_nativeId,
 int column0,
 bool hide1);
private extern(C) void  qtd_QTreeView_setColumnWidth_int_int(void* __this_nativeId,
 int column0,
 int width1);
private extern(C) void  qtd_QTreeView_setExpanded_QModelIndex_bool(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 bool expand1);
private extern(C) void  qtd_QTreeView_setExpandsOnDoubleClick_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTreeView_setFirstColumnSpanned_int_QModelIndex_bool(void* __this_nativeId,
 int row0,
 const(QModelIndexAccessor) parent1,
 bool span2);
private extern(C) void  qtd_QTreeView_setHeader_QHeaderView(void* __this_nativeId,
 void* header0);
private extern(C) void  qtd_QTreeView_setHeaderHidden_bool(void* __this_nativeId,
 bool hide0);
private extern(C) void  qtd_QTreeView_setIndentation_int(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QTreeView_setItemsExpandable_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTreeView_setRootIsDecorated_bool(void* __this_nativeId,
 bool show0);
private extern(C) void  qtd_QTreeView_setRowHidden_int_QModelIndex_bool(void* __this_nativeId,
 int row0,
 const(QModelIndexAccessor) parent1,
 bool hide2);
private extern(C) void  qtd_QTreeView_setSortingEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTreeView_setUniformRowHeights_bool(void* __this_nativeId,
 bool uniform0);
private extern(C) void  qtd_QTreeView_setWordWrap_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QTreeView_showColumn_int(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QTreeView_sortByColumn_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) bool  qtd_QTreeView_uniformRowHeights_const(void* __this_nativeId);
private extern(C) bool  qtd_QTreeView_wordWrap_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_currentChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) current0,
 const(QModelIndexAccessor) previous1);
private extern(C) void  qtd_QTreeView_dataChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) topLeft0,
 const(QModelIndexAccessor) bottomRight1);
private extern(C) void  qtd_QTreeView_doItemsLayout(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_dragMoveEvent_QDragMoveEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QTreeView_drawBranches_QPainter_QRect_QModelIndex_const(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 const(QModelIndexAccessor) index2);
private extern(C) void  qtd_QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* painter0,
 void* options1,
 const(QModelIndexAccessor) index2);
private extern(C) int  qtd_QTreeView_horizontalOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_horizontalScrollbarAction_int(void* __this_nativeId,
 int action0);
private extern(C) void  qtd_QTreeView_indexAt_QPoint_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint p0);
private extern(C) bool  qtd_QTreeView_isIndexHidden_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QTreeView_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QTreeView_keyboardSearch_string(void* __this_nativeId,
 string search0);
private extern(C) void  qtd_QTreeView_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QTreeView_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QTreeView_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QTreeView_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QTreeView_moveCursor_CursorAction_KeyboardModifiers(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int cursorAction0,
 int modifiers1);
private extern(C) void  qtd_QTreeView_paintEvent_QPaintEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QTreeView_reset(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_rowsAboutToBeRemoved_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int start1,
 int end2);
private extern(C) void  qtd_QTreeView_rowsInserted_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int start1,
 int end2);
private extern(C) void  qtd_QTreeView_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QTreeView_scrollTo_QModelIndex_ScrollHint(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int hint1);
private extern(C) void  qtd_QTreeView_selectAll(void* __this_nativeId);
private extern(C) void  qtd_QTreeView_selectedIndexes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTreeView_selectionChanged_QItemSelection_QItemSelection(void* __this_nativeId,
 void* selected0,
 void* deselected1);
private extern(C) void  qtd_QTreeView_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0);
private extern(C) void  qtd_QTreeView_setRootIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QTreeView_setSelection_QRect_SelectionFlags(void* __this_nativeId,
 QRect rect0,
 int command1);
private extern(C) void  qtd_QTreeView_setSelectionModel_QItemSelectionModel(void* __this_nativeId,
 void* selectionModel0);
private extern(C) int  qtd_QTreeView_sizeHintForColumn_int_const(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QTreeView_timerEvent_QTimerEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QTreeView_updateGeometries(void* __this_nativeId);
private extern(C) int  qtd_QTreeView_verticalOffset_const(void* __this_nativeId);
private extern(C) bool  qtd_QTreeView_viewportEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QTreeView_visualRect_QModelIndex_const(void* __this_nativeId,
 QRect * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QTreeView_visualRegionForSelection_QItemSelection_const(void* __this_nativeId,
 void* selection0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* painter0, QRect* rect1, QModelIndexAccessor* index2) qtd_QTreeView_drawBranches_QPainter_QRect_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QTreeView_drawBranches_QPainter_QRect_QModelIndex_const_dispatch(void *dId, void* painter0, QRect* rect1, QModelIndexAccessor* index2){
    auto d_object = cast(QTreeView) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    d_object.drawBranches(painter0_d_ref, *rect1, *index2);
}

extern(C){ extern void function(void *dId, void* painter0, void* options1, QModelIndexAccessor* index2) qtd_QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch(void *dId, void* painter0, void* options1, QModelIndexAccessor* index2){
    auto d_object = cast(QTreeView) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope options1_d_ref = new QStyleOptionViewItem(options1, QtdObjectInitFlags.onStack);
    d_object.drawRow(painter0_d_ref, options1_d_ref, *index2);
}

private extern (C) void qtd_QTreeView_initCallBacks(void* virtuals);

extern(C) void static_init_QTreeView() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QTreeView_drawBranches_QPainter_QRect_QModelIndex_const_dispatch;
    virt_arr[1] = &qtd_export_QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch;
    qtd_QTreeView_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QTreeView_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTreeView) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QTreeView_activated_handle(void* dId, void** args) {
        auto d_object = cast(QTreeView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QTreeView_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QTreeView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.clicked_emit(index0);
}*/
/*private extern(C) void qtd_QTreeView_doubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTreeView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.doubleClicked_emit(index0);
}*/
/*private extern(C) void qtd_QTreeView_entered_handle(void* dId, void** args) {
        auto d_object = cast(QTreeView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.entered_emit(index0);
}*/
/*private extern(C) void qtd_QTreeView_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QTreeView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.pressed_emit(index0);
}*/
/*private extern(C) void qtd_QTreeView_viewportEntered_handle(void* dId, void** args) {
        auto d_object = cast(QTreeView) dId;
        //d_object.viewportEntered_emit();
}*/
/*private extern(C) void qtd_QTreeView_collapsed_handle(void* dId, void** args) {
        auto d_object = cast(QTreeView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.collapsed_emit(index0);
}*/
/*private extern(C) void qtd_QTreeView_expanded_handle(void* dId, void** args) {
        auto d_object = cast(QTreeView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.expanded_emit(index0);
}*/

extern(C) QMetaObjectNative* qtd_QTreeView_staticMetaObject();

extern(C) void qtd_QTreeView_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTreeView_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
