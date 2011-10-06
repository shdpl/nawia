module qt.core.QAbstractItemModel;

public import qt.core.QAbstractItemModel_aux;
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
private import qt.core.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QList;
public import qt.core.QMimeData;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QDataStream;
public import qt.core.QVariant;
public import qt.core.QModelIndex;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractItemModel : QObject
{

    private static const string[] __signalSignatures = [
            "columnsAboutToBeInserted(QModelIndex,int,int)", 
            "columnsAboutToBeRemoved(QModelIndex,int,int)", 
            "columnsInserted(QModelIndex,int,int)", 
            "columnsRemoved(QModelIndex,int,int)", 
            "dataChanged(QModelIndex,QModelIndex)", 
            "headerDataChanged(Qt::Orientation,int,int)", 
            "layoutAboutToBeChanged()", 
            "layoutChanged()", 
            "modelAboutToBeReset()", 
            "modelReset()", 
            "rowsAboutToBeInserted(QModelIndex,int,int)", 
            "rowsAboutToBeRemoved(QModelIndex,int,int)", 
            "rowsInserted(QModelIndex,int,int)", 
            "rowsRemoved(QModelIndex,int,int)"    ];

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

    protected final void dataChanged(const(QModelIndex) topLeft, const(QModelIndex) bottomRight) {
        qtd_QAbstractItemModel_dataChanged_QModelIndex_QModelIndex(qtdNativeId, topLeft, bottomRight);
    }

    protected final void headerDataChanged(Qt.Orientation orientation, int first, int last) {
        qtd_QAbstractItemModel_headerDataChanged_Orientation_int_int(qtdNativeId, orientation, first, last);
    }

    protected final void layoutAboutToBeChanged() {
        qtd_QAbstractItemModel_layoutAboutToBeChanged(qtdNativeId);
    }

    protected final void layoutChanged() {
        qtd_QAbstractItemModel_layoutChanged(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QAbstractItemModel_QAbstractItemModel_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void beginInsertColumns(const(QModelIndex) parent_, int first, int last) {
        qtd_QAbstractItemModel_beginInsertColumns_QModelIndex_int_int(qtdNativeId, parent_, first, last);
    }

    protected final void beginInsertRows(const(QModelIndex) parent_, int first, int last) {
        qtd_QAbstractItemModel_beginInsertRows_QModelIndex_int_int(qtdNativeId, parent_, first, last);
    }

    protected final bool beginMoveColumns(const(QModelIndex) sourceParent, int sourceFirst, int sourceLast, const(QModelIndex) destinationParent, int destinationColumn) {
        return qtd_QAbstractItemModel_beginMoveColumns_QModelIndex_int_int_QModelIndex_int(qtdNativeId, sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    protected final bool beginMoveRows(const(QModelIndex) sourceParent, int sourceFirst, int sourceLast, const(QModelIndex) destinationParent, int destinationRow) {
        return qtd_QAbstractItemModel_beginMoveRows_QModelIndex_int_int_QModelIndex_int(qtdNativeId, sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    protected final void beginRemoveColumns(const(QModelIndex) parent_, int first, int last) {
        qtd_QAbstractItemModel_beginRemoveColumns_QModelIndex_int_int(qtdNativeId, parent_, first, last);
    }

    protected final void beginRemoveRows(const(QModelIndex) parent_, int first, int last) {
        qtd_QAbstractItemModel_beginRemoveRows_QModelIndex_int_int(qtdNativeId, parent_, first, last);
    }

    protected final void beginResetModel() {
        qtd_QAbstractItemModel_beginResetModel(qtdNativeId);
    }

    protected final void changePersistentIndex(const(QModelIndex) from, const(QModelIndex) to) {
        qtd_QAbstractItemModel_changePersistentIndex_QModelIndex_QModelIndex(qtdNativeId, from, to);
    }

    protected final void changePersistentIndexList(QList!(QModelIndex) from, QList!(QModelIndex) to) {
        qtd_QAbstractItemModel_changePersistentIndexList_QList_QList(qtdNativeId, &from, &to);
    }

    protected final QModelIndex createIndex(int row, int column, int id) const {
        QModelIndex res;
        qtd_QAbstractItemModel_createIndex_int_int_int_const(qtdNativeId, &res, row, column, id);
        return res;
    }

    protected final QModelIndex createIndex(int row, int column, uint id) const {
        QModelIndex res;
        qtd_QAbstractItemModel_createIndex_int_int_uint_const(qtdNativeId, &res, row, column, id);
        return res;
    }

    protected final QModelIndex createIndex(int row, int column, void* data = null) const {
        QModelIndex res;
        qtd_QAbstractItemModel_createIndex_int_int_nativepointervoid_const(qtdNativeId, &res, row, column, data);
        return res;
    }

    protected final bool decodeData(int row, int column, const(QModelIndex) parent_, QDataStream stream) {
        return qtd_QAbstractItemModel_decodeData_int_int_QModelIndex_QDataStream(qtdNativeId, row, column, parent_, stream is null ? null : stream.qtdNativeId);
    }

    protected final void encodeData(QList!(QModelIndex) indexes, QDataStream stream) const {
        qtd_QAbstractItemModel_encodeData_QList_QDataStream_const(qtdNativeId, &indexes, stream is null ? null : stream.qtdNativeId);
    }

    protected final void endInsertColumns() {
        qtd_QAbstractItemModel_endInsertColumns(qtdNativeId);
    }

    protected final void endInsertRows() {
        qtd_QAbstractItemModel_endInsertRows(qtdNativeId);
    }

    protected final void endMoveColumns() {
        qtd_QAbstractItemModel_endMoveColumns(qtdNativeId);
    }

    protected final void endMoveRows() {
        qtd_QAbstractItemModel_endMoveRows(qtdNativeId);
    }

    protected final void endRemoveColumns() {
        qtd_QAbstractItemModel_endRemoveColumns(qtdNativeId);
    }

    protected final void endRemoveRows() {
        qtd_QAbstractItemModel_endRemoveRows(qtdNativeId);
    }

    protected final void endResetModel() {
        qtd_QAbstractItemModel_endResetModel(qtdNativeId);
    }

    public final bool hasIndex(int row, int column, const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QAbstractItemModel_hasIndex_int_int_QModelIndex_const(qtdNativeId, row, column, parent_);
    }

    public final bool insertColumn(int column, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QAbstractItemModel_insertColumn_int_QModelIndex(qtdNativeId, column, parent_);
    }

    public final bool insertRow(int row, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QAbstractItemModel_insertRow_int_QModelIndex(qtdNativeId, row, parent_);
    }

    protected final QList!(QModelIndex) persistentIndexList() const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QAbstractItemModel_persistentIndexList_const(qtdNativeId, &res);
        return res;
    }

    public final bool removeColumn(int column, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QAbstractItemModel_removeColumn_int_QModelIndex(qtdNativeId, column, parent_);
    }

    public final bool removeRow(int row, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QAbstractItemModel_removeRow_int_QModelIndex(qtdNativeId, row, parent_);
    }

    protected final void reset() {
        qtd_QAbstractItemModel_reset(qtdNativeId);
    }

    public final void setSupportedDragActions(int arg__1) {
        qtd_QAbstractItemModel_setSupportedDragActions_DropActions(qtdNativeId, arg__1);
    }

    public final QModelIndex sibling(int row, int column, const(QModelIndex) idx) const {
        QModelIndex res;
        qtd_QAbstractItemModel_sibling_int_int_QModelIndex_const(qtdNativeId, &res, row, column, idx);
        return res;
    }

    public final int supportedDragActions() const {
        return qtd_QAbstractItemModel_supportedDragActions_const(qtdNativeId);
    }

    public QModelIndex buddy(const(QModelIndex) index) const {
        QModelIndex res;
        qtd_QAbstractItemModel_buddy_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public bool canFetchMore(const(QModelIndex) parent_) const {
        return qtd_QAbstractItemModel_canFetchMore_QModelIndex_const(qtdNativeId, parent_);
    }

    public abstract int columnCount(const(QModelIndex) parent_ = QModelIndex()) const;

    public abstract QVariant data(const(QModelIndex) index, int role = 0) const;

    public bool dropMimeData(QMimeData data, Qt.DropAction action, int row, int column, const(QModelIndex) parent_) {
        return qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(qtdNativeId, data is null ? null : (cast(QMimeData)data).qtdNativeId, action, row, column, parent_);
    }

    public void fetchMore(const(QModelIndex) parent_) {
        qtd_QAbstractItemModel_fetchMore_QModelIndex(qtdNativeId, parent_);
    }

    public int flags(const(QModelIndex) index) const {
        return qtd_QAbstractItemModel_flags_QModelIndex_const(qtdNativeId, index);
    }

    public bool hasChildren(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QAbstractItemModel_hasChildren_QModelIndex_const(qtdNativeId, parent_);
    }

    public QVariant headerData(int section, Qt.Orientation orientation, int role = 0) const {
        void* ret = qtd_QAbstractItemModel_headerData_int_Orientation_int_const(qtdNativeId, section, orientation, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public abstract QModelIndex index(int row, int column, const(QModelIndex) parent_ = QModelIndex()) const;

    public bool insertColumns(int column, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex(qtdNativeId, column, count, parent_);
    }

    public bool insertRows(int row, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QAbstractItemModel_insertRows_int_int_QModelIndex(qtdNativeId, row, count, parent_);
    }

    public QList!(QModelIndex) match(const(QModelIndex) start, int role, QVariant value, int hits = 1, int flags = 0) const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const(qtdNativeId, &res, start, role, value is null ? null : value.qtdNativeId, hits, flags);
        return res;
    }

    public QMimeData mimeData(QList!(QModelIndex) indexes) const {
        void *ret = qtd_QAbstractItemModel_mimeData_QList_const(qtdNativeId, &indexes);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    public QList!(string) mimeTypes() const {
        auto res = QList!(string).opCall();
        qtd_QAbstractItemModel_mimeTypes_const(qtdNativeId, &res);
        return res;
    }

    public abstract QModelIndex parent(const(QModelIndex) child) const;

    public bool removeColumns(int column, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex(qtdNativeId, column, count, parent_);
    }

    public bool removeRows(int row, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QAbstractItemModel_removeRows_int_int_QModelIndex(qtdNativeId, row, count, parent_);
    }

    public void revert() {
        qtd_QAbstractItemModel_revert(qtdNativeId);
    }

    public abstract int rowCount(const(QModelIndex) parent_ = QModelIndex()) const;

    public bool setData(const(QModelIndex) index, QVariant value, int role = 2) {
        return qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int(qtdNativeId, index, value is null ? null : value.qtdNativeId, role);
    }

    public bool setHeaderData(int section, Qt.Orientation orientation, QVariant value, int role = 2) {
        return qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int(qtdNativeId, section, orientation, value is null ? null : value.qtdNativeId, role);
    }

    public void sort(int column, Qt.SortOrder order = Qt.SortOrder.AscendingOrder) {
        qtd_QAbstractItemModel_sort_int_SortOrder(qtdNativeId, column, order);
    }

    public QSize span(const(QModelIndex) index) const {
        QSize res;
        qtd_QAbstractItemModel_span_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public bool submit() {
        return qtd_QAbstractItemModel_submit(qtdNativeId);
    }

    public int supportedDropActions() const {
        return qtd_QAbstractItemModel_supportedDropActions_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "revert()", 
            "submit()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractItemModel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractItemModel);
    }

    static QAbstractItemModel __getObject(void* nativeId) {
        return static_cast!(QAbstractItemModel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractItemModel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractItemModel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractItemModel_ConcreteWrapper(nativeId, initFlags);
        QAbstractItemModel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),int,int)("columnsAboutToBeInserted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),int,int)("columnsAboutToBeRemoved"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),int,int)("columnsInserted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),int,int)("columnsRemoved"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),const(QModelIndex))("dataChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(Qt.Orientation,int,int)("headerDataChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!()("layoutAboutToBeChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!()("layoutChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!()("modelAboutToBeReset"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[9]);
        mo.addMethod(new QMetaSignal(signature!()("modelReset"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[10]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),int,int)("rowsAboutToBeInserted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[11]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),int,int)("rowsAboutToBeRemoved"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[12]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),int,int)("rowsInserted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[13]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),int,int)("rowsRemoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("revert"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("submit"), index));

    }

    public alias void __isQtType_QAbstractItemModel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*    private native boolean setData_native(long id, int row, int col, Object value, int role);

    public final boolean setData(int row, int col, Object value) {
    return setData_native(nativeId(), row, col, value, qt.core.Qt.ItemDataRole.DisplayRole);
    }

    public final boolean setData(int row, int col, Object value, int role) {
    return setData_native(nativeId(), row, col, value, role);
    }

    private native Object data_native(long id, int row, int col, int role);

    public final Object data(int row, int col, int role) {
    return data_native(nativeId(), row, col, role);
    }

    public final Object data(int row, int col) {
    return data_native(nativeId(), row, col, Qt.ItemDataRole.DisplayRole);
    }*/

}

    public class QAbstractItemModel_ConcreteWrapper : QAbstractItemModel {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int columnCount(const(QModelIndex) parent_ = QModelIndex()) const {
            return qtd_QAbstractItemModel_columnCount_QModelIndex_const(qtdNativeId, parent_);
        }

        override         public QVariant data(const(QModelIndex) index, int role = 0) const {
            void* ret = qtd_QAbstractItemModel_data_QModelIndex_int_const(qtdNativeId, index, role);
            QVariant __d_return_value = new QVariant(ret);
            return __d_return_value;
        }

        override         public QModelIndex index(int row, int column, const(QModelIndex) parent_ = QModelIndex()) const {
            QModelIndex res;
            qtd_QAbstractItemModel_index_int_int_QModelIndex_const(qtdNativeId, &res, row, column, parent_);
            return res;
        }

        override         public QModelIndex parent(const(QModelIndex) child) const {
            QModelIndex res;
            qtd_QAbstractItemModel_parent_QModelIndex_const(qtdNativeId, &res, child);
            return res;
        }

        override         public int rowCount(const(QModelIndex) parent_ = QModelIndex()) const {
            return qtd_QAbstractItemModel_rowCount_QModelIndex_const(qtdNativeId, parent_);
        }
    }


// C wrappers for signal emitters
private extern(C) void  qtd_QAbstractItemModel_dataChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) topLeft0,
 const(QModelIndexAccessor) bottomRight1);
private extern(C) void  qtd_QAbstractItemModel_headerDataChanged_Orientation_int_int(void* __this_nativeId,
 int orientation0,
 int first1,
 int last2);
private extern(C) void  qtd_QAbstractItemModel_layoutAboutToBeChanged(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemModel_layoutChanged(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QAbstractItemModel_QAbstractItemModel_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QAbstractItemModel_beginInsertColumns_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int first1,
 int last2);
private extern(C) void  qtd_QAbstractItemModel_beginInsertRows_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int first1,
 int last2);
private extern(C) bool  qtd_QAbstractItemModel_beginMoveColumns_QModelIndex_int_int_QModelIndex_int(void* __this_nativeId,
 const(QModelIndexAccessor) sourceParent0,
 int sourceFirst1,
 int sourceLast2,
 const(QModelIndexAccessor) destinationParent3,
 int destinationColumn4);
private extern(C) bool  qtd_QAbstractItemModel_beginMoveRows_QModelIndex_int_int_QModelIndex_int(void* __this_nativeId,
 const(QModelIndexAccessor) sourceParent0,
 int sourceFirst1,
 int sourceLast2,
 const(QModelIndexAccessor) destinationParent3,
 int destinationRow4);
private extern(C) void  qtd_QAbstractItemModel_beginRemoveColumns_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int first1,
 int last2);
private extern(C) void  qtd_QAbstractItemModel_beginRemoveRows_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int first1,
 int last2);
private extern(C) void  qtd_QAbstractItemModel_beginResetModel(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemModel_changePersistentIndex_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) from0,
 const(QModelIndexAccessor) to1);
private extern(C) void  qtd_QAbstractItemModel_changePersistentIndexList_QList_QList(void* __this_nativeId,
 void* from0,
 void* to1);
private extern(C) void  qtd_QAbstractItemModel_createIndex_int_int_int_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 int id2);
private extern(C) void  qtd_QAbstractItemModel_createIndex_int_int_uint_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 uint id2);
private extern(C) void  qtd_QAbstractItemModel_createIndex_int_int_nativepointervoid_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 void* data2);
private extern(C) bool  qtd_QAbstractItemModel_decodeData_int_int_QModelIndex_QDataStream(void* __this_nativeId,
 int row0,
 int column1,
 const(QModelIndexAccessor) parent2,
 void* stream3);
private extern(C) void  qtd_QAbstractItemModel_encodeData_QList_QDataStream_const(void* __this_nativeId,
 void* indexes0,
 void* stream1);
private extern(C) void  qtd_QAbstractItemModel_endInsertColumns(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemModel_endInsertRows(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemModel_endMoveColumns(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemModel_endMoveRows(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemModel_endRemoveColumns(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemModel_endRemoveRows(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemModel_endResetModel(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractItemModel_hasIndex_int_int_QModelIndex_const(void* __this_nativeId,
 int row0,
 int column1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QAbstractItemModel_insertColumn_int_QModelIndex(void* __this_nativeId,
 int column0,
 const(QModelIndexAccessor) parent1);
private extern(C) bool  qtd_QAbstractItemModel_insertRow_int_QModelIndex(void* __this_nativeId,
 int row0,
 const(QModelIndexAccessor) parent1);
private extern(C) void  qtd_QAbstractItemModel_persistentIndexList_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QAbstractItemModel_removeColumn_int_QModelIndex(void* __this_nativeId,
 int column0,
 const(QModelIndexAccessor) parent1);
private extern(C) bool  qtd_QAbstractItemModel_removeRow_int_QModelIndex(void* __this_nativeId,
 int row0,
 const(QModelIndexAccessor) parent1);
private extern(C) void  qtd_QAbstractItemModel_reset(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemModel_setSupportedDragActions_DropActions(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractItemModel_sibling_int_int_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 const(QModelIndexAccessor) idx2);
private extern(C) int  qtd_QAbstractItemModel_supportedDragActions_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractItemModel_buddy_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QAbstractItemModel_canFetchMore_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) int  qtd_QAbstractItemModel_columnCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QAbstractItemModel_data_QModelIndex_int_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int role1);
private extern(C) bool  qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(void* __this_nativeId,
 void* data0,
 int action1,
 int row2,
 int column3,
 const(QModelIndexAccessor) parent4);
private extern(C) void  qtd_QAbstractItemModel_fetchMore_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) int  qtd_QAbstractItemModel_flags_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QAbstractItemModel_hasChildren_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QAbstractItemModel_headerData_int_Orientation_int_const(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2);
private extern(C) void  qtd_QAbstractItemModel_index_int_int_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex(void* __this_nativeId,
 int column0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QAbstractItemModel_insertRows_int_int_QModelIndex(void* __this_nativeId,
 int row0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) void  qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const(void* __this_nativeId,
 void* __d_return_value,
 const(QModelIndexAccessor) start0,
 int role1,
 void* value2,
 int hits3,
 int flags4);
private extern(C) void*  qtd_QAbstractItemModel_mimeData_QList_const(void* __this_nativeId,
 void* indexes0);
private extern(C) void  qtd_QAbstractItemModel_mimeTypes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAbstractItemModel_parent_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) child0);
private extern(C) bool  qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex(void* __this_nativeId,
 int column0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QAbstractItemModel_removeRows_int_int_QModelIndex(void* __this_nativeId,
 int row0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) void  qtd_QAbstractItemModel_revert(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemModel_rowCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) bool  qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* value1,
 int role2);
private extern(C) bool  qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int(void* __this_nativeId,
 int section0,
 int orientation1,
 void* value2,
 int role3);
private extern(C) void  qtd_QAbstractItemModel_sort_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) void  qtd_QAbstractItemModel_span_QModelIndex_const(void* __this_nativeId,
 QSize * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QAbstractItemModel_submit(void* __this_nativeId);
private extern(C) int  qtd_QAbstractItemModel_supportedDropActions_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* index0) qtd_QAbstractItemModel_buddy_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractItemModel_buddy_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* index0){
    auto d_object = cast(QAbstractItemModel) dId;
    *__d_return_value = d_object.buddy(*index0);
}

extern(C){ extern bool function(void *dId, QModelIndexAccessor* parent0) qtd_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch; }
extern(C) bool qtd_export_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor* parent0){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.canFetchMore(*parent0);
    return return_value;
}

extern(C){ extern int function(void *dId, QModelIndexAccessor* parent0) qtd_QAbstractItemModel_columnCount_QModelIndex_const_dispatch; }
extern(C) int qtd_export_QAbstractItemModel_columnCount_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor* parent0){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.columnCount(*parent0);
    return return_value;
}

extern(C){ extern void* function(void *dId, QModelIndexAccessor* index0, int role1) qtd_QAbstractItemModel_data_QModelIndex_int_const_dispatch; }
extern(C) void* qtd_export_QAbstractItemModel_data_QModelIndex_int_const_dispatch(void *dId, QModelIndexAccessor* index0, int role1){
    auto d_object = cast(QAbstractItemModel) dId;
    QVariant ret_value = d_object.data(*index0, role1);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern bool function(void *dId, void* data0, int action1, int row2, int column3, QModelIndexAccessor* parent4) qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch; }
extern(C) bool qtd_export_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch(void *dId, void* data0, int action1, int row2, int column3, QModelIndexAccessor* parent4){
    auto d_object = cast(QAbstractItemModel) dId;
    scope data0_d_ref = new QMimeData(data0, QtdObjectInitFlags.onStack);

    auto action1_enum = cast(Qt.DropAction) action1;
    auto return_value = d_object.dropMimeData(data0_d_ref, action1_enum, row2, column3, *parent4);
    return return_value;
}

extern(C){ extern void function(void *dId, QModelIndexAccessor* parent0) qtd_QAbstractItemModel_fetchMore_QModelIndex_dispatch; }
extern(C) void qtd_export_QAbstractItemModel_fetchMore_QModelIndex_dispatch(void *dId, QModelIndexAccessor* parent0){
    auto d_object = cast(QAbstractItemModel) dId;
    d_object.fetchMore(*parent0);
}

extern(C){ extern int function(void *dId, QModelIndexAccessor* index0) qtd_QAbstractItemModel_flags_QModelIndex_const_dispatch; }
extern(C) int qtd_export_QAbstractItemModel_flags_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor* index0){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.flags(*index0);
    return return_value;
}

extern(C){ extern bool function(void *dId, QModelIndexAccessor* parent0) qtd_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch; }
extern(C) bool qtd_export_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor* parent0){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.hasChildren(*parent0);
    return return_value;
}

