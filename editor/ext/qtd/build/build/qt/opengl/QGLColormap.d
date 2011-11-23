module qt.opengl.QGLColormap;

public import qt.opengl.QGLColormap_aux;
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


public class QGLColormap : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QGLColormap_QGLColormap();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QGLColormap) arg__1) {
        void* ret = qtd_QGLColormap_QGLColormap_QGLColormap(arg__1 is null ? null : (cast(QGLColormap)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QColor entryColor(int idx) const {
        void* ret = qtd_QGLColormap_entryColor_int_const(qtdNativeId, idx);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final uint entryRgb(int idx) const {
        return qtd_QGLColormap_entryRgb_int_const(qtdNativeId, idx);
    }

    public final int find(uint color) const {
        return qtd_QGLColormap_find_uint_const(qtdNativeId, color);
    }

    public final int findNearest(uint color) const {
        return qtd_QGLColormap_findNearest_uint_const(qtdNativeId, color);
    }

    protected final long handle() {
        return qtd_QGLColormap_handle(qtdNativeId);
    }

    public final bool isEmpty() const {
        return qtd_QGLColormap_isEmpty_const(qtdNativeId);
    }

    private final void setEntries(int count, const(uint*) colors, int base = 0) {
        qtd_QGLColormap_setEntries_int_nativepointeruint_int(qtdNativeId, count, colors, base);
    }

    public final void setEntry(int idx, const(QColor) color) {
        qtd_QGLColormap_setEntry_int_QColor(qtdNativeId, idx, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setEntry(int idx, uint color) {
        qtd_QGLColormap_setEntry_int_uint(qtdNativeId, idx, color);
    }

    protected final void setHandle(long ahandle) {
        qtd_QGLColormap_setHandle_long(qtdNativeId, ahandle);
    }

    public final int size() const {
        return qtd_QGLColormap_size_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QGLColormap;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QGLColormap_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QGLColormap_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QGLColormap_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGLColormap_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGLColormap_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QGLColormap_QTypeInfo_isComplex();
        isStatic = qtd_QGLColormap_QTypeInfo_isStatic();
        isLarge = qtd_QGLColormap_QTypeInfo_isLarge();
        isPointer = qtd_QGLColormap_QTypeInfo_isPointer();
        isDummy = qtd_QGLColormap_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    public final void setEntries(int colors[], int base) {
    setEntries(colors.length, qt.internal.QtJambiInternal.intArrayToNativePointer(colors), base);
    }

    public final void setEntries(int colors[]) {
    setEntries(colors.length, qt.internal.QtJambiInternal.intArrayToNativePointer(colors));
    }
     */

}
private extern(C) void qtd_QGLColormap_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QGLColormap_native_copy(const void* orig);
extern (C) void qtd_QGLColormap_delete(void *ptr);
extern (C) void qtd_QGLColormap_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGLColormap_QGLColormap();
private extern(C) void* qtd_QGLColormap_QGLColormap_QGLColormap(void* arg__1);
private extern(C) void*  qtd_QGLColormap_entryColor_int_const(void* __this_nativeId,
 int idx0);
private extern(C) uint  qtd_QGLColormap_entryRgb_int_const(void* __this_nativeId,
 int idx0);
private extern(C) int  qtd_QGLColormap_find_uint_const(void* __this_nativeId,
 uint color0);
private extern(C) int  qtd_QGLColormap_findNearest_uint_const(void* __this_nativeId,
 uint color0);
private extern(C) long  qtd_QGLColormap_handle(void* __this_nativeId);
private extern(C) bool  qtd_QGLColormap_isEmpty_const(void* __this_nativeId);
private extern(C) void  qtd_QGLColormap_setEntries_int_nativepointeruint_int(void* __this_nativeId,
 int count0,
 const (uint*) colors1,
 int base2);
private extern(C) void  qtd_QGLColormap_setEntry_int_QColor(void* __this_nativeId,
 int idx0,
 void* color1);
private extern(C) void  qtd_QGLColormap_setEntry_int_uint(void* __this_nativeId,
 int idx0,
 uint color1);
private extern(C) void  qtd_QGLColormap_setHandle_long(void* __this_nativeId,
 long ahandle0);
private extern(C) int  qtd_QGLColormap_size_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGLColormap_initCallBacks(void* virtuals);

extern(C) void static_init_QGLColormap() {
    QGLColormap.QTypeInfo.init();
    qtd_QGLColormap_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QGLColormap_QTypeInfo_isComplex();
private extern (C) bool qtd_QGLColormap_QTypeInfo_isStatic();
private extern (C) bool qtd_QGLColormap_QTypeInfo_isLarge();
private extern (C) bool qtd_QGLColormap_QTypeInfo_isPointer();
private extern (C) bool qtd_QGLColormap_QTypeInfo_isDummy();
