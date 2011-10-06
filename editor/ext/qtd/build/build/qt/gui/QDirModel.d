module qt.gui.QDirModel;

public import qt.gui.QDirModel_aux;
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
public import qt.gui.QFileIconProvider;
public import qt.core.QFileInfo;
public import qt.gui.QIcon;
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


public class QDirModel : QAbstractItemModel
{
    public enum Roles {
        FileIconRole = 0,
        FilePathRole = 1,
        FileNameRole = 2
    }

    alias Roles.FileIconRole FileIconRole;
    alias Roles.FilePathRole FilePathRole;
    alias Roles.FileNameRole FileNameRole;


Object __rcIconProvider = null;

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
        void* ret = qtd_QDirModel_QDirModel_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QList!(string) nameFilters, int filters, int sort, QObject parent_ = null) {
        void* ret = qtd_QDirModel_QDirModel_QList_Filters_SortFlags_QObject(cast(void*) this, &nameFilters, filters, sort, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QIcon fileIcon(const(QModelIndex) index) const {
        void* ret = qtd_QDirModel_fileIcon_QModelIndex_const(qtdNativeId, index);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final QFileInfo fileInfo(const(QModelIndex) index) const {
        void* ret = qtd_QDirModel_fileInfo_QModelIndex_const(qtdNativeId, index);
        QFileInfo __d_return_value = new QFileInfo(ret);
        return __d_return_value;
    }

    public final string fileName(const(QModelIndex) index) const {
        string res;
        qtd_QDirModel_fileName_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public final string filePath(const(QModelIndex) index) const {
        string res;
        qtd_QDirModel_filePath_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public final int filter() const {
        return qtd_QDirModel_filter_const(qtdNativeId);
    }

    public final QFileIconProvider iconProvider() const {
        void* ret = qtd_QDirModel_iconProvider_const(qtdNativeId);
        QFileIconProvider __d_return_value = qtd_QFileIconProvider_from_ptr(ret);

        return __d_return_value;
    }

    public final QModelIndex index(string path, int column = 0) const {
        QModelIndex res;
        qtd_QDirModel_index_string_int_const(qtdNativeId, &res, path, column);
        return res;
    }

    public final bool isDir(const(QModelIndex) index) const {
        return qtd_QDirModel_isDir_QModelIndex_const(qtdNativeId, index);
    }

    public final bool isReadOnly() const {
        return qtd_QDirModel_isReadOnly_const(qtdNativeId);
    }

    public final bool lazyChildCount() const {
        return qtd_QDirModel_lazyChildCount_const(qtdNativeId);
    }

    public final QModelIndex mkdir(const(QModelIndex) parent_, string name) {
        QModelIndex res;
        qtd_QDirModel_mkdir_QModelIndex_string(qtdNativeId, &res, parent_, name);
        return res;
    }

    public final QList!(string) nameFilters() const {
        auto res = QList!(string).opCall();
        qtd_QDirModel_nameFilters_const(qtdNativeId, &res);
        return res;
    }

    public final void refresh(const(QModelIndex) parent_ = QModelIndex()) {
        qtd_QDirModel_refresh_QModelIndex(qtdNativeId, parent_);
    }

    public final bool remove(const(QModelIndex) index) {
        return qtd_QDirModel_remove_QModelIndex(qtdNativeId, index);
    }

    public final bool resolveSymlinks() const {
        return qtd_QDirModel_resolveSymlinks_const(qtdNativeId);
    }

    public final bool rmdir(const(QModelIndex) index) {
        return qtd_QDirModel_rmdir_QModelIndex(qtdNativeId, index);
    }

    public final void setFilter(int filters) {
        qtd_QDirModel_setFilter_Filters(qtdNativeId, filters);
    }

    public final void setIconProvider(QFileIconProvider provider) {
        {
            __rcIconProvider = cast(Object) provider;
        }
        qtd_QDirModel_setIconProvider_QFileIconProvider(qtdNativeId, provider is null ? null : provider.qtdNativeId);
    }

    public final void setLazyChildCount(bool enable) {
        qtd_QDirModel_setLazyChildCount_bool(qtdNativeId, enable);
    }

    public final void setNameFilters(QList!(string) filters) {
        qtd_QDirModel_setNameFilters_QList(qtdNativeId, &filters);
    }

    public final void setReadOnly(bool enable) {
        qtd_QDirModel_setReadOnly_bool(qtdNativeId, enable);
    }

    public final void setResolveSymlinks(bool enable) {
        qtd_QDirModel_setResolveSymlinks_bool(qtdNativeId, enable);
    }

    public final void setSorting(int sort) {
        qtd_QDirModel_setSorting_SortFlags(qtdNativeId, sort);
    }

    public final int sorting() const {
        return qtd_QDirModel_sorting_const(qtdNativeId);
    }

    public int columnCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QDirModel_columnCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public QVariant data(const(QModelIndex) index, int role = 0) const {
        void* ret = qtd_QDirModel_data_QModelIndex_int_const(qtdNativeId, index, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool dropMimeData(QMimeData data, Qt.DropAction action, int row, int column, const(QModelIndex) parent_) {
        return qtd_QDirModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(qtdNativeId, data is null ? null : (cast(QMimeData)data).qtdNativeId, action, row, column, parent_);
    }

    public int flags(const(QModelIndex) index) const {
        return qtd_QDirModel_flags_QModelIndex_const(qtdNativeId, index);
    }

    public bool hasChildren(const(QModelIndex) index = QModelIndex()) const {
        return qtd_QDirModel_hasChildren_QModelIndex_const(qtdNativeId, index);
    }

    public QVariant headerData(int section, Qt.Orientation orientation, int role = 0) const {
        void* ret = qtd_QDirModel_headerData_int_Orientation_int_const(qtdNativeId, section, orientation, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public QModelIndex index(int row, int column, const(QModelIndex) parent_ = QModelIndex()) const {
        QModelIndex res;
        qtd_QDirModel_index_int_int_QModelIndex_const(qtdNativeId, &res, row, column, parent_);
        return res;
    }

    public QMimeData mimeData(QList!(QModelIndex) indexes) const {
        void *ret = qtd_QDirModel_mimeData_QList_const(qtdNativeId, &indexes);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    public QList!(string) mimeTypes() const {
        auto res = QList!(string).opCall();
        qtd_QDirModel_mimeTypes_const(qtdNativeId, &res);
        return res;
    }

    public QModelIndex parent(const(QModelIndex) child) const {
        QModelIndex res;
        qtd_QDirModel_parent_QModelIndex_const(qtdNativeId, &res, child);
        return res;
    }

    public int rowCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QDirModel_rowCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public bool setData(const(QModelIndex) index, QVariant value, int role = 2) {
        return qtd_QDirModel_setData_QModelIndex_QVariant_int(qtdNativeId, index, value is null ? null : value.qtdNativeId, role);
    }

    public void sort(int column, Qt.SortOrder order = Qt.SortOrder.AscendingOrder) {
        qtd_QDirModel_sort_int_SortOrder(qtdNativeId, column, order);
    }

    public int supportedDropActions() const {
        return qtd_QDirModel_supportedDropActions_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "refresh(QModelIndex)", 
            "refresh()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDirModel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDirModel);
    }

    static QDirModel __getObject(void* nativeId) {
        return static_cast!(QDirModel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDirModel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDirModel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDirModel(nativeId, initFlags);
        QDirModel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex))("refresh"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("refresh"), index));

    }

    public alias void __isQtType_QDirModel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDirModel_QDirModel_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QDirModel_QDirModel_QList_Filters_SortFlags_QObject(void *d_ptr,
 void* nameFilters0,
 int filters1,
 int sort2,
 void* parent3);
private extern(C) void*  qtd_QDirModel_fileIcon_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QDirModel_fileInfo_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QDirModel_fileName_QModelIndex_const(void* __this_nativeId,
 void* __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QDirModel_filePath_QModelIndex_const(void* __this_nativeId,
 void* __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) int  qtd_QDirModel_filter_const(void* __this_nativeId);
private extern(C) void*  qtd_QDirModel_iconProvider_const(void* __this_nativeId);
private extern(C) void  qtd_QDirModel_index_string_int_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 string path0,
 int column1);
private extern(C) bool  qtd_QDirModel_isDir_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QDirModel_isReadOnly_const(void* __this_nativeId);
private extern(C) bool  qtd_QDirModel_lazyChildCount_const(void* __this_nativeId);
private extern(C) void  qtd_QDirModel_mkdir_QModelIndex_string(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) parent0,
 string name1);
private extern(C) void  qtd_QDirModel_nameFilters_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDirModel_refresh_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) bool  qtd_QDirModel_remove_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QDirModel_resolveSymlinks_const(void* __this_nativeId);
private extern(C) bool  qtd_QDirModel_rmdir_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QDirModel_setFilter_Filters(void* __this_nativeId,
 int filters0);
private extern(C) void  qtd_QDirModel_setIconProvider_QFileIconProvider(void* __this_nativeId,
 void* provider0);
private extern(C) void  qtd_QDirModel_setLazyChildCount_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QDirModel_setNameFilters_QList(void* __this_nativeId,
 void* filters0);
private extern(C) void  qtd_QDirModel_setReadOnly_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QDirModel_setResolveSymlinks_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QDirModel_setSorting_SortFlags(void* __this_nativeId,
 int sort0);
private extern(C) int  qtd_QDirModel_sorting_const(void* __this_nativeId);
private extern(C) int  qtd_QDirModel_columnCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QDirModel_data_QModelIndex_int_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int role1);
private extern(C) bool  qtd_QDirModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(void* __this_nativeId,
 void* data0,
 int action1,
 int row2,
 int column3,
 const(QModelIndexAccessor) parent4);
private extern(C) int  qtd_QDirModel_flags_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QDirModel_hasChildren_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QDirModel_headerData_int_Orientation_int_const(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2);
private extern(C) void  qtd_QDirModel_index_int_int_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 const(QModelIndexAccessor) parent2);
private extern(C) void*  qtd_QDirModel_mimeData_QList_const(void* __this_nativeId,
 void* indexes0);
private extern(C) void  qtd_QDirModel_mimeTypes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDirModel_parent_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) child0);
private extern(C) int  qtd_QDirModel_rowCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) bool  qtd_QDirModel_setData_QModelIndex_QVariant_int(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* value1,
 int role2);
private extern(C) void  qtd_QDirModel_sort_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) int  qtd_QDirModel_supportedDropActions_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDirModel_initCallBacks(void* virtuals);

