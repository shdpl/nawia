module qt.gui.QTableView;

public import qt.gui.QTableView_aux;
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


public class QTableView : QAbstractItemView
{

    private static const string[] __signalSignatures = [    ];

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
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QTableView_QTableView_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void clearSpans() {
        qtd_QTableView_clearSpans(qtdNativeId);
    }

    public final int columnAt(int x) const {
        return qtd_QTableView_columnAt_int_const(qtdNativeId, x);
    }

    protected final void columnCountChanged(int oldCount, int newCount) {
        qtd_QTableView_columnCountChanged_int_int(qtdNativeId, oldCount, newCount);
    }

    protected final void columnMoved(int column, int oldIndex, int newIndex) {
        qtd_QTableView_columnMoved_int_int_int(qtdNativeId, column, oldIndex, newIndex);
    }

    protected final void columnResized(int column, int oldWidth, int newWidth) {
        qtd_QTableView_columnResized_int_int_int(qtdNativeId, column, oldWidth, newWidth);
    }

    public final int columnSpan(int row, int column) const {
        return qtd_QTableView_columnSpan_int_int_const(qtdNativeId, row, column);
    }

    public final int columnViewportPosition(int column) const {
        return qtd_QTableView_columnViewportPosition_int_const(qtdNativeId, column);
    }

    public final int columnWidth(int column) const {
        return qtd_QTableView_columnWidth_int_const(qtdNativeId, column);
    }

    public final Qt.PenStyle gridStyle() const {
        return cast(Qt.PenStyle) qtd_QTableView_gridStyle_const(qtdNativeId);
    }

    public final void hideColumn(int column) {
        qtd_QTableView_hideColumn_int(qtdNativeId, column);
    }

    public final void hideRow(int row) {
        qtd_QTableView_hideRow_int(qtdNativeId, row);
    }

    public final QHeaderView horizontalHeader() const {
        void *ret = qtd_QTableView_horizontalHeader_const(qtdNativeId);
        QHeaderView __d_return_value = QHeaderView.__getObject(ret);
        return __d_return_value;
    }

    public final bool isColumnHidden(int column) const {
        return qtd_QTableView_isColumnHidden_int_const(qtdNativeId, column);
    }

    public final bool isCornerButtonEnabled() const {
        return qtd_QTableView_isCornerButtonEnabled_const(qtdNativeId);
    }

    public final bool isRowHidden(int row) const {
        return qtd_QTableView_isRowHidden_int_const(qtdNativeId, row);
    }

    public final bool isSortingEnabled() const {
        return qtd_QTableView_isSortingEnabled_const(qtdNativeId);
    }

    public final void resizeColumnToContents(int column) {
        qtd_QTableView_resizeColumnToContents_int(qtdNativeId, column);
    }

    public final void resizeColumnsToContents() {
        qtd_QTableView_resizeColumnsToContents(qtdNativeId);
    }

    public final void resizeRowToContents(int row) {
        qtd_QTableView_resizeRowToContents_int(qtdNativeId, row);
    }

    public final void resizeRowsToContents() {
        qtd_QTableView_resizeRowsToContents(qtdNativeId);
    }

    public final int rowAt(int y) const {
        return qtd_QTableView_rowAt_int_const(qtdNativeId, y);
    }

    protected final void rowCountChanged(int oldCount, int newCount) {
        qtd_QTableView_rowCountChanged_int_int(qtdNativeId, oldCount, newCount);
    }

    public final int rowHeight(int row) const {
        return qtd_QTableView_rowHeight_int_const(qtdNativeId, row);
    }

    protected final void rowMoved(int row, int oldIndex, int newIndex) {
        qtd_QTableView_rowMoved_int_int_int(qtdNativeId, row, oldIndex, newIndex);
    }

    protected final void rowResized(int row, int oldHeight, int newHeight) {
        qtd_QTableView_rowResized_int_int_int(qtdNativeId, row, oldHeight, newHeight);
    }

    public final int rowSpan(int row, int column) const {
        return qtd_QTableView_rowSpan_int_int_const(qtdNativeId, row, column);
    }

    public final int rowViewportPosition(int row) const {
        return qtd_QTableView_rowViewportPosition_int_const(qtdNativeId, row);
    }

