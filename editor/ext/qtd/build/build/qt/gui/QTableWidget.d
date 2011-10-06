module qt.gui.QTableWidget;

public import qt.gui.QTableWidget_aux;
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
public import qt.gui.QTableWidgetItem;
public import qt.gui.QKeyEvent;
public import qt.gui.QTableWidgetSelectionRange;
public import qt.core.QObject;
public import qt.gui.QResizeEvent;
public import qt.gui.QPaintEngine;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QTableView;
public import qt.core.QMimeData;
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


public class QTableWidget : QTableView
{

    private static const string[] __signalSignatures = [
            "cellActivated(int,int)", 
            "cellChanged(int,int)", 
            "cellClicked(int,int)", 
            "cellDoubleClicked(int,int)", 
            "cellEntered(int,int)", 
            "cellPressed(int,int)", 
            "currentCellChanged(int,int,int,int)", 
            "currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)", 
            "itemActivated(QTableWidgetItem*)", 
            "itemChanged(QTableWidgetItem*)", 
            "itemClicked(QTableWidgetItem*)", 
            "itemDoubleClicked(QTableWidgetItem*)", 
            "itemEntered(QTableWidgetItem*)", 
            "itemPressed(QTableWidgetItem*)", 
            "itemSelectionChanged()"    ];

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

    protected final void cellActivated(int row, int column) {
        qtd_QTableWidget_cellActivated_int_int(qtdNativeId, row, column);
    }

    protected final void cellChanged(int row, int column) {
        qtd_QTableWidget_cellChanged_int_int(qtdNativeId, row, column);
    }

    protected final void cellClicked(int row, int column) {
        qtd_QTableWidget_cellClicked_int_int(qtdNativeId, row, column);
    }

    protected final void cellDoubleClicked(int row, int column) {
        qtd_QTableWidget_cellDoubleClicked_int_int(qtdNativeId, row, column);
    }

    protected final void cellEntered(int row, int column) {
        qtd_QTableWidget_cellEntered_int_int(qtdNativeId, row, column);
    }

    protected final void cellPressed(int row, int column) {
        qtd_QTableWidget_cellPressed_int_int(qtdNativeId, row, column);
    }