extern(C) void static_init_QDirModel() {
    qtd_QDirModel_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QDirModel_columnsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QDirModel_columnsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QDirModel_columnsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QDirModel_columnsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QDirModel_dataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        auto topLeft0 = *(cast(QModelIndex*)args[1]);
        auto bottomRight1 = *(cast(QModelIndex*)args[2]);
        //d_object.dataChanged_emit(topLeft0, bottomRight1);
}*/
/*private extern(C) void qtd_QDirModel_headerDataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        auto orientation0 = *(cast(Qt.Orientation*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.headerDataChanged_emit(orientation0, first1, last2);
}*/
/*private extern(C) void qtd_QDirModel_layoutAboutToBeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        //d_object.layoutAboutToBeChanged_emit();
}*/
/*private extern(C) void qtd_QDirModel_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        //d_object.layoutChanged_emit();
}*/
/*private extern(C) void qtd_QDirModel_modelAboutToBeReset_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        //d_object.modelAboutToBeReset_emit();
}*/
/*private extern(C) void qtd_QDirModel_modelReset_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        //d_object.modelReset_emit();
}*/
/*private extern(C) void qtd_QDirModel_rowsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QDirModel_rowsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QDirModel_rowsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QDirModel_rowsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QDirModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsRemoved_emit(parent0, first1, last2);
}*/

extern(C) QMetaObjectNative* qtd_QDirModel_staticMetaObject();

extern(C) void qtd_QDirModel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDirModel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