    public final void selectColumn(int column) {
        qtd_QTableView_selectColumn_int(qtdNativeId, column);
    }

    public final void selectRow(int row) {
        qtd_QTableView_selectRow_int(qtdNativeId, row);
    }

    public final void setColumnHidden(int column, bool hide) {
        qtd_QTableView_setColumnHidden_int_bool(qtdNativeId, column, hide);
    }

    public final void setColumnWidth(int column, int width) {
        qtd_QTableView_setColumnWidth_int_int(qtdNativeId, column, width);
    }

    public final void setCornerButtonEnabled(bool enable) {
        qtd_QTableView_setCornerButtonEnabled_bool(qtdNativeId, enable);
    }

    public final void setGridStyle(Qt.PenStyle style) {
        qtd_QTableView_setGridStyle_PenStyle(qtdNativeId, style);
    }

    public final void setHorizontalHeader(QHeaderView header) {
        qtd_QTableView_setHorizontalHeader_QHeaderView(qtdNativeId, header is null ? null : header.qtdNativeId);
    }

    public final void setRowHeight(int row, int height) {
        qtd_QTableView_setRowHeight_int_int(qtdNativeId, row, height);
    }

    public final void setRowHidden(int row, bool hide) {
        qtd_QTableView_setRowHidden_int_bool(qtdNativeId, row, hide);
    }

    public final void setShowGrid(bool show) {
        qtd_QTableView_setShowGrid_bool(qtdNativeId, show);
    }

    public final void setSortingEnabled(bool enable) {
        qtd_QTableView_setSortingEnabled_bool(qtdNativeId, enable);
    }

    public final void setSpan(int row, int column, int rowSpan, int columnSpan) {
        qtd_QTableView_setSpan_int_int_int_int(qtdNativeId, row, column, rowSpan, columnSpan);
    }

    public final void setVerticalHeader(QHeaderView header) {
        qtd_QTableView_setVerticalHeader_QHeaderView(qtdNativeId, header is null ? null : header.qtdNativeId);
    }

    public final void setWordWrap(bool on) {
        qtd_QTableView_setWordWrap_bool(qtdNativeId, on);
    }

    public final void showColumn(int column) {
        qtd_QTableView_showColumn_int(qtdNativeId, column);
    }

    public final bool showGrid() const {
        return qtd_QTableView_showGrid_const(qtdNativeId);
    }

    public final void showRow(int row) {
        qtd_QTableView_showRow_int(qtdNativeId, row);
    }

    public final void sortByColumn(int column, Qt.SortOrder order) {
        qtd_QTableView_sortByColumn_int_SortOrder(qtdNativeId, column, order);
    }

    public final QHeaderView verticalHeader() const {
        void *ret = qtd_QTableView_verticalHeader_const(qtdNativeId);
        QHeaderView __d_return_value = QHeaderView.__getObject(ret);
        return __d_return_value;
    }

    public final bool wordWrap() const {
        return qtd_QTableView_wordWrap_const(qtdNativeId);
    }

    protected void currentChanged(const(QModelIndex) current, const(QModelIndex) previous) {
        qtd_QTableView_currentChanged_QModelIndex_QModelIndex(qtdNativeId, current, previous);
    }

    protected int horizontalOffset() const {
        return qtd_QTableView_horizontalOffset_const(qtdNativeId);
    }

    protected void horizontalScrollbarAction(int action) {
        qtd_QTableView_horizontalScrollbarAction_int(qtdNativeId, action);
    }

    public QModelIndex indexAt(const(QPoint) p) const {
        QModelIndex res;
        qtd_QTableView_indexAt_QPoint_const(qtdNativeId, &res, p);
        return res;
    }

    protected bool isIndexHidden(const(QModelIndex) index) const {
        return qtd_QTableView_isIndexHidden_QModelIndex_const(qtdNativeId, index);
    }

    protected QModelIndex moveCursor(QAbstractItemView.CursorAction cursorAction, int modifiers) {
        QModelIndex res;
        qtd_QTableView_moveCursor_CursorAction_KeyboardModifiers(qtdNativeId, &res, cursorAction, modifiers);
        return res;
    }

