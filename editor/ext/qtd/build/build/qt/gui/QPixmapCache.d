module qt.gui.QPixmapCache;

public import qt.gui.QPixmapCache_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPixmap;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPixmapCache : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QPixmapCache_QPixmapCache(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public static int cacheLimit() {
        return qtd_QPixmapCache_cacheLimit();
    }

    public static void clear() {
        qtd_QPixmapCache_clear();
    }

    public static bool find(string key, QPixmap pixmap) {
        return qtd_QPixmapCache_find_string_nativepointerQPixmap(key, pixmap is null ? null : pixmap.qtdNativeId);
    }

    public static bool insert(string key, const(QPixmap) pixmap) {
        return qtd_QPixmapCache_insert_string_QPixmap(key, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
    }

    public static void remove(string key) {
        qtd_QPixmapCache_remove_string(key);
    }

    public static void setCacheLimit(int arg__1) {
        qtd_QPixmapCache_setCacheLimit_int(arg__1);
    }
// Field accessors
    static QPixmapCache __getObject(void* nativeId) {
        return qtd_QPixmapCache_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QPixmapCache;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPixmapCache_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPixmapCache_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPixmapCache_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QPixmapCache qtd_QPixmapCache_from_ptr(void* ret) {
    auto return_value = new QPixmapCache(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QPixmapCache_delete(void *ptr);
extern (C) void qtd_QPixmapCache_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPixmapCache_QPixmapCache(void *d_ptr);
private extern(C) int  qtd_QPixmapCache_cacheLimit();
private extern(C) void  qtd_QPixmapCache_clear();
private extern(C) bool  qtd_QPixmapCache_find_string_nativepointerQPixmap(string key0,
 void* pixmap1);
private extern(C) bool  qtd_QPixmapCache_insert_string_QPixmap(string key0,
 void* pixmap1);
private extern(C) void  qtd_QPixmapCache_remove_string(string key0);
private extern(C) void  qtd_QPixmapCache_setCacheLimit_int(int arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPixmapCache_initCallBacks(void* virtuals);

extern(C) void static_init_QPixmapCache() {
    qtd_QPixmapCache_initCallBacks(null);
}

// signal handlers

