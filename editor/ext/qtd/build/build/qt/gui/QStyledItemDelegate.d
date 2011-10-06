module qt.gui.QStyledItemDelegate;

public import qt.gui.QStyledItemDelegate_aux;
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
public import qt.gui.QAbstractItemDelegate;
public import qt.core.QLocale;
public import qt.gui.QPainter;
public import qt.core.QObject;
public import qt.gui.QStyleOptionViewItem;
public import qt.gui.QItemEditorFactory;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QVariant;
public import qt.gui.QAbstractItemDelegate;
public import qt.core.QModelIndex;
public import qt.core.QAbstractItemModel;
public import qt.gui.QWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyledItemDelegate : QAbstractItemDelegate
{

Object __rcItemEditorFactory = null;

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
        void* ret = qtd_QStyledItemDelegate_QStyledItemDelegate_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QItemEditorFactory itemEditorFactory() const {
        void* ret = qtd_QStyledItemDelegate_itemEditorFactory_const(qtdNativeId);
        QItemEditorFactory __d_return_value = qtd_QItemEditorFactory_from_ptr(ret);

        return __d_return_value;
    }

    public final void setItemEditorFactory(QItemEditorFactory factory) {
        {
            __rcItemEditorFactory = cast(Object) factory;
        }
        qtd_QStyledItemDelegate_setItemEditorFactory_QItemEditorFactory(qtdNativeId, factory is null ? null : factory.qtdNativeId);
    }

    public QWidget createEditor(QWidget parent_, const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        void *ret = qtd_QStyledItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public string displayText(QVariant value, const(QLocale) locale) const {
        string res;
        qtd_QStyledItemDelegate_displayText_QVariant_QLocale_const(qtdNativeId, &res, value is null ? null : value.qtdNativeId, locale is null ? null : (cast(QLocale)locale).qtdNativeId);
        return res;
    }

    public bool editorEvent(QEvent event, QAbstractItemModel model, const(QStyleOptionViewItem) option, const(QModelIndex) index) {
        return qtd_QStyledItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex(qtdNativeId, event is null ? null : event.qtdNativeId, model is null ? null : model.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
    }

    public bool eventFilter(QObject object, QEvent event) {
        return qtd_QStyledItemDelegate_eventFilter_QObject_QEvent(qtdNativeId, object is null ? null : object.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void initStyleOption(QStyleOptionViewItem option, const(QModelIndex) index) const {
        qtd_QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const(qtdNativeId, option is null ? null : option.qtdNativeId, index);
    }

    public void paint(QPainter painter, const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        qtd_QStyledItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
    }

    public void setEditorData(QWidget editor, const(QModelIndex) index) const {
        qtd_QStyledItemDelegate_setEditorData_QWidget_QModelIndex_const(qtdNativeId, editor is null ? null : editor.qtdNativeId, index);
    }

    public void setModelData(QWidget editor, QAbstractItemModel model, const(QModelIndex) index) const {
        qtd_QStyledItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const(qtdNativeId, editor is null ? null : editor.qtdNativeId, model is null ? null : model.qtdNativeId, index);
    }

    public QSize sizeHint(const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        QSize res;
        qtd_QStyledItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, &res, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
        return res;
    }

    public void updateEditorGeometry(QWidget editor, const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        qtd_QStyledItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, editor is null ? null : editor.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QStyledItemDelegate_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QStyledItemDelegate);
    }

    static QStyledItemDelegate __getObject(void* nativeId) {
        return static_cast!(QStyledItemDelegate)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QStyledItemDelegate_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QStyledItemDelegate_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QStyledItemDelegate(nativeId, initFlags);
        QStyledItemDelegate.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QStyledItemDelegate;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyledItemDelegate_QStyledItemDelegate_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QStyledItemDelegate_itemEditorFactory_const(void* __this_nativeId);
private extern(C) void  qtd_QStyledItemDelegate_setItemEditorFactory_QItemEditorFactory(void* __this_nativeId,
 void* factory0);
private extern(C) void*  qtd_QStyledItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* parent0,
 void* option1,
 const(QModelIndexAccessor) index2);
private extern(C) void  qtd_QStyledItemDelegate_displayText_QVariant_QLocale_const(void* __this_nativeId,
 void* __d_return_value,
 void* value0,
 void* locale1);
private extern(C) bool  qtd_QStyledItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex(void* __this_nativeId,
 void* event0,
 void* model1,
 void* option2,
 const(QModelIndexAccessor) index3);
private extern(C) bool  qtd_QStyledItemDelegate_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* object0,
 void* event1);
private extern(C) void  qtd_QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* option0,
 const(QModelIndexAccessor) index1);
private extern(C) void  qtd_QStyledItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* painter0,
 void* option1,
 const(QModelIndexAccessor) index2);
private extern(C) void  qtd_QStyledItemDelegate_setEditorData_QWidget_QModelIndex_const(void* __this_nativeId,
 void* editor0,
 const(QModelIndexAccessor) index1);
private extern(C) void  qtd_QStyledItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const(void* __this_nativeId,
 void* editor0,
 void* model1,
 const(QModelIndexAccessor) index2);
private extern(C) void  qtd_QStyledItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 QSize * __d_return_value,
 void* option0,
 const(QModelIndexAccessor) index1);
