module qt.network.QNetworkProxyQuery;

public import qt.network.QNetworkProxyQuery_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QNetworkProxyQuery : QtdObject
{
    public enum QueryType {
        TcpSocket = 0,
        UdpSocket = 1,
        TcpServer = 100,
        UrlRequest = 101
    }

    alias QueryType.TcpSocket TcpSocket;
    alias QueryType.UdpSocket UdpSocket;
    alias QueryType.TcpServer TcpServer;
    alias QueryType.UrlRequest UrlRequest;


// Functions

    public this() {
        void* ret = qtd_QNetworkProxyQuery_QNetworkProxyQuery();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QNetworkProxyQuery) other) {
        void* ret = qtd_QNetworkProxyQuery_QNetworkProxyQuery_QNetworkProxyQuery(other is null ? null : (cast(QNetworkProxyQuery)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string hostname, int port, string protocolTag = "", QNetworkProxyQuery.QueryType queryType = QNetworkProxyQuery.QueryType.TcpSocket) {
        void* ret = qtd_QNetworkProxyQuery_QNetworkProxyQuery_string_int_string_QueryType(hostname, port, protocolTag, queryType);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QUrl) requestUrl, QNetworkProxyQuery.QueryType queryType = QNetworkProxyQuery.QueryType.UrlRequest) {
        void* ret = qtd_QNetworkProxyQuery_QNetworkProxyQuery_QUrl_QueryType(requestUrl is null ? null : (cast(QUrl)requestUrl).qtdNativeId, queryType);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(ushort bindPort, string protocolTag = "", QNetworkProxyQuery.QueryType queryType = QNetworkProxyQuery.QueryType.TcpServer) {
        void* ret = qtd_QNetworkProxyQuery_QNetworkProxyQuery_ushort_string_QueryType(bindPort, protocolTag, queryType);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int localPort() const {
        return qtd_QNetworkProxyQuery_localPort_const(qtdNativeId);
    }

    private final bool operator_equal(const(QNetworkProxyQuery) other) const {
        return qtd_QNetworkProxyQuery_operator_equal_QNetworkProxyQuery_const(qtdNativeId, other is null ? null : (cast(QNetworkProxyQuery)other).qtdNativeId);
    }

    public final string peerHostName() const {
        string res;
        qtd_QNetworkProxyQuery_peerHostName_const(qtdNativeId, &res);
        return res;
    }

    public final int peerPort() const {
        return qtd_QNetworkProxyQuery_peerPort_const(qtdNativeId);
    }

    public final string protocolTag() const {
        string res;
        qtd_QNetworkProxyQuery_protocolTag_const(qtdNativeId, &res);
        return res;
    }

    public final QNetworkProxyQuery.QueryType queryType() const {
        return cast(QNetworkProxyQuery.QueryType) qtd_QNetworkProxyQuery_queryType_const(qtdNativeId);
    }

    public final void setLocalPort(int port) {
        qtd_QNetworkProxyQuery_setLocalPort_int(qtdNativeId, port);
    }

    public final void setPeerHostName(string hostname) {
        qtd_QNetworkProxyQuery_setPeerHostName_string(qtdNativeId, hostname);
    }

    public final void setPeerPort(int port) {
        qtd_QNetworkProxyQuery_setPeerPort_int(qtdNativeId, port);
    }

    public final void setProtocolTag(string protocolTag) {
        qtd_QNetworkProxyQuery_setProtocolTag_string(qtdNativeId, protocolTag);
    }

    public final void setQueryType(QNetworkProxyQuery.QueryType type) {
        qtd_QNetworkProxyQuery_setQueryType_QueryType(qtdNativeId, type);
    }

    public final void setUrl(const(QUrl) url) {
        qtd_QNetworkProxyQuery_setUrl_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final QUrl url() const {
        void* ret = qtd_QNetworkProxyQuery_url_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QNetworkProxyQuery;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QNetworkProxyQuery_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QNetworkProxyQuery_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QNetworkProxyQuery_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QNetworkProxyQuery_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QNetworkProxyQuery_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QNetworkProxyQuery_QTypeInfo_isComplex();
        isStatic = qtd_QNetworkProxyQuery_QTypeInfo_isStatic();
        isLarge = qtd_QNetworkProxyQuery_QTypeInfo_isLarge();
        isPointer = qtd_QNetworkProxyQuery_QTypeInfo_isPointer();
        isDummy = qtd_QNetworkProxyQuery_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QNetworkProxyQuery_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QNetworkProxyQuery_native_copy(const void* orig);
extern (C) void qtd_QNetworkProxyQuery_delete(void *ptr);
extern (C) void qtd_QNetworkProxyQuery_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QNetworkProxyQuery_QNetworkProxyQuery();
private extern(C) void* qtd_QNetworkProxyQuery_QNetworkProxyQuery_QNetworkProxyQuery(void* other0);
private extern(C) void* qtd_QNetworkProxyQuery_QNetworkProxyQuery_string_int_string_QueryType(string hostname0,
 int port1,
 string protocolTag2,
 int queryType3);
private extern(C) void* qtd_QNetworkProxyQuery_QNetworkProxyQuery_QUrl_QueryType(void* requestUrl0,
 int queryType1);
private extern(C) void* qtd_QNetworkProxyQuery_QNetworkProxyQuery_ushort_string_QueryType(ushort bindPort0,
 string protocolTag1,
 int queryType2);
private extern(C) int  qtd_QNetworkProxyQuery_localPort_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkProxyQuery_operator_equal_QNetworkProxyQuery_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QNetworkProxyQuery_peerHostName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QNetworkProxyQuery_peerPort_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkProxyQuery_protocolTag_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QNetworkProxyQuery_queryType_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkProxyQuery_setLocalPort_int(void* __this_nativeId,
 int port0);
private extern(C) void  qtd_QNetworkProxyQuery_setPeerHostName_string(void* __this_nativeId,
 string hostname0);
private extern(C) void  qtd_QNetworkProxyQuery_setPeerPort_int(void* __this_nativeId,
 int port0);
private extern(C) void  qtd_QNetworkProxyQuery_setProtocolTag_string(void* __this_nativeId,
 string protocolTag0);
private extern(C) void  qtd_QNetworkProxyQuery_setQueryType_QueryType(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QNetworkProxyQuery_setUrl_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void*  qtd_QNetworkProxyQuery_url_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QNetworkProxyQuery() {
    QNetworkProxyQuery.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QNetworkProxyQuery_QTypeInfo_isComplex();
private extern (C) bool qtd_QNetworkProxyQuery_QTypeInfo_isStatic();
private extern (C) bool qtd_QNetworkProxyQuery_QTypeInfo_isLarge();
private extern (C) bool qtd_QNetworkProxyQuery_QTypeInfo_isPointer();
private extern (C) bool qtd_QNetworkProxyQuery_QTypeInfo_isDummy();
