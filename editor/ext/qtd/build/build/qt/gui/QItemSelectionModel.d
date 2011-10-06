module qt.gui.QItemSelectionModel;

public import qt.gui.QItemSelectionModel_aux;
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
public import qt.core.QList;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QAbstractItemModel;
public import qt.core.QModelIndex;
public import qt.gui.QItemSelection;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QItemSelectionModel : QObject
{
    public enum SelectionFlag {
        NoUpdate = 0,
        Clear = 1,
        Select = 2,
        Deselect = 4,
        Toggle = 8,
        Current = 16,
        Rows = 32,
        Columns = 64,
        SelectCurrent = 18,
        ToggleCurrent = 24,
        ClearAndSelect = 3
    }

    alias SelectionFlag.NoUpdate NoUpdate;
    alias SelectionFlag.Clear Clear;
    alias SelectionFlag.Select Select;
    alias SelectionFlag.Deselect Deselect;
    alias SelectionFlag.Toggle Toggle;
    alias SelectionFlag.Current Current;
    alias SelectionFlag.Rows Rows;
    alias SelectionFlag.Columns Columns;
    alias SelectionFlag.SelectCurrent SelectCurrent;
    alias SelectionFlag.ToggleCurrent ToggleCurrent;
    alias SelectionFlag.ClearAndSelect ClearAndSelect;


    private static const string[] __signalSignatures = [
            "currentChanged(QModelIndex,QModelIndex)", 
            "currentColumnChanged(QModelIndex,QModelIndex)", 
            "currentRowChanged(QModelIndex,QModelIndex)", 
            "selectionChanged(QItemSelection,QItemSelection)"    ];

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

    protected final void currentChanged(const(QModelIndex) current, const(QModelIndex) previous) {
        qtd_QItemSelectionModel_currentChanged_QModelIndex_QModelIndex(qtdNativeId, current, previous);
    }

    protected final void currentColumnChanged(const(QModelIndex) current, const(QModelIndex) previous) {
        qtd_QItemSelectionModel_currentColumnChanged_QModelIndex_QModelIndex(qtdNativeId, current, previous);
    }

    protected final void currentRowChanged(const(QModelIndex) current, const(QModelIndex) previous) {
        qtd_QItemSelectionModel_currentRowChanged_QModelIndex_QModelIndex(qtdNativeId, current, previous);
    }

    protected final void selectionChanged(const(QItemSelection) selected, const(QItemSelection) deselected) {
        qtd_QItemSelectionModel_selectionChanged_QItemSelection_QItemSelection(qtdNativeId, selected is null ? null : (cast(QItemSelection)selected).qtdNativeId, deselected is null ? null : (cast(QItemSelection)deselected).qtdNativeId);
    }
// Functions

    public this(QAbstractItemModel model) {
        void* ret = qtd_QItemSelectionModel_QItemSelectionModel_QAbstractItemModel(cast(void*) this, model is null ? null : model.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QAbstractItemModel model, QObject parent_) {
        void* ret = qtd_QItemSelectionModel_QItemSelectionModel_QAbstractItemModel_QObject(cast(void*) this, model is null ? null : model.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void clearSelection() {
        qtd_QItemSelectionModel_clearSelection(qtdNativeId);
    }

    public final bool columnIntersectsSelection(int column, const(QModelIndex) parent_) const {
        return qtd_QItemSelectionModel_columnIntersectsSelection_int_QModelIndex_const(qtdNativeId, column, parent_);
    }

    public final QModelIndex currentIndex() const {
        QModelIndex res;
        qtd_QItemSelectionModel_currentIndex_const(qtdNativeId, &res);
        return res;
    }

    protected final void emitSelectionChanged(const(QItemSelection) newSelection, const(QItemSelection) oldSelection) {
        qtd_QItemSelectionModel_emitSelectionChanged_QItemSelection_QItemSelection(qtdNativeId, newSelection is null ? null : (cast(QItemSelection)newSelection).qtdNativeId, oldSelection is null ? null : (cast(QItemSelection)oldSelection).qtdNativeId);
    }

    public final bool hasSelection() const {
        return qtd_QItemSelectionModel_hasSelection_const(qtdNativeId);
    }

    public final bool isColumnSelected(int column, const(QModelIndex) parent_) const {
        return qtd_QItemSelectionModel_isColumnSelected_int_QModelIndex_const(qtdNativeId, column, parent_);
    }

    public final bool isRowSelected(int row, const(QModelIndex) parent_) const {
        return qtd_QItemSelectionModel_isRowSelected_int_QModelIndex_const(qtdNativeId, row, parent_);
    }

    public final bool isSelected(const(QModelIndex) index) const {
        return qtd_QItemSelectionModel_isSelected_QModelIndex_const(qtdNativeId, index);
    }

    public final QAbstractItemModel model() const {
        void *ret = qtd_QItemSelectionModel_model_const(qtdNativeId);
        QAbstractItemModel __d_return_value = QAbstractItemModel.__getObject(ret);
        return __d_return_value;
    }

    public final bool rowIntersectsSelection(int row, const(QModelIndex) parent_) const {
        return qtd_QItemSelectionModel_rowIntersectsSelection_int_QModelIndex_const(qtdNativeId, row, parent_);
    }

    public final QList!(QModelIndex) selectedColumns(int row = 0) const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QItemSelectionModel_selectedColumns_int_const(qtdNativeId, &res, row);
        return res;
    }

    public final QList!(QModelIndex) selectedIndexes() const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QItemSelectionModel_selectedIndexes_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(QModelIndex) selectedRows(int column = 0) const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QItemSelectionModel_selectedRows_int_const(qtdNativeId, &res, column);
        return res;
    }

    public final const(QItemSelection) selection() const {
        void* ret = qtd_QItemSelectionModel_selection_const(qtdNativeId);
        const(QItemSelection) __d_return_value = new QItemSelection(ret);
        return __d_return_value;
    }

    public final void setCurrentIndex(const(QModelIndex) index, int command) {
        qtd_QItemSelectionModel_setCurrentIndex_QModelIndex_SelectionFlags(qtdNativeId, index, command);
    }

    public void clear() {
        qtd_QItemSelectionModel_clear(qtdNativeId);
    }

    public void reset() {
        qtd_QItemSelectionModel_reset(qtdNativeId);
    }

    public void select(const(QItemSelection) selection, int command) {
        qtd_QItemSelectionModel_select_QItemSelection_SelectionFlags(qtdNativeId, selection is null ? null : (cast(QItemSelection)selection).qtdNativeId, command);
    }

    public void select(const(QModelIndex) index, int command) {
        qtd_QItemSelectionModel_select_QModelIndex_SelectionFlags(qtdNativeId, index, command);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "clearSelection()", 
            "setCurrentIndex(QModelIndex,QFlags<QItemSelectionModel::SelectionFlag>)", 
            "clear()", 
            "reset()", 
            "select(QItemSelection,QFlags<QItemSelectionModel::SelectionFlag>)", 
            "select(QModelIndex,QFlags<QItemSelectionModel::SelectionFlag>)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QItemSelectionModel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QItemSelectionModel);
    }

    static QItemSelectionModel __getObject(void* nativeId) {
        return static_cast!(QItemSelectionModel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QItemSelectionModel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QItemSelectionModel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QItemSelectionModel(nativeId, initFlags);
        QItemSelectionModel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),const(QModelIndex))("currentChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),const(QModelIndex))("currentColumnChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex),const(QModelIndex))("currentRowChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(const(QItemSelection),const(QItemSelection))("selectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clearSelection"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex),int)("setCurrentIndex"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("reset"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(const(QItemSelection),int)("select"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex),int)("select"), index));

    }

    public alias void __isQtType_QItemSelectionModel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QItemSelectionModel_currentChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) current0,
 const(QModelIndexAccessor) previous1);