extern(C){ extern void* function(void *dId, int section0, int orientation1, int role2) qtd_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch; }
extern(C) void* qtd_export_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch(void *dId, int section0, int orientation1, int role2){
    auto d_object = cast(QAbstractItemModel) dId;
    auto orientation1_enum = cast(Qt.Orientation) orientation1;
    QVariant ret_value = d_object.headerData(section0, orientation1_enum, role2);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, QModelIndexAccessor *__d_return_value, int row0, int column1, QModelIndexAccessor* parent2) qtd_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor *__d_return_value, int row0, int column1, QModelIndexAccessor* parent2){
    auto d_object = cast(QAbstractItemModel) dId;
    *__d_return_value = d_object.index(row0, column1, *parent2);
}

extern(C){ extern bool function(void *dId, int column0, int count1, QModelIndexAccessor* parent2) qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch; }
extern(C) bool qtd_export_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch(void *dId, int column0, int count1, QModelIndexAccessor* parent2){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.insertColumns(column0, count1, *parent2);
    return return_value;
}

extern(C){ extern bool function(void *dId, int row0, int count1, QModelIndexAccessor* parent2) qtd_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch; }
extern(C) bool qtd_export_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch(void *dId, int row0, int count1, QModelIndexAccessor* parent2){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.insertRows(row0, count1, *parent2);
    return return_value;
}

