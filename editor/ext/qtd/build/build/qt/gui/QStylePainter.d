module qt.gui.QStylePainter;

public import qt.gui.QStylePainter_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPalette;
public import qt.gui.QStyle;
public import qt.gui.QPainter;
public import qt.gui.QStyleOption;
public import qt.gui.QPalette;
public import qt.gui.QPixmap;
public import qt.gui.QStyleOptionComplex;
public import qt.core.QRect;
public import qt.gui.QStyle;
public import qt.gui.QWidget;
public import qt.gui.QPaintDevice;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStylePainter : QPainter
{

// Functions

    public this() {
        void* ret = qtd_QStylePainter_QStylePainter(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(IQPaintDevice pd, QWidget w) {
        void* ret = qtd_QStylePainter_QStylePainter_QPaintDevice_QWidget(cast(void*) this, pd is null ? null : pd.__ptr_IQPaintDevice, w is null ? null : w.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget w) {
        void* ret = qtd_QStylePainter_QStylePainter_QWidget(cast(void*) this, w is null ? null : w.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool begin(IQPaintDevice pd, QWidget w) {
        return qtd_QStylePainter_begin_QPaintDevice_QWidget(qtdNativeId, pd is null ? null : pd.__ptr_IQPaintDevice, w is null ? null : w.qtdNativeId);
    }

    public final bool begin(QWidget w) {
        return qtd_QStylePainter_begin_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final void drawComplexControl(QStyle.ComplexControl cc, const(QStyleOptionComplex) opt) {
        qtd_QStylePainter_drawComplexControl_ComplexControl_QStyleOptionComplex(qtdNativeId, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId);
    }

    public final void drawControl(QStyle.ControlElement ce, const(QStyleOption) opt) {
        qtd_QStylePainter_drawControl_ControlElement_QStyleOption(qtdNativeId, ce, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId);
    }

    public final void drawItemPixmap(const(QRect) r, int flags, const(QPixmap) pixmap) {
        qtd_QStylePainter_drawItemPixmap_QRect_int_QPixmap(qtdNativeId, r, flags, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
    }

    public final void drawItemText(const(QRect) r, int flags, const(QPalette) pal, bool enabled, string text, QPalette.ColorRole textRole = QPalette.ColorRole.NoRole) {
        qtd_QStylePainter_drawItemText_QRect_int_QPalette_bool_string_ColorRole(qtdNativeId, r, flags, pal is null ? null : (cast(QPalette)pal).qtdNativeId, enabled, text, textRole);
    }

    public final void drawPrimitive(QStyle.PrimitiveElement pe, const(QStyleOption) opt) {
        qtd_QStylePainter_drawPrimitive_PrimitiveElement_QStyleOption(qtdNativeId, pe, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId);
    }

    public final QStyle style() const {
        void *ret = qtd_QStylePainter_style_const(qtdNativeId);
        QStyle __d_return_value = QStyle.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    static QStylePainter __getObject(void* nativeId) {
        return qtd_QStylePainter_from_ptr(nativeId);
    }

    public alias void __isQtType_QStylePainter;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStylePainter_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStylePainter_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStylePainter_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QStylePainter qtd_QStylePainter_from_ptr(void* ret) {
    auto return_value = new QStylePainter(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QStylePainter_delete(void *ptr);
extern (C) void qtd_QStylePainter_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStylePainter_QStylePainter(void *d_ptr);
private extern(C) void* qtd_QStylePainter_QStylePainter_QPaintDevice_QWidget(void *d_ptr,
 void* pd0,
 void* w1);
private extern(C) void* qtd_QStylePainter_QStylePainter_QWidget(void *d_ptr,
 void* w0);
private extern(C) bool  qtd_QStylePainter_begin_QPaintDevice_QWidget(void* __this_nativeId,
 void* pd0,
 void* w1);
private extern(C) bool  qtd_QStylePainter_begin_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) void  qtd_QStylePainter_drawComplexControl_ComplexControl_QStyleOptionComplex(void* __this_nativeId,
 int cc0,
 void* opt1);
private extern(C) void  qtd_QStylePainter_drawControl_ControlElement_QStyleOption(void* __this_nativeId,
 int ce0,
 void* opt1);
private extern(C) void  qtd_QStylePainter_drawItemPixmap_QRect_int_QPixmap(void* __this_nativeId,
 QRect r0,
 int flags1,
 void* pixmap2);
private extern(C) void  qtd_QStylePainter_drawItemText_QRect_int_QPalette_bool_string_ColorRole(void* __this_nativeId,
 QRect r0,
 int flags1,
 void* pal2,
 bool enabled3,
 string text4,
 int textRole5);
private extern(C) void  qtd_QStylePainter_drawPrimitive_PrimitiveElement_QStyleOption(void* __this_nativeId,
 int pe0,
 void* opt1);
private extern(C) void*  qtd_QStylePainter_style_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QStylePainter_initCallBacks(void* virtuals);

extern(C) void static_init_QStylePainter() {
    qtd_QStylePainter_initCallBacks(null);
}

// signal handlers

