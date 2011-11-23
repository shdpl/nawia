module qt.gui.QStandardItemModel;

public import qt.gui.QStandardItemModel_aux;
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
public import qt.core.QList;
public import qt.gui.QStandardItem;
public import qt.core.QMimeData;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QVariant;
public import qt.core.QAbstractItemModel;
public import qt.core.QModelIndex;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStandardItemModel : QAbstractItemModel
{

    private static const string[] __signalSignatures = [
            "itemChanged(QStandardItem*)"    ];

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

    protected final void itemChanged(QStandardItem item) {
        qtd_QStandardItemModel_itemChanged_QStandardItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QStandardItemModel_QStandardItemModel_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int rows, int columns, QObject parent_ = null) {
        void* ret = qtd_QStandardItemModel_QStandardItemModel_int_int_QObject(cast(void*) this, rows, columns, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void appendColumn(QList!(QStandardItem) items) {
        if (items.length != 0) {
        }
        qtd_QStandardItemModel_appendColumn_QList(qtdNativeId, &items);
    }

    public final void appendRow(QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItemModel_appendRow_QStandardItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void appendRow(QList!(QStandardItem) items) {
        if (items.length != 0) {
        }
        qtd_QStandardItemModel_appendRow_QList(qtdNativeId, &items);
    }

    public final void clear() {
        qtd_QStandardItemModel_clear(qtdNativeId);
    }

    public final QList!(QStandardItem) findItems(string text, int flags = 0, int column = 0) const {
        auto res = QList!(QStandardItem).opCall();
        qtd_QStandardItemModel_findItems_string_MatchFlags_int_const(qtdNativeId, &res, text, flags, column);
        return res;
    }

    public final QStandardItem horizontalHeaderItem(int column) const {
        void* ret = qtd_QStandardItemModel_horizontalHeaderItem_int_const(qtdNativeId, column);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QModelIndex indexFromItem(QStandardItem item) const {
        QModelIndex res;
        qtd_QStandardItemModel_indexFromItem_QStandardItem_const(qtdNativeId, &res, item is null ? null : (cast(QStandardItem)item).qtdNativeId);
        return res;
    }

    public final void insertColumn(int column, QList!(QStandardItem) items) {
        if (items.length != 0) {
        }
        qtd_QStandardItemModel_insertColumn_int_QList(qtdNativeId, column, &items);
    }

    public final void insertRow(int row, QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItemModel_insertRow_int_QStandardItem(qtdNativeId, row, item is null ? null : item.qtdNativeId);
    }

    public final void insertRow(int row, QList!(QStandardItem) items) {
        if (items.length != 0) {
        }
        qtd_QStandardItemModel_insertRow_int_QList(qtdNativeId, row, &items);
    }

    public final QStandardItem invisibleRootItem() const {
        void* ret = qtd_QStandardItemModel_invisibleRootItem_const(qtdNativeId);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QStandardItem item(int row, int column = 0) const {
        void* ret = qtd_QStandardItemModel_item_int_int_const(qtdNativeId, row, column);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QStandardItem itemFromIndex(const(QModelIndex) index) const {
        void* ret = qtd_QStandardItemModel_itemFromIndex_QModelIndex_const(qtdNativeId, index);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QStandardItem itemPrototype() const {
        void* ret = qtd_QStandardItemModel_itemPrototype_const(qtdNativeId);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final void setColumnCount(int columns) {
        qtd_QStandardItemModel_setColumnCount_int(qtdNativeId, columns);
    }

    public final void setHorizontalHeaderItem(int column, QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItemModel_setHorizontalHeaderItem_int_QStandardItem(qtdNativeId, column, item is null ? null : item.qtdNativeId);
    }

    public final void setHorizontalHeaderLabels(QList!(string) labels) {
        qtd_QStandardItemModel_setHorizontalHeaderLabels_QList(qtdNativeId, &labels);
    }

    public final void setItem(int row, QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItemModel_setItem_int_QStandardItem(qtdNativeId, row, item is null ? null : item.qtdNativeId);
    }

    public final void setItem(int row, int column, QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItemModel_setItem_int_int_QStandardItem(qtdNativeId, row, column, item is null ? null : item.qtdNativeId);
    }

    public final void setItemPrototype(QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItemModel_setItemPrototype_QStandardItem(qtdNativeId, item is null ? null : (cast(QStandardItem)item).qtdNativeId);
    }

    public final void setRowCount(int rows) {
        qtd_QStandardItemModel_setRowCount_int(qtdNativeId, rows);
    }

    public final void setSortRole(int role) {
        qtd_QStandardItemModel_setSortRole_int(qtdNativeId, role);
    }

    public final void setVerticalHeaderItem(int row, QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItemModel_setVerticalHeaderItem_int_QStandardItem(qtdNativeId, row, item is null ? null : item.qtdNativeId);
    }

    public final void setVerticalHeaderLabels(QList!(string) labels) {
        qtd_QStandardItemModel_setVerticalHeaderLabels_QList(qtdNativeId, &labels);
    }

    public final int sortRole() const {
        return qtd_QStandardItemModel_sortRole_const(qtdNativeId);
    }

    public final QList!(QStandardItem) takeColumn(int column) {
        auto res = QList!(QStandardItem).opCall();
        qtd_QStandardItemModel_takeColumn_int(qtdNativeId, &res, column);
        return res;
    }

    public final QStandardItem takeHorizontalHeaderItem(int column) {
        void* ret = qtd_QStandardItemModel_takeHorizontalHeaderItem_int(qtdNativeId, column);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QStandardItem takeItem(int row, int column = 0) {
        void* ret = qtd_QStandardItemModel_takeItem_int_int(qtdNativeId, row, column);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QList!(QStandardItem) takeRow(int row) {
        auto res = QList!(QStandardItem).opCall();
        qtd_QStandardItemModel_takeRow_int(qtdNativeId, &res, row);
        return res;
    }

    public final QStandardItem takeVerticalHeaderItem(int row) {
        void* ret = qtd_QStandardItemModel_takeVerticalHeaderItem_int(qtdNativeId, row);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QStandardItem verticalHeaderItem(int row) const {
        void* ret = qtd_QStandardItemModel_verticalHeaderItem_int_const(qtdNativeId, row);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public int columnCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QStandardItemModel_columnCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public QVariant data(const(QModelIndex) index, int role = 0) const {
        void* ret = qtd_QStandardItemModel_data_QModelIndex_int_const(qtdNativeId, index, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool dropMimeData(QMimeData data, Qt.DropAction action, int row, int column, const(QModelIndex) parent_) {
        return qtd_QStandardItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(qtdNativeId, data is null ? null : (cast(QMimeData)data).qtdNativeId, action, row, column, parent_);
    }

    public int flags(const(QModelIndex) index) const {
        return qtd_QStandardItemModel_flags_QModelIndex_const(qtdNativeId, index);
    }

    public bool hasChildren(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QStandardItemModel_hasChildren_QModelIndex_const(qtdNativeId, parent_);
    }

    public QVariant headerData(int section, Qt.Orientation orientation, int role = 0) const {
        void* ret = qtd_QStandardItemModel_headerData_int_Orientation_int_const(qtdNativeId, section, orientation, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public QModelIndex index(int row, int column, const(QModelIndex) parent_ = QModelIndex()) const {
        QModelIndex res;
        qtd_QStandardItemModel_index_int_int_QModelIndex_const(qtdNativeId, &res, row, column, parent_);
        return res;
    }

    public bool insertColumns(int column, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QStandardItemModel_insertColumns_int_int_QModelIndex(qtdNativeId, column, count, parent_);
    }

    public bool insertRows(int row, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QStandardItemModel_insertRows_int_int_QModelIndex(qtdNativeId, row, count, parent_);
    }

    public QMimeData mimeData(QList!(QModelIndex) indexes) const {
        void *ret = qtd_QStandardItemModel_mimeData_QList_const(qtdNativeId, &indexes);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    public QList!(string) mimeTypes() const {
        auto res = QList!(string).opCall();
        qtd_QStandardItemModel_mimeTypes_const(qtdNativeId, &res);
        return res;
    }

    public QModelIndex parent(const(QModelIndex) child) const {
        QModelIndex res;
        qtd_QStandardItemModel_parent_QModelIndex_const(qtdNativeId, &res, child);
        return res;
    }

    public bool removeColumns(int column, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QStandardItemModel_removeColumns_int_int_QModelIndex(qtdNativeId, column, count, parent_);
    }

    public bool removeRows(int row, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QStandardItemModel_removeRows_int_int_QModelIndex(qtdNativeId, row, count, parent_);
    }

    public int rowCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QStandardItemModel_rowCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public bool setData(const(QModelIndex) index, QVariant value, int role = 2) {
        return qtd_QStandardItemModel_setData_QModelIndex_QVariant_int(qtdNativeId, index, value is null ? null : value.qtdNativeId, role);
    }

    public bool setHeaderData(int section, Qt.Orientation orientation, QVariant value, int role = 2) {
        return qtd_QStandardItemModel_setHeaderData_int_Orientation_QVariant_int(qtdNativeId, section, orientation, value is null ? null : value.qtdNativeId, role);
    }

    public void sort(int column, Qt.SortOrder order = Qt.SortOrder.AscendingOrder) {
        qtd_QStandardItemModel_sort_int_SortOrder(qtdNativeId, column, order);
    }

    public int supportedDropActions() const {
        return qtd_QStandardItemModel_supportedDropActions_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QStandardItemModel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QStandardItemModel);
    }

    static QStandardItemModel __getObject(void* nativeId) {
        return static_cast!(QStandardItemModel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QStandardItemModel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QStandardItemModel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QStandardItemModel(nativeId, initFlags);
        QStandardItemModel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QStandardItem)("itemChanged"), index));

    }

    public alias void __isQtType_QStandardItemModel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QStandardItemModel_itemChanged_QStandardItem(void* __this_nativeId,
 void* item0);

// C wrappers
private extern(C) void* qtd_QStandardItemModel_QStandardItemModel_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QStandardItemModel_QStandardItemModel_int_int_QObject(void *d_ptr,
 int rows0,
 int columns1,
 void* parent2);
private extern(C) void  qtd_QStandardItemModel_appendColumn_QList(void* __this_nativeId,
 void* items0);
private extern(C) void  qtd_QStandardItemModel_appendRow_QStandardItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QStandardItemModel_appendRow_QList(void* __this_nativeId,
 void* items0);
private extern(C) void  qtd_QStandardItemModel_clear(void* __this_nativeId);
private extern(C) void  qtd_QStandardItemModel_findItems_string_MatchFlags_int_const(void* __this_nativeId,
 void* __d_return_value,
 string text0,
 int flags1,
 int column2);
private extern(C) void*  qtd_QStandardItemModel_horizontalHeaderItem_int_const(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QStandardItemModel_indexFromItem_QStandardItem_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 void* item0);
private extern(C) void  qtd_QStandardItemModel_insertColumn_int_QList(void* __this_nativeId,
 int column0,
 void* items1);
private extern(C) void  qtd_QStandardItemModel_insertRow_int_QStandardItem(void* __this_nativeId,
 int row0,
 void* item1);
private extern(C) void  qtd_QStandardItemModel_insertRow_int_QList(void* __this_nativeId,
 int row0,
 void* items1);
private extern(C) void*  qtd_QStandardItemModel_invisibleRootItem_const(void* __this_nativeId);
private extern(C) void*  qtd_QStandardItemModel_item_int_int_const(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void*  qtd_QStandardItemModel_itemFromIndex_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QStandardItemModel_itemPrototype_const(void* __this_nativeId);
private extern(C) void  qtd_QStandardItemModel_setColumnCount_int(void* __this_nativeId,
 int columns0);
private extern(C) void  qtd_QStandardItemModel_setHorizontalHeaderItem_int_QStandardItem(void* __this_nativeId,
 int column0,
 void* item1);
private extern(C) void  qtd_QStandardItemModel_setHorizontalHeaderLabels_QList(void* __this_nativeId,
 void* labels0);
private extern(C) void  qtd_QStandardItemModel_setItem_int_QStandardItem(void* __this_nativeId,
 int row0,
 void* item1);
private extern(C) void  qtd_QStandardItemModel_setItem_int_int_QStandardItem(void* __this_nativeId,
 int row0,
 int column1,
 void* item2);
private extern(C) void  qtd_QStandardItemModel_setItemPrototype_QStandardItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QStandardItemModel_setRowCount_int(void* __this_nativeId,
 int rows0);
private extern(C) void  qtd_QStandardItemModel_setSortRole_int(void* __this_nativeId,
 int role0);
private extern(C) void  qtd_QStandardItemModel_setVerticalHeaderItem_int_QStandardItem(void* __this_nativeId,
 int row0,
 void* item1);
private extern(C) void  qtd_QStandardItemModel_setVerticalHeaderLabels_QList(void* __this_nativeId,
 void* labels0);
private extern(C) int  qtd_QStandardItemModel_sortRole_const(void* __this_nativeId);
private extern(C) void  qtd_QStandardItemModel_takeColumn_int(void* __this_nativeId,
 void* __d_return_value,
 int column0);
private extern(C) void*  qtd_QStandardItemModel_takeHorizontalHeaderItem_int(void* __this_nativeId,
 int column0);
private extern(C) void*  qtd_QStandardItemModel_takeItem_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QStandardItemModel_takeRow_int(void* __this_nativeId,
 void* __d_return_value,
 int row0);
private extern(C) void*  qtd_QStandardItemModel_takeVerticalHeaderItem_int(void* __this_nativeId,
 int row0);
private extern(C) void*  qtd_QStandardItemModel_verticalHeaderItem_int_const(void* __this_nativeId,
 int row0);
private extern(C) int  qtd_QStandardItemModel_columnCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QStandardItemModel_data_QModelIndex_int_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int role1);
private extern(C) bool  qtd_QStandardItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(void* __this_nativeId,
 void* data0,
 int action1,
 int row2,
 int column3,
 const(QModelIndexAccessor) parent4);
private extern(C) int  qtd_QStandardItemModel_flags_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QStandardItemModel_hasChildren_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QStandardItemModel_headerData_int_Orientation_int_const(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2);
private extern(C) void  qtd_QStandardItemModel_index_int_int_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QStandardItemModel_insertColumns_int_int_QModelIndex(void* __this_nativeId,
 int column0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QStandardItemModel_insertRows_int_int_QModelIndex(void* __this_nativeId,
 int row0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) void*  qtd_QStandardItemModel_mimeData_QList_const(void* __this_nativeId,
 void* indexes0);
private extern(C) void  qtd_QStandardItemModel_mimeTypes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStandardItemModel_parent_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) child0);
private extern(C) bool  qtd_QStandardItemModel_removeColumns_int_int_QModelIndex(void* __this_nativeId,
 int column0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QStandardItemModel_removeRows_int_int_QModelIndex(void* __this_nativeId,
 int row0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) int  qtd_QStandardItemModel_rowCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) bool  qtd_QStandardItemModel_setData_QModelIndex_QVariant_int(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* value1,
 int role2);
private extern(C) bool  qtd_QStandardItemModel_setHeaderData_int_Orientation_QVariant_int(void* __this_nativeId,
 int section0,
 int orientation1,
 void* value2,
 int role3);
private extern(C) void  qtd_QStandardItemModel_sort_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) int  qtd_QStandardItemModel_supportedDropActions_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QStandardItemModel_initCallBacks(void* virtuals);

extern(C) void static_init_QStandardItemModel() {
    qtd_QStandardItemModel_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QStandardItemModel_columnsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStandardItemModel_columnsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStandardItemModel_columnsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStandardItemModel_columnsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStandardItemModel_dataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        auto topLeft0 = *(cast(QModelIndex*)args[1]);
        auto bottomRight1 = *(cast(QModelIndex*)args[2]);
        //d_object.dataChanged_emit(topLeft0, bottomRight1);
}*/
/*private extern(C) void qtd_QStandardItemModel_headerDataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        auto orientation0 = *(cast(Qt.Orientation*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.headerDataChanged_emit(orientation0, first1, last2);
}*/
/*private extern(C) void qtd_QStandardItemModel_layoutAboutToBeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        //d_object.layoutAboutToBeChanged_emit();
}*/
/*private extern(C) void qtd_QStandardItemModel_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        //d_object.layoutChanged_emit();
}*/
/*private extern(C) void qtd_QStandardItemModel_modelAboutToBeReset_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        //d_object.modelAboutToBeReset_emit();
}*/
/*private extern(C) void qtd_QStandardItemModel_modelReset_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        //d_object.modelReset_emit();
}*/
/*private extern(C) void qtd_QStandardItemModel_rowsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStandardItemModel_rowsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStandardItemModel_rowsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStandardItemModel_rowsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStandardItemModel_itemChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStandardItemModel) dId;
        scope item0 = new QStandardItem(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.itemChanged_emit(item0);
}*/

extern(C) QMetaObjectNative* qtd_QStandardItemModel_staticMetaObject();

extern(C) void qtd_QStandardItemModel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QStandardItemModel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