    protected void paintEvent(QPaintEvent e) {
        qtd_QTableView_paintEvent_QPaintEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QTableView_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    public void scrollTo(const(QModelIndex) index, QAbstractItemView.ScrollHint hint = QAbstractItemView.ScrollHint.EnsureVisible) {
        qtd_QTableView_scrollTo_QModelIndex_ScrollHint(qtdNativeId, index, hint);
    }

    protected QList!(QModelIndex) selectedIndexes() const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QTableView_selectedIndexes_const(qtdNativeId, &res);
        return res;
    }

    protected void selectionChanged(const(QItemSelection) selected, const(QItemSelection) deselected) {
        qtd_QTableView_selectionChanged_QItemSelection_QItemSelection(qtdNativeId, selected is null ? null : (cast(QItemSelection)selected).qtdNativeId, deselected is null ? null : (cast(QItemSelection)deselected).qtdNativeId);
    }

    public void setModel(QAbstractItemModel model) {
        {
            __rcItemModel = cast(Object) model;
        }
        qtd_QTableView_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
        // setModel() creates a new selection model for the object
        __rcItemSelectionModel = null;


    }

    public void setRootIndex(const(QModelIndex) index) {
        qtd_QTableView_setRootIndex_QModelIndex(qtdNativeId, index);
    }

    protected void setSelection(const(QRect) rect, int command) {
        qtd_QTableView_setSelection_QRect_SelectionFlags(qtdNativeId, rect, command);
    }

    public void setSelectionModel(QItemSelectionModel selectionModel) {
        /*if (selectionModel is null)
            throw new NullPointerException("Argument 'selectionModel': null not expected."); */
        {
            __rcItemSelectionModel = cast(Object) selectionModel;
        }
        qtd_QTableView_setSelectionModel_QItemSelectionModel(qtdNativeId, selectionModel is null ? null : selectionModel.qtdNativeId);
    }

    public int sizeHintForColumn(int column) const {
        return qtd_QTableView_sizeHintForColumn_int_const(qtdNativeId, column);
    }

    public int sizeHintForRow(int row) const {
        return qtd_QTableView_sizeHintForRow_int_const(qtdNativeId, row);
    }

