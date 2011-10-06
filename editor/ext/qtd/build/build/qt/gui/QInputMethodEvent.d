module qt.gui.QInputMethodEvent;

public import qt.gui.QInputMethodEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.gui.QInputMethodEvent_Attribute;
public import qt.core.QEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QInputMethodEvent : QEvent
{
    public enum AttributeType {
        TextFormat = 0,
        Cursor = 1,
        Language = 2,
        Ruby = 3,
        Selection = 4
    }

    alias AttributeType.TextFormat TextFormat;
    alias AttributeType.Cursor Cursor;
    alias AttributeType.Language Language;
    alias AttributeType.Ruby Ruby;
    alias AttributeType.Selection Selection;


// Functions

    public this() {
        void* ret = qtd_QInputMethodEvent_QInputMethodEvent(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QInputMethodEvent other) {
        void* ret = qtd_QInputMethodEvent_QInputMethodEvent_QInputMethodEvent(cast(void*) this, other is null ? null : (cast(QInputMethodEvent)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string preeditText, QList!(QInputMethodEvent_Attribute) attributes) {
        void* ret = qtd_QInputMethodEvent_QInputMethodEvent_string_QList(cast(void*) this, preeditText, &attributes);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QList!(QInputMethodEvent_Attribute) attributes() const {
        auto res = QList!(QInputMethodEvent_Attribute).opCall();
        qtd_QInputMethodEvent_attributes_const(qtdNativeId, &res);
        return res;
    }

    public final string commitString() const {
        string res;
        qtd_QInputMethodEvent_commitString_const(qtdNativeId, &res);
        return res;
    }

    public final string preeditString() const {
        string res;
        qtd_QInputMethodEvent_preeditString_const(qtdNativeId, &res);
        return res;
    }

    public final int replacementLength() const {
        return qtd_QInputMethodEvent_replacementLength_const(qtdNativeId);
    }

    public final int replacementStart() const {
        return qtd_QInputMethodEvent_replacementStart_const(qtdNativeId);
    }

    public final void setCommitString(string commitString, int replaceFrom = 0, int replaceLength = 0) {
        qtd_QInputMethodEvent_setCommitString_string_int_int(qtdNativeId, commitString, replaceFrom, replaceLength);
    }
// Field accessors
    static QInputMethodEvent __getObject(void* nativeId) {
        return qtd_QInputMethodEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QInputMethodEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QInputMethodEvent_entity(void *q_ptr);

QInputMethodEvent qtd_QInputMethodEvent_from_ptr(void* ret) {
    auto return_value = new QInputMethodEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QInputMethodEvent_QInputMethodEvent(void *d_ptr);
private extern(C) void* qtd_QInputMethodEvent_QInputMethodEvent_QInputMethodEvent(void *d_ptr,
 void* other0);
private extern(C) void* qtd_QInputMethodEvent_QInputMethodEvent_string_QList(void *d_ptr,
 string preeditText0,
 void* attributes1);
private extern(C) void  qtd_QInputMethodEvent_attributes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QInputMethodEvent_commitString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QInputMethodEvent_preeditString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QInputMethodEvent_replacementLength_const(void* __this_nativeId);
private extern(C) int  qtd_QInputMethodEvent_replacementStart_const(void* __this_nativeId);
private extern(C) void  qtd_QInputMethodEvent_setCommitString_string_int_int(void* __this_nativeId,
 string commitString0,
 int replaceFrom1,
 int replaceLength2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QInputMethodEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QInputMethodEvent() {
    qtd_QInputMethodEvent_initCallBacks(null);
}

// signal handlers

