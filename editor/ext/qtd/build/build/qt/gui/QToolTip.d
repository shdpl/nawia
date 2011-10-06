module qt.gui.QToolTip;

public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPalette;
public import qt.gui.QFont;
public import qt.core.QRect;
public import qt.gui.QWidget;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public final class QToolTip : QtdObject
{

// Functions

    public static QFont font() {
        void* ret = qtd_QToolTip_font();
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public static void hideText() {
        qtd_QToolTip_hideText();
    }

    public static bool isVisible() {
        return qtd_QToolTip_isVisible();
    }

    public static QPalette palette() {
        void* ret = qtd_QToolTip_palette();
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public static void setFont(const(QFont) arg__1) {
        qtd_QToolTip_setFont_QFont(arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
    }

    public static void setPalette(const(QPalette) arg__1) {
        qtd_QToolTip_setPalette_QPalette(arg__1 is null ? null : (cast(QPalette)arg__1).qtdNativeId);
    }

    public static void showText(const(QPoint) pos, string text, QWidget w = null) {
        qtd_QToolTip_showText_QPoint_string_QWidget(pos, text, w is null ? null : w.qtdNativeId);
    }

    public static void showText(const(QPoint) pos, string text, QWidget w, const(QRect) rect) {
        qtd_QToolTip_showText_QPoint_string_QWidget_QRect(pos, text, w is null ? null : w.qtdNativeId, rect);
    }

    public static string text() {
        string res;
        qtd_QToolTip_text(&res);
        return res;
    }
// Field accessors
    static QToolTip __getObject(void* nativeId) {
        return qtd_QToolTip_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QToolTip;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QToolTip qtd_QToolTip_from_ptr(void* ret) {
    auto return_value = new QToolTip(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void*  qtd_QToolTip_font();
private extern(C) void  qtd_QToolTip_hideText();
private extern(C) bool  qtd_QToolTip_isVisible();
private extern(C) void*  qtd_QToolTip_palette();
private extern(C) void  qtd_QToolTip_setFont_QFont(void* arg__1);
private extern(C) void  qtd_QToolTip_setPalette_QPalette(void* arg__1);
private extern(C) void  qtd_QToolTip_showText_QPoint_string_QWidget(QPoint pos0,
 string text1,
 void* w2);
private extern(C) void  qtd_QToolTip_showText_QPoint_string_QWidget_QRect(QPoint pos0,
 string text1,
 void* w2,
 QRect rect3);
private extern(C) void  qtd_QToolTip_text(void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