    protected void timerEvent(QTimerEvent event) {
        qtd_QTableView_timerEvent_QTimerEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void updateGeometries() {
        qtd_QTableView_updateGeometries(qtdNativeId);
    }

    protected int verticalOffset() const {
        return qtd_QTableView_verticalOffset_const(qtdNativeId);
    }

    protected void verticalScrollbarAction(int action) {
        qtd_QTableView_verticalScrollbarAction_int(qtdNativeId, action);
    }

    protected QStyleOptionViewItem viewOptions() const {
        void* ret = qtd_QTableView_viewOptions_const(qtdNativeId);
        QStyleOptionViewItem __d_return_value = new QStyleOptionViewItem(ret);
        return __d_return_value;
    }

    public QRect visualRect(const(QModelIndex) index) const {
        QRect res;
        qtd_QTableView_visualRect_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    protected QRegion visualRegionForSelection(const(QItemSelection) selection) const {
        void* ret = qtd_QTableView_visualRegionForSelection_QItemSelection_const(qtdNativeId, selection is null ? null : (cast(QItemSelection)selection).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "columnCountChanged(int,int)", 
            "columnMoved(int,int,int)", 
            "columnResized(int,int,int)", 
            "hideColumn(int)", 
            "hideRow(int)", 
            "resizeColumnToContents(int)", 
            "resizeColumnsToContents()", 
            "resizeRowToContents(int)", 
            "resizeRowsToContents()", 
            "rowCountChanged(int,int)", 
            "rowMoved(int,int,int)", 
            "rowResized(int,int,int)", 
            "selectColumn(int)", 
            "selectRow(int)", 
            "setShowGrid(bool)", 
            "showColumn(int)", 
            "showRow(int)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTableView_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTableView);
    }

    static QTableView __getObject(void* nativeId) {
        return static_cast!(QTableView)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTableView_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTableView_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTableView(nativeId, initFlags);
        QTableView.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(int,int)("columnCountChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(int,int,int)("columnMoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(int,int,int)("columnResized"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(int)("hideColumn"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(int)("hideRow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(int)("resizeColumnToContents"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!()("resizeColumnsToContents"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!(int)("resizeRowToContents"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[8]);
        mo.addMethod(new QMetaSlot(signature!()("resizeRowsToContents"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[9]);
        mo.addMethod(new QMetaSlot(signature!(int,int)("rowCountChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[10]);
        mo.addMethod(new QMetaSlot(signature!(int,int,int)("rowMoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[11]);
        mo.addMethod(new QMetaSlot(signature!(int,int,int)("rowResized"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[12]);
        mo.addMethod(new QMetaSlot(signature!(int)("selectColumn"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[13]);
        mo.addMethod(new QMetaSlot(signature!(int)("selectRow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[14]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setShowGrid"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[15]);
        mo.addMethod(new QMetaSlot(signature!(int)("showColumn"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[16]);
        mo.addMethod(new QMetaSlot(signature!(int)("showRow"), index));

    }

    public alias void __isQtType_QTableView;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTableView_QTableView_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QTableView_clearSpans(void* __this_nativeId);
private extern(C) int  qtd_QTableView_columnAt_int_const(void* __this_nativeId,
 int x0);
private extern(C) void  qtd_QTableView_columnCountChanged_int_int(void* __this_nativeId,
 int oldCount0,
 int newCount1);
private extern(C) void  qtd_QTableView_columnMoved_int_int_int(void* __this_nativeId,
 int column0,
 int oldIndex1,
 int newIndex2);
private extern(C) void  qtd_QTableView_columnResized_int_int_int(void* __this_nativeId,
 int column0,
 int oldWidth1,
 int newWidth2);
private extern(C) int  qtd_QTableView_columnSpan_int_int_const(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) int  qtd_QTableView_columnViewportPosition_int_const(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QTableView_columnWidth_int_const(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QTableView_gridStyle_const(void* __this_nativeId);
private extern(C) void  qtd_QTableView_hideColumn_int(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QTableView_hideRow_int(void* __this_nativeId,
 int row0);
private extern(C) void*  qtd_QTableView_horizontalHeader_const(void* __this_nativeId);
private extern(C) bool  qtd_QTableView_isColumnHidden_int_const(void* __this_nativeId,
 int column0);
private extern(C) bool  qtd_QTableView_isCornerButtonEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QTableView_isRowHidden_int_const(void* __this_nativeId,
 int row0);
private extern(C) bool  qtd_QTableView_isSortingEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QTableView_resizeColumnToContents_int(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QTableView_resizeColumnsToContents(void* __this_nativeId);
private extern(C) void  qtd_QTableView_resizeRowToContents_int(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QTableView_resizeRowsToContents(void* __this_nativeId);
private extern(C) int  qtd_QTableView_rowAt_int_const(void* __this_nativeId,
 int y0);
private extern(C) void  qtd_QTableView_rowCountChanged_int_int(void* __this_nativeId,
 int oldCount0,
 int newCount1);
private extern(C) int  qtd_QTableView_rowHeight_int_const(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QTableView_rowMoved_int_int_int(void* __this_nativeId,
 int row0,
 int oldIndex1,
 int newIndex2);
private extern(C) void  qtd_QTableView_rowResized_int_int_int(void* __this_nativeId,
 int row0,
 int oldHeight1,
 int newHeight2);
private extern(C) int  qtd_QTableView_rowSpan_int_int_const(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) int  qtd_QTableView_rowViewportPosition_int_const(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QTableView_selectColumn_int(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QTableView_selectRow_int(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QTableView_setColumnHidden_int_bool(void* __this_nativeId,
 int column0,
 bool hide1);
private extern(C) void  qtd_QTableView_setColumnWidth_int_int(void* __this_nativeId,
 int column0,
 int width1);
private extern(C) void  qtd_QTableView_setCornerButtonEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTableView_setGridStyle_PenStyle(void* __this_nativeId,
 int style0);
private extern(C) void  qtd_QTableView_setHorizontalHeader_QHeaderView(void* __this_nativeId,
 void* header0);
private extern(C) void  qtd_QTableView_setRowHeight_int_int(void* __this_nativeId,
 int row0,
 int height1);
private extern(C) void  qtd_QTableView_setRowHidden_int_bool(void* __this_nativeId,
 int row0,
 bool hide1);
private extern(C) void  qtd_QTableView_setShowGrid_bool(void* __this_nativeId,
 bool show0);
private extern(C) void  qtd_QTableView_setSortingEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTableView_setSpan_int_int_int_int(void* __this_nativeId,
 int row0,
 int column1,
 int rowSpan2,
 int columnSpan3);
private extern(C) void  qtd_QTableView_setVerticalHeader_QHeaderView(void* __this_nativeId,
 void* header0);
private extern(C) void  qtd_QTableView_setWordWrap_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QTableView_showColumn_int(void* __this_nativeId,
 int column0);
private extern(C) bool  qtd_QTableView_showGrid_const(void* __this_nativeId);
private extern(C) void  qtd_QTableView_showRow_int(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QTableView_sortByColumn_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) void*  qtd_QTableView_verticalHeader_const(void* __this_nativeId);
private extern(C) bool  qtd_QTableView_wordWrap_const(void* __this_nativeId);
private extern(C) void  qtd_QTableView_currentChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) current0,
 const(QModelIndexAccessor) previous1);
private extern(C) int  qtd_QTableView_horizontalOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QTableView_horizontalScrollbarAction_int(void* __this_nativeId,
 int action0);
private extern(C) void  qtd_QTableView_indexAt_QPoint_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint p0);
private extern(C) bool  qtd_QTableView_isIndexHidden_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QTableView_moveCursor_CursorAction_KeyboardModifiers(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int cursorAction0,
 int modifiers1);
private extern(C) void  qtd_QTableView_paintEvent_QPaintEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTableView_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QTableView_scrollTo_QModelIndex_ScrollHint(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int hint1);
private extern(C) void  qtd_QTableView_selectedIndexes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTableView_selectionChanged_QItemSelection_QItemSelection(void* __this_nativeId,
 void* selected0,
 void* deselected1);
private extern(C) void  qtd_QTableView_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0);
private extern(C) void  qtd_QTableView_setRootIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QTableView_setSelection_QRect_SelectionFlags(void* __this_nativeId,
 QRect rect0,
 int command1);
private extern(C) void  qtd_QTableView_setSelectionModel_QItemSelectionModel(void* __this_nativeId,
 void* selectionModel0);
private extern(C) int  qtd_QTableView_sizeHintForColumn_int_const(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QTableView_sizeHintForRow_int_const(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QTableView_timerEvent_QTimerEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QTableView_updateGeometries(void* __this_nativeId);
private extern(C) int  qtd_QTableView_verticalOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QTableView_verticalScrollbarAction_int(void* __this_nativeId,
 int action0);
private extern(C) void*  qtd_QTableView_viewOptions_const(void* __this_nativeId);
private extern(C) void  qtd_QTableView_visualRect_QModelIndex_const(void* __this_nativeId,
 QRect * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QTableView_visualRegionForSelection_QItemSelection_const(void* __this_nativeId,
 void* selection0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTableView_initCallBacks(void* virtuals);

extern(C) void static_init_QTableView() {
    qtd_QTableView_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QTableView_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTableView) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QTableView_activated_handle(void* dId, void** args) {
        auto d_object = cast(QTableView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QTableView_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QTableView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.clicked_emit(index0);
}*/
/*private extern(C) void qtd_QTableView_doubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTableView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.doubleClicked_emit(index0);
}*/
/*private extern(C) void qtd_QTableView_entered_handle(void* dId, void** args) {
        auto d_object = cast(QTableView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.entered_emit(index0);
}*/
/*private extern(C) void qtd_QTableView_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QTableView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.pressed_emit(index0);
}*/
/*private extern(C) void qtd_QTableView_viewportEntered_handle(void* dId, void** args) {
        auto d_object = cast(QTableView) dId;
        //d_object.viewportEntered_emit();
}*/

extern(C) QMetaObjectNative* qtd_QTableView_staticMetaObject();

extern(C) void qtd_QTableView_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTableView_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