    protected final void currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn) {
        qtd_QTableWidget_currentCellChanged_int_int_int_int(qtdNativeId, currentRow, currentColumn, previousRow, previousColumn);
    }

    protected final void currentItemChanged(QTableWidgetItem current, QTableWidgetItem previous) {
        qtd_QTableWidget_currentItemChanged_QTableWidgetItem_QTableWidgetItem(qtdNativeId, current is null ? null : current.qtdNativeId, previous is null ? null : previous.qtdNativeId);
    }

    protected final void itemActivated(QTableWidgetItem item) {
        qtd_QTableWidget_itemActivated_QTableWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemChanged(QTableWidgetItem item) {
        qtd_QTableWidget_itemChanged_QTableWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemClicked(QTableWidgetItem item) {
        qtd_QTableWidget_itemClicked_QTableWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemDoubleClicked(QTableWidgetItem item) {
        qtd_QTableWidget_itemDoubleClicked_QTableWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemEntered(QTableWidgetItem item) {
        qtd_QTableWidget_itemEntered_QTableWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemPressed(QTableWidgetItem item) {
        qtd_QTableWidget_itemPressed_QTableWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemSelectionChanged() {
        qtd_QTableWidget_itemSelectionChanged(qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QTableWidget_QTableWidget_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int rows, int columns, QWidget parent_ = null) {
        void* ret = qtd_QTableWidget_QTableWidget_int_int_QWidget(cast(void*) this, rows, columns, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QWidget cellWidget(int row, int column) const {
        void *ret = qtd_QTableWidget_cellWidget_int_int_const(qtdNativeId, row, column);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void clear() {
        qtd_QTableWidget_clear(qtdNativeId);
    }

    public final void clearContents() {
        qtd_QTableWidget_clearContents(qtdNativeId);
    }

    public final void closePersistentEditor(QTableWidgetItem item) {
        qtd_QTableWidget_closePersistentEditor_QTableWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final int column(QTableWidgetItem item) const {
        return qtd_QTableWidget_column_QTableWidgetItem_const(qtdNativeId, item is null ? null : (cast(QTableWidgetItem)item).qtdNativeId);
    }

    public final int columnCount() const {
        return qtd_QTableWidget_columnCount_const(qtdNativeId);
    }

    public final int currentColumn() const {
        return qtd_QTableWidget_currentColumn_const(qtdNativeId);
    }

    public final QTableWidgetItem currentItem() const {
        void* ret = qtd_QTableWidget_currentItem_const(qtdNativeId);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final int currentRow() const {
        return qtd_QTableWidget_currentRow_const(qtdNativeId);
    }

    public final void editItem(QTableWidgetItem item) {
        qtd_QTableWidget_editItem_QTableWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final QList!(QTableWidgetItem) findItems(string text, int flags) const {
        auto res = QList!(QTableWidgetItem).opCall();
        qtd_QTableWidget_findItems_string_MatchFlags_const(qtdNativeId, &res, text, flags);
        return res;
    }

    public final QTableWidgetItem horizontalHeaderItem(int column) const {
        void* ret = qtd_QTableWidget_horizontalHeaderItem_int_const(qtdNativeId, column);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    protected final QModelIndex indexFromItem(QTableWidgetItem item) const {
        QModelIndex res;
        qtd_QTableWidget_indexFromItem_QTableWidgetItem_const(qtdNativeId, &res, item is null ? null : item.qtdNativeId);
        return res;
    }

    public final void insertColumn(int column) {
        qtd_QTableWidget_insertColumn_int(qtdNativeId, column);
    }

    public final void insertRow(int row) {
        qtd_QTableWidget_insertRow_int(qtdNativeId, row);
    }

    public final QTableWidgetItem item(int row, int column) const {
        void* ret = qtd_QTableWidget_item_int_int_const(qtdNativeId, row, column);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QTableWidgetItem itemAt(const(QPoint) p) const {
        void* ret = qtd_QTableWidget_itemAt_QPoint_const(qtdNativeId, p);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QTableWidgetItem itemAt(int x, int y) const {
        void* ret = qtd_QTableWidget_itemAt_int_int_const(qtdNativeId, x, y);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    protected final QTableWidgetItem itemFromIndex(const(QModelIndex) index) const {
        void* ret = qtd_QTableWidget_itemFromIndex_QModelIndex_const(qtdNativeId, index);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QTableWidgetItem itemPrototype() const {
        void* ret = qtd_QTableWidget_itemPrototype_const(qtdNativeId);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    protected final QList!(QTableWidgetItem) items(QMimeData data) const {
        auto res = QList!(QTableWidgetItem).opCall();
        qtd_QTableWidget_items_QMimeData_const(qtdNativeId, &res, data is null ? null : (cast(QMimeData)data).qtdNativeId);
        return res;
    }

    public final void openPersistentEditor(QTableWidgetItem item) {
        qtd_QTableWidget_openPersistentEditor_QTableWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void removeCellWidget(int row, int column) {
        qtd_QTableWidget_removeCellWidget_int_int(qtdNativeId, row, column);
    }

    public final void removeColumn(int column) {
        qtd_QTableWidget_removeColumn_int(qtdNativeId, column);
    }

    public final void removeRow(int row) {
        qtd_QTableWidget_removeRow_int(qtdNativeId, row);
    }

    public final int row(QTableWidgetItem item) const {
        return qtd_QTableWidget_row_QTableWidgetItem_const(qtdNativeId, item is null ? null : (cast(QTableWidgetItem)item).qtdNativeId);
    }

    public final int rowCount() const {
        return qtd_QTableWidget_rowCount_const(qtdNativeId);
    }

    public final void scrollToItem(QTableWidgetItem item, QAbstractItemView.ScrollHint hint = QAbstractItemView.ScrollHint.EnsureVisible) {
        qtd_QTableWidget_scrollToItem_QTableWidgetItem_ScrollHint(qtdNativeId, item is null ? null : (cast(QTableWidgetItem)item).qtdNativeId, hint);
    }

    public final QList!(QTableWidgetItem) selectedItems() {
        auto res = QList!(QTableWidgetItem).opCall();
        qtd_QTableWidget_selectedItems(qtdNativeId, &res);
        return res;
    }

    public final QList!(QTableWidgetSelectionRange) selectedRanges() const {
        auto res = QList!(QTableWidgetSelectionRange).opCall();
        qtd_QTableWidget_selectedRanges_const(qtdNativeId, &res);
        return res;
    }

    public final void setCellWidget(int row, int column, QWidget widget) {
        qtd_QTableWidget_setCellWidget_int_int_QWidget(qtdNativeId, row, column, widget is null ? null : widget.qtdNativeId);
    }

    public final void setColumnCount(int columns) {
        qtd_QTableWidget_setColumnCount_int(qtdNativeId, columns);
    }

    public final void setCurrentCell(int row, int column) {
        qtd_QTableWidget_setCurrentCell_int_int(qtdNativeId, row, column);
    }

    public final void setCurrentCell(int row, int column, int command) {
        qtd_QTableWidget_setCurrentCell_int_int_SelectionFlags(qtdNativeId, row, column, command);
    }

    public final void setCurrentItem(QTableWidgetItem item) {
        qtd_QTableWidget_setCurrentItem_QTableWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void setCurrentItem(QTableWidgetItem item, int command) {
        qtd_QTableWidget_setCurrentItem_QTableWidgetItem_SelectionFlags(qtdNativeId, item is null ? null : item.qtdNativeId, command);
    }

    public final void setHorizontalHeaderItem(int column, QTableWidgetItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTableWidget_setHorizontalHeaderItem_int_QTableWidgetItem(qtdNativeId, column, item is null ? null : item.qtdNativeId);
    }

    public final void setHorizontalHeaderLabels(QList!(string) labels) {
        qtd_QTableWidget_setHorizontalHeaderLabels_QList(qtdNativeId, &labels);
    }

    public final void setItem(int row, int column, QTableWidgetItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTableWidget_setItem_int_int_QTableWidgetItem(qtdNativeId, row, column, item is null ? null : item.qtdNativeId);
    }

    public final void setItemPrototype(QTableWidgetItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTableWidget_setItemPrototype_QTableWidgetItem(qtdNativeId, item is null ? null : (cast(QTableWidgetItem)item).qtdNativeId);
    }

    deprecated     public final void setModel(QAbstractItemModel model) {
        qtd_QTableWidget_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
        // setModel() creates a new selection model for the object
        __rcItemSelectionModel = null;


    }

    public final void setRangeSelected(const(QTableWidgetSelectionRange) range, bool select) {
        qtd_QTableWidget_setRangeSelected_QTableWidgetSelectionRange_bool(qtdNativeId, range is null ? null : (cast(QTableWidgetSelectionRange)range).qtdNativeId, select);
    }

    public final void setRowCount(int rows) {
        qtd_QTableWidget_setRowCount_int(qtdNativeId, rows);
    }

    public final void setVerticalHeaderItem(int row, QTableWidgetItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTableWidget_setVerticalHeaderItem_int_QTableWidgetItem(qtdNativeId, row, item is null ? null : item.qtdNativeId);
    }

    public final void setVerticalHeaderLabels(QList!(string) labels) {
        qtd_QTableWidget_setVerticalHeaderLabels_QList(qtdNativeId, &labels);
    }

    public final void sortItems(int column, Qt.SortOrder order = Qt.SortOrder.AscendingOrder) {
        qtd_QTableWidget_sortItems_int_SortOrder(qtdNativeId, column, order);
    }

    public final QTableWidgetItem takeHorizontalHeaderItem(int column) {
        void* ret = qtd_QTableWidget_takeHorizontalHeaderItem_int(qtdNativeId, column);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QTableWidgetItem takeItem(int row, int column) {
        void* ret = qtd_QTableWidget_takeItem_int_int(qtdNativeId, row, column);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QTableWidgetItem takeVerticalHeaderItem(int row) {
        void* ret = qtd_QTableWidget_takeVerticalHeaderItem_int(qtdNativeId, row);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QTableWidgetItem verticalHeaderItem(int row) const {
        void* ret = qtd_QTableWidget_verticalHeaderItem_int_const(qtdNativeId, row);
        QTableWidgetItem __d_return_value = qtd_QTableWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final int visualColumn(int logicalColumn) const {
        return qtd_QTableWidget_visualColumn_int_const(qtdNativeId, logicalColumn);
    }

    public final QRect visualItemRect(QTableWidgetItem item) const {
        QRect res;
        qtd_QTableWidget_visualItemRect_QTableWidgetItem_const(qtdNativeId, &res, item is null ? null : (cast(QTableWidgetItem)item).qtdNativeId);
        return res;
    }

    public final int visualRow(int logicalRow) const {
        return qtd_QTableWidget_visualRow_int_const(qtdNativeId, logicalRow);
    }

    protected void dropEvent(QDropEvent event) {
        qtd_QTableWidget_dropEvent_QDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected bool dropMimeData(int row, int column, QMimeData data, Qt.DropAction action) {
        return qtd_QTableWidget_dropMimeData_int_int_QMimeData_DropAction(qtdNativeId, row, column, data is null ? null : (cast(QMimeData)data).qtdNativeId, action);
    }

    public bool event(QEvent e) {
        return qtd_QTableWidget_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected QMimeData mimeData(QList!(QTableWidgetItem) items) const {
        void *ret = qtd_QTableWidget_mimeData_QList_const(qtdNativeId, &items);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    protected QList!(string) mimeTypes() const {
        auto res = QList!(string).opCall();
        qtd_QTableWidget_mimeTypes_const(qtdNativeId, &res);
        return res;
    }

    protected int supportedDropActions() const {
        return qtd_QTableWidget_supportedDropActions_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "clear()", 
            "clearContents()", 
            "insertColumn(int)", 
            "insertRow(int)", 
            "removeColumn(int)", 
            "removeRow(int)", 
            "scrollToItem(const QTableWidgetItem*,QAbstractItemView::ScrollHint)", 
            "scrollToItem(const QTableWidgetItem*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTableWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTableWidget);
    }

    static QTableWidget __getObject(void* nativeId) {
        return static_cast!(QTableWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTableWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTableWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTableWidget(nativeId, initFlags);
        QTableWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("cellActivated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("cellChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("cellClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("cellDoubleClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("cellEntered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("cellPressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(int,int,int,int)("currentCellChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(QTableWidgetItem,QTableWidgetItem)("currentItemChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!(QTableWidgetItem)("itemActivated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[9]);
        mo.addMethod(new QMetaSignal(signature!(QTableWidgetItem)("itemChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[10]);
        mo.addMethod(new QMetaSignal(signature!(QTableWidgetItem)("itemClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[11]);
        mo.addMethod(new QMetaSignal(signature!(QTableWidgetItem)("itemDoubleClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[12]);
        mo.addMethod(new QMetaSignal(signature!(QTableWidgetItem)("itemEntered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[13]);
        mo.addMethod(new QMetaSignal(signature!(QTableWidgetItem)("itemPressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[14]);
        mo.addMethod(new QMetaSignal(signature!()("itemSelectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("clearContents"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(int)("insertColumn"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(int)("insertRow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(int)("removeColumn"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(int)("removeRow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(QTableWidgetItem,QAbstractItemView.ScrollHint)("scrollToItem"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!(QTableWidgetItem)("scrollToItem"), index));

    }

    public alias void __isQtType_QTableWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTableWidget_cellActivated_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QTableWidget_cellChanged_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QTableWidget_cellClicked_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QTableWidget_cellDoubleClicked_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QTableWidget_cellEntered_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QTableWidget_cellPressed_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QTableWidget_currentCellChanged_int_int_int_int(void* __this_nativeId,
 int currentRow0,
 int currentColumn1,
 int previousRow2,
 int previousColumn3);
private extern(C) void  qtd_QTableWidget_currentItemChanged_QTableWidgetItem_QTableWidgetItem(void* __this_nativeId,
 void* current0,
 void* previous1);
private extern(C) void  qtd_QTableWidget_itemActivated_QTableWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTableWidget_itemChanged_QTableWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTableWidget_itemClicked_QTableWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTableWidget_itemDoubleClicked_QTableWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTableWidget_itemEntered_QTableWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTableWidget_itemPressed_QTableWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTableWidget_itemSelectionChanged(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QTableWidget_QTableWidget_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QTableWidget_QTableWidget_int_int_QWidget(void *d_ptr,
 int rows0,
 int columns1,
 void* parent2);
private extern(C) void*  qtd_QTableWidget_cellWidget_int_int_const(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QTableWidget_clear(void* __this_nativeId);
private extern(C) void  qtd_QTableWidget_clearContents(void* __this_nativeId);
private extern(C) void  qtd_QTableWidget_closePersistentEditor_QTableWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) int  qtd_QTableWidget_column_QTableWidgetItem_const(void* __this_nativeId,
 void* item0);
private extern(C) int  qtd_QTableWidget_columnCount_const(void* __this_nativeId);
private extern(C) int  qtd_QTableWidget_currentColumn_const(void* __this_nativeId);
private extern(C) void*  qtd_QTableWidget_currentItem_const(void* __this_nativeId);
private extern(C) int  qtd_QTableWidget_currentRow_const(void* __this_nativeId);
private extern(C) void  qtd_QTableWidget_editItem_QTableWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTableWidget_findItems_string_MatchFlags_const(void* __this_nativeId,
 void* __d_return_value,
 string text0,
 int flags1);
private extern(C) void*  qtd_QTableWidget_horizontalHeaderItem_int_const(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QTableWidget_indexFromItem_QTableWidgetItem_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 void* item0);
private extern(C) void  qtd_QTableWidget_insertColumn_int(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QTableWidget_insertRow_int(void* __this_nativeId,
 int row0);
private extern(C) void*  qtd_QTableWidget_item_int_int_const(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void*  qtd_QTableWidget_itemAt_QPoint_const(void* __this_nativeId,
 QPoint p0);
private extern(C) void*  qtd_QTableWidget_itemAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void*  qtd_QTableWidget_itemFromIndex_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QTableWidget_itemPrototype_const(void* __this_nativeId);
private extern(C) void  qtd_QTableWidget_items_QMimeData_const(void* __this_nativeId,
 void* __d_return_value,
 void* data0);
private extern(C) void  qtd_QTableWidget_openPersistentEditor_QTableWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTableWidget_removeCellWidget_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QTableWidget_removeColumn_int(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QTableWidget_removeRow_int(void* __this_nativeId,
 int row0);
private extern(C) int  qtd_QTableWidget_row_QTableWidgetItem_const(void* __this_nativeId,
 void* item0);
private extern(C) int  qtd_QTableWidget_rowCount_const(void* __this_nativeId);
private extern(C) void  qtd_QTableWidget_scrollToItem_QTableWidgetItem_ScrollHint(void* __this_nativeId,
 void* item0,
 int hint1);
private extern(C) void  qtd_QTableWidget_selectedItems(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTableWidget_selectedRanges_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTableWidget_setCellWidget_int_int_QWidget(void* __this_nativeId,
 int row0,
 int column1,
 void* widget2);
private extern(C) void  qtd_QTableWidget_setColumnCount_int(void* __this_nativeId,
 int columns0);
private extern(C) void  qtd_QTableWidget_setCurrentCell_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QTableWidget_setCurrentCell_int_int_SelectionFlags(void* __this_nativeId,
 int row0,
 int column1,
 int command2);
private extern(C) void  qtd_QTableWidget_setCurrentItem_QTableWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTableWidget_setCurrentItem_QTableWidgetItem_SelectionFlags(void* __this_nativeId,
 void* item0,
 int command1);
private extern(C) void  qtd_QTableWidget_setHorizontalHeaderItem_int_QTableWidgetItem(void* __this_nativeId,
 int column0,
 void* item1);
private extern(C) void  qtd_QTableWidget_setHorizontalHeaderLabels_QList(void* __this_nativeId,
 void* labels0);
private extern(C) void  qtd_QTableWidget_setItem_int_int_QTableWidgetItem(void* __this_nativeId,
 int row0,
 int column1,
 void* item2);
private extern(C) void  qtd_QTableWidget_setItemPrototype_QTableWidgetItem(void* __this_nativeId,
 void* item0);
    deprecated final void  qtd_QTableWidget_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0)
    {
        throw new Exception("No Implementation Exception");
    }

private extern(C) void  qtd_QTableWidget_setRangeSelected_QTableWidgetSelectionRange_bool(void* __this_nativeId,
 void* range0,
 bool select1);
private extern(C) void  qtd_QTableWidget_setRowCount_int(void* __this_nativeId,
 int rows0);
private extern(C) void  qtd_QTableWidget_setVerticalHeaderItem_int_QTableWidgetItem(void* __this_nativeId,
 int row0,
 void* item1);
private extern(C) void  qtd_QTableWidget_setVerticalHeaderLabels_QList(void* __this_nativeId,
 void* labels0);
private extern(C) void  qtd_QTableWidget_sortItems_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) void*  qtd_QTableWidget_takeHorizontalHeaderItem_int(void* __this_nativeId,
 int column0);
private extern(C) void*  qtd_QTableWidget_takeItem_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void*  qtd_QTableWidget_takeVerticalHeaderItem_int(void* __this_nativeId,
 int row0);
private extern(C) void*  qtd_QTableWidget_verticalHeaderItem_int_const(void* __this_nativeId,
 int row0);
private extern(C) int  qtd_QTableWidget_visualColumn_int_const(void* __this_nativeId,
 int logicalColumn0);
private extern(C) void  qtd_QTableWidget_visualItemRect_QTableWidgetItem_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* item0);
private extern(C) int  qtd_QTableWidget_visualRow_int_const(void* __this_nativeId,
 int logicalRow0);
private extern(C) void  qtd_QTableWidget_dropEvent_QDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QTableWidget_dropMimeData_int_int_QMimeData_DropAction(void* __this_nativeId,
 int row0,
 int column1,
 void* data2,
 int action3);
private extern(C) bool  qtd_QTableWidget_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void*  qtd_QTableWidget_mimeData_QList_const(void* __this_nativeId,
 void* items0);
private extern(C) void  qtd_QTableWidget_mimeTypes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QTableWidget_supportedDropActions_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, int row0, int column1, void* data2, int action3) qtd_QTableWidget_dropMimeData_int_int_QMimeData_DropAction_dispatch; }
extern(C) bool qtd_export_QTableWidget_dropMimeData_int_int_QMimeData_DropAction_dispatch(void *dId, int row0, int column1, void* data2, int action3){
    auto d_object = cast(QTableWidget) dId;
    scope data2_d_ref = new QMimeData(data2, QtdObjectInitFlags.onStack);

    auto action3_enum = cast(Qt.DropAction) action3;
    auto return_value = d_object.dropMimeData(row0, column1, data2_d_ref, action3_enum);
    return return_value;
}

extern(C){ extern void* function(void *dId, void* items0) qtd_QTableWidget_mimeData_QList_const_dispatch; }
extern(C) void* qtd_export_QTableWidget_mimeData_QList_const_dispatch(void *dId, void* items0){
    auto d_object = cast(QTableWidget) dId;
    auto items0_d_ref = cast(QList!(QTableWidgetItem)*)items0;

    QMimeData ret_value = d_object.mimeData(*items0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, QList!(string)* __d_arr) qtd_QTableWidget_mimeTypes_const_dispatch; }
extern(C) void qtd_export_QTableWidget_mimeTypes_const_dispatch(void *dId, QList!(string)* __d_arr){
    auto d_object = cast(QTableWidget) dId;
    auto return_value = d_object.mimeTypes();
    *__d_arr = return_value;
}

extern(C){ extern int function(void *dId) qtd_QTableWidget_supportedDropActions_const_dispatch; }
extern(C) int qtd_export_QTableWidget_supportedDropActions_const_dispatch(void *dId){
    auto d_object = cast(QTableWidget) dId;
    auto return_value = d_object.supportedDropActions();
    return return_value;
}

private extern (C) void qtd_QTableWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QTableWidget() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QTableWidget_dropMimeData_int_int_QMimeData_DropAction_dispatch;
    virt_arr[1] = &qtd_export_QTableWidget_mimeData_QList_const_dispatch;
    virt_arr[2] = &qtd_export_QTableWidget_mimeTypes_const_dispatch;
    virt_arr[3] = &qtd_export_QTableWidget_supportedDropActions_const_dispatch;
    qtd_QTableWidget_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QTableWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QTableWidget_activated_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QTableWidget_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.clicked_emit(index0);
}*/
/*private extern(C) void qtd_QTableWidget_doubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.doubleClicked_emit(index0);
}*/
/*private extern(C) void qtd_QTableWidget_entered_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.entered_emit(index0);
}*/
/*private extern(C) void qtd_QTableWidget_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.pressed_emit(index0);
}*/
/*private extern(C) void qtd_QTableWidget_viewportEntered_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        //d_object.viewportEntered_emit();
}*/
/*private extern(C) void qtd_QTableWidget_cellActivated_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto row0 = *(cast(int*)args[1]);
        auto column1 = *(cast(int*)args[2]);
        //d_object.cellActivated_emit(row0, column1);
}*/
/*private extern(C) void qtd_QTableWidget_cellChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto row0 = *(cast(int*)args[1]);
        auto column1 = *(cast(int*)args[2]);
        //d_object.cellChanged_emit(row0, column1);
}*/
/*private extern(C) void qtd_QTableWidget_cellClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto row0 = *(cast(int*)args[1]);
        auto column1 = *(cast(int*)args[2]);
        //d_object.cellClicked_emit(row0, column1);
}*/
/*private extern(C) void qtd_QTableWidget_cellDoubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto row0 = *(cast(int*)args[1]);
        auto column1 = *(cast(int*)args[2]);
        //d_object.cellDoubleClicked_emit(row0, column1);
}*/
/*private extern(C) void qtd_QTableWidget_cellEntered_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto row0 = *(cast(int*)args[1]);
        auto column1 = *(cast(int*)args[2]);
        //d_object.cellEntered_emit(row0, column1);
}*/
/*private extern(C) void qtd_QTableWidget_cellPressed_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto row0 = *(cast(int*)args[1]);
        auto column1 = *(cast(int*)args[2]);
        //d_object.cellPressed_emit(row0, column1);
}*/
/*private extern(C) void qtd_QTableWidget_currentCellChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        auto currentRow0 = *(cast(int*)args[1]);
        auto currentColumn1 = *(cast(int*)args[2]);
        auto previousRow2 = *(cast(int*)args[3]);
        auto previousColumn3 = *(cast(int*)args[4]);
        //d_object.currentCellChanged_emit(currentRow0, currentColumn1, previousRow2, previousColumn3);
}*/
/*private extern(C) void qtd_QTableWidget_currentItemChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        scope current0 = new QTableWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope previous1 = new QTableWidgetItem(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.currentItemChanged_emit(current0, previous1);
}*/
/*private extern(C) void qtd_QTableWidget_itemActivated_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        scope item0 = new QTableWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemActivated_emit(item0);
}*/
/*private extern(C) void qtd_QTableWidget_itemChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        scope item0 = new QTableWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemChanged_emit(item0);
}*/
/*private extern(C) void qtd_QTableWidget_itemClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        scope item0 = new QTableWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemClicked_emit(item0);
}*/
/*private extern(C) void qtd_QTableWidget_itemDoubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        scope item0 = new QTableWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemDoubleClicked_emit(item0);
}*/
/*private extern(C) void qtd_QTableWidget_itemEntered_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        scope item0 = new QTableWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemEntered_emit(item0);
}*/
/*private extern(C) void qtd_QTableWidget_itemPressed_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        scope item0 = new QTableWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemPressed_emit(item0);
}*/
/*private extern(C) void qtd_QTableWidget_itemSelectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTableWidget) dId;
        //d_object.itemSelectionChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QTableWidget_staticMetaObject();

extern(C) void qtd_QTableWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTableWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
