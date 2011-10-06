module qt.network.QHostAddress;

public import qt.network.QHostAddress_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.network.QAbstractSocket;
public import qt.core.QDataStream;
public import qt.network.QIPv6Address;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QHostAddress : QtdObject
{
    public enum SpecialAddress {
        Null = 0,
        Broadcast = 1,
        LocalHost = 2,
        LocalHostIPv6 = 3,
        Any = 4,
        AnyIPv6 = 5
    }

    alias SpecialAddress.Null Null;
    alias SpecialAddress.Broadcast Broadcast;
    alias SpecialAddress.LocalHost LocalHost;
    alias SpecialAddress.LocalHostIPv6 LocalHostIPv6;
    alias SpecialAddress.Any Any;
    alias SpecialAddress.AnyIPv6 AnyIPv6;


// Functions

    public this() {
        void* ret = qtd_QHostAddress_QHostAddress();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QHostAddress.SpecialAddress address) {
        void* ret = qtd_QHostAddress_QHostAddress_SpecialAddress(address);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QHostAddress) copy) {
        void* ret = qtd_QHostAddress_QHostAddress_QHostAddress(copy is null ? null : (cast(QHostAddress)copy).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QIPv6Address) ip6Addr) {
        void* ret = qtd_QHostAddress_QHostAddress_QIPv6Address(ip6Addr is null ? null : (cast(QIPv6Address)ip6Addr).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string address) {
        void* ret = qtd_QHostAddress_QHostAddress_string(address);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(uint ip4Addr) {
        void* ret = qtd_QHostAddress_QHostAddress_uint(ip4Addr);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void clear() {
        qtd_QHostAddress_clear(qtdNativeId);
    }

    public final bool isInSubnet(const(QHostAddress) subnet, int netmask) const {
        return qtd_QHostAddress_isInSubnet_QHostAddress_int_const(qtdNativeId, subnet is null ? null : (cast(QHostAddress)subnet).qtdNativeId, netmask);
    }

    public final bool isNull() const {
        return qtd_QHostAddress_isNull_const(qtdNativeId);
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QHostAddress_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(QHostAddress.SpecialAddress address) const {
        return qtd_QHostAddress_operator_equal_SpecialAddress_const(qtdNativeId, address);
    }

    private final bool operator_equal(const(QHostAddress) address) const {
        return qtd_QHostAddress_operator_equal_QHostAddress_const(qtdNativeId, address is null ? null : (cast(QHostAddress)address).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QHostAddress_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final QAbstractSocket.NetworkLayerProtocol protocol() const {
        return cast(QAbstractSocket.NetworkLayerProtocol) qtd_QHostAddress_protocol_const(qtdNativeId);
    }

    public final string scopeId() const {
        string res;
        qtd_QHostAddress_scopeId_const(qtdNativeId, &res);
        return res;
    }

    public final void setAddress(const(QIPv6Address) ip6Addr) {
        qtd_QHostAddress_setAddress_QIPv6Address(qtdNativeId, ip6Addr is null ? null : (cast(QIPv6Address)ip6Addr).qtdNativeId);
    }

    public final bool setAddress(string address) {
        return qtd_QHostAddress_setAddress_string(qtdNativeId, address);
    }

    public final void setAddress(uint ip4Addr) {
        qtd_QHostAddress_setAddress_uint(qtdNativeId, ip4Addr);
    }

    public final void setScopeId(string id) {
        qtd_QHostAddress_setScopeId_string(qtdNativeId, id);
    }

    public final uint toIPv4Address() const {
        return qtd_QHostAddress_toIPv4Address_const(qtdNativeId);
    }

    public final QIPv6Address toIPv6Address() const {
        void* ret = qtd_QHostAddress_toIPv6Address_const(qtdNativeId);
        QIPv6Address __d_return_value = new QIPv6Address(ret);
        return __d_return_value;
    }

    public final string toString() const {
        string res;
        qtd_QHostAddress_toString_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QHostAddress;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QHostAddress_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QHostAddress_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QHostAddress_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QHostAddress_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QHostAddress_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QHostAddress_QTypeInfo_isComplex();
        isStatic = qtd_QHostAddress_QTypeInfo_isStatic();
        isLarge = qtd_QHostAddress_QTypeInfo_isLarge();
        isPointer = qtd_QHostAddress_QTypeInfo_isPointer();
        isDummy = qtd_QHostAddress_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QHostAddress_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QHostAddress_native_copy(const void* orig);
extern (C) void qtd_QHostAddress_delete(void *ptr);
extern (C) void qtd_QHostAddress_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QHostAddress_QHostAddress();
private extern(C) void* qtd_QHostAddress_QHostAddress_SpecialAddress(int address0);
private extern(C) void* qtd_QHostAddress_QHostAddress_QHostAddress(void* copy0);
private extern(C) void* qtd_QHostAddress_QHostAddress_QIPv6Address(void* ip6Addr0);
private extern(C) void* qtd_QHostAddress_QHostAddress_string(string address0);
private extern(C) void* qtd_QHostAddress_QHostAddress_uint(uint ip4Addr0);
private extern(C) void  qtd_QHostAddress_clear(void* __this_nativeId);
private extern(C) bool  qtd_QHostAddress_isInSubnet_QHostAddress_int_const(void* __this_nativeId,
 void* subnet0,
 int netmask1);
private extern(C) bool  qtd_QHostAddress_isNull_const(void* __this_nativeId);
private extern(C) void  qtd_QHostAddress_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QHostAddress_operator_equal_SpecialAddress_const(void* __this_nativeId,
 int address0);
private extern(C) bool  qtd_QHostAddress_operator_equal_QHostAddress_const(void* __this_nativeId,
 void* address0);
private extern(C) void  qtd_QHostAddress_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QHostAddress_protocol_const(void* __this_nativeId);
private extern(C) void  qtd_QHostAddress_scopeId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QHostAddress_setAddress_QIPv6Address(void* __this_nativeId,
 void* ip6Addr0);
private extern(C) bool  qtd_QHostAddress_setAddress_string(void* __this_nativeId,
 string address0);
private extern(C) void  qtd_QHostAddress_setAddress_uint(void* __this_nativeId,
 uint ip4Addr0);
private extern(C) void  qtd_QHostAddress_setScopeId_string(void* __this_nativeId,
 string id0);
private extern(C) uint  qtd_QHostAddress_toIPv4Address_const(void* __this_nativeId);
private extern(C) void*  qtd_QHostAddress_toIPv6Address_const(void* __this_nativeId);
private extern(C) void  qtd_QHostAddress_toString_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QHostAddress() {
    QHostAddress.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QHostAddress_QTypeInfo_isComplex();
private extern (C) bool qtd_QHostAddress_QTypeInfo_isStatic();
private extern (C) bool qtd_QHostAddress_QTypeInfo_isLarge();
private extern (C) bool qtd_QHostAddress_QTypeInfo_isPointer();
private extern (C) bool qtd_QHostAddress_QTypeInfo_isDummy();
