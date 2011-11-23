module qt.gui.QAbstractItemDelegate;

public import qt.gui.QAbstractItemDelegate_aux;
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
public import qt.gui.QPainter;
public import qt.core.QObject;
public import qt.gui.QStyleOptionViewItem;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QHelpEvent;
public import qt.core.QChildEvent;
public import qt.core.QModelIndex;
public import qt.core.QAbstractItemModel;
public import qt.gui.QAbstractItemView;
public import qt.gui.QWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractItemDelegate : QObject
{
    public enum EndEditHint {
        NoHint = 0,
        EditNextItem = 1,
        EditPreviousItem = 2,
        SubmitModelCache = 3,
        RevertModelCache = 4
    }

    alias EndEditHint.NoHint NoHint;
    alias EndEditHint.EditNextItem EditNextItem;
    alias EndEditHint.EditPreviousItem EditPreviousItem;
    alias EndEditHint.SubmitModelCache SubmitModelCache;
    alias EndEditHint.RevertModelCache RevertModelCache;


    private static const string[] __signalSignatures = [
            "closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)", 
            "closeEditor(QWidget*)", 
            "commitData(QWidget*)", 
            "sizeHintChanged(QModelIndex)"    ];

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

    protected final void closeEditor(QWidget editor, QAbstractItemDelegate.EndEditHint hint = QAbstractItemDelegate.EndEditHint.NoHint) {
        qtd_QAbstractItemDelegate_closeEditor_QWidget_EndEditHint(qtdNativeId, editor is null ? null : editor.qtdNativeId, hint);
    }

    protected final void commitData(QWidget editor) {
        qtd_QAbstractItemDelegate_commitData_QWidget(qtdNativeId, editor is null ? null : editor.qtdNativeId);
    }

    protected final void sizeHintChanged(const(QModelIndex) arg__1) {
        qtd_QAbstractItemDelegate_sizeHintChanged_QModelIndex(qtdNativeId, arg__1);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QAbstractItemDelegate_QAbstractItemDelegate_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool helpEvent(QHelpEvent event, QAbstractItemView view, const(QStyleOptionViewItem) option, const(QModelIndex) index) {
        return qtd_QAbstractItemDelegate_helpEvent_QHelpEvent_QAbstractItemView_QStyleOptionViewItem_QModelIndex(qtdNativeId, event is null ? null : event.qtdNativeId, view is null ? null : view.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
    }

    public QWidget createEditor(QWidget parent_, const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        void *ret = qtd_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public bool editorEvent(QEvent event, QAbstractItemModel model, const(QStyleOptionViewItem) option, const(QModelIndex) index) {
        return qtd_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex(qtdNativeId, event is null ? null : event.qtdNativeId, model is null ? null : model.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
    }

    public abstract void paint(QPainter painter, const(QStyleOptionViewItem) option, const(QModelIndex) index) const;

    public void setEditorData(QWidget editor, const(QModelIndex) index) const {
        qtd_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const(qtdNativeId, editor is null ? null : editor.qtdNativeId, index);
    }

    public void setModelData(QWidget editor, QAbstractItemModel model, const(QModelIndex) index) const {
        qtd_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const(qtdNativeId, editor is null ? null : editor.qtdNativeId, model is null ? null : model.qtdNativeId, index);
    }

    public abstract QSize sizeHint(const(QStyleOptionViewItem) option, const(QModelIndex) index) const;

    public void updateEditorGeometry(QWidget editor, const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        qtd_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, editor is null ? null : editor.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "helpEvent(QHelpEvent*,QAbstractItemView*,QStyleOptionViewItem,QModelIndex)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractItemDelegate_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractItemDelegate);
    }

    static QAbstractItemDelegate __getObject(void* nativeId) {
        return static_cast!(QAbstractItemDelegate)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractItemDelegate_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractItemDelegate_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractItemDelegate_ConcreteWrapper(nativeId, initFlags);
        QAbstractItemDelegate.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QWidget,QAbstractItemDelegate.EndEditHint)("closeEditor"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(QWidget)("closeEditor"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(QWidget)("commitData"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("sizeHintChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(QHelpEvent,QAbstractItemView,const(QStyleOptionViewItem),const(QModelIndex))("helpEvent"), index));

    }

    public alias void __isQtType_QAbstractItemDelegate;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAbstractItemDelegate_ConcreteWrapper : QAbstractItemDelegate {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void paint(QPainter painter, const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
            qtd_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
        }

        override         public QSize sizeHint(const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
            QSize res;
            qtd_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, &res, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
            return res;
        }
    }


// C wrappers for signal emitters
private extern(C) void  qtd_QAbstractItemDelegate_closeEditor_QWidget_EndEditHint(void* __this_nativeId,
 void* editor0,
 int hint1);
private extern(C) void  qtd_QAbstractItemDelegate_commitData_QWidget(void* __this_nativeId,
 void* editor0);
private extern(C) void  qtd_QAbstractItemDelegate_sizeHintChanged_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) arg__1);

// C wrappers
private extern(C) void* qtd_QAbstractItemDelegate_QAbstractItemDelegate_QObject(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QAbstractItemDelegate_helpEvent_QHelpEvent_QAbstractItemView_QStyleOptionViewItem_QModelIndex(void* __this_nativeId,
 void* event0,
 void* view1,
 void* option2,
 const(QModelIndexAccessor) index3);
private extern(C) void*  qtd_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* parent0,
 void* option1,
 const(QModelIndexAccessor) index2);
private extern(C) bool  qtd_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex(void* __this_nativeId,
 void* event0,
 void* model1,
 void* option2,
 const(QModelIndexAccessor) index3);
private extern(C) void  qtd_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* painter0,
 void* option1,
 const(QModelIndexAccessor) index2);
private extern(C) void  qtd_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const(void* __this_nativeId,
 void* editor0,
 const(QModelIndexAccessor) index1);
private extern(C) void  qtd_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const(void* __this_nativeId,
 void* editor0,
 void* model1,
 const(QModelIndexAccessor) index2);
private extern(C) void  qtd_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 QSize * __d_return_value,
 void* option0,
 const(QModelIndexAccessor) index1);
private extern(C) void  qtd_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* editor0,
 void* option1,
 const(QModelIndexAccessor) index2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, void* parent0, void* option1, QModelIndexAccessor* index2) qtd_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch; }
extern(C) void* qtd_export_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch(void *dId, void* parent0, void* option1, QModelIndexAccessor* index2){
    auto d_object = cast(QAbstractItemDelegate) dId;
    scope parent0_d_ref = new QWidget(parent0, QtdObjectInitFlags.onStack);

    scope option1_d_ref = new QStyleOptionViewItem(option1, QtdObjectInitFlags.onStack);
    QWidget ret_value = d_object.createEditor(parent0_d_ref, option1_d_ref, *index2);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern bool function(void *dId, void* event0, void* model1, void* option2, QModelIndexAccessor* index3) qtd_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch; }
extern(C) bool qtd_export_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch(void *dId, void* event0, void* model1, void* option2, QModelIndexAccessor* index3){
    auto d_object = cast(QAbstractItemDelegate) dId;
    scope event0_d_ref = new QEvent(event0, QtdObjectInitFlags.onStack);
    scope model1_d_ref = new QAbstractItemModel_ConcreteWrapper(model1, QtdObjectInitFlags.onStack);

    scope option2_d_ref = new QStyleOptionViewItem(option2, QtdObjectInitFlags.onStack);
    auto return_value = d_object.editorEvent(event0_d_ref, model1_d_ref, option2_d_ref, *index3);
    return return_value;
}

extern(C){ extern void function(void *dId, void* painter0, void* option1, QModelIndexAccessor* index2) qtd_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch(void *dId, void* painter0, void* option1, QModelIndexAccessor* index2){
    auto d_object = cast(QAbstractItemDelegate) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope option1_d_ref = new QStyleOptionViewItem(option1, QtdObjectInitFlags.onStack);
    d_object.paint(painter0_d_ref, option1_d_ref, *index2);
}

extern(C){ extern void function(void *dId, void* editor0, QModelIndexAccessor* index1) qtd_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch(void *dId, void* editor0, QModelIndexAccessor* index1){
    auto d_object = cast(QAbstractItemDelegate) dId;
    scope editor0_d_ref = new QWidget(editor0, QtdObjectInitFlags.onStack);

    d_object.setEditorData(editor0_d_ref, *index1);
}

extern(C){ extern void function(void *dId, void* editor0, void* model1, QModelIndexAccessor* index2) qtd_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch(void *dId, void* editor0, void* model1, QModelIndexAccessor* index2){
    auto d_object = cast(QAbstractItemDelegate) dId;
    scope editor0_d_ref = new QWidget(editor0, QtdObjectInitFlags.onStack);

    scope model1_d_ref = new QAbstractItemModel_ConcreteWrapper(model1, QtdObjectInitFlags.onStack);

    d_object.setModelData(editor0_d_ref, model1_d_ref, *index2);
}

extern(C){ extern void function(void *dId, QSize *__d_return_value, void* option0, QModelIndexAccessor* index1) qtd_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch(void *dId, QSize *__d_return_value, void* option0, QModelIndexAccessor* index1){
    auto d_object = cast(QAbstractItemDelegate) dId;
    scope option0_d_ref = new QStyleOptionViewItem(option0, QtdObjectInitFlags.onStack);
    *__d_return_value = d_object.sizeHint(option0_d_ref, *index1);
}

extern(C){ extern void function(void *dId, void* editor0, void* option1, QModelIndexAccessor* index2) qtd_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch(void *dId, void* editor0, void* option1, QModelIndexAccessor* index2){
    auto d_object = cast(QAbstractItemDelegate) dId;
    scope editor0_d_ref = new QWidget(editor0, QtdObjectInitFlags.onStack);

    scope option1_d_ref = new QStyleOptionViewItem(option1, QtdObjectInitFlags.onStack);
    d_object.updateEditorGeometry(editor0_d_ref, option1_d_ref, *index2);
}

private extern (C) void qtd_QAbstractItemDelegate_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractItemDelegate() {
    void*[7] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch;
    virt_arr[1] = &qtd_export_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch;
    virt_arr[2] = &qtd_export_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch;
    virt_arr[3] = &qtd_export_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch;
    virt_arr[4] = &qtd_export_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch;
    virt_arr[5] = &qtd_export_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch;
    virt_arr[6] = &qtd_export_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch;
    qtd_QAbstractItemDelegate_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractItemDelegate_closeEditor_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemDelegate) dId;
        scope editor0 = new QWidget(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        auto hint1 = *(cast(QAbstractItemDelegate.EndEditHint*)args[2]);
        //d_object.closeEditor_emit(editor0, hint1);
}*/
/*private extern(C) void qtd_QAbstractItemDelegate_commitData_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemDelegate) dId;
        scope editor0 = new QWidget(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.commitData_emit(editor0);
}*/
/*private extern(C) void qtd_QAbstractItemDelegate_sizeHintChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractItemDelegate) dId;
        auto arg__1 = *(cast(QModelIndex*)args[1]);
        //d_object.sizeHintChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QAbstractItemDelegate_staticMetaObject();

extern(C) void qtd_QAbstractItemDelegate_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractItemDelegate_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
