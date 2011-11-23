module qt.gui.QWhatsThis;

public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QObject;
public import qt.gui.QWidget;
public import qt.gui.QAction;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public final class QWhatsThis : QtdObject
{

// Functions

    public static QAction createAction(QObject parent_ = null) {
        void *ret = qtd_QWhatsThis_createAction_QObject(parent_ is null ? null : parent_.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public static void enterWhatsThisMode() {
        qtd_QWhatsThis_enterWhatsThisMode();
    }

    public static void hideText() {
        qtd_QWhatsThis_hideText();
    }

    public static bool inWhatsThisMode() {
        return qtd_QWhatsThis_inWhatsThisMode();
    }

    public static void leaveWhatsThisMode() {
        qtd_QWhatsThis_leaveWhatsThisMode();
    }

    public static void showText(const(QPoint) pos, string text, QWidget w = null) {
        qtd_QWhatsThis_showText_QPoint_string_QWidget(pos, text, w is null ? null : w.qtdNativeId);
    }
// Field accessors
    static QWhatsThis __getObject(void* nativeId) {
        return qtd_QWhatsThis_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QWhatsThis;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QWhatsThis qtd_QWhatsThis_from_ptr(void* ret) {
    auto return_value = new QWhatsThis(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void*  qtd_QWhatsThis_createAction_QObject(void* parent0);
private extern(C) void  qtd_QWhatsThis_enterWhatsThisMode();
private extern(C) void  qtd_QWhatsThis_hideText();
private extern(C) bool  qtd_QWhatsThis_inWhatsThisMode();
private extern(C) void  qtd_QWhatsThis_leaveWhatsThisMode();
private extern(C) void  qtd_QWhatsThis_showText_QPoint_string_QWidget(QPoint pos0,
 string text1,
 void* w2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

