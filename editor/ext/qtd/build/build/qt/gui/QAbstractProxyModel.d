module qt.gui.QAbstractProxyModel;

public import qt.gui.QAbstractProxyModel_aux;
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
public import qt.gui.QItemSelection;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractProxyModel : QAbstractItemModel
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
        void* ret = qtd_QAbstractProxyModel_QAbstractProxyModel_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QAbstractItemModel sourceModel() const {
        void *ret = qtd_QAbstractProxyModel_sourceModel_const(qtdNativeId);
        QAbstractItemModel __d_return_value = QAbstractItemModel.__getObject(ret);
        return __d_return_value;
    }

    public QVariant data(const(QModelIndex) proxyIndex, int role = 0) const {
        void* ret = qtd_QAbstractProxyModel_data_QModelIndex_int_const(qtdNativeId, proxyIndex, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public int flags(const(QModelIndex) index) const {
        return qtd_QAbstractProxyModel_flags_QModelIndex_const(qtdNativeId, index);
    }

    public QVariant headerData(int section, Qt.Orientation orientation, int role) const {
        void* ret = qtd_QAbstractProxyModel_headerData_int_Orientation_int_const(qtdNativeId, section, orientation, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public abstract QModelIndex mapFromSource(const(QModelIndex) sourceIndex) const;

    public QItemSelection mapSelectionFromSource(const(QItemSelection) selection) const {
        void* ret = qtd_QAbstractProxyModel_mapSelectionFromSource_QItemSelection_const(qtdNativeId, selection is null ? null : (cast(QItemSelection)selection).qtdNativeId);
        QItemSelection __d_return_value = new QItemSelection(ret);
        return __d_return_value;
    }

    public QItemSelection mapSelectionToSource(const(QItemSelection) selection) const {
        void* ret = qtd_QAbstractProxyModel_mapSelectionToSource_QItemSelection_const(qtdNativeId, selection is null ? null : (cast(QItemSelection)selection).qtdNativeId);
        QItemSelection __d_return_value = new QItemSelection(ret);
        return __d_return_value;
    }

    public abstract QModelIndex mapToSource(const(QModelIndex) proxyIndex) const;

    public void revert() {
        qtd_QAbstractProxyModel_revert(qtdNativeId);
    }

    public bool setData(const(QModelIndex) index, QVariant value, int role = 2) {
        return qtd_QAbstractProxyModel_setData_QModelIndex_QVariant_int(qtdNativeId, index, value is null ? null : value.qtdNativeId, role);
    }

    public bool setHeaderData(int section, Qt.Orientation orientation, QVariant value, int role = 2) {
        return qtd_QAbstractProxyModel_setHeaderData_int_Orientation_QVariant_int(qtdNativeId, section, orientation, value is null ? null : value.qtdNativeId, role);
    }

    public void setSourceModel(QAbstractItemModel sourceModel) {
        {
            __rcSourceModel = cast(Object) sourceModel;
        }
        qtd_QAbstractProxyModel_setSourceModel_QAbstractItemModel(qtdNativeId, sourceModel is null ? null : sourceModel.qtdNativeId);
    }

    public bool submit() {
        return qtd_QAbstractProxyModel_submit(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractProxyModel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractProxyModel);
    }

    static QAbstractProxyModel __getObject(void* nativeId) {
        return static_cast!(QAbstractProxyModel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractProxyModel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractProxyModel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractProxyModel_ConcreteWrapper(nativeId, initFlags);
        QAbstractProxyModel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QAbstractProxyModel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAbstractProxyModel_ConcreteWrapper : QAbstractProxyModel {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int columnCount(const(QModelIndex) parent_ = QModelIndex()) const {
            return qtd_QAbstractProxyModel_columnCount_QModelIndex_const(qtdNativeId, parent_);
        }

        override         public QModelIndex index(int row, int column, const(QModelIndex) parent_ = QModelIndex()) const {
            QModelIndex res;
            qtd_QAbstractProxyModel_index_int_int_QModelIndex_const(qtdNativeId, &res, row, column, parent_);
            return res;
        }

        override         public QModelIndex mapFromSource(const(QModelIndex) sourceIndex) const {
            QModelIndex res;
            qtd_QAbstractProxyModel_mapFromSource_QModelIndex_const(qtdNativeId, &res, sourceIndex);
            return res;
        }

        override         public QModelIndex mapToSource(const(QModelIndex) proxyIndex) const {
            QModelIndex res;
            qtd_QAbstractProxyModel_mapToSource_QModelIndex_const(qtdNativeId, &res, proxyIndex);
            return res;
        }

        override         public QModelIndex parent(const(QModelIndex) child) const {
            QModelIndex res;
            qtd_QAbstractProxyModel_parent_QModelIndex_const(qtdNativeId, &res, child);
            return res;
        }

        override         public int rowCount(const(QModelIndex) parent_ = QModelIndex()) const {
            return qtd_QAbstractProxyModel_rowCount_QModelIndex_const(qtdNativeId, parent_);
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractProxyModel_QAbstractProxyModel_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QAbstractProxyModel_sourceModel_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractProxyModel_data_QModelIndex_int_const(void* __this_nativeId,
 const(QModelIndexAccessor) proxyIndex0,
 int role1);
private extern(C) int  qtd_QAbstractProxyModel_flags_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QAbstractProxyModel_headerData_int_Orientation_int_const(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2);
private extern(C) void  qtd_QAbstractProxyModel_mapFromSource_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) sourceIndex0);
private extern(C) void*  qtd_QAbstractProxyModel_mapSelectionFromSource_QItemSelection_const(void* __this_nativeId,
 void* selection0);
private extern(C) void*  qtd_QAbstractProxyModel_mapSelectionToSource_QItemSelection_const(void* __this_nativeId,
 void* selection0);
private extern(C) void  qtd_QAbstractProxyModel_mapToSource_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) proxyIndex0);
private extern(C) void  qtd_QAbstractProxyModel_revert(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractProxyModel_setData_QModelIndex_QVariant_int(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* value1,
 int role2);
private extern(C) bool  qtd_QAbstractProxyModel_setHeaderData_int_Orientation_QVariant_int(void* __this_nativeId,
 int section0,
 int orientation1,
 void* value2,
 int role3);
private extern(C) void  qtd_QAbstractProxyModel_setSourceModel_QAbstractItemModel(void* __this_nativeId,
 void* sourceModel0);
private extern(C) bool  qtd_QAbstractProxyModel_submit(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses

private extern(C) int  qtd_QAbstractProxyModel_columnCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);

private extern(C) void  qtd_QAbstractProxyModel_index_int_int_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 const(QModelIndexAccessor) parent2);

private extern(C) void  qtd_QAbstractProxyModel_parent_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) child0);

private extern(C) int  qtd_QAbstractProxyModel_rowCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* sourceIndex0) qtd_QAbstractProxyModel_mapFromSource_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractProxyModel_mapFromSource_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* sourceIndex0){
    auto d_object = cast(QAbstractProxyModel) dId;
    *__d_return_value = d_object.mapFromSource(*sourceIndex0);
}