extern(C){ extern void function(void *dId, QList!(QModelIndex)* __d_arr, QModelIndexAccessor* start0, int role1, void* value2, int hits3, int flags4) qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch; }
extern(C) void qtd_export_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch(void *dId, QList!(QModelIndex)* __d_arr, QModelIndexAccessor* start0, int role1, void* value2, int hits3, int flags4){
    auto d_object = cast(QAbstractItemModel) dId;
    scope value2_d_ref = new QVariant(value2, QtdObjectInitFlags.onStack);
    auto return_value = d_object.match(*start0, role1, value2_d_ref, hits3, flags4);
    *__d_arr = return_value;
}

extern(C){ extern void* function(void *dId, void* indexes0) qtd_QAbstractItemModel_mimeData_QList_const_dispatch; }
extern(C) void* qtd_export_QAbstractItemModel_mimeData_QList_const_dispatch(void *dId, void* indexes0){
    auto d_object = cast(QAbstractItemModel) dId;
    auto indexes0_d_ref = cast(QList!(QModelIndex)*)indexes0;

    QMimeData ret_value = d_object.mimeData(*indexes0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, QList!(string)* __d_arr) qtd_QAbstractItemModel_mimeTypes_const_dispatch; }
extern(C) void qtd_export_QAbstractItemModel_mimeTypes_const_dispatch(void *dId, QList!(string)* __d_arr){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.mimeTypes();
    *__d_arr = return_value;
}

