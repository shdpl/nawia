module qt.core.Global;

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


public final class Global : QtdObject
{
    public enum QtMsgType {
        QtDebugMsg = 0,
        QtWarningMsg = 1,
        QtCriticalMsg = 2,
        QtFatalMsg = 3
    }

    alias QtMsgType.QtDebugMsg QtDebugMsg;
    alias QtMsgType.QtWarningMsg QtWarningMsg;
    alias QtMsgType.QtCriticalMsg QtCriticalMsg;
    alias QtMsgType.QtFatalMsg QtFatalMsg;


// Functions
// Field accessors
    static Global __getObject(void* nativeId) {
        return qtd_Global_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_Global;

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
Global qtd_Global_from_ptr(void* ret) {
    auto return_value = new Global(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