private extern(C) void  qtd_QItemSelectionModel_currentColumnChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) current0,
 const(QModelIndexAccessor) previous1);
private extern(C) void  qtd_QItemSelectionModel_currentRowChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) current0,
 const(QModelIndexAccessor) previous1);
private extern(C) void  qtd_QItemSelectionModel_selectionChanged_QItemSelection_QItemSelection(void* __this_nativeId,
 void* selected0,
 void* deselected1);

// C wrappers
private extern(C) void* qtd_QItemSelectionModel_QItemSelectionModel_QAbstractItemModel(void *d_ptr,
 void* model0);
private extern(C) void* qtd_QItemSelectionModel_QItemSelectionModel_QAbstractItemModel_QObject(void *d_ptr,
 void* model0,
 void* parent1);
private extern(C) void  qtd_QItemSelectionModel_clearSelection(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelectionModel_columnIntersectsSelection_int_QModelIndex_const(void* __this_nativeId,
 int column0,
 const(QModelIndexAccessor) parent1);
private extern(C) void  qtd_QItemSelectionModel_currentIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) void  qtd_QItemSelectionModel_emitSelectionChanged_QItemSelection_QItemSelection(void* __this_nativeId,
 void* newSelection0,
 void* oldSelection1);
private extern(C) bool  qtd_QItemSelectionModel_hasSelection_const(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelectionModel_isColumnSelected_int_QModelIndex_const(void* __this_nativeId,
 int column0,
 const(QModelIndexAccessor) parent1);
private extern(C) bool  qtd_QItemSelectionModel_isRowSelected_int_QModelIndex_const(void* __this_nativeId,
 int row0,
 const(QModelIndexAccessor) parent1);
private extern(C) bool  qtd_QItemSelectionModel_isSelected_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QItemSelectionModel_model_const(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelectionModel_rowIntersectsSelection_int_QModelIndex_const(void* __this_nativeId,
 int row0,
 const(QModelIndexAccessor) parent1);
private extern(C) void  qtd_QItemSelectionModel_selectedColumns_int_const(void* __this_nativeId,
 void* __d_return_value,
 int row0);
private extern(C) void  qtd_QItemSelectionModel_selectedIndexes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QItemSelectionModel_selectedRows_int_const(void* __this_nativeId,
 void* __d_return_value,
 int column0);
private extern(C) void*  qtd_QItemSelectionModel_selection_const(void* __this_nativeId);
private extern(C) void  qtd_QItemSelectionModel_setCurrentIndex_QModelIndex_SelectionFlags(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int command1);
private extern(C) void  qtd_QItemSelectionModel_clear(void* __this_nativeId);
private extern(C) void  qtd_QItemSelectionModel_reset(void* __this_nativeId);
private extern(C) void  qtd_QItemSelectionModel_select_QItemSelection_SelectionFlags(void* __this_nativeId,
 void* selection0,
 int command1);
private extern(C) void  qtd_QItemSelectionModel_select_QModelIndex_SelectionFlags(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int command1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QItemSelectionModel_clear_dispatch; }
extern(C) void qtd_export_QItemSelectionModel_clear_dispatch(void *dId){
    auto d_object = cast(QItemSelectionModel) dId;
    d_object.clear();
}

extern(C){ extern void function(void *dId) qtd_QItemSelectionModel_reset_dispatch; }
extern(C) void qtd_export_QItemSelectionModel_reset_dispatch(void *dId){
    auto d_object = cast(QItemSelectionModel) dId;
    d_object.reset();
}

extern(C){ extern void function(void *dId, void* selection0, int command1) qtd_QItemSelectionModel_select_QItemSelection_SelectionFlags_dispatch; }
extern(C) void qtd_export_QItemSelectionModel_select_QItemSelection_SelectionFlags_dispatch(void *dId, void* selection0, int command1){
    auto d_object = cast(QItemSelectionModel) dId;
    scope selection0_d_ref = new QItemSelection(selection0, QtdObjectInitFlags.onStack);
    d_object.select(selection0_d_ref, command1);
}

extern(C){ extern void function(void *dId, QModelIndexAccessor* index0, int command1) qtd_QItemSelectionModel_select_QModelIndex_SelectionFlags_dispatch; }
extern(C) void qtd_export_QItemSelectionModel_select_QModelIndex_SelectionFlags_dispatch(void *dId, QModelIndexAccessor* index0, int command1){
    auto d_object = cast(QItemSelectionModel) dId;
    d_object.select(*index0, command1);
}

private extern (C) void qtd_QItemSelectionModel_initCallBacks(void* virtuals);

extern(C) void static_init_QItemSelectionModel() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QItemSelectionModel_clear_dispatch;
    virt_arr[1] = &qtd_export_QItemSelectionModel_reset_dispatch;
    virt_arr[2] = &qtd_export_QItemSelectionModel_select_QItemSelection_SelectionFlags_dispatch;
    virt_arr[3] = &qtd_export_QItemSelectionModel_select_QModelIndex_SelectionFlags_dispatch;
    qtd_QItemSelectionModel_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QItemSelectionModel_currentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QItemSelectionModel) dId;
        auto current0 = *(cast(QModelIndex*)args[1]);
        auto previous1 = *(cast(QModelIndex*)args[2]);
        //d_object.currentChanged_emit(current0, previous1);
}*/
/*private extern(C) void qtd_QItemSelectionModel_currentColumnChanged_handle(void* dId, void** args) {
        auto d_object = cast(QItemSelectionModel) dId;
        auto current0 = *(cast(QModelIndex*)args[1]);
        auto previous1 = *(cast(QModelIndex*)args[2]);
        //d_object.currentColumnChanged_emit(current0, previous1);
}*/
/*private extern(C) void qtd_QItemSelectionModel_currentRowChanged_handle(void* dId, void** args) {
        auto d_object = cast(QItemSelectionModel) dId;
        auto current0 = *(cast(QModelIndex*)args[1]);
        auto previous1 = *(cast(QModelIndex*)args[2]);
        //d_object.currentRowChanged_emit(current0, previous1);
}*/
/*private extern(C) void qtd_QItemSelectionModel_selectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QItemSelectionModel) dId;
        scope selected0 = new QItemSelection(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope deselected1 = new QItemSelection(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.selectionChanged_emit(selected0, deselected1);
}*/

extern(C) QMetaObjectNative* qtd_QItemSelectionModel_staticMetaObject();

extern(C) void qtd_QItemSelectionModel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QItemSelectionModel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