extern(C){ extern void function(void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* child0) qtd_QAbstractItemModel_parent_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractItemModel_parent_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* child0){
    auto d_object = cast(QAbstractItemModel) dId;
    *__d_return_value = d_object.parent(*child0);
}

extern(C){ extern bool function(void *dId, int column0, int count1, QModelIndexAccessor* parent2) qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch; }
extern(C) bool qtd_export_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch(void *dId, int column0, int count1, QModelIndexAccessor* parent2){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.removeColumns(column0, count1, *parent2);
    return return_value;
}

extern(C){ extern bool function(void *dId, int row0, int count1, QModelIndexAccessor* parent2) qtd_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch; }
extern(C) bool qtd_export_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch(void *dId, int row0, int count1, QModelIndexAccessor* parent2){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.removeRows(row0, count1, *parent2);
    return return_value;
}

extern(C){ extern void function(void *dId) qtd_QAbstractItemModel_revert_dispatch; }
extern(C) void qtd_export_QAbstractItemModel_revert_dispatch(void *dId){
    auto d_object = cast(QAbstractItemModel) dId;
    d_object.revert();
}

extern(C){ extern int function(void *dId, QModelIndexAccessor* parent0) qtd_QAbstractItemModel_rowCount_QModelIndex_const_dispatch; }
extern(C) int qtd_export_QAbstractItemModel_rowCount_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor* parent0){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.rowCount(*parent0);
    return return_value;
}

