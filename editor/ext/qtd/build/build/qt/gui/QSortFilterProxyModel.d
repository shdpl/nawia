module qt.gui.QSortFilterProxyModel;

public import qt.gui.QSortFilterProxyModel_aux;
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
public import qt.core.QRegExp;
public import qt.core.QList;
public import qt.core.QMimeData;
public import qt.gui.QAbstractProxyModel;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QVariant;
public import qt.core.QModelIndex;
public import qt.core.QAbstractItemModel;
public import qt.gui.QItemSelection;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSortFilterProxyModel : QAbstractProxyModel
{

Object __rcSourceModel = null;

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

    public this(QObject parent_ = null) {
        void* ret = qtd_QSortFilterProxyModel_QSortFilterProxyModel_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool dynamicSortFilter() const {
        return qtd_QSortFilterProxyModel_dynamicSortFilter_const(qtdNativeId);
    }

    public final Qt.CaseSensitivity filterCaseSensitivity() const {
        return cast(Qt.CaseSensitivity) qtd_QSortFilterProxyModel_filterCaseSensitivity_const(qtdNativeId);
    }

    public final int filterKeyColumn() const {
        return qtd_QSortFilterProxyModel_filterKeyColumn_const(qtdNativeId);
    }

    public final QRegExp filterRegExp() const {
        void* ret = qtd_QSortFilterProxyModel_filterRegExp_const(qtdNativeId);
        QRegExp __d_return_value = new QRegExp(ret);
        return __d_return_value;
    }

    public final int filterRole() const {
        return qtd_QSortFilterProxyModel_filterRole_const(qtdNativeId);
    }

    public final void invalidate() {
        qtd_QSortFilterProxyModel_invalidate(qtdNativeId);
    }

    protected final void invalidateFilter() {
        qtd_QSortFilterProxyModel_invalidateFilter(qtdNativeId);
    }

    public final bool isSortLocaleAware() const {
        return qtd_QSortFilterProxyModel_isSortLocaleAware_const(qtdNativeId);
    }

    public final void setDynamicSortFilter(bool enable) {
        qtd_QSortFilterProxyModel_setDynamicSortFilter_bool(qtdNativeId, enable);
    }

    public final void setFilterCaseSensitivity(Qt.CaseSensitivity cs) {
        qtd_QSortFilterProxyModel_setFilterCaseSensitivity_CaseSensitivity(qtdNativeId, cs);
    }

    public final void setFilterFixedString(string pattern) {
        qtd_QSortFilterProxyModel_setFilterFixedString_string(qtdNativeId, pattern);
    }

    public final void setFilterKeyColumn(int column) {
        qtd_QSortFilterProxyModel_setFilterKeyColumn_int(qtdNativeId, column);
    }

    public final void setFilterRegExp(const(QRegExp) regExp) {
        qtd_QSortFilterProxyModel_setFilterRegExp_QRegExp(qtdNativeId, regExp is null ? null : (cast(QRegExp)regExp).qtdNativeId);
    }

    public final void setFilterRegExp(string pattern) {
        qtd_QSortFilterProxyModel_setFilterRegExp_string(qtdNativeId, pattern);
    }

    public final void setFilterRole(int role) {
        qtd_QSortFilterProxyModel_setFilterRole_int(qtdNativeId, role);
    }

    public final void setFilterWildcard(string pattern) {
        qtd_QSortFilterProxyModel_setFilterWildcard_string(qtdNativeId, pattern);
    }

    public final void setSortCaseSensitivity(Qt.CaseSensitivity cs) {
        qtd_QSortFilterProxyModel_setSortCaseSensitivity_CaseSensitivity(qtdNativeId, cs);
    }

    public final void setSortLocaleAware(bool on) {
        qtd_QSortFilterProxyModel_setSortLocaleAware_bool(qtdNativeId, on);
    }

    public final void setSortRole(int role) {
        qtd_QSortFilterProxyModel_setSortRole_int(qtdNativeId, role);
    }

    public final Qt.CaseSensitivity sortCaseSensitivity() const {
        return cast(Qt.CaseSensitivity) qtd_QSortFilterProxyModel_sortCaseSensitivity_const(qtdNativeId);
    }

    public final int sortColumn() const {
        return qtd_QSortFilterProxyModel_sortColumn_const(qtdNativeId);
    }

    public final Qt.SortOrder sortOrder() const {
        return cast(Qt.SortOrder) qtd_QSortFilterProxyModel_sortOrder_const(qtdNativeId);
    }

    public final int sortRole() const {
        return qtd_QSortFilterProxyModel_sortRole_const(qtdNativeId);
    }

    public QModelIndex buddy(const(QModelIndex) index) const {
        QModelIndex res;
        qtd_QSortFilterProxyModel_buddy_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public bool canFetchMore(const(QModelIndex) parent_) const {
        return qtd_QSortFilterProxyModel_canFetchMore_QModelIndex_const(qtdNativeId, parent_);
    }

    public int columnCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QSortFilterProxyModel_columnCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public QVariant data(const(QModelIndex) index, int role = 0) const {
        void* ret = qtd_QSortFilterProxyModel_data_QModelIndex_int_const(qtdNativeId, index, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool dropMimeData(QMimeData data, Qt.DropAction action, int row, int column, const(QModelIndex) parent_) {
        return qtd_QSortFilterProxyModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(qtdNativeId, data is null ? null : (cast(QMimeData)data).qtdNativeId, action, row, column, parent_);
    }

    public void fetchMore(const(QModelIndex) parent_) {
        qtd_QSortFilterProxyModel_fetchMore_QModelIndex(qtdNativeId, parent_);
    }

    protected bool filterAcceptsColumn(int source_column, const(QModelIndex) source_parent) const {
        return qtd_QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const(qtdNativeId, source_column, source_parent);
    }

    protected bool filterAcceptsRow(int source_row, const(QModelIndex) source_parent) const {
        return qtd_QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const(qtdNativeId, source_row, source_parent);
    }

    public int flags(const(QModelIndex) index) const {
        return qtd_QSortFilterProxyModel_flags_QModelIndex_const(qtdNativeId, index);
    }

    public bool hasChildren(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QSortFilterProxyModel_hasChildren_QModelIndex_const(qtdNativeId, parent_);
    }

    public QVariant headerData(int section, Qt.Orientation orientation, int role = 0) const {
        void* ret = qtd_QSortFilterProxyModel_headerData_int_Orientation_int_const(qtdNativeId, section, orientation, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public QModelIndex index(int row, int column, const(QModelIndex) parent_ = QModelIndex()) const {
        QModelIndex res;
        qtd_QSortFilterProxyModel_index_int_int_QModelIndex_const(qtdNativeId, &res, row, column, parent_);
        return res;
    }

    public bool insertColumns(int column, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QSortFilterProxyModel_insertColumns_int_int_QModelIndex(qtdNativeId, column, count, parent_);
    }

    public bool insertRows(int row, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QSortFilterProxyModel_insertRows_int_int_QModelIndex(qtdNativeId, row, count, parent_);
    }

    protected bool lessThan(const(QModelIndex) left, const(QModelIndex) right) const {
        return qtd_QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const(qtdNativeId, left, right);
    }

    public QModelIndex mapFromSource(const(QModelIndex) sourceIndex) const {
        QModelIndex res;
        qtd_QSortFilterProxyModel_mapFromSource_QModelIndex_const(qtdNativeId, &res, sourceIndex);
        return res;
    }

    public QItemSelection mapSelectionFromSource(const(QItemSelection) sourceSelection) const {
        void* ret = qtd_QSortFilterProxyModel_mapSelectionFromSource_QItemSelection_const(qtdNativeId, sourceSelection is null ? null : (cast(QItemSelection)sourceSelection).qtdNativeId);
        QItemSelection __d_return_value = new QItemSelection(ret);
        return __d_return_value;
    }

    public QItemSelection mapSelectionToSource(const(QItemSelection) proxySelection) const {
        void* ret = qtd_QSortFilterProxyModel_mapSelectionToSource_QItemSelection_const(qtdNativeId, proxySelection is null ? null : (cast(QItemSelection)proxySelection).qtdNativeId);
        QItemSelection __d_return_value = new QItemSelection(ret);
        return __d_return_value;
    }

    public QModelIndex mapToSource(const(QModelIndex) proxyIndex) const {
        QModelIndex res;
        qtd_QSortFilterProxyModel_mapToSource_QModelIndex_const(qtdNativeId, &res, proxyIndex);
        return res;
    }

    public QList!(QModelIndex) match(const(QModelIndex) start, int role, QVariant value, int hits = 1, int flags = Qt.MatchFlag.MatchStartsWith | Qt.MatchFlag.MatchWrap) const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QSortFilterProxyModel_match_QModelIndex_int_QVariant_int_MatchFlags_const(qtdNativeId, &res, start, role, value is null ? null : value.qtdNativeId, hits, flags);
        return res;
    }

    public QMimeData mimeData(QList!(QModelIndex) indexes) const {
        void *ret = qtd_QSortFilterProxyModel_mimeData_QList_const(qtdNativeId, &indexes);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    public QList!(string) mimeTypes() const {
        auto res = QList!(string).opCall();
        qtd_QSortFilterProxyModel_mimeTypes_const(qtdNativeId, &res);
        return res;
    }

    public QModelIndex parent(const(QModelIndex) child) const {
        QModelIndex res;
        qtd_QSortFilterProxyModel_parent_QModelIndex_const(qtdNativeId, &res, child);
        return res;
    }

    public bool removeColumns(int column, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QSortFilterProxyModel_removeColumns_int_int_QModelIndex(qtdNativeId, column, count, parent_);
    }

    public bool removeRows(int row, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QSortFilterProxyModel_removeRows_int_int_QModelIndex(qtdNativeId, row, count, parent_);
    }

    public int rowCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QSortFilterProxyModel_rowCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public bool setData(const(QModelIndex) index, QVariant value, int role = 2) {
        return qtd_QSortFilterProxyModel_setData_QModelIndex_QVariant_int(qtdNativeId, index, value is null ? null : value.qtdNativeId, role);
    }

    public bool setHeaderData(int section, Qt.Orientation orientation, QVariant value, int role = 2) {
        return qtd_QSortFilterProxyModel_setHeaderData_int_Orientation_QVariant_int(qtdNativeId, section, orientation, value is null ? null : value.qtdNativeId, role);
    }

    public void setSourceModel(QAbstractItemModel sourceModel) {
        {
            __rcSourceModel = cast(Object) sourceModel;
        }
        qtd_QSortFilterProxyModel_setSourceModel_QAbstractItemModel(qtdNativeId, sourceModel is null ? null : sourceModel.qtdNativeId);
    }

    public void sort(int column, Qt.SortOrder order = Qt.SortOrder.AscendingOrder) {
        qtd_QSortFilterProxyModel_sort_int_SortOrder(qtdNativeId, column, order);
    }

    public QSize span(const(QModelIndex) index) const {
        QSize res;
        qtd_QSortFilterProxyModel_span_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public int supportedDropActions() const {
        return qtd_QSortFilterProxyModel_supportedDropActions_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "invalidate()", 
            "setFilterFixedString(QString)", 
            "setFilterRegExp(QString)", 
            "setFilterWildcard(QString)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSortFilterProxyModel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSortFilterProxyModel);
    }

    static QSortFilterProxyModel __getObject(void* nativeId) {
        return static_cast!(QSortFilterProxyModel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSortFilterProxyModel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSortFilterProxyModel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSortFilterProxyModel(nativeId, initFlags);
        QSortFilterProxyModel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("invalidate"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(string)("setFilterFixedString"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(string)("setFilterRegExp"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(string)("setFilterWildcard"), index));

    }

    public alias void __isQtType_QSortFilterProxyModel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSortFilterProxyModel_QSortFilterProxyModel_QObject(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QSortFilterProxyModel_dynamicSortFilter_const(void* __this_nativeId);
private extern(C) int  qtd_QSortFilterProxyModel_filterCaseSensitivity_const(void* __this_nativeId);
private extern(C) int  qtd_QSortFilterProxyModel_filterKeyColumn_const(void* __this_nativeId);
private extern(C) void*  qtd_QSortFilterProxyModel_filterRegExp_const(void* __this_nativeId);
private extern(C) int  qtd_QSortFilterProxyModel_filterRole_const(void* __this_nativeId);
private extern(C) void  qtd_QSortFilterProxyModel_invalidate(void* __this_nativeId);
private extern(C) void  qtd_QSortFilterProxyModel_invalidateFilter(void* __this_nativeId);
private extern(C) bool  qtd_QSortFilterProxyModel_isSortLocaleAware_const(void* __this_nativeId);
private extern(C) void  qtd_QSortFilterProxyModel_setDynamicSortFilter_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QSortFilterProxyModel_setFilterCaseSensitivity_CaseSensitivity(void* __this_nativeId,
 int cs0);
private extern(C) void  qtd_QSortFilterProxyModel_setFilterFixedString_string(void* __this_nativeId,
 string pattern0);
private extern(C) void  qtd_QSortFilterProxyModel_setFilterKeyColumn_int(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QSortFilterProxyModel_setFilterRegExp_QRegExp(void* __this_nativeId,
 void* regExp0);
private extern(C) void  qtd_QSortFilterProxyModel_setFilterRegExp_string(void* __this_nativeId,
 string pattern0);
private extern(C) void  qtd_QSortFilterProxyModel_setFilterRole_int(void* __this_nativeId,
 int role0);
private extern(C) void  qtd_QSortFilterProxyModel_setFilterWildcard_string(void* __this_nativeId,
 string pattern0);
private extern(C) void  qtd_QSortFilterProxyModel_setSortCaseSensitivity_CaseSensitivity(void* __this_nativeId,
 int cs0);
private extern(C) void  qtd_QSortFilterProxyModel_setSortLocaleAware_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QSortFilterProxyModel_setSortRole_int(void* __this_nativeId,
 int role0);
private extern(C) int  qtd_QSortFilterProxyModel_sortCaseSensitivity_const(void* __this_nativeId);
private extern(C) int  qtd_QSortFilterProxyModel_sortColumn_const(void* __this_nativeId);
private extern(C) int  qtd_QSortFilterProxyModel_sortOrder_const(void* __this_nativeId);
private extern(C) int  qtd_QSortFilterProxyModel_sortRole_const(void* __this_nativeId);
private extern(C) void  qtd_QSortFilterProxyModel_buddy_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QSortFilterProxyModel_canFetchMore_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) int  qtd_QSortFilterProxyModel_columnCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QSortFilterProxyModel_data_QModelIndex_int_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int role1);
private extern(C) bool  qtd_QSortFilterProxyModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(void* __this_nativeId,
 void* data0,
 int action1,
 int row2,
 int column3,
 const(QModelIndexAccessor) parent4);
private extern(C) void  qtd_QSortFilterProxyModel_fetchMore_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) bool  qtd_QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const(void* __this_nativeId,
 int source_column0,
 const(QModelIndexAccessor) source_parent1);
private extern(C) bool  qtd_QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const(void* __this_nativeId,
 int source_row0,
 const(QModelIndexAccessor) source_parent1);
private extern(C) int  qtd_QSortFilterProxyModel_flags_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QSortFilterProxyModel_hasChildren_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QSortFilterProxyModel_headerData_int_Orientation_int_const(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2);
private extern(C) void  qtd_QSortFilterProxyModel_index_int_int_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QSortFilterProxyModel_insertColumns_int_int_QModelIndex(void* __this_nativeId,
 int column0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QSortFilterProxyModel_insertRows_int_int_QModelIndex(void* __this_nativeId,
 int row0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) left0,
 const(QModelIndexAccessor) right1);
private extern(C) void  qtd_QSortFilterProxyModel_mapFromSource_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) sourceIndex0);
private extern(C) void*  qtd_QSortFilterProxyModel_mapSelectionFromSource_QItemSelection_const(void* __this_nativeId,
 void* sourceSelection0);
private extern(C) void*  qtd_QSortFilterProxyModel_mapSelectionToSource_QItemSelection_const(void* __this_nativeId,
 void* proxySelection0);
private extern(C) void  qtd_QSortFilterProxyModel_mapToSource_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) proxyIndex0);
private extern(C) void  qtd_QSortFilterProxyModel_match_QModelIndex_int_QVariant_int_MatchFlags_const(void* __this_nativeId,
 void* __d_return_value,
 const(QModelIndexAccessor) start0,
 int role1,
 void* value2,
 int hits3,
 int flags4);
private extern(C) void*  qtd_QSortFilterProxyModel_mimeData_QList_const(void* __this_nativeId,
 void* indexes0);
private extern(C) void  qtd_QSortFilterProxyModel_mimeTypes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSortFilterProxyModel_parent_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) child0);
private extern(C) bool  qtd_QSortFilterProxyModel_removeColumns_int_int_QModelIndex(void* __this_nativeId,
 int column0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QSortFilterProxyModel_removeRows_int_int_QModelIndex(void* __this_nativeId,
 int row0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) int  qtd_QSortFilterProxyModel_rowCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) bool  qtd_QSortFilterProxyModel_setData_QModelIndex_QVariant_int(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* value1,
 int role2);
private extern(C) bool  qtd_QSortFilterProxyModel_setHeaderData_int_Orientation_QVariant_int(void* __this_nativeId,
 int section0,
 int orientation1,
 void* value2,
 int role3);
private extern(C) void  qtd_QSortFilterProxyModel_setSourceModel_QAbstractItemModel(void* __this_nativeId,
 void* sourceModel0);
private extern(C) void  qtd_QSortFilterProxyModel_sort_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) void  qtd_QSortFilterProxyModel_span_QModelIndex_const(void* __this_nativeId,
 QSize * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) int  qtd_QSortFilterProxyModel_supportedDropActions_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, int source_column0, QModelIndexAccessor* source_parent1) qtd_QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const_dispatch; }
