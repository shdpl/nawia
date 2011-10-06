module qt.gui.QTreeWidget;

public import qt.gui.QTreeWidget_aux;
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
public import qt.gui.QTreeView;
public import qt.core.QObject;
public import qt.gui.QPainter;
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
public import qt.gui.QTreeWidgetItem;
public import qt.gui.QWidget;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QRegion;
public import qt.gui.QDragLeaveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTreeWidget : QTreeView
{

    private static const string[] __signalSignatures = [
            "currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)", 
            "itemActivated(QTreeWidgetItem*,int)", 
            "itemChanged(QTreeWidgetItem*,int)", 
            "itemClicked(QTreeWidgetItem*,int)", 
            "itemCollapsed(QTreeWidgetItem*)", 
            "itemDoubleClicked(QTreeWidgetItem*,int)", 
            "itemEntered(QTreeWidgetItem*,int)", 
            "itemExpanded(QTreeWidgetItem*)", 
            "itemPressed(QTreeWidgetItem*,int)", 
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

    protected final void currentItemChanged(QTreeWidgetItem current, QTreeWidgetItem previous) {
        qtd_QTreeWidget_currentItemChanged_QTreeWidgetItem_QTreeWidgetItem(qtdNativeId, current is null ? null : current.qtdNativeId, previous is null ? null : previous.qtdNativeId);
    }

    protected final void itemActivated(QTreeWidgetItem item, int column) {
        qtd_QTreeWidget_itemActivated_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    protected final void itemChanged(QTreeWidgetItem item, int column) {
        qtd_QTreeWidget_itemChanged_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    protected final void itemClicked(QTreeWidgetItem item, int column) {
        qtd_QTreeWidget_itemClicked_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    protected final void itemCollapsed(QTreeWidgetItem item) {
        qtd_QTreeWidget_itemCollapsed_QTreeWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemDoubleClicked(QTreeWidgetItem item, int column) {
        qtd_QTreeWidget_itemDoubleClicked_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    protected final void itemEntered(QTreeWidgetItem item, int column) {
        qtd_QTreeWidget_itemEntered_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    protected final void itemExpanded(QTreeWidgetItem item) {
        qtd_QTreeWidget_itemExpanded_QTreeWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void itemPressed(QTreeWidgetItem item, int column) {
        qtd_QTreeWidget_itemPressed_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    protected final void itemSelectionChanged() {
        qtd_QTreeWidget_itemSelectionChanged(qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QTreeWidget_QTreeWidget_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addTopLevelItem(QTreeWidgetItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTreeWidget_addTopLevelItem_QTreeWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void addTopLevelItems(QList!(QTreeWidgetItem) items) {
        if (items.length != 0) {
        }
        qtd_QTreeWidget_addTopLevelItems_QList(qtdNativeId, &items);
    }

    public final void clear() {
        qtd_QTreeWidget_clear(qtdNativeId);
    }

    public final void closePersistentEditor(QTreeWidgetItem item, int column = 0) {
        qtd_QTreeWidget_closePersistentEditor_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    public final void collapseItem(QTreeWidgetItem item) {
        qtd_QTreeWidget_collapseItem_QTreeWidgetItem(qtdNativeId, item is null ? null : (cast(QTreeWidgetItem)item).qtdNativeId);
    }

    public final int columnCount() const {
        return qtd_QTreeWidget_columnCount_const(qtdNativeId);
    }

    public final int currentColumn() const {
        return qtd_QTreeWidget_currentColumn_const(qtdNativeId);
    }

    public final QTreeWidgetItem currentItem() const {
        void* ret = qtd_QTreeWidget_currentItem_const(qtdNativeId);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final void editItem(QTreeWidgetItem item, int column = 0) {
        qtd_QTreeWidget_editItem_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    public final void expandItem(QTreeWidgetItem item) {
        qtd_QTreeWidget_expandItem_QTreeWidgetItem(qtdNativeId, item is null ? null : (cast(QTreeWidgetItem)item).qtdNativeId);
    }

    public final QList!(QTreeWidgetItem) findItems(string text, int flags, int column = 0) const {
        auto res = QList!(QTreeWidgetItem).opCall();
        qtd_QTreeWidget_findItems_string_MatchFlags_int_const(qtdNativeId, &res, text, flags, column);
        return res;
    }

    public final QTreeWidgetItem headerItem() const {
        void* ret = qtd_QTreeWidget_headerItem_const(qtdNativeId);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    protected final QModelIndex indexFromItem(QTreeWidgetItem item, int column = 0) const {
        QModelIndex res;
        qtd_QTreeWidget_indexFromItem_QTreeWidgetItem_int_const(qtdNativeId, &res, item is null ? null : item.qtdNativeId, column);
        return res;
    }

    public final int indexOfTopLevelItem(QTreeWidgetItem item) const {
        return qtd_QTreeWidget_indexOfTopLevelItem_QTreeWidgetItem_const(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void insertTopLevelItem(int index, QTreeWidgetItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTreeWidget_insertTopLevelItem_int_QTreeWidgetItem(qtdNativeId, index, item is null ? null : item.qtdNativeId);
    }

    public final void insertTopLevelItems(int index, QList!(QTreeWidgetItem) items) {
        if (items.length != 0) {
        }
        qtd_QTreeWidget_insertTopLevelItems_int_QList(qtdNativeId, index, &items);
    }

    public final QTreeWidgetItem invisibleRootItem() const {
        void* ret = qtd_QTreeWidget_invisibleRootItem_const(qtdNativeId);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final bool isFirstItemColumnSpanned(QTreeWidgetItem item) const {
        return qtd_QTreeWidget_isFirstItemColumnSpanned_QTreeWidgetItem_const(qtdNativeId, item is null ? null : (cast(QTreeWidgetItem)item).qtdNativeId);
    }

    public final QTreeWidgetItem itemAbove(QTreeWidgetItem item) const {
        void* ret = qtd_QTreeWidget_itemAbove_QTreeWidgetItem_const(qtdNativeId, item is null ? null : (cast(QTreeWidgetItem)item).qtdNativeId);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QTreeWidgetItem itemAt(const(QPoint) p) const {
        void* ret = qtd_QTreeWidget_itemAt_QPoint_const(qtdNativeId, p);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QTreeWidgetItem itemAt(int x, int y) const {
        void* ret = qtd_QTreeWidget_itemAt_int_int_const(qtdNativeId, x, y);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QTreeWidgetItem itemBelow(QTreeWidgetItem item) const {
        void* ret = qtd_QTreeWidget_itemBelow_QTreeWidgetItem_const(qtdNativeId, item is null ? null : (cast(QTreeWidgetItem)item).qtdNativeId);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    protected final QTreeWidgetItem itemFromIndex(const(QModelIndex) index) const {
        void* ret = qtd_QTreeWidget_itemFromIndex_QModelIndex_const(qtdNativeId, index);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QWidget itemWidget(QTreeWidgetItem item, int column) const {
        void *ret = qtd_QTreeWidget_itemWidget_QTreeWidgetItem_int_const(qtdNativeId, item is null ? null : item.qtdNativeId, column);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void openPersistentEditor(QTreeWidgetItem item, int column = 0) {
        qtd_QTreeWidget_openPersistentEditor_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    public final void removeItemWidget(QTreeWidgetItem item, int column) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.d);
        }
        qtd_QTreeWidget_removeItemWidget_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    public final void scrollToItem(QTreeWidgetItem item, QAbstractItemView.ScrollHint hint = QAbstractItemView.ScrollHint.EnsureVisible) {
        qtd_QTreeWidget_scrollToItem_QTreeWidgetItem_ScrollHint(qtdNativeId, item is null ? null : (cast(QTreeWidgetItem)item).qtdNativeId, hint);
    }

    public final QList!(QTreeWidgetItem) selectedItems() const {
        auto res = QList!(QTreeWidgetItem).opCall();
        qtd_QTreeWidget_selectedItems_const(qtdNativeId, &res);
        return res;
    }

    public final void setColumnCount(int columns) {
        qtd_QTreeWidget_setColumnCount_int(qtdNativeId, columns);
    }

    public final void setCurrentItem(QTreeWidgetItem item) {
        qtd_QTreeWidget_setCurrentItem_QTreeWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void setCurrentItem(QTreeWidgetItem item, int column) {
        qtd_QTreeWidget_setCurrentItem_QTreeWidgetItem_int(qtdNativeId, item is null ? null : item.qtdNativeId, column);
    }

    public final void setCurrentItem(QTreeWidgetItem item, int column, int command) {
        qtd_QTreeWidget_setCurrentItem_QTreeWidgetItem_int_SelectionFlags(qtdNativeId, item is null ? null : item.qtdNativeId, column, command);
    }

    public final void setFirstItemColumnSpanned(QTreeWidgetItem item, bool span) {
        qtd_QTreeWidget_setFirstItemColumnSpanned_QTreeWidgetItem_bool(qtdNativeId, item is null ? null : (cast(QTreeWidgetItem)item).qtdNativeId, span);
    }

    public final void setHeaderItem(QTreeWidgetItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTreeWidget_setHeaderItem_QTreeWidgetItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void setHeaderLabel(string label) {
        qtd_QTreeWidget_setHeaderLabel_string(qtdNativeId, label);
    }

    public final void setHeaderLabels(QList!(string) labels) {
        qtd_QTreeWidget_setHeaderLabels_QList(qtdNativeId, &labels);
    }

    public final void setItemWidget(QTreeWidgetItem item, int column, QWidget widget) {
        qtd_QTreeWidget_setItemWidget_QTreeWidgetItem_int_QWidget(qtdNativeId, item is null ? null : item.qtdNativeId, column, widget is null ? null : widget.qtdNativeId);
    }

    deprecated     public final void setModel(QAbstractItemModel model) {
        qtd_QTreeWidget_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
        // setModel() creates a new selection model for the object
        __rcItemSelectionModel = null;


    }

    public final int sortColumn() const {
        return qtd_QTreeWidget_sortColumn_const(qtdNativeId);
    }

    public final void sortItems(int column, Qt.SortOrder order) {
        qtd_QTreeWidget_sortItems_int_SortOrder(qtdNativeId, column, order);
    }

    public final QTreeWidgetItem takeTopLevelItem(int index) {
        void* ret = qtd_QTreeWidget_takeTopLevelItem_int(qtdNativeId, index);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QTreeWidgetItem topLevelItem(int index) const {
        void* ret = qtd_QTreeWidget_topLevelItem_int_const(qtdNativeId, index);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final int topLevelItemCount() const {
        return qtd_QTreeWidget_topLevelItemCount_const(qtdNativeId);
    }

    public final QRect visualItemRect(QTreeWidgetItem item) const {
        QRect res;
        qtd_QTreeWidget_visualItemRect_QTreeWidgetItem_const(qtdNativeId, &res, item is null ? null : (cast(QTreeWidgetItem)item).qtdNativeId);
        return res;
    }

    protected void dropEvent(QDropEvent event) {
        qtd_QTreeWidget_dropEvent_QDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected bool dropMimeData(QTreeWidgetItem parent_, int index, QMimeData data, Qt.DropAction action) {
        return qtd_QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, index, data is null ? null : (cast(QMimeData)data).qtdNativeId, action);
    }

    public bool event(QEvent e) {
        return qtd_QTreeWidget_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected QMimeData mimeData(QList!(QTreeWidgetItem) items) const {
        void *ret = qtd_QTreeWidget_mimeData_QList_const(qtdNativeId, &items);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    protected QList!(string) mimeTypes() const {
        auto res = QList!(string).opCall();
        qtd_QTreeWidget_mimeTypes_const(qtdNativeId, &res);
        return res;
    }

    public void setSelectionModel(QItemSelectionModel selectionModel) {
        qtd_QTreeWidget_setSelectionModel_QItemSelectionModel(qtdNativeId, selectionModel is null ? null : selectionModel.qtdNativeId);
    }

    protected int supportedDropActions() const {
        return qtd_QTreeWidget_supportedDropActions_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "clear()", 
            "collapseItem(const QTreeWidgetItem*)", 
            "expandItem(const QTreeWidgetItem*)", 
            "scrollToItem(const QTreeWidgetItem*,QAbstractItemView::ScrollHint)", 
            "scrollToItem(const QTreeWidgetItem*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTreeWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTreeWidget);
    }

    static QTreeWidget __getObject(void* nativeId) {
        return static_cast!(QTreeWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTreeWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTreeWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTreeWidget(nativeId, initFlags);
        QTreeWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QTreeWidgetItem,QTreeWidgetItem)("currentItemChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(QTreeWidgetItem,int)("itemActivated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(QTreeWidgetItem,int)("itemChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(QTreeWidgetItem,int)("itemClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(QTreeWidgetItem)("itemCollapsed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(QTreeWidgetItem,int)("itemDoubleClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(QTreeWidgetItem,int)("itemEntered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(QTreeWidgetItem)("itemExpanded"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!(QTreeWidgetItem,int)("itemPressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[9]);
        mo.addMethod(new QMetaSignal(signature!()("itemSelectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QTreeWidgetItem)("collapseItem"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(QTreeWidgetItem)("expandItem"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(QTreeWidgetItem,QAbstractItemView.ScrollHint)("scrollToItem"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(QTreeWidgetItem)("scrollToItem"), index));

    }

    public alias void __isQtType_QTreeWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTreeWidget_currentItemChanged_QTreeWidgetItem_QTreeWidgetItem(void* __this_nativeId,
 void* current0,
 void* previous1);
private extern(C) void  qtd_QTreeWidget_itemActivated_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_itemChanged_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_itemClicked_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_itemCollapsed_QTreeWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTreeWidget_itemDoubleClicked_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_itemEntered_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_itemExpanded_QTreeWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTreeWidget_itemPressed_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_itemSelectionChanged(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QTreeWidget_QTreeWidget_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QTreeWidget_addTopLevelItem_QTreeWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTreeWidget_addTopLevelItems_QList(void* __this_nativeId,
 void* items0);
private extern(C) void  qtd_QTreeWidget_clear(void* __this_nativeId);
private extern(C) void  qtd_QTreeWidget_closePersistentEditor_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_collapseItem_QTreeWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) int  qtd_QTreeWidget_columnCount_const(void* __this_nativeId);
private extern(C) int  qtd_QTreeWidget_currentColumn_const(void* __this_nativeId);
private extern(C) void*  qtd_QTreeWidget_currentItem_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeWidget_editItem_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_expandItem_QTreeWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTreeWidget_findItems_string_MatchFlags_int_const(void* __this_nativeId,
 void* __d_return_value,
 string text0,
 int flags1,
 int column2);
private extern(C) void*  qtd_QTreeWidget_headerItem_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeWidget_indexFromItem_QTreeWidgetItem_int_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 void* item0,
 int column1);
private extern(C) int  qtd_QTreeWidget_indexOfTopLevelItem_QTreeWidgetItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTreeWidget_insertTopLevelItem_int_QTreeWidgetItem(void* __this_nativeId,
 int index0,
 void* item1);
private extern(C) void  qtd_QTreeWidget_insertTopLevelItems_int_QList(void* __this_nativeId,
 int index0,
 void* items1);
private extern(C) void*  qtd_QTreeWidget_invisibleRootItem_const(void* __this_nativeId);
private extern(C) bool  qtd_QTreeWidget_isFirstItemColumnSpanned_QTreeWidgetItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void*  qtd_QTreeWidget_itemAbove_QTreeWidgetItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void*  qtd_QTreeWidget_itemAt_QPoint_const(void* __this_nativeId,
 QPoint p0);
private extern(C) void*  qtd_QTreeWidget_itemAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void*  qtd_QTreeWidget_itemBelow_QTreeWidgetItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void*  qtd_QTreeWidget_itemFromIndex_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QTreeWidget_itemWidget_QTreeWidgetItem_int_const(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_openPersistentEditor_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_removeItemWidget_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_scrollToItem_QTreeWidgetItem_ScrollHint(void* __this_nativeId,
 void* item0,
 int hint1);
private extern(C) void  qtd_QTreeWidget_selectedItems_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTreeWidget_setColumnCount_int(void* __this_nativeId,
 int columns0);
private extern(C) void  qtd_QTreeWidget_setCurrentItem_QTreeWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTreeWidget_setCurrentItem_QTreeWidgetItem_int(void* __this_nativeId,
 void* item0,
 int column1);
private extern(C) void  qtd_QTreeWidget_setCurrentItem_QTreeWidgetItem_int_SelectionFlags(void* __this_nativeId,
 void* item0,
 int column1,
 int command2);
private extern(C) void  qtd_QTreeWidget_setFirstItemColumnSpanned_QTreeWidgetItem_bool(void* __this_nativeId,
 void* item0,
 bool span1);
private extern(C) void  qtd_QTreeWidget_setHeaderItem_QTreeWidgetItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QTreeWidget_setHeaderLabel_string(void* __this_nativeId,
 string label0);
private extern(C) void  qtd_QTreeWidget_setHeaderLabels_QList(void* __this_nativeId,
 void* labels0);
private extern(C) void  qtd_QTreeWidget_setItemWidget_QTreeWidgetItem_int_QWidget(void* __this_nativeId,
 void* item0,
 int column1,
 void* widget2);
    deprecated final void  qtd_QTreeWidget_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0)
    {
        throw new Exception("No Implementation Exception");
    }

private extern(C) int  qtd_QTreeWidget_sortColumn_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeWidget_sortItems_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) void*  qtd_QTreeWidget_takeTopLevelItem_int(void* __this_nativeId,
 int index0);
private extern(C) void*  qtd_QTreeWidget_topLevelItem_int_const(void* __this_nativeId,
 int index0);
private extern(C) int  qtd_QTreeWidget_topLevelItemCount_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeWidget_visualItemRect_QTreeWidgetItem_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* item0);
private extern(C) void  qtd_QTreeWidget_dropEvent_QDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction(void* __this_nativeId,
 void* parent0,
 int index1,
 void* data2,
 int action3);
private extern(C) bool  qtd_QTreeWidget_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void*  qtd_QTreeWidget_mimeData_QList_const(void* __this_nativeId,
 void* items0);
private extern(C) void  qtd_QTreeWidget_mimeTypes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTreeWidget_setSelectionModel_QItemSelectionModel(void* __this_nativeId,
 void* selectionModel0);
private extern(C) int  qtd_QTreeWidget_supportedDropActions_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, void* parent0, int index1, void* data2, int action3) qtd_QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction_dispatch; }
extern(C) bool qtd_export_QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction_dispatch(void *dId, void* parent0, int index1, void* data2, int action3){
    auto d_object = cast(QTreeWidget) dId;
    scope parent0_d_ref = new QTreeWidgetItem(parent0, QtdObjectInitFlags.onStack);
    scope data2_d_ref = new QMimeData(data2, QtdObjectInitFlags.onStack);

    auto action3_enum = cast(Qt.DropAction) action3;
    auto return_value = d_object.dropMimeData(parent0_d_ref, index1, data2_d_ref, action3_enum);
    return return_value;
}

extern(C){ extern void* function(void *dId, void* items0) qtd_QTreeWidget_mimeData_QList_const_dispatch; }
extern(C) void* qtd_export_QTreeWidget_mimeData_QList_const_dispatch(void *dId, void* items0){
    auto d_object = cast(QTreeWidget) dId;
    auto items0_d_ref = cast(QList!(QTreeWidgetItem)*)items0;

    QMimeData ret_value = d_object.mimeData(*items0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, QList!(string)* __d_arr) qtd_QTreeWidget_mimeTypes_const_dispatch; }
extern(C) void qtd_export_QTreeWidget_mimeTypes_const_dispatch(void *dId, QList!(string)* __d_arr){
    auto d_object = cast(QTreeWidget) dId;
    auto return_value = d_object.mimeTypes();
    *__d_arr = return_value;
}

extern(C){ extern int function(void *dId) qtd_QTreeWidget_supportedDropActions_const_dispatch; }
extern(C) int qtd_export_QTreeWidget_supportedDropActions_const_dispatch(void *dId){
    auto d_object = cast(QTreeWidget) dId;
    auto return_value = d_object.supportedDropActions();
    return return_value;
}

private extern (C) void qtd_QTreeWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QTreeWidget() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction_dispatch;
    virt_arr[1] = &qtd_export_QTreeWidget_mimeData_QList_const_dispatch;
    virt_arr[2] = &qtd_export_QTreeWidget_mimeTypes_const_dispatch;
    virt_arr[3] = &qtd_export_QTreeWidget_supportedDropActions_const_dispatch;
    qtd_QTreeWidget_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QTreeWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QTreeWidget_activated_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QTreeWidget_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.clicked_emit(index0);
}*/
/*private extern(C) void qtd_QTreeWidget_doubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.doubleClicked_emit(index0);
}*/
/*private extern(C) void qtd_QTreeWidget_entered_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.entered_emit(index0);
}*/
/*private extern(C) void qtd_QTreeWidget_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.pressed_emit(index0);
}*/
/*private extern(C) void qtd_QTreeWidget_viewportEntered_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        //d_object.viewportEntered_emit();
}*/
/*private extern(C) void qtd_QTreeWidget_collapsed_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.collapsed_emit(index0);
}*/
/*private extern(C) void qtd_QTreeWidget_expanded_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.expanded_emit(index0);
}*/
/*private extern(C) void qtd_QTreeWidget_currentItemChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        scope current0 = new QTreeWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope previous1 = new QTreeWidgetItem(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.currentItemChanged_emit(current0, previous1);
}*/
/*private extern(C) void qtd_QTreeWidget_itemActivated_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        scope item0 = new QTreeWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        auto column1 = *(cast(int*)args[2]);
        //d_object.itemActivated_emit(item0, column1);
}*/
/*private extern(C) void qtd_QTreeWidget_itemChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        scope item0 = new QTreeWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        auto column1 = *(cast(int*)args[2]);
        //d_object.itemChanged_emit(item0, column1);
}*/
/*private extern(C) void qtd_QTreeWidget_itemClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        scope item0 = new QTreeWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        auto column1 = *(cast(int*)args[2]);
        //d_object.itemClicked_emit(item0, column1);
}*/
/*private extern(C) void qtd_QTreeWidget_itemCollapsed_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        scope item0 = new QTreeWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemCollapsed_emit(item0);
}*/
/*private extern(C) void qtd_QTreeWidget_itemDoubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        scope item0 = new QTreeWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        auto column1 = *(cast(int*)args[2]);
        //d_object.itemDoubleClicked_emit(item0, column1);
}*/
/*private extern(C) void qtd_QTreeWidget_itemEntered_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        scope item0 = new QTreeWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        auto column1 = *(cast(int*)args[2]);
        //d_object.itemEntered_emit(item0, column1);
}*/
/*private extern(C) void qtd_QTreeWidget_itemExpanded_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        scope item0 = new QTreeWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemExpanded_emit(item0);
}*/
/*private extern(C) void qtd_QTreeWidget_itemPressed_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        scope item0 = new QTreeWidgetItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        auto column1 = *(cast(int*)args[2]);
        //d_object.itemPressed_emit(item0, column1);
}*/
/*private extern(C) void qtd_QTreeWidget_itemSelectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTreeWidget) dId;
        //d_object.itemSelectionChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QTreeWidget_staticMetaObject();

extern(C) void qtd_QTreeWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTreeWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
