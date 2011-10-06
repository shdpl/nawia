module qt.gui.QUndoCommand;

public import qt.gui.QUndoCommand_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QUndoCommand : QtdObject
{

// Functions

    public this(QUndoCommand parent_ = null) {
        void* ret = qtd_QUndoCommand_QUndoCommand_QUndoCommand(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QUndoCommand parent_ = null) {
        void* ret = qtd_QUndoCommand_QUndoCommand_string_QUndoCommand(cast(void*) this, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QUndoCommand child(int index) const {
        void* ret = qtd_QUndoCommand_child_int_const(qtdNativeId, index);
        QUndoCommand __d_return_value = qtd_QUndoCommand_from_ptr(ret);

        return __d_return_value;
    }

    public final int childCount() const {
        return qtd_QUndoCommand_childCount_const(qtdNativeId);
    }

    public final void setText(string text) {
        qtd_QUndoCommand_setText_string(qtdNativeId, text);
    }

    public final string text() const {
        string res;
        qtd_QUndoCommand_text_const(qtdNativeId, &res);
        return res;
    }

    public int id() const {
        return qtd_QUndoCommand_id_const(qtdNativeId);
    }

    public bool mergeWith(QUndoCommand other) {
        return qtd_QUndoCommand_mergeWith_QUndoCommand(qtdNativeId, other is null ? null : (cast(QUndoCommand)other).qtdNativeId);
    }

    public void redo() {
        qtd_QUndoCommand_redo(qtdNativeId);
    }

    public void undo() {
        qtd_QUndoCommand_undo(qtdNativeId);
    }
// Field accessors
    static QUndoCommand __getObject(void* nativeId) {
        return qtd_QUndoCommand_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QUndoCommand;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QUndoCommand_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QUndoCommand_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QUndoCommand_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QUndoCommand_entity(void *q_ptr);

QUndoCommand qtd_QUndoCommand_from_ptr(void* ret) {
    void* d_obj = __QUndoCommand_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QUndoCommand) d_obj_ref;
    } else {
        auto return_value = new QUndoCommand(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QUndoCommand_delete(void *ptr);
extern (C) void qtd_QUndoCommand_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QUndoCommand_QUndoCommand_QUndoCommand(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QUndoCommand_QUndoCommand_string_QUndoCommand(void *d_ptr,
 string text0,
 void* parent1);
private extern(C) void*  qtd_QUndoCommand_child_int_const(void* __this_nativeId,
 int index0);
private extern(C) int  qtd_QUndoCommand_childCount_const(void* __this_nativeId);
private extern(C) void  qtd_QUndoCommand_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QUndoCommand_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QUndoCommand_id_const(void* __this_nativeId);
private extern(C) bool  qtd_QUndoCommand_mergeWith_QUndoCommand(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QUndoCommand_redo(void* __this_nativeId);
private extern(C) void  qtd_QUndoCommand_undo(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern int function(void *dId) qtd_QUndoCommand_id_const_dispatch; }
extern(C) int qtd_export_QUndoCommand_id_const_dispatch(void *dId){
    auto d_object = cast(QUndoCommand) dId;
    auto return_value = d_object.id();
    return return_value;
}

extern(C){ extern bool function(void *dId, void* other0) qtd_QUndoCommand_mergeWith_QUndoCommand_dispatch; }
extern(C) bool qtd_export_QUndoCommand_mergeWith_QUndoCommand_dispatch(void *dId, void* other0){
    auto d_object = cast(QUndoCommand) dId;
    scope other0_d_ref = new QUndoCommand(other0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.mergeWith(other0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId) qtd_QUndoCommand_redo_dispatch; }
extern(C) void qtd_export_QUndoCommand_redo_dispatch(void *dId){
    auto d_object = cast(QUndoCommand) dId;
    d_object.redo();
}

extern(C){ extern void function(void *dId) qtd_QUndoCommand_undo_dispatch; }
extern(C) void qtd_export_QUndoCommand_undo_dispatch(void *dId){
    auto d_object = cast(QUndoCommand) dId;
    d_object.undo();
}

private extern (C) void qtd_QUndoCommand_initCallBacks(void* virtuals);

extern(C) void static_init_QUndoCommand() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QUndoCommand_id_const_dispatch;
    virt_arr[1] = &qtd_export_QUndoCommand_mergeWith_QUndoCommand_dispatch;
    virt_arr[2] = &qtd_export_QUndoCommand_redo_dispatch;
    virt_arr[3] = &qtd_export_QUndoCommand_undo_dispatch;
    qtd_QUndoCommand_initCallBacks(virt_arr.ptr);
}

// signal handlers

