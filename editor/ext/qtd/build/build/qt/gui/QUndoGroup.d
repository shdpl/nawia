module qt.gui.QUndoGroup;

public import qt.gui.QUndoGroup_aux;
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
public import qt.gui.QUndoStack;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QAction;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QUndoGroup : QObject
{

    package Object[] __rcStacks;

    private static const string[] __signalSignatures = [
            "activeStackChanged(QUndoStack*)", 
            "canRedoChanged(bool)", 
            "canUndoChanged(bool)", 
            "cleanChanged(bool)", 
            "indexChanged(int)", 
            "redoTextChanged(QString)", 
            "undoTextChanged(QString)"    ];

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

    protected final void activeStackChanged(QUndoStack stack) {
        qtd_QUndoGroup_activeStackChanged_QUndoStack(qtdNativeId, stack is null ? null : stack.qtdNativeId);
    }

    protected final void canRedoChanged(bool canRedo) {
        qtd_QUndoGroup_canRedoChanged_bool(qtdNativeId, canRedo);
    }

    protected final void canUndoChanged(bool canUndo) {
        qtd_QUndoGroup_canUndoChanged_bool(qtdNativeId, canUndo);
    }

    protected final void cleanChanged(bool clean) {
        qtd_QUndoGroup_cleanChanged_bool(qtdNativeId, clean);
    }

    protected final void indexChanged(int idx) {
        qtd_QUndoGroup_indexChanged_int(qtdNativeId, idx);
    }

    protected final void redoTextChanged(string redoText) {
        qtd_QUndoGroup_redoTextChanged_string(qtdNativeId, redoText);
    }

    protected final void undoTextChanged(string undoText) {
        qtd_QUndoGroup_undoTextChanged_string(qtdNativeId, undoText);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QUndoGroup_QUndoGroup_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QUndoStack activeStack() const {
        void *ret = qtd_QUndoGroup_activeStack_const(qtdNativeId);
        QUndoStack __d_return_value = QUndoStack.__getObject(ret);
        return __d_return_value;
    }

    public final void addStack(QUndoStack stack) {
        if (stack !is null) {
            __rcStacks ~= cast(Object) stack;
        }
        qtd_QUndoGroup_addStack_QUndoStack(qtdNativeId, stack is null ? null : stack.qtdNativeId);
    }

    public final bool canRedo() const {
        return qtd_QUndoGroup_canRedo_const(qtdNativeId);
    }

    public final bool canUndo() const {
        return qtd_QUndoGroup_canUndo_const(qtdNativeId);
    }

    public final QAction createRedoAction(QObject parent_, string prefix = "") const {
        void *ret = qtd_QUndoGroup_createRedoAction_QObject_string_const(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, prefix);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction createUndoAction(QObject parent_, string prefix = "") const {
        void *ret = qtd_QUndoGroup_createUndoAction_QObject_string_const(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, prefix);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final bool isClean() const {
        return qtd_QUndoGroup_isClean_const(qtdNativeId);
    }

    public final void redo() {
        qtd_QUndoGroup_redo(qtdNativeId);
    }

    public final string redoText() const {
        string res;
        qtd_QUndoGroup_redoText_const(qtdNativeId, &res);
        return res;
    }

    public final void removeStack(QUndoStack stack) {
        if (stack !is null) {
            remove(__rcStacks, cast(Object) stack);
        }
        qtd_QUndoGroup_removeStack_QUndoStack(qtdNativeId, stack is null ? null : stack.qtdNativeId);
    }

    public final void setActiveStack(QUndoStack stack) {
        qtd_QUndoGroup_setActiveStack_QUndoStack(qtdNativeId, stack is null ? null : stack.qtdNativeId);
    }

    public final QList!(QUndoStack) stacks() const {
        auto res = QList!(QUndoStack).opCall();
        qtd_QUndoGroup_stacks_const(qtdNativeId, &res);
        return res;
    }

    public final void undo() {
        qtd_QUndoGroup_undo(qtdNativeId);
    }

    public final string undoText() const {
        string res;
        qtd_QUndoGroup_undoText_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "redo()", 
            "setActiveStack(QUndoStack*)", 
            "undo()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QUndoGroup_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QUndoGroup);
    }

    static QUndoGroup __getObject(void* nativeId) {
        return static_cast!(QUndoGroup)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QUndoGroup_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QUndoGroup_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QUndoGroup(nativeId, initFlags);
        QUndoGroup.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QUndoStack)("activeStackChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(bool)("canRedoChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(bool)("canUndoChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(bool)("cleanChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(int)("indexChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(string)("redoTextChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(string)("undoTextChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("redo"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QUndoStack)("setActiveStack"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("undo"), index));

    }

    public alias void __isQtType_QUndoGroup;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QUndoGroup_activeStackChanged_QUndoStack(void* __this_nativeId,
 void* stack0);
private extern(C) void  qtd_QUndoGroup_canRedoChanged_bool(void* __this_nativeId,
 bool canRedo0);
private extern(C) void  qtd_QUndoGroup_canUndoChanged_bool(void* __this_nativeId,
 bool canUndo0);
private extern(C) void  qtd_QUndoGroup_cleanChanged_bool(void* __this_nativeId,
 bool clean0);
private extern(C) void  qtd_QUndoGroup_indexChanged_int(void* __this_nativeId,
 int idx0);
private extern(C) void  qtd_QUndoGroup_redoTextChanged_string(void* __this_nativeId,
 string redoText0);
private extern(C) void  qtd_QUndoGroup_undoTextChanged_string(void* __this_nativeId,
 string undoText0);

// C wrappers
private extern(C) void* qtd_QUndoGroup_QUndoGroup_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QUndoGroup_activeStack_const(void* __this_nativeId);
private extern(C) void  qtd_QUndoGroup_addStack_QUndoStack(void* __this_nativeId,
 void* stack0);
private extern(C) bool  qtd_QUndoGroup_canRedo_const(void* __this_nativeId);
private extern(C) bool  qtd_QUndoGroup_canUndo_const(void* __this_nativeId);
private extern(C) void*  qtd_QUndoGroup_createRedoAction_QObject_string_const(void* __this_nativeId,
 void* parent0,
 string prefix1);
private extern(C) void*  qtd_QUndoGroup_createUndoAction_QObject_string_const(void* __this_nativeId,
 void* parent0,
 string prefix1);
private extern(C) bool  qtd_QUndoGroup_isClean_const(void* __this_nativeId);
private extern(C) void  qtd_QUndoGroup_redo(void* __this_nativeId);
private extern(C) void  qtd_QUndoGroup_redoText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QUndoGroup_removeStack_QUndoStack(void* __this_nativeId,
 void* stack0);
private extern(C) void  qtd_QUndoGroup_setActiveStack_QUndoStack(void* __this_nativeId,
 void* stack0);
private extern(C) void  qtd_QUndoGroup_stacks_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QUndoGroup_undo(void* __this_nativeId);
private extern(C) void  qtd_QUndoGroup_undoText_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QUndoGroup_initCallBacks(void* virtuals);

extern(C) void static_init_QUndoGroup() {
    qtd_QUndoGroup_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QUndoGroup_activeStackChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoGroup) dId;
        scope stack0 = new QUndoStack(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.activeStackChanged_emit(stack0);
}*/
/*private extern(C) void qtd_QUndoGroup_canRedoChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoGroup) dId;
        auto canRedo0 = *(cast(bool*)args[1]);
        //d_object.canRedoChanged_emit(canRedo0);
}*/
/*private extern(C) void qtd_QUndoGroup_canUndoChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoGroup) dId;
        auto canUndo0 = *(cast(bool*)args[1]);
        //d_object.canUndoChanged_emit(canUndo0);
}*/
/*private extern(C) void qtd_QUndoGroup_cleanChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoGroup) dId;
        auto clean0 = *(cast(bool*)args[1]);
        //d_object.cleanChanged_emit(clean0);
}*/
/*private extern(C) void qtd_QUndoGroup_indexChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoGroup) dId;
        auto idx0 = *(cast(int*)args[1]);
        //d_object.indexChanged_emit(idx0);
}*/
/*private extern(C) void qtd_QUndoGroup_redoTextChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoGroup) dId;
        auto redoText0_ptr = args[1];
        string redoText0 = QStringUtil.toNativeString(redoText0_ptr);
        //d_object.redoTextChanged_emit(redoText0);
}*/
/*private extern(C) void qtd_QUndoGroup_undoTextChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoGroup) dId;
        auto undoText0_ptr = args[1];
        string undoText0 = QStringUtil.toNativeString(undoText0_ptr);
        //d_object.undoTextChanged_emit(undoText0);
}*/

extern(C) QMetaObjectNative* qtd_QUndoGroup_staticMetaObject();

extern(C) void qtd_QUndoGroup_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QUndoGroup_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
