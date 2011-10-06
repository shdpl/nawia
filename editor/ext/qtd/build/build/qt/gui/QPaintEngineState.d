module qt.gui.QPaintEngineState;

public import qt.gui.QPaintEngineState_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPainter;
public import qt.core.Qt;
public import qt.gui.QPainter;
public import qt.gui.QBrush;
public import qt.gui.QPen;
public import qt.gui.QTransform;
public import qt.gui.QFont;
public import qt.gui.QMatrix;
public import qt.core.QPointF;
public import qt.gui.QPainterPath;
public import qt.gui.QRegion;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPaintEngineState : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QPaintEngineState_QPaintEngineState(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QBrush backgroundBrush() const {
        void* ret = qtd_QPaintEngineState_backgroundBrush_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final Qt.BGMode backgroundMode() const {
        return cast(Qt.BGMode) qtd_QPaintEngineState_backgroundMode_const(qtdNativeId);
    }

    public final QBrush brush() const {
        void* ret = qtd_QPaintEngineState_brush_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final bool brushNeedsResolving() const {
        return qtd_QPaintEngineState_brushNeedsResolving_const(qtdNativeId);
    }

    public final QPointF brushOrigin() const {
        QPointF res;
        qtd_QPaintEngineState_brushOrigin_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.ClipOperation clipOperation() const {
        return cast(Qt.ClipOperation) qtd_QPaintEngineState_clipOperation_const(qtdNativeId);
    }

    public final QPainterPath clipPath() const {
        void* ret = qtd_QPaintEngineState_clipPath_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QRegion clipRegion() const {
        void* ret = qtd_QPaintEngineState_clipRegion_const(qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QPainter.CompositionMode compositionMode() const {
        return cast(QPainter.CompositionMode) qtd_QPaintEngineState_compositionMode_const(qtdNativeId);
    }

    public final QFont font() const {
        void* ret = qtd_QPaintEngineState_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final bool isClipEnabled() const {
        return qtd_QPaintEngineState_isClipEnabled_const(qtdNativeId);
    }

    public final QMatrix matrix() const {
        void* ret = qtd_QPaintEngineState_matrix_const(qtdNativeId);
        QMatrix __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public final double opacity() const {
        return qtd_QPaintEngineState_opacity_const(qtdNativeId);
    }

    public final QPainter painter() const {
        void* ret = qtd_QPaintEngineState_painter_const(qtdNativeId);
        QPainter __d_return_value = qtd_QPainter_from_ptr(ret);

        return __d_return_value;
    }

    public final QPen pen() const {
        void* ret = qtd_QPaintEngineState_pen_const(qtdNativeId);
        QPen __d_return_value = new QPen(ret);
        return __d_return_value;
    }

    public final bool penNeedsResolving() const {
        return qtd_QPaintEngineState_penNeedsResolving_const(qtdNativeId);
    }

    public final int renderHints() const {
        return qtd_QPaintEngineState_renderHints_const(qtdNativeId);
    }

    public final int state() const {
        return qtd_QPaintEngineState_state_const(qtdNativeId);
    }

    public final QTransform transform() const {
        void* ret = qtd_QPaintEngineState_transform_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }
// Field accessors

    protected final void setDirtyFlags(int dirtyFlags) {
        qtd_QPaintEngineState_setDirtyFlags_DirtyFlags(qtdNativeId, dirtyFlags);
    }

    protected final int dirtyFlags() {
        return qtd_QPaintEngineState_dirtyFlags(qtdNativeId);
    }
    static QPaintEngineState __getObject(void* nativeId) {
        return qtd_QPaintEngineState_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QPaintEngineState;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPaintEngineState_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPaintEngineState_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPaintEngineState_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QPaintEngineState qtd_QPaintEngineState_from_ptr(void* ret) {
    auto return_value = new QPaintEngineState(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QPaintEngineState_delete(void *ptr);
extern (C) void qtd_QPaintEngineState_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPaintEngineState_QPaintEngineState(void *d_ptr);
private extern(C) void*  qtd_QPaintEngineState_backgroundBrush_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintEngineState_backgroundMode_const(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngineState_brush_const(void* __this_nativeId);
private extern(C) bool  qtd_QPaintEngineState_brushNeedsResolving_const(void* __this_nativeId);
private extern(C) void  qtd_QPaintEngineState_brushOrigin_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) int  qtd_QPaintEngineState_clipOperation_const(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngineState_clipPath_const(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngineState_clipRegion_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintEngineState_compositionMode_const(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngineState_font_const(void* __this_nativeId);
private extern(C) bool  qtd_QPaintEngineState_isClipEnabled_const(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngineState_matrix_const(void* __this_nativeId);
private extern(C) double  qtd_QPaintEngineState_opacity_const(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngineState_painter_const(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngineState_pen_const(void* __this_nativeId);
private extern(C) bool  qtd_QPaintEngineState_penNeedsResolving_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintEngineState_renderHints_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintEngineState_state_const(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngineState_transform_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QPaintEngineState_setDirtyFlags_DirtyFlags(void* __this_nativeId,
 int dirtyFlags0);
private extern(C) int  qtd_QPaintEngineState_dirtyFlags(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QPaintEngineState_initCallBacks(void* virtuals);

extern(C) void static_init_QPaintEngineState() {
    qtd_QPaintEngineState_initCallBacks(null);
}

// signal handlers