extern(C){ extern void* function(void *dId, void* selection0) qtd_QAbstractProxyModel_mapSelectionFromSource_QItemSelection_const_dispatch; }
extern(C) void* qtd_export_QAbstractProxyModel_mapSelectionFromSource_QItemSelection_const_dispatch(void *dId, void* selection0){
    auto d_object = cast(QAbstractProxyModel) dId;
    scope selection0_d_ref = new QItemSelection(selection0, QtdObjectInitFlags.onStack);
    QItemSelection ret_value = d_object.mapSelectionFromSource(selection0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, void* selection0) qtd_QAbstractProxyModel_mapSelectionToSource_QItemSelection_const_dispatch; }
extern(C) void* qtd_export_QAbstractProxyModel_mapSelectionToSource_QItemSelection_const_dispatch(void *dId, void* selection0){
    auto d_object = cast(QAbstractProxyModel) dId;
    scope selection0_d_ref = new QItemSelection(selection0, QtdObjectInitFlags.onStack);
    QItemSelection ret_value = d_object.mapSelectionToSource(selection0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* proxyIndex0) qtd_QAbstractProxyModel_mapToSource_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractProxyModel_mapToSource_QModelIndex_const_dispatch(void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* proxyIndex0){
    auto d_object = cast(QAbstractProxyModel) dId;
    *__d_return_value = d_object.mapToSource(*proxyIndex0);
}

extern(C){ extern void function(void *dId, void* sourceModel0) qtd_QAbstractProxyModel_setSourceModel_QAbstractItemModel_dispatch; }
extern(C) void qtd_export_QAbstractProxyModel_setSourceModel_QAbstractItemModel_dispatch(void *dId, void* sourceModel0){
    auto d_object = cast(QAbstractProxyModel) dId;
    scope sourceModel0_d_ref = new QAbstractItemModel_ConcreteWrapper(sourceModel0, QtdObjectInitFlags.onStack);

    d_object.setSourceModel(sourceModel0_d_ref);
}

private extern (C) void qtd_QAbstractProxyModel_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractProxyModel() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractProxyModel_mapFromSource_QModelIndex_const_dispatch;
    virt_arr[1] = &qtd_export_QAbstractProxyModel_mapSelectionFromSource_QItemSelection_const_dispatch;
    virt_arr[2] = &qtd_export_QAbstractProxyModel_mapSelectionToSource_QItemSelection_const_dispatch;
    virt_arr[3] = &qtd_export_QAbstractProxyModel_mapToSource_QModelIndex_const_dispatch;
    virt_arr[4] = &qtd_export_QAbstractProxyModel_setSourceModel_QAbstractItemModel_dispatch;
    qtd_QAbstractProxyModel_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractProxyModel_columnsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractProxyModel_columnsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractProxyModel_columnsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractProxyModel_columnsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractProxyModel_dataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        auto topLeft0 = *(cast(QModelIndex*)args[1]);
        auto bottomRight1 = *(cast(QModelIndex*)args[2]);
        //d_object.dataChanged_emit(topLeft0, bottomRight1);
}*/
/*private extern(C) void qtd_QAbstractProxyModel_headerDataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        auto orientation0 = *(cast(Qt.Orientation*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.headerDataChanged_emit(orientation0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractProxyModel_layoutAboutToBeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        //d_object.layoutAboutToBeChanged_emit();
}*/
/*private extern(C) void qtd_QAbstractProxyModel_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        //d_object.layoutChanged_emit();
}*/
/*private extern(C) void qtd_QAbstractProxyModel_modelAboutToBeReset_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        //d_object.modelAboutToBeReset_emit();
}*/
/*private extern(C) void qtd_QAbstractProxyModel_modelReset_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        //d_object.modelReset_emit();
}*/
/*private extern(C) void qtd_QAbstractProxyModel_rowsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractProxyModel_rowsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractProxyModel_rowsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractProxyModel_rowsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractProxyModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsRemoved_emit(parent0, first1, last2);
}*/

extern(C) QMetaObjectNative* qtd_QAbstractProxyModel_staticMetaObject();

extern(C) void qtd_QAbstractProxyModel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractProxyModel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
