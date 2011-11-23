module qt.gui.QKeyEvent;

public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QKeySequence;
public import qt.gui.QInputEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public final class QKeyEvent : QInputEvent
{

// Functions

    public final int count() const {
        return qtd_QKeyEvent_count_const(qtdNativeId);
    }

    public final bool hasExtendedInfo() const {
        return qtd_QKeyEvent_hasExtendedInfo_const(qtdNativeId);
    }

    public final bool isAutoRepeat() const {
        return qtd_QKeyEvent_isAutoRepeat_const(qtdNativeId);
    }

    public final int key() const {
        return qtd_QKeyEvent_key_const(qtdNativeId);
    }

    public final bool matches(QKeySequence.StandardKey key) const {
        return qtd_QKeyEvent_matches_StandardKey_const(qtdNativeId, key);
    }

    public final int modifiers() const {
        return qtd_QKeyEvent_modifiers_const(qtdNativeId);
    }

    public final uint nativeModifiers() const {
        return qtd_QKeyEvent_nativeModifiers_const(qtdNativeId);
    }

    public final uint nativeScanCode() const {
        return qtd_QKeyEvent_nativeScanCode_const(qtdNativeId);
    }

    public final uint nativeVirtualKey() const {
        return qtd_QKeyEvent_nativeVirtualKey_const(qtdNativeId);
    }

    public final string text() const {
        string res;
        qtd_QKeyEvent_text_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    static QKeyEvent __getObject(void* nativeId) {
        return qtd_QKeyEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QKeyEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QKeyEvent qtd_QKeyEvent_from_ptr(void* ret) {
    auto return_value = new QKeyEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) int  qtd_QKeyEvent_count_const(void* __this_nativeId);
private extern(C) bool  qtd_QKeyEvent_hasExtendedInfo_const(void* __this_nativeId);
private extern(C) bool  qtd_QKeyEvent_isAutoRepeat_const(void* __this_nativeId);
private extern(C) int  qtd_QKeyEvent_key_const(void* __this_nativeId);
private extern(C) bool  qtd_QKeyEvent_matches_StandardKey_const(void* __this_nativeId,
 int key0);
private extern(C) int  qtd_QKeyEvent_modifiers_const(void* __this_nativeId);
private extern(C) uint  qtd_QKeyEvent_nativeModifiers_const(void* __this_nativeId);
private extern(C) uint  qtd_QKeyEvent_nativeScanCode_const(void* __this_nativeId);
private extern(C) uint  qtd_QKeyEvent_nativeVirtualKey_const(void* __this_nativeId);
private extern(C) void  qtd_QKeyEvent_text_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

