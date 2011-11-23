module qt.gui.QProxyModel;

public import qt.gui.QProxyModel_aux;
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


public class QProxyModel : QAbstractItemModel
{

Object __rcModel = null;

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
        void* ret = qtd_QProxyModel_QProxyModel_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void connectToModel(QAbstractItemModel model) const {
        qtd_QProxyModel_connectToModel_QAbstractItemModel_const(qtdNativeId, model is null ? null : (cast(QAbstractItemModel)model).qtdNativeId);
    }

    protected final void disconnectFromModel(QAbstractItemModel model) const {
        qtd_QProxyModel_disconnectFromModel_QAbstractItemModel_const(qtdNativeId, model is null ? null : (cast(QAbstractItemModel)model).qtdNativeId);
    }

    public final QAbstractItemModel model() const {
        void *ret = qtd_QProxyModel_model_const(qtdNativeId);
        QAbstractItemModel __d_return_value = QAbstractItemModel.__getObject(ret);
        return __d_return_value;
    }

    protected final QModelIndex setProxyModel(const(QModelIndex) source_index) const {
        QModelIndex res;
        qtd_QProxyModel_setProxyModel_QModelIndex_const(qtdNativeId, &res, source_index);
        return res;
    }

    protected final QModelIndex setSourceModel(const(QModelIndex) proxy_index) const {
        QModelIndex res;
        qtd_QProxyModel_setSourceModel_QModelIndex_const(qtdNativeId, &res, proxy_index);
        return res;
    }

    public int columnCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QProxyModel_columnCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public QVariant data(const(QModelIndex) index, int role = 0) const {
        void* ret = qtd_QProxyModel_data_QModelIndex_int_const(qtdNativeId, index, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool dropMimeData(QMimeData data, Qt.DropAction action, int row, int column, const(QModelIndex) parent_) {
        return qtd_QProxyModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(qtdNativeId, data is null ? null : (cast(QMimeData)data).qtdNativeId, action, row, column, parent_);
    }

    public void fetchMore(const(QModelIndex) parent_) {
        qtd_QProxyModel_fetchMore_QModelIndex(qtdNativeId, parent_);
    }

    public int flags(const(QModelIndex) index) const {
        return qtd_QProxyModel_flags_QModelIndex_const(qtdNativeId, index);
    }

    public bool hasChildren(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QProxyModel_hasChildren_QModelIndex_const(qtdNativeId, parent_);
    }

    public QVariant headerData(int section, Qt.Orientation orientation, int role = 0) const {
        void* ret = qtd_QProxyModel_headerData_int_Orientation_int_const(qtdNativeId, section, orientation, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public QModelIndex index(int row, int column, const(QModelIndex) parent_ = QModelIndex()) const {
        QModelIndex res;
        qtd_QProxyModel_index_int_int_QModelIndex_const(qtdNativeId, &res, row, column, parent_);
        return res;
    }

    public bool insertColumns(int column, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QProxyModel_insertColumns_int_int_QModelIndex(qtdNativeId, column, count, parent_);
    }

    public bool insertRows(int row, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QProxyModel_insertRows_int_int_QModelIndex(qtdNativeId, row, count, parent_);
    }

    public QList!(QModelIndex) match(const(QModelIndex) start, int role, QVariant value, int hits = 1, int flags = 0) const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QProxyModel_match_QModelIndex_int_QVariant_int_MatchFlags_const(qtdNativeId, &res, start, role, value is null ? null : value.qtdNativeId, hits, flags);
        return res;
    }

    public QMimeData mimeData(QList!(QModelIndex) indexes) const {
        void *ret = qtd_QProxyModel_mimeData_QList_const(qtdNativeId, &indexes);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    public QList!(string) mimeTypes() const {
        auto res = QList!(string).opCall();
        qtd_QProxyModel_mimeTypes_const(qtdNativeId, &res);
        return res;
    }

    public QModelIndex parent(const(QModelIndex) child) const {
        QModelIndex res;
        qtd_QProxyModel_parent_QModelIndex_const(qtdNativeId, &res, child);
        return res;
    }

    public void revert() {
        qtd_QProxyModel_revert(qtdNativeId);
    }

    public int rowCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QProxyModel_rowCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public bool setData(const(QModelIndex) index, QVariant value, int role = 2) {
        return qtd_QProxyModel_setData_QModelIndex_QVariant_int(qtdNativeId, index, value is null ? null : value.qtdNativeId, role);
    }

    public bool setHeaderData(int section, Qt.Orientation orientation, QVariant value, int role = 2) {
        return qtd_QProxyModel_setHeaderData_int_Orientation_QVariant_int(qtdNativeId, section, orientation, value is null ? null : value.qtdNativeId, role);
    }

    public void setModel(QAbstractItemModel model) {
        {
            __rcModel = cast(Object) model;
        }
        qtd_QProxyModel_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
    }

    public void sort(int column, Qt.SortOrder order = Qt.SortOrder.AscendingOrder) {
        qtd_QProxyModel_sort_int_SortOrder(qtdNativeId, column, order);
    }

    public QSize span(const(QModelIndex) index) const {
        QSize res;
        qtd_QProxyModel_span_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public bool submit() {
        return qtd_QProxyModel_submit(qtdNativeId);
    }

    public int supportedDropActions() const {
        return qtd_QProxyModel_supportedDropActions_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QProxyModel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QProxyModel);
    }

    static QProxyModel __getObject(void* nativeId) {
        return static_cast!(QProxyModel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QProxyModel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QProxyModel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QProxyModel(nativeId, initFlags);
        QProxyModel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QProxyModel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QProxyModel_QProxyModel_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QProxyModel_connectToModel_QAbstractItemModel_const(void* __this_nativeId,
 void* model0);
private extern(C) void  qtd_QProxyModel_disconnectFromModel_QAbstractItemModel_const(void* __this_nativeId,
 void* model0);
private extern(C) void*  qtd_QProxyModel_model_const(void* __this_nativeId);
private extern(C) void  qtd_QProxyModel_setProxyModel_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) source_index0);
private extern(C) void  qtd_QProxyModel_setSourceModel_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) proxy_index0);
private extern(C) int  qtd_QProxyModel_columnCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QProxyModel_data_QModelIndex_int_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int role1);
private extern(C) bool  qtd_QProxyModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(void* __this_nativeId,
 void* data0,
 int action1,
 int row2,
 int column3,
 const(QModelIndexAccessor) parent4);
private extern(C) void  qtd_QProxyModel_fetchMore_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) int  qtd_QProxyModel_flags_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QProxyModel_hasChildren_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QProxyModel_headerData_int_Orientation_int_const(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2);
private extern(C) void  qtd_QProxyModel_index_int_int_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QProxyModel_insertColumns_int_int_QModelIndex(void* __this_nativeId,
 int column0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QProxyModel_insertRows_int_int_QModelIndex(void* __this_nativeId,
 int row0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) void  qtd_QProxyModel_match_QModelIndex_int_QVariant_int_MatchFlags_const(void* __this_nativeId,
 void* __d_return_value,
 const(QModelIndexAccessor) start0,
 int role1,
 void* value2,
 int hits3,
 int flags4);
private extern(C) void*  qtd_QProxyModel_mimeData_QList_const(void* __this_nativeId,
 void* indexes0);
private extern(C) void  qtd_QProxyModel_mimeTypes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QProxyModel_parent_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) child0);
private extern(C) void  qtd_QProxyModel_revert(void* __this_nativeId);
private extern(C) int  qtd_QProxyModel_rowCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) bool  qtd_QProxyModel_setData_QModelIndex_QVariant_int(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* value1,
 int role2);
