module qt.gui.QDataWidgetMapper;

public import qt.gui.QDataWidgetMapper_aux;
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
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QByteArray;
public import qt.gui.QAbstractItemDelegate;
public import qt.core.QAbstractItemModel;
public import qt.core.QModelIndex;
public import qt.gui.QWidget;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDataWidgetMapper : QObject
{
    public enum SubmitPolicy {
        AutoSubmit = 0,
        ManualSubmit = 1
    }

    alias SubmitPolicy.AutoSubmit AutoSubmit;
    alias SubmitPolicy.ManualSubmit ManualSubmit;


Object __rcModel = null;

    package Object[] __rcMappings;

Object __rcItemDelegate = null;

    private static const string[] __signalSignatures = [
            "currentIndexChanged(int)"    ];

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

    protected final void currentIndexChanged(int index) {
        qtd_QDataWidgetMapper_currentIndexChanged_int(qtdNativeId, index);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QDataWidgetMapper_QDataWidgetMapper_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addMapping(QWidget widget, int section) {
        if (widget !is null) {
            __rcMappings ~= cast(Object) widget;
        }
        qtd_QDataWidgetMapper_addMapping_QWidget_int(qtdNativeId, widget is null ? null : widget.qtdNativeId, section);
    }

    public final void addMapping(QWidget widget, int section, const(QByteArray) propertyName) {
        if (widget !is null) {
            __rcMappings ~= cast(Object) widget;
        }
        qtd_QDataWidgetMapper_addMapping_QWidget_int_QByteArray(qtdNativeId, widget is null ? null : widget.qtdNativeId, section, propertyName is null ? null : (cast(QByteArray)propertyName).qtdNativeId);
    }

    public final void clearMapping() {
        qtd_QDataWidgetMapper_clearMapping(qtdNativeId);
    }

    public final int currentIndex() const {
        return qtd_QDataWidgetMapper_currentIndex_const(qtdNativeId);
    }

    public final QAbstractItemDelegate itemDelegate() const {
        void *ret = qtd_QDataWidgetMapper_itemDelegate_const(qtdNativeId);
        QAbstractItemDelegate __d_return_value = QAbstractItemDelegate.__getObject(ret);
        return __d_return_value;
    }

    public final QByteArray mappedPropertyName(QWidget widget) const {
        void* ret = qtd_QDataWidgetMapper_mappedPropertyName_QWidget_const(qtdNativeId, widget is null ? null : widget.qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final int mappedSection(QWidget widget) const {
        return qtd_QDataWidgetMapper_mappedSection_QWidget_const(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final QWidget mappedWidgetAt(int section) const {
        void *ret = qtd_QDataWidgetMapper_mappedWidgetAt_int_const(qtdNativeId, section);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QAbstractItemModel model() const {
        void *ret = qtd_QDataWidgetMapper_model_const(qtdNativeId);
        QAbstractItemModel __d_return_value = QAbstractItemModel.__getObject(ret);
        return __d_return_value;
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QDataWidgetMapper_orientation_const(qtdNativeId);
    }

    public final void removeMapping(QWidget widget) {
        if (widget !is null) {
            remove(__rcMappings, cast(Object) widget);
        }
        qtd_QDataWidgetMapper_removeMapping_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void revert() {
        qtd_QDataWidgetMapper_revert(qtdNativeId);
    }

    public final QModelIndex rootIndex() const {
        QModelIndex res;
        qtd_QDataWidgetMapper_rootIndex_const(qtdNativeId, &res);
        return res;
    }

    public final void setCurrentModelIndex(const(QModelIndex) index) {
        qtd_QDataWidgetMapper_setCurrentModelIndex_QModelIndex(qtdNativeId, index);
    }

    public final void setItemDelegate(QAbstractItemDelegate delegate_) {
        {
            __rcItemDelegate = cast(Object) delegate_;
        }
        qtd_QDataWidgetMapper_setItemDelegate_QAbstractItemDelegate(qtdNativeId, delegate_ is null ? null : delegate_.qtdNativeId);
    }

    public final void setModel(QAbstractItemModel model) {
        {
            __rcModel = cast(Object) model;
        }
        qtd_QDataWidgetMapper_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
    }

    public final void setOrientation(Qt.Orientation aOrientation) {
        qtd_QDataWidgetMapper_setOrientation_Orientation(qtdNativeId, aOrientation);
    }

    public final void setRootIndex(const(QModelIndex) index) {
        qtd_QDataWidgetMapper_setRootIndex_QModelIndex(qtdNativeId, index);
    }

    public final void setSubmitPolicy(QDataWidgetMapper.SubmitPolicy policy) {
        qtd_QDataWidgetMapper_setSubmitPolicy_SubmitPolicy(qtdNativeId, policy);
    }

    public final bool submit() {
        return qtd_QDataWidgetMapper_submit(qtdNativeId);
    }

    public final QDataWidgetMapper.SubmitPolicy submitPolicy() const {
        return cast(QDataWidgetMapper.SubmitPolicy) qtd_QDataWidgetMapper_submitPolicy_const(qtdNativeId);
    }

    public final void toFirst() {
        qtd_QDataWidgetMapper_toFirst(qtdNativeId);
    }

    public final void toLast() {
        qtd_QDataWidgetMapper_toLast(qtdNativeId);
    }

    public final void toNext() {
        qtd_QDataWidgetMapper_toNext(qtdNativeId);
    }

    public final void toPrevious() {
        qtd_QDataWidgetMapper_toPrevious(qtdNativeId);
    }

    public void setCurrentIndex(int index) {
        qtd_QDataWidgetMapper_setCurrentIndex_int(qtdNativeId, index);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "revert()", 
            "setCurrentModelIndex(QModelIndex)", 
            "submit()", 
            "toFirst()", 
            "toLast()", 
            "toNext()", 
            "toPrevious()", 
            "setCurrentIndex(int)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDataWidgetMapper_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDataWidgetMapper);
    }

    static QDataWidgetMapper __getObject(void* nativeId) {
        return static_cast!(QDataWidgetMapper)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDataWidgetMapper_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDataWidgetMapper_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDataWidgetMapper(nativeId, initFlags);
        QDataWidgetMapper.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("currentIndexChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("revert"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex))("setCurrentModelIndex"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("submit"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("toFirst"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("toLast"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("toNext"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!()("toPrevious"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!(int)("setCurrentIndex"), index));

    }

    public alias void __isQtType_QDataWidgetMapper;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QDataWidgetMapper_currentIndexChanged_int(void* __this_nativeId,
 int index0);

// C wrappers
private extern(C) void* qtd_QDataWidgetMapper_QDataWidgetMapper_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QDataWidgetMapper_addMapping_QWidget_int(void* __this_nativeId,
 void* widget0,
 int section1);
private extern(C) void  qtd_QDataWidgetMapper_addMapping_QWidget_int_QByteArray(void* __this_nativeId,
 void* widget0,
 int section1,
 void* propertyName2);
private extern(C) void  qtd_QDataWidgetMapper_clearMapping(void* __this_nativeId);
private extern(C) int  qtd_QDataWidgetMapper_currentIndex_const(void* __this_nativeId);
private extern(C) void*  qtd_QDataWidgetMapper_itemDelegate_const(void* __this_nativeId);
private extern(C) void*  qtd_QDataWidgetMapper_mappedPropertyName_QWidget_const(void* __this_nativeId,
 void* widget0);
private extern(C) int  qtd_QDataWidgetMapper_mappedSection_QWidget_const(void* __this_nativeId,
 void* widget0);
private extern(C) void*  qtd_QDataWidgetMapper_mappedWidgetAt_int_const(void* __this_nativeId,
 int section0);
private extern(C) void*  qtd_QDataWidgetMapper_model_const(void* __this_nativeId);
private extern(C) int  qtd_QDataWidgetMapper_orientation_const(void* __this_nativeId);
private extern(C) void  qtd_QDataWidgetMapper_removeMapping_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QDataWidgetMapper_revert(void* __this_nativeId);
private extern(C) void  qtd_QDataWidgetMapper_rootIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) void  qtd_QDataWidgetMapper_setCurrentModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QDataWidgetMapper_setItemDelegate_QAbstractItemDelegate(void* __this_nativeId,
 void* delegate0);
private extern(C) void  qtd_QDataWidgetMapper_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0);
private extern(C) void  qtd_QDataWidgetMapper_setOrientation_Orientation(void* __this_nativeId,
 int aOrientation0);
private extern(C) void  qtd_QDataWidgetMapper_setRootIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QDataWidgetMapper_setSubmitPolicy_SubmitPolicy(void* __this_nativeId,
 int policy0);
private extern(C) bool  qtd_QDataWidgetMapper_submit(void* __this_nativeId);
private extern(C) int  qtd_QDataWidgetMapper_submitPolicy_const(void* __this_nativeId);
private extern(C) void  qtd_QDataWidgetMapper_toFirst(void* __this_nativeId);
private extern(C) void  qtd_QDataWidgetMapper_toLast(void* __this_nativeId);
private extern(C) void  qtd_QDataWidgetMapper_toNext(void* __this_nativeId);
private extern(C) void  qtd_QDataWidgetMapper_toPrevious(void* __this_nativeId);
private extern(C) void  qtd_QDataWidgetMapper_setCurrentIndex_int(void* __this_nativeId,
 int index0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int index0) qtd_QDataWidgetMapper_setCurrentIndex_int_dispatch; }
extern(C) void qtd_export_QDataWidgetMapper_setCurrentIndex_int_dispatch(void *dId, int index0){
    auto d_object = cast(QDataWidgetMapper) dId;
    d_object.setCurrentIndex(index0);
}

private extern (C) void qtd_QDataWidgetMapper_initCallBacks(void* virtuals);

extern(C) void static_init_QDataWidgetMapper() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QDataWidgetMapper_setCurrentIndex_int_dispatch;
    qtd_QDataWidgetMapper_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QDataWidgetMapper_currentIndexChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDataWidgetMapper) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.currentIndexChanged_emit(index0);
}*/

extern(C) QMetaObjectNative* qtd_QDataWidgetMapper_staticMetaObject();

extern(C) void qtd_QDataWidgetMapper_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDataWidgetMapper_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
