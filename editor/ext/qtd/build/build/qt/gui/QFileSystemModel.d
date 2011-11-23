module qt.gui.QFileSystemModel;

public import qt.gui.QFileSystemModel_aux;
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
public import qt.core.QDir;
public import qt.core.QFileInfo;
public import qt.core.QMimeData;
public import qt.core.QDateTime;
public import qt.core.QChildEvent;
public import qt.core.QModelIndex;
public import qt.gui.QFileIconProvider;
public import qt.core.QEvent;
public import qt.core.QSize;
public import qt.core.QAbstractItemModel;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.core.QTimerEvent;
public import qt.gui.QIcon;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFileSystemModel : QAbstractItemModel
{
    public enum Roles {
        FileIconRole = 0,
        FilePathRole = 1,
        FileNameRole = 2,
        FilePermissions = 3
    }

    alias Roles.FileIconRole FileIconRole;
    alias Roles.FilePathRole FilePathRole;
    alias Roles.FileNameRole FileNameRole;
    alias Roles.FilePermissions FilePermissions;


Object __rcIconProvider = null;

    private static const string[] __signalSignatures = [
            "directoryLoaded(QString)", 
            "fileRenamed(QString,QString,QString)", 
            "rootPathChanged(QString)"    ];

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

    protected final void directoryLoaded(string path) {
        qtd_QFileSystemModel_directoryLoaded_string(qtdNativeId, path);
    }

    protected final void fileRenamed(string path, string oldName, string newName) {
        qtd_QFileSystemModel_fileRenamed_string_string_string(qtdNativeId, path, oldName, newName);
    }

    protected final void rootPathChanged(string newPath) {
        qtd_QFileSystemModel_rootPathChanged_string(qtdNativeId, newPath);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QFileSystemModel_QFileSystemModel_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QIcon fileIcon(const(QModelIndex) index) const {
        void* ret = qtd_QFileSystemModel_fileIcon_QModelIndex_const(qtdNativeId, index);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final QFileInfo fileInfo(const(QModelIndex) index) const {
        void* ret = qtd_QFileSystemModel_fileInfo_QModelIndex_const(qtdNativeId, index);
        QFileInfo __d_return_value = new QFileInfo(ret);
        return __d_return_value;
    }

    public final string fileName(const(QModelIndex) index) const {
        string res;
        qtd_QFileSystemModel_fileName_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public final string filePath(const(QModelIndex) index) const {
        string res;
        qtd_QFileSystemModel_filePath_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public final int filter() const {
        return qtd_QFileSystemModel_filter_const(qtdNativeId);
    }

    public final QFileIconProvider iconProvider() const {
        void* ret = qtd_QFileSystemModel_iconProvider_const(qtdNativeId);
        QFileIconProvider __d_return_value = qtd_QFileIconProvider_from_ptr(ret);

        return __d_return_value;
    }

    public final QModelIndex index(string path, int column = 0) const {
        QModelIndex res;
        qtd_QFileSystemModel_index_string_int_const(qtdNativeId, &res, path, column);
        return res;
    }

    public final bool isDir(const(QModelIndex) index) const {
        return qtd_QFileSystemModel_isDir_QModelIndex_const(qtdNativeId, index);
    }

    public final bool isReadOnly() const {
        return qtd_QFileSystemModel_isReadOnly_const(qtdNativeId);
    }

    public final QDateTime lastModified(const(QModelIndex) index) const {
        void* ret = qtd_QFileSystemModel_lastModified_QModelIndex_const(qtdNativeId, index);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QModelIndex mkdir(const(QModelIndex) parent_, string name) {
        QModelIndex res;
        qtd_QFileSystemModel_mkdir_QModelIndex_string(qtdNativeId, &res, parent_, name);
        return res;
    }

    public final QVariant myComputer(int role = 0) const {
        void* ret = qtd_QFileSystemModel_myComputer_int_const(qtdNativeId, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final bool nameFilterDisables() const {
        return qtd_QFileSystemModel_nameFilterDisables_const(qtdNativeId);
    }

    public final QList!(string) nameFilters() const {
        auto res = QList!(string).opCall();
        qtd_QFileSystemModel_nameFilters_const(qtdNativeId, &res);
        return res;
    }

    public final int permissions(const(QModelIndex) index) const {
        return qtd_QFileSystemModel_permissions_QModelIndex_const(qtdNativeId, index);
    }

    public final bool remove(const(QModelIndex) index) const {
        return qtd_QFileSystemModel_remove_QModelIndex_const(qtdNativeId, index);
    }

    public final bool resolveSymlinks() const {
        return qtd_QFileSystemModel_resolveSymlinks_const(qtdNativeId);
    }

    public final bool rmdir(const(QModelIndex) index) const {
        return qtd_QFileSystemModel_rmdir_QModelIndex_const(qtdNativeId, index);
    }

    public final QDir rootDirectory() const {
        void* ret = qtd_QFileSystemModel_rootDirectory_const(qtdNativeId);
        QDir __d_return_value = new QDir(ret);
        return __d_return_value;
    }

    public final string rootPath() const {
        string res;
        qtd_QFileSystemModel_rootPath_const(qtdNativeId, &res);
        return res;
    }

    public final void setFilter(int filters) {
        qtd_QFileSystemModel_setFilter_Filters(qtdNativeId, filters);
    }

    public final void setIconProvider(QFileIconProvider provider) {
        {
            __rcIconProvider = cast(Object) provider;
        }
        qtd_QFileSystemModel_setIconProvider_QFileIconProvider(qtdNativeId, provider is null ? null : provider.qtdNativeId);
    }

    public final void setNameFilterDisables(bool enable) {
        qtd_QFileSystemModel_setNameFilterDisables_bool(qtdNativeId, enable);
    }

    public final void setNameFilters(QList!(string) filters) {
        qtd_QFileSystemModel_setNameFilters_QList(qtdNativeId, &filters);
    }

    public final void setReadOnly(bool enable) {
        qtd_QFileSystemModel_setReadOnly_bool(qtdNativeId, enable);
    }

    public final void setResolveSymlinks(bool enable) {
        qtd_QFileSystemModel_setResolveSymlinks_bool(qtdNativeId, enable);
    }

    public final QModelIndex setRootPath(string path) {
        QModelIndex res;
        qtd_QFileSystemModel_setRootPath_string(qtdNativeId, &res, path);
        return res;
    }

    public final long size(const(QModelIndex) index) const {
        return qtd_QFileSystemModel_size_QModelIndex_const(qtdNativeId, index);
    }

    public final string type(const(QModelIndex) index) const {
        string res;
        qtd_QFileSystemModel_type_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public bool canFetchMore(const(QModelIndex) parent_) const {
        return qtd_QFileSystemModel_canFetchMore_QModelIndex_const(qtdNativeId, parent_);
    }

    public int columnCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QFileSystemModel_columnCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public QVariant data(const(QModelIndex) index, int role = 0) const {
        void* ret = qtd_QFileSystemModel_data_QModelIndex_int_const(qtdNativeId, index, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool dropMimeData(QMimeData data, Qt.DropAction action, int row, int column, const(QModelIndex) parent_) {
        return qtd_QFileSystemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(qtdNativeId, data is null ? null : (cast(QMimeData)data).qtdNativeId, action, row, column, parent_);
    }

    public bool event(QEvent event) {
        return qtd_QFileSystemModel_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void fetchMore(const(QModelIndex) parent_) {
        qtd_QFileSystemModel_fetchMore_QModelIndex(qtdNativeId, parent_);
    }

    public int flags(const(QModelIndex) index) const {
        return qtd_QFileSystemModel_flags_QModelIndex_const(qtdNativeId, index);
    }

    public bool hasChildren(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QFileSystemModel_hasChildren_QModelIndex_const(qtdNativeId, parent_);
    }

    public QVariant headerData(int section, Qt.Orientation orientation, int role = 0) const {
        void* ret = qtd_QFileSystemModel_headerData_int_Orientation_int_const(qtdNativeId, section, orientation, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public QModelIndex index(int row, int column, const(QModelIndex) parent_ = QModelIndex()) const {
        QModelIndex res;
        qtd_QFileSystemModel_index_int_int_QModelIndex_const(qtdNativeId, &res, row, column, parent_);
        return res;
    }

    public QMimeData mimeData(QList!(QModelIndex) indexes) const {
        void *ret = qtd_QFileSystemModel_mimeData_QList_const(qtdNativeId, &indexes);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    public QList!(string) mimeTypes() const {
        auto res = QList!(string).opCall();
        qtd_QFileSystemModel_mimeTypes_const(qtdNativeId, &res);
        return res;
    }

    public QModelIndex parent(const(QModelIndex) child) const {
        QModelIndex res;
        qtd_QFileSystemModel_parent_QModelIndex_const(qtdNativeId, &res, child);
        return res;
    }

    public int rowCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QFileSystemModel_rowCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public bool setData(const(QModelIndex) index, QVariant value, int role = 2) {
        return qtd_QFileSystemModel_setData_QModelIndex_QVariant_int(qtdNativeId, index, value is null ? null : value.qtdNativeId, role);
    }

    public void sort(int column, Qt.SortOrder order = Qt.SortOrder.AscendingOrder) {
        qtd_QFileSystemModel_sort_int_SortOrder(qtdNativeId, column, order);
    }

    public int supportedDropActions() const {
        return qtd_QFileSystemModel_supportedDropActions_const(qtdNativeId);
    }

    protected void timerEvent(QTimerEvent event) {
        qtd_QFileSystemModel_timerEvent_QTimerEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFileSystemModel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFileSystemModel);
    }

    static QFileSystemModel __getObject(void* nativeId) {
        return static_cast!(QFileSystemModel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFileSystemModel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFileSystemModel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFileSystemModel(nativeId, initFlags);
        QFileSystemModel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string)("directoryLoaded"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(string,string,string)("fileRenamed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(string)("rootPathChanged"), index));

    }

    public alias void __isQtType_QFileSystemModel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QFileSystemModel_directoryLoaded_string(void* __this_nativeId,
 string path0);
private extern(C) void  qtd_QFileSystemModel_fileRenamed_string_string_string(void* __this_nativeId,
 string path0,
 string oldName1,
 string newName2);
private extern(C) void  qtd_QFileSystemModel_rootPathChanged_string(void* __this_nativeId,
 string newPath0);

// C wrappers
private extern(C) void* qtd_QFileSystemModel_QFileSystemModel_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QFileSystemModel_fileIcon_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QFileSystemModel_fileInfo_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QFileSystemModel_fileName_QModelIndex_const(void* __this_nativeId,
 void* __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QFileSystemModel_filePath_QModelIndex_const(void* __this_nativeId,
 void* __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) int  qtd_QFileSystemModel_filter_const(void* __this_nativeId);
private extern(C) void*  qtd_QFileSystemModel_iconProvider_const(void* __this_nativeId);
private extern(C) void  qtd_QFileSystemModel_index_string_int_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 string path0,
 int column1);
private extern(C) bool  qtd_QFileSystemModel_isDir_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QFileSystemModel_isReadOnly_const(void* __this_nativeId);
private extern(C) void*  qtd_QFileSystemModel_lastModified_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QFileSystemModel_mkdir_QModelIndex_string(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) parent0,
 string name1);
private extern(C) void*  qtd_QFileSystemModel_myComputer_int_const(void* __this_nativeId,
 int role0);
private extern(C) bool  qtd_QFileSystemModel_nameFilterDisables_const(void* __this_nativeId);
private extern(C) void  qtd_QFileSystemModel_nameFilters_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QFileSystemModel_permissions_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QFileSystemModel_remove_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QFileSystemModel_resolveSymlinks_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileSystemModel_rmdir_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QFileSystemModel_rootDirectory_const(void* __this_nativeId);
private extern(C) void  qtd_QFileSystemModel_rootPath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileSystemModel_setFilter_Filters(void* __this_nativeId,
 int filters0);
private extern(C) void  qtd_QFileSystemModel_setIconProvider_QFileIconProvider(void* __this_nativeId,
 void* provider0);
private extern(C) void  qtd_QFileSystemModel_setNameFilterDisables_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QFileSystemModel_setNameFilters_QList(void* __this_nativeId,
 void* filters0);
private extern(C) void  qtd_QFileSystemModel_setReadOnly_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QFileSystemModel_setResolveSymlinks_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QFileSystemModel_setRootPath_string(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 string path0);
private extern(C) long  qtd_QFileSystemModel_size_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QFileSystemModel_type_QModelIndex_const(void* __this_nativeId,
 void* __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QFileSystemModel_canFetchMore_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) int  qtd_QFileSystemModel_columnCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QFileSystemModel_data_QModelIndex_int_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int role1);
private extern(C) bool  qtd_QFileSystemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(void* __this_nativeId,
 void* data0,
 int action1,
 int row2,
 int column3,
 const(QModelIndexAccessor) parent4);
private extern(C) bool  qtd_QFileSystemModel_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QFileSystemModel_fetchMore_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) int  qtd_QFileSystemModel_flags_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QFileSystemModel_hasChildren_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) void*  qtd_QFileSystemModel_headerData_int_Orientation_int_const(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2);
private extern(C) void  qtd_QFileSystemModel_index_int_int_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 const(QModelIndexAccessor) parent2);
private extern(C) void*  qtd_QFileSystemModel_mimeData_QList_const(void* __this_nativeId,
 void* indexes0);
private extern(C) void  qtd_QFileSystemModel_mimeTypes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileSystemModel_parent_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) child0);
private extern(C) int  qtd_QFileSystemModel_rowCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) bool  qtd_QFileSystemModel_setData_QModelIndex_QVariant_int(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* value1,
 int role2);
private extern(C) void  qtd_QFileSystemModel_sort_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) int  qtd_QFileSystemModel_supportedDropActions_const(void* __this_nativeId);
private extern(C) void  qtd_QFileSystemModel_timerEvent_QTimerEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFileSystemModel_initCallBacks(void* virtuals);

extern(C) void static_init_QFileSystemModel() {
    qtd_QFileSystemModel_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QFileSystemModel_columnsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QFileSystemModel_columnsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QFileSystemModel_columnsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QFileSystemModel_columnsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QFileSystemModel_dataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto topLeft0 = *(cast(QModelIndex*)args[1]);
        auto bottomRight1 = *(cast(QModelIndex*)args[2]);
        //d_object.dataChanged_emit(topLeft0, bottomRight1);
}*/
/*private extern(C) void qtd_QFileSystemModel_headerDataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto orientation0 = *(cast(Qt.Orientation*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.headerDataChanged_emit(orientation0, first1, last2);
}*/
/*private extern(C) void qtd_QFileSystemModel_layoutAboutToBeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        //d_object.layoutAboutToBeChanged_emit();
}*/
/*private extern(C) void qtd_QFileSystemModel_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        //d_object.layoutChanged_emit();
}*/
/*private extern(C) void qtd_QFileSystemModel_modelAboutToBeReset_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        //d_object.modelAboutToBeReset_emit();
}*/
/*private extern(C) void qtd_QFileSystemModel_modelReset_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        //d_object.modelReset_emit();
}*/
/*private extern(C) void qtd_QFileSystemModel_rowsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QFileSystemModel_rowsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QFileSystemModel_rowsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QFileSystemModel_rowsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QFileSystemModel_directoryLoaded_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto path0_ptr = args[1];
        string path0 = QStringUtil.toNativeString(path0_ptr);
        //d_object.directoryLoaded_emit(path0);
}*/
/*private extern(C) void qtd_QFileSystemModel_fileRenamed_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto path0_ptr = args[1];
        string path0 = QStringUtil.toNativeString(path0_ptr);
        auto oldName1_ptr = args[2];
        string oldName1 = QStringUtil.toNativeString(oldName1_ptr);
        auto newName2_ptr = args[3];
        string newName2 = QStringUtil.toNativeString(newName2_ptr);
        //d_object.fileRenamed_emit(path0, oldName1, newName2);
}*/
/*private extern(C) void qtd_QFileSystemModel_rootPathChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemModel) dId;
        auto newPath0_ptr = args[1];
        string newPath0 = QStringUtil.toNativeString(newPath0_ptr);
        //d_object.rootPathChanged_emit(newPath0);
}*/

extern(C) QMetaObjectNative* qtd_QFileSystemModel_staticMetaObject();

extern(C) void qtd_QFileSystemModel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFileSystemModel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