extern(C) bool qtd_export_QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const_dispatch(void *dId, int source_column0, QModelIndexAccessor* source_parent1){
    auto d_object = cast(QSortFilterProxyModel) dId;
    auto return_value = d_object.filterAcceptsColumn(source_column0, *source_parent1);
    return return_value;
}

extern(C){ extern bool function(void *dId, int source_row0, QModelIndexAccessor* source_parent1) qtd_QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const_dispatch; }
extern(C) bool qtd_export_QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const_dispatch(void *dId, int source_row0, QModelIndexAccessor* source_parent1){
    auto d_object = cast(QSortFilterProxyModel) dId;
    auto return_value = d_object.filterAcceptsRow(source_row0, *source_parent1);
    return return_value;
}

extern(C){ extern bool function(void *dId, QModelIndexAccessor* left0, QModelIndexAccessor* right1) qtd_QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const_dispatch; }
extern(C) bool qtd_export_QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor* left0, QModelIndexAccessor* right1){
    auto d_object = cast(QSortFilterProxyModel) dId;
    auto return_value = d_object.lessThan(*left0, *right1);
    return return_value;
}

private extern (C) void qtd_QSortFilterProxyModel_initCallBacks(void* virtuals);

extern(C) void static_init_QSortFilterProxyModel() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const_dispatch;
    virt_arr[1] = &qtd_export_QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const_dispatch;
    virt_arr[2] = &qtd_export_QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const_dispatch;
    qtd_QSortFilterProxyModel_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QSortFilterProxyModel_columnsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_columnsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_columnsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_columnsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_dataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        auto topLeft0 = *(cast(QModelIndex*)args[1]);
        auto bottomRight1 = *(cast(QModelIndex*)args[2]);
        //d_object.dataChanged_emit(topLeft0, bottomRight1);
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_headerDataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        auto orientation0 = *(cast(Qt.Orientation*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.headerDataChanged_emit(orientation0, first1, last2);
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_layoutAboutToBeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        //d_object.layoutAboutToBeChanged_emit();
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        //d_object.layoutChanged_emit();
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_modelAboutToBeReset_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        //d_object.modelAboutToBeReset_emit();
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_modelReset_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        //d_object.modelReset_emit();
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_rowsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_rowsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_rowsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QSortFilterProxyModel_rowsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QSortFilterProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsRemoved_emit(parent0, first1, last2);
}*/

extern(C) QMetaObjectNative* qtd_QSortFilterProxyModel_staticMetaObject();

extern(C) void qtd_QSortFilterProxyModel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSortFilterProxyModel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
