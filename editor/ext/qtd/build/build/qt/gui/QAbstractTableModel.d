module qt.gui.QAbstractTableModel;

public import qt.gui.QAbstractTableModel_aux;
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


public abstract class QAbstractTableModel : QAbstractItemModel
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
        void* ret = qtd_QAbstractTableModel_QAbstractTableModel_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    deprecated     public final bool hasChildren(const(QModelIndex) parent_) const {
        return qtd_QAbstractTableModel_hasChildren_QModelIndex_const(qtdNativeId, parent_);
    }

    deprecated     public final QModelIndex parent(const(QModelIndex) child) const {
        QModelIndex res;
        qtd_QAbstractTableModel_parent_QModelIndex_const(qtdNativeId, &res, child);
        return res;
    }

    public bool dropMimeData(QMimeData data, Qt.DropAction action, int row, int column, const(QModelIndex) parent_) {
        return qtd_QAbstractTableModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(qtdNativeId, data is null ? null : (cast(QMimeData)data).qtdNativeId, action, row, column, parent_);
    }

    public QModelIndex index(int row, int column, const(QModelIndex) parent_ = QModelIndex()) const {
        QModelIndex res;
        qtd_QAbstractTableModel_index_int_int_QModelIndex_const(qtdNativeId, &res, row, column, parent_);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractTableModel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractTableModel);
    }

    static QAbstractTableModel __getObject(void* nativeId) {
        return static_cast!(QAbstractTableModel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractTableModel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractTableModel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractTableModel_ConcreteWrapper(nativeId, initFlags);
        QAbstractTableModel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QAbstractTableModel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAbstractTableModel_ConcreteWrapper : QAbstractTableModel {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int columnCount(const(QModelIndex) parent_ = QModelIndex()) const {
            return qtd_QAbstractTableModel_columnCount_QModelIndex_const(qtdNativeId, parent_);
        }

        override         public QVariant data(const(QModelIndex) index, int role = 0) const {
            void* ret = qtd_QAbstractTableModel_data_QModelIndex_int_const(qtdNativeId, index, role);
            QVariant __d_return_value = new QVariant(ret);
            return __d_return_value;
        }

        override         public int rowCount(const(QModelIndex) parent_ = QModelIndex()) const {
            return qtd_QAbstractTableModel_rowCount_QModelIndex_const(qtdNativeId, parent_);
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractTableModel_QAbstractTableModel_QObject(void *d_ptr,
 void* parent0);
    deprecated final bool  qtd_QAbstractTableModel_hasChildren_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0)
    {
        throw new Exception("No Implementation Exception");
    }

    deprecated final void  qtd_QAbstractTableModel_parent_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 const(QModelIndexAccessor) child0)
    {
        throw new Exception("No Implementation Exception");
    }

private extern(C) bool  qtd_QAbstractTableModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex(void* __this_nativeId,
 void* data0,
 int action1,
 int row2,
 int column3,
 const(QModelIndexAccessor) parent4);
private extern(C) void  qtd_QAbstractTableModel_index_int_int_QModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 const(QModelIndexAccessor) parent2);
// Just the private functions for abstract functions implemeneted in superclasses

private extern(C) int  qtd_QAbstractTableModel_columnCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);

private extern(C) void*  qtd_QAbstractTableModel_data_QModelIndex_int_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int role1);

private extern(C) int  qtd_QAbstractTableModel_rowCount_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) parent0);



// Virtual Dispatch functions
private extern (C) void qtd_QAbstractTableModel_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractTableModel() {
    qtd_QAbstractTableModel_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QAbstractTableModel_columnsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractTableModel_columnsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractTableModel_columnsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractTableModel_columnsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.columnsRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractTableModel_dataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        auto topLeft0 = *(cast(QModelIndex*)args[1]);
        auto bottomRight1 = *(cast(QModelIndex*)args[2]);
        //d_object.dataChanged_emit(topLeft0, bottomRight1);
}*/
/*private extern(C) void qtd_QAbstractTableModel_headerDataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        auto orientation0 = *(cast(Qt.Orientation*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.headerDataChanged_emit(orientation0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractTableModel_layoutAboutToBeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        //d_object.layoutAboutToBeChanged_emit();
}*/
/*private extern(C) void qtd_QAbstractTableModel_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        //d_object.layoutChanged_emit();
}*/
/*private extern(C) void qtd_QAbstractTableModel_modelAboutToBeReset_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        //d_object.modelAboutToBeReset_emit();
}*/
/*private extern(C) void qtd_QAbstractTableModel_modelReset_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        //d_object.modelReset_emit();
}*/
/*private extern(C) void qtd_QAbstractTableModel_rowsAboutToBeInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractTableModel_rowsAboutToBeRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsAboutToBeRemoved_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractTableModel_rowsInserted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsInserted_emit(parent0, first1, last2);
}*/
/*private extern(C) void qtd_QAbstractTableModel_rowsRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTableModel) dId;
        auto parent0 = *(cast(QModelIndex*)args[1]);
        auto first1 = *(cast(int*)args[2]);
        auto last2 = *(cast(int*)args[3]);
        //d_object.rowsRemoved_emit(parent0, first1, last2);
}*/

extern(C) QMetaObjectNative* qtd_QAbstractTableModel_staticMetaObject();

extern(C) void qtd_QAbstractTableModel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractTableModel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