extern(C){ extern bool function(void *dId, QModelIndexAccessor* index0, void* value1, int role2) qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch; }
extern(C) bool qtd_export_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch(void *dId, QModelIndexAccessor* index0, void* value1, int role2){
    auto d_object = cast(QAbstractItemModel) dId;
    scope value1_d_ref = new QVariant(value1, QtdObjectInitFlags.onStack);
    auto return_value = d_object.setData(*index0, value1_d_ref, role2);
    return return_value;
}

extern(C){ extern bool function(void *dId, int section0, int orientation1, void* value2, int role3) qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch; }
extern(C) bool qtd_export_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch(void *dId, int section0, int orientation1, void* value2, int role3){
    auto d_object = cast(QAbstractItemModel) dId;
    auto orientation1_enum = cast(Qt.Orientation) orientation1;
    scope value2_d_ref = new QVariant(value2, QtdObjectInitFlags.onStack);
    auto return_value = d_object.setHeaderData(section0, orientation1_enum, value2_d_ref, role3);
    return return_value;
}

extern(C){ extern void function(void *dId, int column0, int order1) qtd_QAbstractItemModel_sort_int_SortOrder_dispatch; }
extern(C) void qtd_export_QAbstractItemModel_sort_int_SortOrder_dispatch(void *dId, int column0, int order1){
    auto d_object = cast(QAbstractItemModel) dId;
    auto order1_enum = cast(Qt.SortOrder) order1;
    d_object.sort(column0, order1_enum);
}

