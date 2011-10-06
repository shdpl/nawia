module qt.gui.QShortcutEvent;

public import qt.gui.QShortcutEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.gui.QKeySequence;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QShortcutEvent : QEvent
{

// Functions

    public this(const(QKeySequence) key, int id, bool ambiguous = false) {
        void* ret = qtd_QShortcutEvent_QShortcutEvent_QKeySequence_int_bool(cast(void*) this, key is null ? null : (cast(QKeySequence)key).qtdNativeId, id, ambiguous);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isAmbiguous() const {
        return qtd_QShortcutEvent_isAmbiguous_const(qtdNativeId);
    }

    public final const(QKeySequence) key() const {
        void* ret = qtd_QShortcutEvent_key_const(qtdNativeId);
        const(QKeySequence) __d_return_value = new QKeySequence(ret);
        return __d_return_value;
    }

    public final int shortcutId() const {
        return qtd_QShortcutEvent_shortcutId_const(qtdNativeId);
    }
// Field accessors

    protected final void setSequence(QKeySequence sequence) {
        qtd_QShortcutEvent_setSequence_QKeySequence(qtdNativeId, sequence is null ? null : sequence.qtdNativeId);
    }

    protected final QKeySequence sequence() {
        void* ret = qtd_QShortcutEvent_sequence(qtdNativeId);
        QKeySequence __d_return_value = new QKeySequence(ret);
        return __d_return_value;
    }

    protected final void setSid(int sid) {
        qtd_QShortcutEvent_setSid_int(qtdNativeId, sid);
    }

    protected final int sid() {
        return qtd_QShortcutEvent_sid(qtdNativeId);
    }

    protected final void setAmbig(bool ambig) {
        qtd_QShortcutEvent_setAmbig_bool(qtdNativeId, ambig);
    }

    protected final bool ambig() {
        return qtd_QShortcutEvent_ambig(qtdNativeId);
    }
    static QShortcutEvent __getObject(void* nativeId) {
        return qtd_QShortcutEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QShortcutEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QShortcutEvent_entity(void *q_ptr);

QShortcutEvent qtd_QShortcutEvent_from_ptr(void* ret) {
    auto return_value = new QShortcutEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QShortcutEvent_QShortcutEvent_QKeySequence_int_bool(void *d_ptr,
 void* key0,
 int id1,
 bool ambiguous2);
private extern(C) bool  qtd_QShortcutEvent_isAmbiguous_const(void* __this_nativeId);
private extern(C) void*  qtd_QShortcutEvent_key_const(void* __this_nativeId);
private extern(C) int  qtd_QShortcutEvent_shortcutId_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QShortcutEvent_setSequence_QKeySequence(void* __this_nativeId,
 void* sequence0);
private extern(C) void*  qtd_QShortcutEvent_sequence(void* __this_nativeId);
private extern(C) void  qtd_QShortcutEvent_setSid_int(void* __this_nativeId,
 int sid0);
private extern(C) int  qtd_QShortcutEvent_sid(void* __this_nativeId);
private extern(C) void  qtd_QShortcutEvent_setAmbig_bool(void* __this_nativeId,
 bool ambig0);
private extern(C) bool  qtd_QShortcutEvent_ambig(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QShortcutEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QShortcutEvent() {
    qtd_QShortcutEvent_initCallBacks(null);
}

// signal handlers

