module qt.core.QAbstractFileEngine_UnMapExtensionOption;

public import qt.core.QAbstractFileEngine_UnMapExtensionOption_aux;
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


public class QAbstractFileEngine_UnMapExtensionOption : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QAbstractFileEngine_UnMapExtensionOption_QAbstractFileEngine_UnMapExtensionOption(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    private final void address_private(ubyte* address) {
        qtd_QAbstractFileEngine_UnMapExtensionOption_address_private_nativepointerubyte(qtdNativeId, address);
    }

    private final ubyte* address_private() {
        return qtd_QAbstractFileEngine_UnMapExtensionOption_address_private(qtdNativeId);
    }
    static QAbstractFileEngine_UnMapExtensionOption __getObject(void* nativeId) {
        return qtd_QAbstractFileEngine_UnMapExtensionOption_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractFileEngine_UnMapExtensionOption;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAbstractFileEngine_UnMapExtensionOption_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractFileEngine_UnMapExtensionOption_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractFileEngine_UnMapExtensionOption_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    private QNativePointer currentAddressNativePointer; // don't garbage collect while in use
    public final void setAddress(String address) {
        currentAddressNativePointer = address != null ? QNativePointer.createCharPointer(address) : null;
        address_private(currentAddressNativePointer);
    }

    public final String address() {
        QNativePointer np = address_private();
        return np != null ? qt.internal.QtJambiInternal.charPointerToString(np) : null;
    }

}
QAbstractFileEngine_UnMapExtensionOption qtd_QAbstractFileEngine_UnMapExtensionOption_from_ptr(void* ret) {
    auto return_value = new QAbstractFileEngine_UnMapExtensionOption(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QAbstractFileEngine_UnMapExtensionOption_delete(void *ptr);
extern (C) void qtd_QAbstractFileEngine_UnMapExtensionOption_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractFileEngine_UnMapExtensionOption_QAbstractFileEngine_UnMapExtensionOption(void *d_ptr);
// Just the private functions for abstract functions implemeneted in superclasses
private void  qtd_QAbstractFileEngine_UnMapExtensionOption_address_private_nativepointerubyte(void* __this_nativeId,
 ubyte* address0);
private ubyte*  qtd_QAbstractFileEngine_UnMapExtensionOption_address_private(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QAbstractFileEngine_UnMapExtensionOption_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractFileEngine_UnMapExtensionOption() {
    qtd_QAbstractFileEngine_UnMapExtensionOption_initCallBacks(null);
}

// signal handlers

