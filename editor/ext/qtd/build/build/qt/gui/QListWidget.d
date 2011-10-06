module qt.gui.QListWidget;

public import qt.gui.QListWidget_aux;
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
public import qt.core.QObject;
public import qt.gui.QResizeEvent;
public import qt.gui.QPaintEngine;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QActionEvent;
public import qt.core.QMimeData;
public import qt.gui.QShowEvent;
public import qt.gui.QWheelEvent;
public import qt.gui.QItemSelection;
public import qt.gui.QCloseEvent;
public import qt.gui.QListWidgetItem;
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
public import qt.gui.QListView;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QListWidget : QListView
{

    private static const string[] __signalSignatures = [
            "currentItemChanged(QListWidgetItem*,QListWidgetItem*)", 
            "currentRowChanged(int)", 
            "currentTextChanged(QString)", 
            "itemActivated(QListWidgetItem*)", 
            "itemChanged(QListWidgetItem*)", 
            "itemClicked(QListWidgetItem*)", 
            "itemDoubleClicked(QListWidgetItem*)", 
            "itemEntered(QListWidgetItem*)", 
            "itemPressed(QListWidgetItem*)", 
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

    protected final void currentItemChanged(QListWidgetItem current, QListWidgetItem previous) {
        qtd_QListWidget_currentItemChanged_QListWidgetItem_QListWidgetItem(qtdNativeId, current is null ? null : current.qtdNativeId, previous is null ? null : previous.qtdNativeId);
    }

    protected final void currentRowChanged(int currentRow) {
        qtd_QListWidget_currentRowChanged_int(qtdNativeId, currentRow);
    }

    protected final void currentTextChanged(string currentText) {
        qtd_QListWidget_currentTextChanged_string(qtdNativeId, currentText);
    }

    protected final void itemActivated(QListWidgetItem item) {
        qtd_QListWidget_itemActivated_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemChanged(QListWidgetItem item) {
        qtd_QListWidget_itemChanged_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemClicked(QListWidgetItem item) {
        qtd_QListWidget_itemClicked_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemDoubleClicked(QListWidgetItem item) {
        qtd_QListWidget_itemDoubleClicked_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemEntered(QListWidgetItem item) {
        qtd_QListWidget_itemEntered_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemPressed(QListWidgetItem item) {
        qtd_QListWidget_itemPressed_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemSelectionChanged() {
        qtd_QListWidget_itemSelectionChanged(qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QListWidget_QListWidget_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addItem(QListWidgetItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QListWidget_addItem_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void addItem(string label) {
        qtd_QListWidget_addItem_string(qtdNativeId, label);
    }

    public final void clear() {
        qtd_QListWidget_clear(qtdNativeId);
    }

    public final void closePersistentEditor(QListWidgetItem item) {
        qtd_QListWidget_closePersistentEditor_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final int count() const {
        return qtd_QListWidget_count_const(qtdNativeId);
    }

    public final QListWidgetItem currentItem() const {
        void* ret = qtd_QListWidget_currentItem_const(qtdNativeId);
        QListWidgetItem __d_return_value = qtd_QListWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final int currentRow() const {
        return qtd_QListWidget_currentRow_const(qtdNativeId);
    }

    public final void editItem(QListWidgetItem item) {
        qtd_QListWidget_editItem_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final QList!(QListWidgetItem) findItems(string text, int flags) const {
        auto res = QList!(QListWidgetItem).opCall();
        qtd_QListWidget_findItems_string_MatchFlags_const(qtdNativeId, &res, text, flags);
        return res;
    }

    protected final QModelIndex indexFromItem(QListWidgetItem item) const {
        QModelIndex res;
        qtd_QListWidget_indexFromItem_QListWidgetItem_const(qtdNativeId, &res, item is null ? null : item.qtdNativeId);
        return res;
    }

    public final void insertItem(int row, QListWidgetItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QListWidget_insertItem_int_QListWidgetItem(qtdNativeId, row, item is null ? null : item.qtdNativeId);
    }

    public final bool isSortingEnabled() const {
        return qtd_QListWidget_isSortingEnabled_const(qtdNativeId);
    }

    public final QListWidgetItem item(int row) const {
        void* ret = qtd_QListWidget_item_int_const(qtdNativeId, row);
        QListWidgetItem __d_return_value = qtd_QListWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QListWidgetItem itemAt(const(QPoint) p) const {
        void* ret = qtd_QListWidget_itemAt_QPoint_const(qtdNativeId, p);
        QListWidgetItem __d_return_value = qtd_QListWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QListWidgetItem itemAt(int x, int y) const {
        void* ret = qtd_QListWidget_itemAt_int_int_const(qtdNativeId, x, y);
        QListWidgetItem __d_return_value = qtd_QListWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    protected final QListWidgetItem itemFromIndex(const(QModelIndex) index) const {
        void* ret = qtd_QListWidget_itemFromIndex_QModelIndex_const(qtdNativeId, index);
        QListWidgetItem __d_return_value = qtd_QListWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QWidget itemWidget(QListWidgetItem item) const {
        void *ret = qtd_QListWidget_itemWidget_QListWidgetItem_const(qtdNativeId, item is null ? null : item.qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected final QList!(QListWidgetItem) items(QMimeData data) const {
        auto res = QList!(QListWidgetItem).opCall();
        qtd_QListWidget_items_QMimeData_const(qtdNativeId, &res, data is null ? null : (cast(QMimeData)data).qtdNativeId);
        return res;
    }

    public final void openPersistentEditor(QListWidgetItem item) {
        qtd_QListWidget_openPersistentEditor_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void removeItemWidget(QListWidgetItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.d);
        }
        qtd_QListWidget_removeItemWidget_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final int row(QListWidgetItem item) const {
        return qtd_QListWidget_row_QListWidgetItem_const(qtdNativeId, item is null ? null : (cast(QListWidgetItem)item).qtdNativeId);
    }

    public final void scrollToItem(QListWidgetItem item, QAbstractItemView.ScrollHint hint = QAbstractItemView.ScrollHint.EnsureVisible) {
        qtd_QListWidget_scrollToItem_QListWidgetItem_ScrollHint(qtdNativeId, item is null ? null : (cast(QListWidgetItem)item).qtdNativeId, hint);
    }

    public final QList!(QListWidgetItem) selectedItems() const {
        auto res = QList!(QListWidgetItem).opCall();
        qtd_QListWidget_selectedItems_const(qtdNativeId, &res);
        return res;
    }

    public final void setCurrentItem(QListWidgetItem item) {
        qtd_QListWidget_setCurrentItem_QListWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void setCurrentItem(QListWidgetItem item, int command) {
        qtd_QListWidget_setCurrentItem_QListWidgetItem_SelectionFlags(qtdNativeId, item is null ? null : item.qtdNativeId, command);
    }

    public final void setCurrentRow(int row) {
        qtd_QListWidget_setCurrentRow_int(qtdNativeId, row);
    }

    public final void setCurrentRow(int row, int command) {
        qtd_QListWidget_setCurrentRow_int_SelectionFlags(qtdNativeId, row, command);
    }

    public final void setItemWidget(QListWidgetItem item, QWidget widget) {
        qtd_QListWidget_setItemWidget_QListWidgetItem_QWidget(qtdNativeId, item is null ? null : item.qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    deprecated     public final void setModel(QAbstractItemModel model) {
        qtd_QListWidget_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
        // setModel() creates a new selection model for the object
        __rcItemSelectionModel = null;


    }

    public final void setSortingEnabled(bool enable) {
        qtd_QListWidget_setSortingEnabled_bool(qtdNativeId, enable);
    }

    public final void sortItems(Qt.SortOrder order = Qt.SortOrder.AscendingOrder) {
        qtd_QListWidget_sortItems_SortOrder(qtdNativeId, order);
    }

    public final QListWidgetItem takeItem(int row) {
        void* ret = qtd_QListWidget_takeItem_int(qtdNativeId, row);
        QListWidgetItem __d_return_value = qtd_QListWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QRect visualItemRect(QListWidgetItem item) const {
        QRect res;
        qtd_QListWidget_visualItemRect_QListWidgetItem_const(qtdNativeId, &res, item is null ? null : (cast(QListWidgetItem)item).qtdNativeId);
        return res;
    }

    protected void dropEvent(QDropEvent event) {
        qtd_QListWidget_dropEvent_QDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected bool dropMimeData(int index, QMimeData data, Qt.DropAction action) {
        return qtd_QListWidget_dropMimeData_int_QMimeData_DropAction(qtdNativeId, index, data is null ? null : (cast(QMimeData)data).qtdNativeId, action);
    }

    public bool event(QEvent e) {
        return qtd_QListWidget_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected QMimeData mimeData(QList!(QListWidgetItem) items) const {
        void *ret = qtd_QListWidget_mimeData_QList_const(qtdNativeId, &items);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    protected QList!(string) mimeTypes() const {
        auto res = QList!(string).opCall();
        qtd_QListWidget_mimeTypes_const(qtdNativeId, &res);
        return res;
    }

    protected int supportedDropActions() const {
        return qtd_QListWidget_supportedDropActions_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "clear()", 
            "scrollToItem(const QListWidgetItem*,QAbstractItemView::ScrollHint)", 
            "scrollToItem(const QListWidgetItem*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QListWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QListWidget);
    }

    static QListWidget __getObject(void* nativeId) {
        return static_cast!(QListWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QListWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QListWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QListWidget(nativeId, initFlags);
        QListWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QListWidgetItem,QListWidgetItem)("currentItemChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("currentRowChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(string)("currentTextChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(QListWidgetItem)("itemActivated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(QListWidgetItem)("itemChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(QListWidgetItem)("itemClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(QListWidgetItem)("itemDoubleClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(QListWidgetItem)("itemEntered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!(QListWidgetItem)("itemPressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[9]);
        mo.addMethod(new QMetaSignal(signature!()("itemSelectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QListWidgetItem,QAbstractItemView.ScrollHint)("scrollToItem"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(QListWidgetItem)("scrollToItem"), index));

    }

    public alias void __isQtType_QListWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /**
     * Inserts items with the text labels at the end of the list widget.
     *
     * @param labels The collection of labels for the new items.
     */
    public final void addItems(string[] labels) {
        foreach (label; labels)
            addItem(label);
    }

    /**
     * This is an overloaded member function, provided for convenience.
     * Inserts an item with the text label in the list widget at the position given by row.
     *
     * @param row The position in which to insert the new item.
     * @param label The text of the new item.
     */
    public final void insertItem(int row, string label) {
        insertItem(row, new QListWidgetItem(label, this));
    }

    /**
     * Inserts items from the list of labels into the list, starting at the given row.
     *
     * @param row The position in which to insert the new items.
     * @param labels The collection of labels for the new items.
     */
    public final void insertItems(int row, string[] labels) {
        foreach (label; labels)
            insertItem(row++, label);
    }

}

// C wrappers for signal emitters
private extern(C) void  qtd_QListWidget_currentItemChanged_QListWidgetItem_QListWidgetItem(void* __this_nativeId,
 void* current0,
 void* previous1);
private extern(C) void  qtd_QListWidget_currentRowChanged_int(void* __this_nativeId,
 int currentRow0);
private extern(C) void  qtd_QListWidget_currentTextChanged_string(void* __this_nativeId,
 string currentText0);
private extern(C) void  qtd_QListWidget_itemActivated_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_itemChanged_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_itemClicked_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_itemDoubleClicked_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_itemEntered_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_itemPressed_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_itemSelectionChanged(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QListWidget_QListWidget_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QListWidget_addItem_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_addItem_string(void* __this_nativeId,
 string label0);
private extern(C) void  qtd_QListWidget_clear(void* __this_nativeId);
private extern(C) void  qtd_QListWidget_closePersistentEditor_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) int  qtd_QListWidget_count_const(void* __this_nativeId);
private extern(C) void*  qtd_QListWidget_currentItem_const(void* __this_nativeId);
private extern(C) int  qtd_QListWidget_currentRow_const(void* __this_nativeId);
private extern(C) void  qtd_QListWidget_editItem_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_findItems_string_MatchFlags_const(void* __this_nativeId,
 void* __d_return_value,
 string text0,
 int flags1);
private extern(C) void  qtd_QListWidget_indexFromItem_QListWidgetItem_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 void* item0);
private extern(C) void  qtd_QListWidget_insertItem_int_QListWidgetItem(void* __this_nativeId,
 int row0,
 void* item1);
private extern(C) bool  qtd_QListWidget_isSortingEnabled_const(void* __this_nativeId);
private extern(C) void*  qtd_QListWidget_item_int_const(void* __this_nativeId,
 int row0);
private extern(C) void*  qtd_QListWidget_itemAt_QPoint_const(void* __this_nativeId,
 QPoint p0);
private extern(C) void*  qtd_QListWidget_itemAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void*  qtd_QListWidget_itemFromIndex_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QListWidget_itemWidget_QListWidgetItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_items_QMimeData_const(void* __this_nativeId,
 void* __d_return_value,
 void* data0);
private extern(C) void  qtd_QListWidget_openPersistentEditor_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_removeItemWidget_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) int  qtd_QListWidget_row_QListWidgetItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_scrollToItem_QListWidgetItem_ScrollHint(void* __this_nativeId,
 void* item0,
 int hint1);
private extern(C) void  qtd_QListWidget_selectedItems_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QListWidget_setCurrentItem_QListWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QListWidget_setCurrentItem_QListWidgetItem_SelectionFlags(void* __this_nativeId,
 void* item0,
 int command1);
private extern(C) void  qtd_QListWidget_setCurrentRow_int(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QListWidget_setCurrentRow_int_SelectionFlags(void* __this_nativeId,
 int row0,
 int command1);
private extern(C) void  qtd_QListWidget_setItemWidget_QListWidgetItem_QWidget(void* __this_nativeId,
 void* item0,
 void* widget1);
    deprecated final void  qtd_QListWidget_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0)
    {
        throw new Exception("No Implementation Exception");
    }

private extern(C) void  qtd_QListWidget_setSortingEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QListWidget_sortItems_SortOrder(void* __this_nativeId,
 int order0);
private extern(C) void*  qtd_QListWidget_takeItem_int(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QListWidget_visualItemRect_QListWidgetItem_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* item0);
private extern(C) void  qtd_QListWidget_dropEvent_QDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QListWidget_dropMimeData_int_QMimeData_DropAction(void* __this_nativeId,
 int index0,
 void* data1,
 int action2);
private extern(C) bool  qtd_QListWidget_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void*  qtd_QListWidget_mimeData_QList_const(void* __this_nativeId,
 void* items0);
private extern(C) void  qtd_QListWidget_mimeTypes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QListWidget_supportedDropActions_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, int index0, void* data1, int action2) qtd_QListWidget_dropMimeData_int_QMimeData_DropAction_dispatch; }
extern(C) bool qtd_export_QListWidget_dropMimeData_int_QMimeData_DropAction_dispatch(void *dId, int index0, void* data1, int action2){
    auto d_object = cast(QListWidget) dId;
    scope data1_d_ref = new QMimeData(data1, QtdObjectInitFlags.onStack);

    auto action2_enum = cast(Qt.DropAction) action2;
    auto return_value = d_object.dropMimeData(index0, data1_d_ref, action2_enum);
    return return_value;
}

extern(C){ extern void* function(void *dId, void* items0) qtd_QListWidget_mimeData_QList_const_dispatch; }
extern(C) void* qtd_export_QListWidget_mimeData_QList_const_dispatch(void *dId, void* items0){
    auto d_object = cast(QListWidget) dId;
    auto items0_d_ref = cast(QList!(QListWidgetItem)*)items0;

    QMimeData ret_value = d_object.mimeData(*items0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, QList!(string)* __d_arr) qtd_QListWidget_mimeTypes_const_dispatch; }
extern(C) void qtd_export_QListWidget_mimeTypes_const_dispatch(void *dId, QList!(string)* __d_arr){
    auto d_object = cast(QListWidget) dId;
    auto return_value = d_object.mimeTypes();
    *__d_arr = return_value;
}

extern(C){ extern int function(void *dId) qtd_QListWidget_supportedDropActions_const_dispatch; }
extern(C) int qtd_export_QListWidget_supportedDropActions_const_dispatch(void *dId){
    auto d_object = cast(QListWidget) dId;
    auto return_value = d_object.supportedDropActions();
    return return_value;
}

private extern (C) void qtd_QListWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QListWidget() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QListWidget_dropMimeData_int_QMimeData_DropAction_dispatch;
    virt_arr[1] = &qtd_export_QListWidget_mimeData_QList_const_dispatch;
    virt_arr[2] = &qtd_export_QListWidget_mimeTypes_const_dispatch;
    virt_arr[3] = &qtd_export_QListWidget_supportedDropActions_const_dispatch;
    qtd_QListWidget_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QListWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QListWidget_activated_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QListWidget_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.clicked_emit(index0);
}*/
/*private extern(C) void qtd_QListWidget_doubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.doubleClicked_emit(index0);
}*/
/*private extern(C) void qtd_QListWidget_entered_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.entered_emit(index0);
}*/
/*private extern(C) void qtd_QListWidget_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.pressed_emit(index0);
}*/
/*private extern(C) void qtd_QListWidget_viewportEntered_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        //d_object.viewportEntered_emit();
}*/
/*private extern(C) void qtd_QListWidget_indexesMoved_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        QList!(QModelIndex) indexes0;
        qtd_qt_gui_QModelIndex_fromcpp_QList(args[1], &indexes0);

        //d_object.indexesMoved_emit(indexes0);
}*/
/*private extern(C) void qtd_QListWidget_currentItemChanged_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        scope current0 = new QListWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope previous1 = new QListWidgetItem(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.currentItemChanged_emit(current0, previous1);
}*/
/*private extern(C) void qtd_QListWidget_currentRowChanged_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        auto currentRow0 = *(cast(int*)args[1]);
        //d_object.currentRowChanged_emit(currentRow0);
}*/
/*private extern(C) void qtd_QListWidget_currentTextChanged_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        auto currentText0_ptr = args[1];
        string currentText0 = QStringUtil.toNativeString(currentText0_ptr);
        //d_object.currentTextChanged_emit(currentText0);
}*/
/*private extern(C) void qtd_QListWidget_itemActivated_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        scope item0 = new QListWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemActivated_emit(item0);
}*/
/*private extern(C) void qtd_QListWidget_itemChanged_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        scope item0 = new QListWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemChanged_emit(item0);
}*/
/*private extern(C) void qtd_QListWidget_itemClicked_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        scope item0 = new QListWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemClicked_emit(item0);
}*/
/*private extern(C) void qtd_QListWidget_itemDoubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        scope item0 = new QListWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemDoubleClicked_emit(item0);
}*/
/*private extern(C) void qtd_QListWidget_itemEntered_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        scope item0 = new QListWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemEntered_emit(item0);
}*/
/*private extern(C) void qtd_QListWidget_itemPressed_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        scope item0 = new QListWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemPressed_emit(item0);
}*/
/*private extern(C) void qtd_QListWidget_itemSelectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QListWidget) dId;
        //d_object.itemSelectionChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QListWidget_staticMetaObject();

extern(C) void qtd_QListWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QListWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