extern(C){ extern void function(void *dId, QSize *__d_return_value, QModelIndexAccessor* index0) qtd_QAbstractItemModel_span_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractItemModel_span_QModelIndex_const_dispatch(void *dId, QSize *__d_return_value, QModelIndexAccessor* index0){
    auto d_object = cast(QAbstractItemModel) dId;
    *__d_return_value = d_object.span(*index0);
}

extern(C){ extern bool function(void *dId) qtd_QAbstractItemModel_submit_dispatch; }
extern(C) bool qtd_export_QAbstractItemModel_submit_dispatch(void *dId){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.submit();
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QAbstractItemModel_supportedDropActions_const_dispatch; }
extern(C) int qtd_export_QAbstractItemModel_supportedDropActions_const_dispatch(void *dId){
    auto d_object = cast(QAbstractItemModel) dId;
    auto return_value = d_object.supportedDropActions();
    return return_value;
}

private extern (C) void qtd_QAbstractItemModel_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractItemModel() {
    void*[26] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractItemModel_buddy_QModelIndex_const_dispatch;
    virt_arr[1] = &qtd_export_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch;
    virt_arr[2] = &qtd_export_QAbstractItemModel_columnCount_QModelIndex_const_dispatch;
    virt_arr[3] = &qtd_export_QAbstractItemModel_data_QModelIndex_int_const_dispatch;
    virt_arr[4] = &qtd_export_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch;
    virt_arr[5] = &qtd_export_QAbstractItemModel_fetchMore_QModelIndex_dispatch;
    virt_arr[6] = &qtd_export_QAbstractItemModel_flags_QModelIndex_const_dispatch;
    virt_arr[7] = &qtd_export_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch;
    virt_arr[8] = &qtd_export_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch;
    virt_arr[9] = &qtd_export_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch;
    virt_arr[10] = &qtd_export_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch;
    virt_arr[11] = &qtd_export_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch;
    virt_arr[12] = &qtd_export_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch;
    virt_arr[13] = &qtd_export_QAbstractItemModel_mimeData_QList_const_dispatch;
    virt_arr[14] = &qtd_export_QAbstractItemModel_mimeTypes_const_dispatch;
    virt_arr[15] = &qtd_export_QAbstractItemModel_parent_QModelIndex_const_dispatch;
    virt_arr[16] = &qtd_export_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch;
    virt_arr[17] = &qtd_export_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch;
    virt_arr[18] = &qtd_export_QAbstractItemModel_revert_dispatch;
    virt_arr[19] = &qtd_export_QAbstractItemModel_rowCount_QModelIndex_const_dispatch;
    virt_arr[20] = &qtd_export_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch;
    virt_arr[21] = &qtd_export_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch;
    virt_arr[22] = &qtd_export_QAbstractItemModel_sort_int_SortOrder_dispatch;
    virt_arr[23] = &qtd_export_QAbstractItemModel_span_QModelIndex_const_dispatch;
    virt_arr[24] = &qtd_export_QAbstractItemModel_submit_dispatch;
    virt_arr[25] = &qtd_export_QAbstractItemModel_supportedDropActions_const_dispatch;
    qtd_QAbstractItemModel_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractItemModel_columnsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractItemModel_columnsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractItemModel_columnsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractItemModel_columnsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractItemModel_dataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        auto topLeft0 = *(cast(QModelIndex*)args[1]);
        auto bottomRight1 = *(cast(QModelIndex*)args[2]);
        //d_object.dataChanged_emit(topLeft0, bottomRight1);
}*/
/*private extern(C) void qtd_QAbstractItemModel_headerDataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        auto orientation0 = *(cast(Qt.Orientation*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.headerDataChanged_emit(orientation0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractItemModel_layoutAboutToBeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        //d_object.layoutAboutToBeChanged_emit();
}*/
/*private extern(C) void qtd_QAbstractItemModel_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        //d_object.layoutChanged_emit();
}*/
/*private extern(C) void qtd_QAbstractItemModel_modelAboutToBeReset_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        //d_object.modelAboutToBeReset_emit();
}*/
/*private extern(C) void qtd_QAbstractItemModel_modelReset_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        //d_object.modelReset_emit();
}*/
/*private extern(C) void qtd_QAbstractItemModel_rowsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractItemModel_rowsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractItemModel_rowsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractItemModel_rowsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsRemoved_emit(parent0, first1, last2);
}*/

extern(C) QMetaObjectNative* qtd_QAbstractItemModel_staticMetaObject();

extern(C) void qtd_QAbstractItemModel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractItemModel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
