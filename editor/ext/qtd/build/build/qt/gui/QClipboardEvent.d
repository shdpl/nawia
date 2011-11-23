module qt.gui.QClipboardEvent;

public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public final class QClipboardEvent : QEvent
{

// Functions
// Field accessors
    static QClipboardEvent __getObject(void* nativeId) {
        return qtd_QClipboardEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QClipboardEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QClipboardEvent qtd_QClipboardEvent_from_ptr(void* ret) {
    auto return_value = new QClipboardEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

