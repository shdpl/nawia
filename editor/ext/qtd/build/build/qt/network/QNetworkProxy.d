module qt.network.QNetworkProxy;

public import qt.network.QNetworkProxy_aux;
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


public class QNetworkProxy : QtdObject
{
    public enum ProxyType {
        DefaultProxy = 0,
        Socks5Proxy = 1,
        NoProxy = 2,
        HttpProxy = 3,
        HttpCachingProxy = 4,
        FtpCachingProxy = 5
    }

    alias ProxyType.DefaultProxy DefaultProxy;
    alias ProxyType.Socks5Proxy Socks5Proxy;
    alias ProxyType.NoProxy NoProxy;
    alias ProxyType.HttpProxy HttpProxy;
    alias ProxyType.HttpCachingProxy HttpCachingProxy;
    alias ProxyType.FtpCachingProxy FtpCachingProxy;

    public enum Capability {
        TunnelingCapability = 1,
        ListeningCapability = 2,
        UdpTunnelingCapability = 4,
        CachingCapability = 8,
        HostNameLookupCapability = 16
    }

    alias Capability.TunnelingCapability TunnelingCapability;
    alias Capability.ListeningCapability ListeningCapability;
    alias Capability.UdpTunnelingCapability UdpTunnelingCapability;
    alias Capability.CachingCapability CachingCapability;
    alias Capability.HostNameLookupCapability HostNameLookupCapability;


// Functions

    public this() {
        void* ret = qtd_QNetworkProxy_QNetworkProxy();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QNetworkProxy.ProxyType type, string hostName = "", ushort port = 0, string user = "", string password = "") {
        void* ret = qtd_QNetworkProxy_QNetworkProxy_ProxyType_string_ushort_string_string(type, hostName, port, user, password);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QNetworkProxy) other) {
        void* ret = qtd_QNetworkProxy_QNetworkProxy_QNetworkProxy(other is null ? null : (cast(QNetworkProxy)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int capabilities() const {
        return qtd_QNetworkProxy_capabilities_const(qtdNativeId);
    }

    public final string hostName() const {
        string res;
        qtd_QNetworkProxy_hostName_const(qtdNativeId, &res);
        return res;
    }

    public final bool isCachingProxy() const {
        return qtd_QNetworkProxy_isCachingProxy_const(qtdNativeId);
    }

    public final bool isTransparentProxy() const {
        return qtd_QNetworkProxy_isTransparentProxy_const(qtdNativeId);
    }

    private final bool operator_equal(const(QNetworkProxy) other) const {
        return qtd_QNetworkProxy_operator_equal_QNetworkProxy_const(qtdNativeId, other is null ? null : (cast(QNetworkProxy)other).qtdNativeId);
    }

    public final string password() const {
        string res;
        qtd_QNetworkProxy_password_const(qtdNativeId, &res);
        return res;
    }

    public final ushort port() const {
        return qtd_QNetworkProxy_port_const(qtdNativeId);
    }

    public final void setCapabilities(int capab) {
        qtd_QNetworkProxy_setCapabilities_Capabilities(qtdNativeId, capab);
    }

    public final void setHostName(string hostName) {
        qtd_QNetworkProxy_setHostName_string(qtdNativeId, hostName);
    }

    public final void setPassword(string password) {
        qtd_QNetworkProxy_setPassword_string(qtdNativeId, password);
    }

    public final void setPort(ushort port) {
        qtd_QNetworkProxy_setPort_ushort(qtdNativeId, port);
    }

    public final void setType(QNetworkProxy.ProxyType type) {
        qtd_QNetworkProxy_setType_ProxyType(qtdNativeId, type);
    }

    public final void setUser(string userName) {
        qtd_QNetworkProxy_setUser_string(qtdNativeId, userName);
    }

    public final QNetworkProxy.ProxyType type() const {
        return cast(QNetworkProxy.ProxyType) qtd_QNetworkProxy_type_const(qtdNativeId);
    }

    public final string user() const {
        string res;
        qtd_QNetworkProxy_user_const(qtdNativeId, &res);
        return res;
    }

    public static QNetworkProxy applicationProxy() {
        void* ret = qtd_QNetworkProxy_applicationProxy();
        QNetworkProxy __d_return_value = new QNetworkProxy(ret);
        return __d_return_value;
    }

    public static void setApplicationProxy(const(QNetworkProxy) proxy) {
        qtd_QNetworkProxy_setApplicationProxy_QNetworkProxy(proxy is null ? null : (cast(QNetworkProxy)proxy).qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QNetworkProxy;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QNetworkProxy_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QNetworkProxy_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QNetworkProxy_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QNetworkProxy_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QNetworkProxy_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QNetworkProxy_QTypeInfo_isComplex();
        isStatic = qtd_QNetworkProxy_QTypeInfo_isStatic();
        isLarge = qtd_QNetworkProxy_QTypeInfo_isLarge();
        isPointer = qtd_QNetworkProxy_QTypeInfo_isPointer();
        isDummy = qtd_QNetworkProxy_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QNetworkProxy_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QNetworkProxy_native_copy(const void* orig);
extern (C) void qtd_QNetworkProxy_delete(void *ptr);
extern (C) void qtd_QNetworkProxy_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QNetworkProxy_QNetworkProxy();
private extern(C) void* qtd_QNetworkProxy_QNetworkProxy_ProxyType_string_ushort_string_string(int type0,
 string hostName1,
 ushort port2,
 string user3,
 string password4);
private extern(C) void* qtd_QNetworkProxy_QNetworkProxy_QNetworkProxy(void* other0);
private extern(C) int  qtd_QNetworkProxy_capabilities_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkProxy_hostName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QNetworkProxy_isCachingProxy_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkProxy_isTransparentProxy_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkProxy_operator_equal_QNetworkProxy_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QNetworkProxy_password_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) ushort  qtd_QNetworkProxy_port_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkProxy_setCapabilities_Capabilities(void* __this_nativeId,
 int capab0);
private extern(C) void  qtd_QNetworkProxy_setHostName_string(void* __this_nativeId,
 string hostName0);
private extern(C) void  qtd_QNetworkProxy_setPassword_string(void* __this_nativeId,
 string password0);
private extern(C) void  qtd_QNetworkProxy_setPort_ushort(void* __this_nativeId,
 ushort port0);
private extern(C) void  qtd_QNetworkProxy_setType_ProxyType(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QNetworkProxy_setUser_string(void* __this_nativeId,
 string userName0);
private extern(C) int  qtd_QNetworkProxy_type_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkProxy_user_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QNetworkProxy_applicationProxy();
private extern(C) void  qtd_QNetworkProxy_setApplicationProxy_QNetworkProxy(void* proxy0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QNetworkProxy() {
    QNetworkProxy.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QNetworkProxy_QTypeInfo_isComplex();
private extern (C) bool qtd_QNetworkProxy_QTypeInfo_isStatic();
private extern (C) bool qtd_QNetworkProxy_QTypeInfo_isLarge();
private extern (C) bool qtd_QNetworkProxy_QTypeInfo_isPointer();
private extern (C) bool qtd_QNetworkProxy_QTypeInfo_isDummy();
