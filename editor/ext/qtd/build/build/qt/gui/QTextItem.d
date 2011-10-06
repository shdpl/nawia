module qt.gui.QTextItem;

public import qt.gui.QTextItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QFont;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextItem : QtdObject
{
    public enum RenderFlag {
        RightToLeft = 1,
        Overline = 16,
        Underline = 32,
        StrikeOut = 64,
        Dummy = -1
    }

    alias RenderFlag.RightToLeft RightToLeft;
    alias RenderFlag.Overline Overline;
    alias RenderFlag.Underline Underline;
    alias RenderFlag.StrikeOut StrikeOut;
    alias RenderFlag.Dummy Dummy;


// Functions

    public this() {
        void* ret = qtd_QTextItem_QTextItem(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final double ascent() const {
        return qtd_QTextItem_ascent_const(qtdNativeId);
    }

    public final double descent() const {
        return qtd_QTextItem_descent_const(qtdNativeId);
    }

    public final QFont font() const {
        void* ret = qtd_QTextItem_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final int renderFlags() const {
        return qtd_QTextItem_renderFlags_const(qtdNativeId);
    }

    public final string text() const {
        string res;
        qtd_QTextItem_text_const(qtdNativeId, &res);
        return res;
    }

    public final double width() const {
        return qtd_QTextItem_width_const(qtdNativeId);
    }
// Field accessors
    static QTextItem __getObject(void* nativeId) {
        return qtd_QTextItem_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QTextItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QTextItem qtd_QTextItem_from_ptr(void* ret) {
    auto return_value = new QTextItem(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QTextItem_delete(void *ptr);
extern (C) void qtd_QTextItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextItem_QTextItem(void *d_ptr);
private extern(C) double  qtd_QTextItem_ascent_const(void* __this_nativeId);
private extern(C) double  qtd_QTextItem_descent_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextItem_font_const(void* __this_nativeId);
private extern(C) int  qtd_QTextItem_renderFlags_const(void* __this_nativeId);
private extern(C) void  qtd_QTextItem_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) double  qtd_QTextItem_width_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextItem_initCallBacks(void* virtuals);

extern(C) void static_init_QTextItem() {
    qtd_QTextItem_initCallBacks(null);
}

// signal handlers

