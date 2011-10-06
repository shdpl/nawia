module qt.gui.QCompleter;

public import qt.gui.QCompleter_aux;
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
public import qt.core.QRect;
public import qt.core.QAbstractItemModel;
public import qt.core.QModelIndex;
public import qt.gui.QAbstractItemView;
public import qt.gui.QWidget;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QCompleter : QObject
{
    public enum ModelSorting {
        UnsortedModel = 0,
        CaseSensitivelySortedModel = 1,
        CaseInsensitivelySortedModel = 2
    }

    alias ModelSorting.UnsortedModel UnsortedModel;
    alias ModelSorting.CaseSensitivelySortedModel CaseSensitivelySortedModel;
    alias ModelSorting.CaseInsensitivelySortedModel CaseInsensitivelySortedModel;

    public enum CompletionMode {
        PopupCompletion = 0,
        UnfilteredPopupCompletion = 1,
        InlineCompletion = 2
    }

    alias CompletionMode.PopupCompletion PopupCompletion;
    alias CompletionMode.UnfilteredPopupCompletion UnfilteredPopupCompletion;
    alias CompletionMode.InlineCompletion InlineCompletion;


Object __rcModel = null;

Object __rcWidget = null;

    private static const string[] __signalSignatures = [
            "activated(QModelIndex)", 
            "activated(QString)", 
            "highlighted(QModelIndex)", 
            "highlighted(QString)"    ];

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

    protected final void activated(const(QModelIndex) index) {
        qtd_QCompleter_activated_QModelIndex(qtdNativeId, index);
    }

    protected final void activated(string text) {
        qtd_QCompleter_activated_string(qtdNativeId, text);
    }

    protected final void highlighted(const(QModelIndex) index) {
        qtd_QCompleter_highlighted_QModelIndex(qtdNativeId, index);
    }

    protected final void highlighted(string text) {
        qtd_QCompleter_highlighted_string(qtdNativeId, text);
    }
// Functions

    public this(QAbstractItemModel model, QObject parent_ = null) {
        void* ret = qtd_QCompleter_QCompleter_QAbstractItemModel_QObject(cast(void*) this, model is null ? null : model.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QObject parent_ = null) {
        void* ret = qtd_QCompleter_QCompleter_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QList!(string) completions, QObject parent_ = null) {
        void* ret = qtd_QCompleter_QCompleter_QList_QObject(cast(void*) this, &completions, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final Qt.CaseSensitivity caseSensitivity() const {
        return cast(Qt.CaseSensitivity) qtd_QCompleter_caseSensitivity_const(qtdNativeId);
    }

    public final void complete(const(QRect) rect = QRect()) {
        qtd_QCompleter_complete_QRect(qtdNativeId, rect);
    }

    public final int completionColumn() const {
        return qtd_QCompleter_completionColumn_const(qtdNativeId);
    }

    public final int completionCount() const {
        return qtd_QCompleter_completionCount_const(qtdNativeId);
    }

    public final QCompleter.CompletionMode completionMode() const {
        return cast(QCompleter.CompletionMode) qtd_QCompleter_completionMode_const(qtdNativeId);
    }

    public final QAbstractItemModel completionModel() const {
        void *ret = qtd_QCompleter_completionModel_const(qtdNativeId);
        QAbstractItemModel __d_return_value = QAbstractItemModel.__getObject(ret);
        return __d_return_value;
    }

    public final string completionPrefix() const {
        string res;
        qtd_QCompleter_completionPrefix_const(qtdNativeId, &res);
        return res;
    }

    public final int completionRole() const {
        return qtd_QCompleter_completionRole_const(qtdNativeId);
    }

    public final string currentCompletion() const {
        string res;
        qtd_QCompleter_currentCompletion_const(qtdNativeId, &res);
        return res;
    }

    public final QModelIndex currentIndex() const {
        QModelIndex res;
        qtd_QCompleter_currentIndex_const(qtdNativeId, &res);
        return res;
    }

    public final int currentRow() const {
        return qtd_QCompleter_currentRow_const(qtdNativeId);
    }

    public final int maxVisibleItems() const {
        return qtd_QCompleter_maxVisibleItems_const(qtdNativeId);
    }

    public final QAbstractItemModel model() const {
        void *ret = qtd_QCompleter_model_const(qtdNativeId);
        QAbstractItemModel __d_return_value = QAbstractItemModel.__getObject(ret);
        return __d_return_value;
    }

    public final QCompleter.ModelSorting modelSorting() const {
        return cast(QCompleter.ModelSorting) qtd_QCompleter_modelSorting_const(qtdNativeId);
    }

    public final QAbstractItemView popup() const {
        void *ret = qtd_QCompleter_popup_const(qtdNativeId);
        QAbstractItemView __d_return_value = QAbstractItemView.__getObject(ret);
        return __d_return_value;
    }

    public final void setCaseSensitivity(Qt.CaseSensitivity caseSensitivity) {
        qtd_QCompleter_setCaseSensitivity_CaseSensitivity(qtdNativeId, caseSensitivity);
    }

    public final void setCompletionColumn(int column) {
        qtd_QCompleter_setCompletionColumn_int(qtdNativeId, column);
    }

    public final void setCompletionMode(QCompleter.CompletionMode mode) {
        qtd_QCompleter_setCompletionMode_CompletionMode(qtdNativeId, mode);
    }

    public final void setCompletionPrefix(string prefix) {
        qtd_QCompleter_setCompletionPrefix_string(qtdNativeId, prefix);
    }

    public final void setCompletionRole(int role) {
        qtd_QCompleter_setCompletionRole_int(qtdNativeId, role);
    }

    public final bool setCurrentRow(int row) {
        return qtd_QCompleter_setCurrentRow_int(qtdNativeId, row);
    }

    public final void setMaxVisibleItems(int maxItems) {
        qtd_QCompleter_setMaxVisibleItems_int(qtdNativeId, maxItems);
    }

    public final void setModel(QAbstractItemModel c) {
        {
            __rcModel = cast(Object) c;
        }
        qtd_QCompleter_setModel_QAbstractItemModel(qtdNativeId, c is null ? null : c.qtdNativeId);
    }

    public final void setModelSorting(QCompleter.ModelSorting sorting) {
        qtd_QCompleter_setModelSorting_ModelSorting(qtdNativeId, sorting);
    }

    public final void setPopup(QAbstractItemView popup) {
        if (popup !is null) {
            popup.qtdSetOwnership(QtdObjectOwnership.native);
        }
        /*if (popup is null)
            throw new NullPointerException("Argument 'popup': null not expected."); */
        qtd_QCompleter_setPopup_QAbstractItemView(qtdNativeId, popup is null ? null : popup.qtdNativeId);
    }

    public final void setWidget(QWidget widget) {
        {
            __rcWidget = cast(Object) widget;
        }
        qtd_QCompleter_setWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setWrapAround(bool wrap) {
        qtd_QCompleter_setWrapAround_bool(qtdNativeId, wrap);
    }

    public final QWidget widget() const {
        void *ret = qtd_QCompleter_widget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final bool wrapAround() const {
        return qtd_QCompleter_wrapAround_const(qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QCompleter_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool eventFilter(QObject o, QEvent e) {
        return qtd_QCompleter_eventFilter_QObject_QEvent(qtdNativeId, o is null ? null : o.qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public string pathFromIndex(const(QModelIndex) index) const {
        string res;
        qtd_QCompleter_pathFromIndex_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    public QList!(string) splitPath(string path) const {
        auto res = QList!(string).opCall();
        qtd_QCompleter_splitPath_string_const(qtdNativeId, &res, path);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "complete(QRect)", 
            "complete()", 
            "setCompletionPrefix(QString)", 
            "setWrapAround(bool)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QCompleter_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QCompleter);
    }

    static QCompleter __getObject(void* nativeId) {
        return static_cast!(QCompleter)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QCompleter_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QCompleter_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QCompleter(nativeId, initFlags);
        QCompleter.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("activated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(string)("activated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("highlighted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(string)("highlighted"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(const(QRect))("complete"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("complete"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(string)("setCompletionPrefix"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setWrapAround"), index));

    }

    public alias void __isQtType_QCompleter;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QCompleter_activated_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QCompleter_activated_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QCompleter_highlighted_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QCompleter_highlighted_string(void* __this_nativeId,
 string text0);

// C wrappers
private extern(C) void* qtd_QCompleter_QCompleter_QAbstractItemModel_QObject(void *d_ptr,
 void* model0,
 void* parent1);
private extern(C) void* qtd_QCompleter_QCompleter_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QCompleter_QCompleter_QList_QObject(void *d_ptr,
 void* completions0,
 void* parent1);
private extern(C) int  qtd_QCompleter_caseSensitivity_const(void* __this_nativeId);
private extern(C) void  qtd_QCompleter_complete_QRect(void* __this_nativeId,
 QRect rect0);
private extern(C) int  qtd_QCompleter_completionColumn_const(void* __this_nativeId);
private extern(C) int  qtd_QCompleter_completionCount_const(void* __this_nativeId);
private extern(C) int  qtd_QCompleter_completionMode_const(void* __this_nativeId);
private extern(C) void*  qtd_QCompleter_completionModel_const(void* __this_nativeId);
private extern(C) void  qtd_QCompleter_completionPrefix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QCompleter_completionRole_const(void* __this_nativeId);
private extern(C) void  qtd_QCompleter_currentCompletion_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QCompleter_currentIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) int  qtd_QCompleter_currentRow_const(void* __this_nativeId);
private extern(C) int  qtd_QCompleter_maxVisibleItems_const(void* __this_nativeId);
private extern(C) void*  qtd_QCompleter_model_const(void* __this_nativeId);
private extern(C) int  qtd_QCompleter_modelSorting_const(void* __this_nativeId);
private extern(C) void*  qtd_QCompleter_popup_const(void* __this_nativeId);
private extern(C) void  qtd_QCompleter_setCaseSensitivity_CaseSensitivity(void* __this_nativeId,
 int caseSensitivity0);
private extern(C) void  qtd_QCompleter_setCompletionColumn_int(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QCompleter_setCompletionMode_CompletionMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QCompleter_setCompletionPrefix_string(void* __this_nativeId,
 string prefix0);
private extern(C) void  qtd_QCompleter_setCompletionRole_int(void* __this_nativeId,
 int role0);
private extern(C) bool  qtd_QCompleter_setCurrentRow_int(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QCompleter_setMaxVisibleItems_int(void* __this_nativeId,
 int maxItems0);
private extern(C) void  qtd_QCompleter_setModel_QAbstractItemModel(void* __this_nativeId,
 void* c0);
private extern(C) void  qtd_QCompleter_setModelSorting_ModelSorting(void* __this_nativeId,
 int sorting0);
private extern(C) void  qtd_QCompleter_setPopup_QAbstractItemView(void* __this_nativeId,
 void* popup0);
private extern(C) void  qtd_QCompleter_setWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QCompleter_setWrapAround_bool(void* __this_nativeId,
 bool wrap0);
private extern(C) void*  qtd_QCompleter_widget_const(void* __this_nativeId);
private extern(C) bool  qtd_QCompleter_wrapAround_const(void* __this_nativeId);
private extern(C) bool  qtd_QCompleter_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QCompleter_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* o0,
 void* e1);
private extern(C) void  qtd_QCompleter_pathFromIndex_QModelIndex_const(void* __this_nativeId,
 void* __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QCompleter_splitPath_string_const(void* __this_nativeId,
 void* __d_return_value,
 string path0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str, QModelIndexAccessor* index0) qtd_QCompleter_pathFromIndex_QModelIndex_const_dispatch; }
extern(C) void qtd_export_QCompleter_pathFromIndex_QModelIndex_const_dispatch(void *dId, string* ret_str, QModelIndexAccessor* index0){
    auto d_object = cast(QCompleter) dId;
    string _d_str = d_object.pathFromIndex(*index0);
    *ret_str = _d_str;
}

extern(C){ extern void function(void *dId, QList!(string)* __d_arr, wchar* path0, int path0_size) qtd_QCompleter_splitPath_string_const_dispatch; }
extern(C) void qtd_export_QCompleter_splitPath_string_const_dispatch(void *dId, QList!(string)* __d_arr, wchar* path0, int path0_size){
    auto d_object = cast(QCompleter) dId;
    string path0_d_ref = toUTF8(path0[0..path0_size]);
    auto return_value = d_object.splitPath(path0_d_ref);
    *__d_arr = return_value;
}

private extern (C) void qtd_QCompleter_initCallBacks(void* virtuals);

extern(C) void static_init_QCompleter() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QCompleter_pathFromIndex_QModelIndex_const_dispatch;
    virt_arr[1] = &qtd_export_QCompleter_splitPath_string_const_dispatch;
    qtd_QCompleter_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QCompleter_activated_handle(void* dId, void** args) {
        auto d_object = cast(QCompleter) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QCompleter_activated_handle(void* dId, void** args) {
        auto d_object = cast(QCompleter) dId;
        auto text0_ptr = args[1];
        string text0 = QStringUtil.toNativeString(text0_ptr);
        //d_object.activated_emit(text0);
}*/
/*private extern(C) void qtd_QCompleter_highlighted_handle(void* dId, void** args) {
        auto d_object = cast(QCompleter) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.highlighted_emit(index0);
}*/
/*private extern(C) void qtd_QCompleter_highlighted_handle(void* dId, void** args) {
        auto d_object = cast(QCompleter) dId;
        auto text0_ptr = args[1];
        string text0 = QStringUtil.toNativeString(text0_ptr);
        //d_object.highlighted_emit(text0);
}*/

extern(C) QMetaObjectNative* qtd_QCompleter_staticMetaObject();

extern(C) void qtd_QCompleter_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QCompleter_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
