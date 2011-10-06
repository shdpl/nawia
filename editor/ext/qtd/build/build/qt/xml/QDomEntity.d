module qt.xml.QDomEntity;

public import qt.xml.QDomEntity_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomNode;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomEntity : QDomNode
{

// Functions

    public this() {
        void* ret = qtd_QDomEntity_QDomEntity();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomEntity) x) {
        void* ret = qtd_QDomEntity_QDomEntity_QDomEntity(x is null ? null : (cast(QDomEntity)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string notationName() const {
        string res;
        qtd_QDomEntity_notationName_const(qtdNativeId, &res);
        return res;
    }

    public final string publicId() const {
        string res;
        qtd_QDomEntity_publicId_const(qtdNativeId, &res);
        return res;
    }

    public final string systemId() const {
        string res;
        qtd_QDomEntity_systemId_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isQtType_QDomEntity;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomEntity_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomEntity_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomEntity_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomEntity_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomEntity_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomEntity_QTypeInfo_isComplex();
        isStatic = qtd_QDomEntity_QTypeInfo_isStatic();
        isLarge = qtd_QDomEntity_QTypeInfo_isLarge();
        isPointer = qtd_QDomEntity_QTypeInfo_isPointer();
        isDummy = qtd_QDomEntity_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomEntity_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomEntity_native_copy(const void* orig);
extern (C) void qtd_QDomEntity_delete(void *ptr);
extern (C) void qtd_QDomEntity_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomEntity_QDomEntity();
private extern(C) void* qtd_QDomEntity_QDomEntity_QDomEntity(void* x0);
private extern(C) void  qtd_QDomEntity_notationName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDomEntity_publicId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDomEntity_systemId_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomEntity() {
    QDomEntity.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomEntity_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomEntity_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomEntity_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomEntity_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomEntity_QTypeInfo_isDummy();
