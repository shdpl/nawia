module qt.gui.QUndoStack;

public import qt.gui.QUndoStack_aux;
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
public import qt.gui.QUndoCommand;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QAction;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QUndoStack : QObject
{

    private static const string[] __signalSignatures = [
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

    protected final void canRedoChanged(bool canRedo) {
        qtd_QUndoStack_canRedoChanged_bool(qtdNativeId, canRedo);
    }

    protected final void canUndoChanged(bool canUndo) {
        qtd_QUndoStack_canUndoChanged_bool(qtdNativeId, canUndo);
    }

    protected final void cleanChanged(bool clean) {
        qtd_QUndoStack_cleanChanged_bool(qtdNativeId, clean);
    }

    protected final void indexChanged(int idx) {
        qtd_QUndoStack_indexChanged_int(qtdNativeId, idx);
    }

    protected final void redoTextChanged(string redoText) {
        qtd_QUndoStack_redoTextChanged_string(qtdNativeId, redoText);
    }

    protected final void undoTextChanged(string undoText) {
        qtd_QUndoStack_undoTextChanged_string(qtdNativeId, undoText);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QUndoStack_QUndoStack_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void beginMacro(string text) {
        qtd_QUndoStack_beginMacro_string(qtdNativeId, text);
    }

    public final bool canRedo() const {
        return qtd_QUndoStack_canRedo_const(qtdNativeId);
    }

    public final bool canUndo() const {
        return qtd_QUndoStack_canUndo_const(qtdNativeId);
    }

    public final int cleanIndex() const {
        return qtd_QUndoStack_cleanIndex_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QUndoStack_clear(qtdNativeId);
    }

    public final QUndoCommand command(int index) const {
        void* ret = qtd_QUndoStack_command_int_const(qtdNativeId, index);
        QUndoCommand __d_return_value = qtd_QUndoCommand_from_ptr(ret);

        return __d_return_value;
    }

    public final int count() const {
        return qtd_QUndoStack_count_const(qtdNativeId);
    }

    public final QAction createRedoAction(QObject parent_, string prefix = "") const {
        void *ret = qtd_QUndoStack_createRedoAction_QObject_string_const(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, prefix);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction createUndoAction(QObject parent_, string prefix = "") const {
        void *ret = qtd_QUndoStack_createUndoAction_QObject_string_const(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, prefix);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final void endMacro() {
        qtd_QUndoStack_endMacro(qtdNativeId);
    }

    public final int index() const {
        return qtd_QUndoStack_index_const(qtdNativeId);
    }

    public final bool isActive() const {
        return qtd_QUndoStack_isActive_const(qtdNativeId);
    }

    public final bool isClean() const {
        return qtd_QUndoStack_isClean_const(qtdNativeId);
    }

    public final void push(QUndoCommand cmd) {
        if (cmd !is null) {
            cmd.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QUndoStack_push_QUndoCommand(qtdNativeId, cmd is null ? null : cmd.qtdNativeId);
    }

    public final void redo() {
        qtd_QUndoStack_redo(qtdNativeId);
    }

    public final string redoText() const {
        string res;
        qtd_QUndoStack_redoText_const(qtdNativeId, &res);
        return res;
    }

    public final void setActive(bool active = true) {
        qtd_QUndoStack_setActive_bool(qtdNativeId, active);
    }

    public final void setClean() {
        qtd_QUndoStack_setClean(qtdNativeId);
    }

    public final void setIndex(int idx) {
        qtd_QUndoStack_setIndex_int(qtdNativeId, idx);
    }

    public final void setUndoLimit(int limit) {
        qtd_QUndoStack_setUndoLimit_int(qtdNativeId, limit);
    }

    public final string text(int idx) const {
        string res;
        qtd_QUndoStack_text_int_const(qtdNativeId, &res, idx);
        return res;
    }

    public final void undo() {
        qtd_QUndoStack_undo(qtdNativeId);
    }

    public final int undoLimit() const {
        return qtd_QUndoStack_undoLimit_const(qtdNativeId);
    }

    public final string undoText() const {
        string res;
        qtd_QUndoStack_undoText_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "redo()", 
            "setActive(bool)", 
            "setActive()", 
            "setClean()", 
            "setIndex(int)", 
            "undo()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QUndoStack_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QUndoStack);
    }

    static QUndoStack __getObject(void* nativeId) {
        return static_cast!(QUndoStack)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QUndoStack_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QUndoStack_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QUndoStack(nativeId, initFlags);
        QUndoStack.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(bool)("canRedoChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(bool)("canUndoChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(bool)("cleanChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(int)("indexChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(string)("redoTextChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(string)("undoTextChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("redo"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setActive"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("setActive"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("setClean"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(int)("setIndex"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("undo"), index));

    }

    public alias void __isQtType_QUndoStack;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QUndoStack_canRedoChanged_bool(void* __this_nativeId,
 bool canRedo0);
private extern(C) void  qtd_QUndoStack_canUndoChanged_bool(void* __this_nativeId,
 bool canUndo0);
private extern(C) void  qtd_QUndoStack_cleanChanged_bool(void* __this_nativeId,
 bool clean0);
private extern(C) void  qtd_QUndoStack_indexChanged_int(void* __this_nativeId,
 int idx0);
private extern(C) void  qtd_QUndoStack_redoTextChanged_string(void* __this_nativeId,
 string redoText0);
private extern(C) void  qtd_QUndoStack_undoTextChanged_string(void* __this_nativeId,
 string undoText0);

// C wrappers
private extern(C) void* qtd_QUndoStack_QUndoStack_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QUndoStack_beginMacro_string(void* __this_nativeId,
 string text0);
private extern(C) bool  qtd_QUndoStack_canRedo_const(void* __this_nativeId);
private extern(C) bool  qtd_QUndoStack_canUndo_const(void* __this_nativeId);
private extern(C) int  qtd_QUndoStack_cleanIndex_const(void* __this_nativeId);
private extern(C) void  qtd_QUndoStack_clear(void* __this_nativeId);
private extern(C) void*  qtd_QUndoStack_command_int_const(void* __this_nativeId,
 int index0);
private extern(C) int  qtd_QUndoStack_count_const(void* __this_nativeId);
private extern(C) void*  qtd_QUndoStack_createRedoAction_QObject_string_const(void* __this_nativeId,
 void* parent0,
 string prefix1);
private extern(C) void*  qtd_QUndoStack_createUndoAction_QObject_string_const(void* __this_nativeId,
 void* parent0,
 string prefix1);
private extern(C) void  qtd_QUndoStack_endMacro(void* __this_nativeId);
private extern(C) int  qtd_QUndoStack_index_const(void* __this_nativeId);
private extern(C) bool  qtd_QUndoStack_isActive_const(void* __this_nativeId);
private extern(C) bool  qtd_QUndoStack_isClean_const(void* __this_nativeId);
private extern(C) void  qtd_QUndoStack_push_QUndoCommand(void* __this_nativeId,
 void* cmd0);
private extern(C) void  qtd_QUndoStack_redo(void* __this_nativeId);
private extern(C) void  qtd_QUndoStack_redoText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QUndoStack_setActive_bool(void* __this_nativeId,
 bool active0);
private extern(C) void  qtd_QUndoStack_setClean(void* __this_nativeId);
private extern(C) void  qtd_QUndoStack_setIndex_int(void* __this_nativeId,
 int idx0);
private extern(C) void  qtd_QUndoStack_setUndoLimit_int(void* __this_nativeId,
 int limit0);
private extern(C) void  qtd_QUndoStack_text_int_const(void* __this_nativeId,
 void* __d_return_value,
 int idx0);
private extern(C) void  qtd_QUndoStack_undo(void* __this_nativeId);
private extern(C) int  qtd_QUndoStack_undoLimit_const(void* __this_nativeId);
private extern(C) void  qtd_QUndoStack_undoText_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QUndoStack_initCallBacks(void* virtuals);

extern(C) void static_init_QUndoStack() {
    qtd_QUndoStack_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QUndoStack_canRedoChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoStack) dId;
        auto canRedo0 = *(cast(bool*)args[1]);
        //d_object.canRedoChanged_emit(canRedo0);
}*/
/*private extern(C) void qtd_QUndoStack_canUndoChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoStack) dId;
        auto canUndo0 = *(cast(bool*)args[1]);
        //d_object.canUndoChanged_emit(canUndo0);
}*/
/*private extern(C) void qtd_QUndoStack_cleanChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoStack) dId;
        auto clean0 = *(cast(bool*)args[1]);
        //d_object.cleanChanged_emit(clean0);
}*/
/*private extern(C) void qtd_QUndoStack_indexChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoStack) dId;
        auto idx0 = *(cast(int*)args[1]);
        //d_object.indexChanged_emit(idx0);
}*/
/*private extern(C) void qtd_QUndoStack_redoTextChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoStack) dId;
        auto redoText0_ptr = args[1];
        string redoText0 = QStringUtil.toNativeString(redoText0_ptr);
        //d_object.redoTextChanged_emit(redoText0);
}*/
/*private extern(C) void qtd_QUndoStack_undoTextChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUndoStack) dId;
        auto undoText0_ptr = args[1];
        string undoText0 = QStringUtil.toNativeString(undoText0_ptr);
        //d_object.undoTextChanged_emit(undoText0);
}*/

extern(C) QMetaObjectNative* qtd_QUndoStack_staticMetaObject();

extern(C) void qtd_QUndoStack_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QUndoStack_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
