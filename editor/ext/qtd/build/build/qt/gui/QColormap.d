module qt.gui.QColormap;

public import qt.gui.QColormap_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QColor;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QColormap : QtdObject
{
    public enum Mode {
        Direct = 0,
        Indexed = 1,
        Gray = 2
    }

    alias Mode.Direct Direct;
    alias Mode.Indexed Indexed;
    alias Mode.Gray Gray;


// Functions

    public this(const(QColormap) colormap) {
        void* ret = qtd_QColormap_QColormap_QColormap(colormap is null ? null : (cast(QColormap)colormap).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QColor) colorAt(uint pixel) const {
        void* ret = qtd_QColormap_colorAt_uint_const(qtdNativeId, pixel);
        const(QColor) __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QColor[] colormap() const {
        QColor[] res;
        qtd_QColormap_colormap_const(qtdNativeId, &res);
        return res;
    }

    public final int depth() const {
        return qtd_QColormap_depth_const(qtdNativeId);
    }

    public final QColormap.Mode mode() const {
        return cast(QColormap.Mode) qtd_QColormap_mode_const(qtdNativeId);
    }

    public final uint pixel(const(QColor) color) const {
        return qtd_QColormap_pixel_QColor_const(qtdNativeId, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final int size() const {
        return qtd_QColormap_size_const(qtdNativeId);
    }

    public static void cleanup() {
        qtd_QColormap_cleanup();
    }

    public static void initialize() {
        qtd_QColormap_initialize();
    }

    public static QColormap instance(int screen = -1) {
        void* ret = qtd_QColormap_instance_int(screen);
        QColormap __d_return_value = new QColormap(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QColormap;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QColormap_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QColormap_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QColormap_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QColormap_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QColormap_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QColormap_QTypeInfo_isComplex();
        isStatic = qtd_QColormap_QTypeInfo_isStatic();
        isLarge = qtd_QColormap_QTypeInfo_isLarge();
        isPointer = qtd_QColormap_QTypeInfo_isPointer();
        isDummy = qtd_QColormap_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QColormap_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QColormap_native_copy(const void* orig);
extern (C) void qtd_QColormap_delete(void *ptr);
extern (C) void qtd_QColormap_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QColormap_QColormap_QColormap(void* colormap0);
private extern(C) void*  qtd_QColormap_colorAt_uint_const(void* __this_nativeId,
 uint pixel0);
private extern(C) void  qtd_QColormap_colormap_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QColormap_depth_const(void* __this_nativeId);
private extern(C) int  qtd_QColormap_mode_const(void* __this_nativeId);
private extern(C) uint  qtd_QColormap_pixel_QColor_const(void* __this_nativeId,
 void* color0);
private extern(C) int  qtd_QColormap_size_const(void* __this_nativeId);
private extern(C) void  qtd_QColormap_cleanup();
private extern(C) void  qtd_QColormap_initialize();
private extern(C) void*  qtd_QColormap_instance_int(int screen0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QColormap() {
    QColormap.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QColormap_QTypeInfo_isComplex();
private extern (C) bool qtd_QColormap_QTypeInfo_isStatic();
private extern (C) bool qtd_QColormap_QTypeInfo_isLarge();
private extern (C) bool qtd_QColormap_QTypeInfo_isPointer();
private extern (C) bool qtd_QColormap_QTypeInfo_isDummy();
