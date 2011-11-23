module qt.core.QAbstractFileEngine_MapExtensionOption;

public import qt.core.QAbstractFileEngine_MapExtensionOption_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QFile;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAbstractFileEngine_MapExtensionOption : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QAbstractFileEngine_MapExtensionOption_QAbstractFileEngine_MapExtensionOption(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setFlags(QFile.MemoryMapFlags flags) {
        qtd_QAbstractFileEngine_MapExtensionOption_setFlags_MemoryMapFlags(qtdNativeId, flags);
    }

    public final QFile.MemoryMapFlags flags() {
        return cast(QFile.MemoryMapFlags) qtd_QAbstractFileEngine_MapExtensionOption_flags(qtdNativeId);
    }

    public final void setOffset(long offset) {
        qtd_QAbstractFileEngine_MapExtensionOption_setOffset_long(qtdNativeId, offset);
    }

    public final long offset() {
        return qtd_QAbstractFileEngine_MapExtensionOption_offset(qtdNativeId);
    }

    public final void setSize(long size) {
        qtd_QAbstractFileEngine_MapExtensionOption_setSize_long(qtdNativeId, size);
    }

    public final long size() {
        return qtd_QAbstractFileEngine_MapExtensionOption_size(qtdNativeId);
    }
    static QAbstractFileEngine_MapExtensionOption __getObject(void* nativeId) {
        return qtd_QAbstractFileEngine_MapExtensionOption_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractFileEngine_MapExtensionOption;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAbstractFileEngine_MapExtensionOption_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractFileEngine_MapExtensionOption_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractFileEngine_MapExtensionOption_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QAbstractFileEngine_MapExtensionOption qtd_QAbstractFileEngine_MapExtensionOption_from_ptr(void* ret) {
    auto return_value = new QAbstractFileEngine_MapExtensionOption(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QAbstractFileEngine_MapExtensionOption_delete(void *ptr);
extern (C) void qtd_QAbstractFileEngine_MapExtensionOption_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractFileEngine_MapExtensionOption_QAbstractFileEngine_MapExtensionOption(void *d_ptr);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QAbstractFileEngine_MapExtensionOption_setFlags_MemoryMapFlags(void* __this_nativeId,
 int flags0);
private extern(C) int  qtd_QAbstractFileEngine_MapExtensionOption_flags(void* __this_nativeId);
private extern(C) void  qtd_QAbstractFileEngine_MapExtensionOption_setOffset_long(void* __this_nativeId,
 long offset0);
private extern(C) long  qtd_QAbstractFileEngine_MapExtensionOption_offset(void* __this_nativeId);
private extern(C) void  qtd_QAbstractFileEngine_MapExtensionOption_setSize_long(void* __this_nativeId,
 long size0);
private extern(C) long  qtd_QAbstractFileEngine_MapExtensionOption_size(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QAbstractFileEngine_MapExtensionOption_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractFileEngine_MapExtensionOption() {
    qtd_QAbstractFileEngine_MapExtensionOption_initCallBacks(null);
}

// signal handlers

