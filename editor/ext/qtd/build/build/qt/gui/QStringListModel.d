module qt.gui.QStringListModel;

public import qt.gui.QStringListModel_aux;
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
public import qt.core.QModelIndex;
public import qt.core.QAbstractListModel;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStringListModel : QAbstractListModel
{

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
        void* ret = qtd_QStringListModel_QStringListModel_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QList!(string) strings, QObject parent_ = null) {
        void* ret = qtd_QStringListModel_QStringListModel_QList_QObject(cast(void*) this, &strings, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void setStringList(QList!(string) strings) {
        qtd_QStringListModel_setStringList_QList(qtdNativeId, &strings);
    }

    public final QList!(string) stringList() const {
        auto res = QList!(string).opCall();
        qtd_QStringListModel_stringList_const(qtdNativeId, &res);
        return res;
    }

    public QVariant data(const(QModelIndex) index, int role) const {
        void* ret = qtd_QStringListModel_data_QModelIndex_int_const(qtdNativeId, index, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public int flags(const(QModelIndex) index) const {
        return qtd_QStringListModel_flags_QModelIndex_const(qtdNativeId, index);
    }

    public bool insertRows(int row, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QStringListModel_insertRows_int_int_QModelIndex(qtdNativeId, row, count, parent_);
    }

    public bool removeRows(int row, int count, const(QModelIndex) parent_ = QModelIndex()) {
        return qtd_QStringListModel_removeRows_int_int_QModelIndex(qtdNativeId, row, count, parent_);
    }

    public int rowCount(const(QModelIndex) parent_ = QModelIndex()) const {
        return qtd_QStringListModel_rowCount_QModelIndex_const(qtdNativeId, parent_);
    }

    public bool setData(const(QModelIndex) index, QVariant value, int role = 2) {
        return qtd_QStringListModel_setData_QModelIndex_QVariant_int(qtdNativeId, index, value is null ? null : value.qtdNativeId, role);
    }

    public void sort(int column, Qt.SortOrder order = Qt.SortOrder.AscendingOrder) {
        qtd_QStringListModel_sort_int_SortOrder(qtdNativeId, column, order);
    }

    public int supportedDropActions() const {
        return qtd_QStringListModel_supportedDropActions_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QStringListModel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QStringListModel);
    }

    static QStringListModel __getObject(void* nativeId) {
        return static_cast!(QStringListModel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QStringListModel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QStringListModel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QStringListModel(nativeId, initFlags);
        QStringListModel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QStringListModel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStringListModel_QStringListModel_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QStringListModel_QStringListModel_QList_QObject(void *d_ptr,
 void* strings0,
 void* parent1);
private extern(C) void  qtd_QStringListModel_setStringList_QList(void* __this_nativeId,
 void* strings0);
private extern(C) void  qtd_QStringListModel_stringList_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QStringListModel_data_QModelIndex_int_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int role1);
private extern(C) int  qtd_QStringListModel_flags_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QStringListModel_insertRows_int_int_QModelIndex(void* __this_nativeId,
 int row0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) bool  qtd_QStringListModel_removeRows_int_int_QModelIndex(void* __this_nativeId,
 int row0,
 int count1,
 const(QModelIndexAccessor) parent2);
private extern(C) int  qtd_QStringListModel_rowCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);
private extern(C) bool  qtd_QStringListModel_setData_QModelIndex_QVariant_int(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* value1,
 int role2);
private extern(C) void  qtd_QStringListModel_sort_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) int  qtd_QStringListModel_supportedDropActions_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QStringListModel_initCallBacks(void* virtuals);

extern(C) void static_init_QStringListModel() {
    qtd_QStringListModel_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QStringListModel_columnsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStringListModel_columnsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStringListModel_columnsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStringListModel_columnsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStringListModel_dataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        auto topLeft0 = *(cast(QModelIndex*)args[1]);
        auto bottomRight1 = *(cast(QModelIndex*)args[2]);
        //d_object.dataChanged_emit(topLeft0, bottomRight1);
}*/
/*private extern(C) void qtd_QStringListModel_headerDataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        auto orientation0 = *(cast(Qt.Orientation*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.headerDataChanged_emit(orientation0, first1, last2);
}*/
/*private extern(C) void qtd_QStringListModel_layoutAboutToBeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        //d_object.layoutAboutToBeChanged_emit();
}*/
/*private extern(C) void qtd_QStringListModel_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        //d_object.layoutChanged_emit();
}*/
/*private extern(C) void qtd_QStringListModel_modelAboutToBeReset_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        //d_object.modelAboutToBeReset_emit();
}*/
/*private extern(C) void qtd_QStringListModel_modelReset_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        //d_object.modelReset_emit();
}*/
/*private extern(C) void qtd_QStringListModel_rowsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStringListModel_rowsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStringListModel_rowsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QStringListModel_rowsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QStringListModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsRemoved_emit(parent0, first1, last2);
}*/

extern(C) QMetaObjectNative* qtd_QStringListModel_staticMetaObject();

extern(C) void qtd_QStringListModel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QStringListModel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
