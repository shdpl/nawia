module qt.network.QNetworkAddressEntry;

public import qt.network.QNetworkAddressEntry_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.network.QHostAddress;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QNetworkAddressEntry : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QNetworkAddressEntry_QNetworkAddressEntry();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QNetworkAddressEntry) other) {
        void* ret = qtd_QNetworkAddressEntry_QNetworkAddressEntry_QNetworkAddressEntry(other is null ? null : (cast(QNetworkAddressEntry)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QHostAddress broadcast() const {
        void* ret = qtd_QNetworkAddressEntry_broadcast_const(qtdNativeId);
        QHostAddress __d_return_value = new QHostAddress(ret);
        return __d_return_value;
    }

    public final QHostAddress ip() const {
        void* ret = qtd_QNetworkAddressEntry_ip_const(qtdNativeId);
        QHostAddress __d_return_value = new QHostAddress(ret);
        return __d_return_value;
    }

    public final QHostAddress netmask() const {
        void* ret = qtd_QNetworkAddressEntry_netmask_const(qtdNativeId);
        QHostAddress __d_return_value = new QHostAddress(ret);
        return __d_return_value;
    }

    private final bool operator_equal(const(QNetworkAddressEntry) other) const {
        return qtd_QNetworkAddressEntry_operator_equal_QNetworkAddressEntry_const(qtdNativeId, other is null ? null : (cast(QNetworkAddressEntry)other).qtdNativeId);
    }

    public final int prefixLength() const {
        return qtd_QNetworkAddressEntry_prefixLength_const(qtdNativeId);
    }

    public final void setBroadcast(const(QHostAddress) newBroadcast) {
        qtd_QNetworkAddressEntry_setBroadcast_QHostAddress(qtdNativeId, newBroadcast is null ? null : (cast(QHostAddress)newBroadcast).qtdNativeId);
    }

    public final void setIp(const(QHostAddress) newIp) {
        qtd_QNetworkAddressEntry_setIp_QHostAddress(qtdNativeId, newIp is null ? null : (cast(QHostAddress)newIp).qtdNativeId);
    }

    public final void setNetmask(const(QHostAddress) newNetmask) {
        qtd_QNetworkAddressEntry_setNetmask_QHostAddress(qtdNativeId, newNetmask is null ? null : (cast(QHostAddress)newNetmask).qtdNativeId);
    }

    public final void setPrefixLength(int length) {
        qtd_QNetworkAddressEntry_setPrefixLength_int(qtdNativeId, length);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QNetworkAddressEntry;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QNetworkAddressEntry_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QNetworkAddressEntry_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QNetworkAddressEntry_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QNetworkAddressEntry_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QNetworkAddressEntry_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QNetworkAddressEntry_QTypeInfo_isComplex();
        isStatic = qtd_QNetworkAddressEntry_QTypeInfo_isStatic();
        isLarge = qtd_QNetworkAddressEntry_QTypeInfo_isLarge();
        isPointer = qtd_QNetworkAddressEntry_QTypeInfo_isPointer();
        isDummy = qtd_QNetworkAddressEntry_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QNetworkAddressEntry_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QNetworkAddressEntry_native_copy(const void* orig);
extern (C) void qtd_QNetworkAddressEntry_delete(void *ptr);
extern (C) void qtd_QNetworkAddressEntry_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QNetworkAddressEntry_QNetworkAddressEntry();
private extern(C) void* qtd_QNetworkAddressEntry_QNetworkAddressEntry_QNetworkAddressEntry(void* other0);
private extern(C) void*  qtd_QNetworkAddressEntry_broadcast_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkAddressEntry_ip_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkAddressEntry_netmask_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkAddressEntry_operator_equal_QNetworkAddressEntry_const(void* __this_nativeId,
 void* other0);
private extern(C) int  qtd_QNetworkAddressEntry_prefixLength_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkAddressEntry_setBroadcast_QHostAddress(void* __this_nativeId,
 void* newBroadcast0);
private extern(C) void  qtd_QNetworkAddressEntry_setIp_QHostAddress(void* __this_nativeId,
 void* newIp0);
private extern(C) void  qtd_QNetworkAddressEntry_setNetmask_QHostAddress(void* __this_nativeId,
 void* newNetmask0);
private extern(C) void  qtd_QNetworkAddressEntry_setPrefixLength_int(void* __this_nativeId,
 int length0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QNetworkAddressEntry() {
    QNetworkAddressEntry.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QNetworkAddressEntry_QTypeInfo_isComplex();
private extern (C) bool qtd_QNetworkAddressEntry_QTypeInfo_isStatic();
private extern (C) bool qtd_QNetworkAddressEntry_QTypeInfo_isLarge();
private extern (C) bool qtd_QNetworkAddressEntry_QTypeInfo_isPointer();
private extern (C) bool qtd_QNetworkAddressEntry_QTypeInfo_isDummy();