private extern(C) void  qtd_QStyledItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* editor0,
 void* option1,
 const(QModelIndexAccessor) index2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str, void* value0, void* locale1) qtd_QStyledItemDelegate_displayText_QVariant_QLocale_const_dispatch; }
extern(C) void qtd_export_QStyledItemDelegate_displayText_QVariant_QLocale_const_dispatch(void *dId, string* ret_str, void* value0, void* locale1){
    auto d_object = cast(QStyledItemDelegate) dId;
    scope value0_d_ref = new QVariant(value0, QtdObjectInitFlags.onStack);
    scope locale1_d_ref = new QLocale(locale1, QtdObjectInitFlags.onStack);
    string _d_str = d_object.displayText(value0_d_ref, locale1_d_ref);
    *ret_str = _d_str;
}

extern(C){ extern void function(void *dId, void* option0, QModelIndexAccessor* index1) qtd_QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const_dispatch(void *dId, void* option0, QModelIndexAccessor* index1){
    auto d_object = cast(QStyledItemDelegate) dId;
    scope option0_d_ref = new QStyleOptionViewItem(option0, QtdObjectInitFlags.onStack);
    d_object.initStyleOption(option0_d_ref, *index1);
}

private extern (C) void qtd_QStyledItemDelegate_initCallBacks(void* virtuals);

extern(C) void static_init_QStyledItemDelegate() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QStyledItemDelegate_displayText_QVariant_QLocale_const_dispatch;
    virt_arr[1] = &qtd_export_QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const_dispatch;
    qtd_QStyledItemDelegate_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QStyledItemDelegate_closeEditor_handle(void* dId, void** args) {
        auto d_object = cast(QStyledItemDelegate) dId;
        scope editor0 = new QWidget(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        auto hint1 = *(cast(QAbstractItemDelegate.EndEditHint*)args[2]);
        //d_object.closeEditor_emit(editor0, hint1);
}*/
/*private extern(C) void qtd_QStyledItemDelegate_commitData_handle(void* dId, void** args) {
        auto d_object = cast(QStyledItemDelegate) dId;
        scope editor0 = new QWidget(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.commitData_emit(editor0);
}*/
/*private extern(C) void qtd_QStyledItemDelegate_sizeHintChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStyledItemDelegate) dId;
        auto arg__1 = *(cast(QModelIndex*)args[1]);
        //d_object.sizeHintChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QStyledItemDelegate_staticMetaObject();

extern(C) void qtd_QStyledItemDelegate_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QStyledItemDelegate_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