private extern(C) bool  qtd_QProxyModel_setHeaderData_int_Orientation_QVariant_int(void* __this_nativeId,
 int section0,
 int orientation1,
 void* value2,
 int role3);
private extern(C) void  qtd_QProxyModel_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0);
private extern(C) void  qtd_QProxyModel_sort_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) void  qtd_QProxyModel_span_QModelIndex_const(void* __this_nativeId,
 QSize * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QProxyModel_submit(void* __this_nativeId);
private extern(C) int  qtd_QProxyModel_supportedDropActions_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* model0) qtd_QProxyModel_setModel_QAbstractItemModel_dispatch; }
extern(C) void qtd_export_QProxyModel_setModel_QAbstractItemModel_dispatch(void *dId, void* model0){
    auto d_object = cast(QProxyModel) dId;
    scope model0_d_ref = new QAbstractItemModel_ConcreteWrapper(model0, QtdObjectInitFlags.onStack);

    d_object.setModel(model0_d_ref);
}

private extern (C) void qtd_QProxyModel_initCallBacks(void* virtuals);

extern(C) void static_init_QProxyModel() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QProxyModel_setModel_QAbstractItemModel_dispatch;
    qtd_QProxyModel_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QProxyModel_columnsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QProxyModel_columnsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QProxyModel_columnsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QProxyModel_columnsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QProxyModel_dataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        auto topLeft0 = *(cast(QModelIndex*)args[1]);
        auto bottomRight1 = *(cast(QModelIndex*)args[2]);
        //d_object.dataChanged_emit(topLeft0, bottomRight1);
}*/
/*private extern(C) void qtd_QProxyModel_headerDataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        auto orientation0 = *(cast(Qt.Orientation*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.headerDataChanged_emit(orientation0, first1, last2);
}*/
/*private extern(C) void qtd_QProxyModel_layoutAboutToBeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        //d_object.layoutAboutToBeChanged_emit();
}*/
/*private extern(C) void qtd_QProxyModel_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        //d_object.layoutChanged_emit();
}*/
/*private extern(C) void qtd_QProxyModel_modelAboutToBeReset_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        //d_object.modelAboutToBeReset_emit();
}*/
/*private extern(C) void qtd_QProxyModel_modelReset_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        //d_object.modelReset_emit();
}*/
/*private extern(C) void qtd_QProxyModel_rowsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QProxyModel_rowsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QProxyModel_rowsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QProxyModel_rowsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsRemoved_emit(parent0, first1, last2);
}*/

extern(C) QMetaObjectNative* qtd_QProxyModel_staticMetaObject();

extern(C) void qtd_QProxyModel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QProxyModel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
