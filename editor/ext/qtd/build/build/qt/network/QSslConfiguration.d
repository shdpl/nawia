module qt.network.QSslConfiguration;

public import qt.network.QSslConfiguration_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.network.QSsl;
public import qt.network.QSslSocket;
public import qt.network.QSslCipher;
public import qt.network.QSslKey;
public import qt.core.QList;
public import qt.network.QSslCertificate;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSslConfiguration : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QSslConfiguration_QSslConfiguration();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QSslConfiguration) other) {
        void* ret = qtd_QSslConfiguration_QSslConfiguration_QSslConfiguration(other is null ? null : (cast(QSslConfiguration)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QList!(QSslCertificate) caCertificates() const {
        auto res = QList!(QSslCertificate).opCall();
        qtd_QSslConfiguration_caCertificates_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(QSslCipher) ciphers() const {
        auto res = QList!(QSslCipher).opCall();
        qtd_QSslConfiguration_ciphers_const(qtdNativeId, &res);
        return res;
    }

    public final bool isNull() const {
        return qtd_QSslConfiguration_isNull_const(qtdNativeId);
    }

    public final QSslCertificate localCertificate() const {
        void* ret = qtd_QSslConfiguration_localCertificate_const(qtdNativeId);
        QSslCertificate __d_return_value = new QSslCertificate(ret);
        return __d_return_value;
    }

    private final bool operator_equal(const(QSslConfiguration) other) const {
        return qtd_QSslConfiguration_operator_equal_QSslConfiguration_const(qtdNativeId, other is null ? null : (cast(QSslConfiguration)other).qtdNativeId);
    }

    public final QSslCertificate peerCertificate() const {
        void* ret = qtd_QSslConfiguration_peerCertificate_const(qtdNativeId);
        QSslCertificate __d_return_value = new QSslCertificate(ret);
        return __d_return_value;
    }

    public final QList!(QSslCertificate) peerCertificateChain() const {
        auto res = QList!(QSslCertificate).opCall();
        qtd_QSslConfiguration_peerCertificateChain_const(qtdNativeId, &res);
        return res;
    }

    public final int peerVerifyDepth() const {
        return qtd_QSslConfiguration_peerVerifyDepth_const(qtdNativeId);
    }

    public final QSslSocket.PeerVerifyMode peerVerifyMode() const {
        return cast(QSslSocket.PeerVerifyMode) qtd_QSslConfiguration_peerVerifyMode_const(qtdNativeId);
    }

    public final QSslKey privateKey() const {
        void* ret = qtd_QSslConfiguration_privateKey_const(qtdNativeId);
        QSslKey __d_return_value = new QSslKey(ret);
        return __d_return_value;
    }

    public final QSsl.SslProtocol protocol() const {
        return cast(QSsl.SslProtocol) qtd_QSslConfiguration_protocol_const(qtdNativeId);
    }

    public final QSslCipher sessionCipher() const {
        void* ret = qtd_QSslConfiguration_sessionCipher_const(qtdNativeId);
        QSslCipher __d_return_value = new QSslCipher(ret);
        return __d_return_value;
    }

    public final void setCaCertificates(QList!(QSslCertificate) certificates) {
        qtd_QSslConfiguration_setCaCertificates_QList(qtdNativeId, &certificates);
    }

    public final void setCiphers(QList!(QSslCipher) ciphers) {
        qtd_QSslConfiguration_setCiphers_QList(qtdNativeId, &ciphers);
    }

    public final void setLocalCertificate(const(QSslCertificate) certificate) {
        qtd_QSslConfiguration_setLocalCertificate_QSslCertificate(qtdNativeId, certificate is null ? null : (cast(QSslCertificate)certificate).qtdNativeId);
    }

    public final void setPeerVerifyDepth(int depth) {
        qtd_QSslConfiguration_setPeerVerifyDepth_int(qtdNativeId, depth);
    }

    public final void setPeerVerifyMode(QSslSocket.PeerVerifyMode mode) {
        qtd_QSslConfiguration_setPeerVerifyMode_PeerVerifyMode(qtdNativeId, mode);
    }

    public final void setPrivateKey(const(QSslKey) key) {
        qtd_QSslConfiguration_setPrivateKey_QSslKey(qtdNativeId, key is null ? null : (cast(QSslKey)key).qtdNativeId);
    }

    public final void setProtocol(QSsl.SslProtocol protocol) {
        qtd_QSslConfiguration_setProtocol_SslProtocol(qtdNativeId, protocol);
    }

    public static QSslConfiguration defaultConfiguration() {
        void* ret = qtd_QSslConfiguration_defaultConfiguration();
        QSslConfiguration __d_return_value = new QSslConfiguration(ret);
        return __d_return_value;
    }

    public static void setDefaultConfiguration(const(QSslConfiguration) configuration) {
        qtd_QSslConfiguration_setDefaultConfiguration_QSslConfiguration(configuration is null ? null : (cast(QSslConfiguration)configuration).qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QSslConfiguration;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QSslConfiguration_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QSslConfiguration_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QSslConfiguration_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSslConfiguration_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSslConfiguration_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QSslConfiguration_QTypeInfo_isComplex();
        isStatic = qtd_QSslConfiguration_QTypeInfo_isStatic();
        isLarge = qtd_QSslConfiguration_QTypeInfo_isLarge();
        isPointer = qtd_QSslConfiguration_QTypeInfo_isPointer();
        isDummy = qtd_QSslConfiguration_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QSslConfiguration_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QSslConfiguration_native_copy(const void* orig);
extern (C) void qtd_QSslConfiguration_delete(void *ptr);
extern (C) void qtd_QSslConfiguration_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSslConfiguration_QSslConfiguration();
private extern(C) void* qtd_QSslConfiguration_QSslConfiguration_QSslConfiguration(void* other0);
private extern(C) void  qtd_QSslConfiguration_caCertificates_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSslConfiguration_ciphers_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QSslConfiguration_isNull_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslConfiguration_localCertificate_const(void* __this_nativeId);
private extern(C) bool  qtd_QSslConfiguration_operator_equal_QSslConfiguration_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QSslConfiguration_peerCertificate_const(void* __this_nativeId);
private extern(C) void  qtd_QSslConfiguration_peerCertificateChain_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QSslConfiguration_peerVerifyDepth_const(void* __this_nativeId);
private extern(C) int  qtd_QSslConfiguration_peerVerifyMode_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslConfiguration_privateKey_const(void* __this_nativeId);
private extern(C) int  qtd_QSslConfiguration_protocol_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslConfiguration_sessionCipher_const(void* __this_nativeId);
private extern(C) void  qtd_QSslConfiguration_setCaCertificates_QList(void* __this_nativeId,
 void* certificates0);
private extern(C) void  qtd_QSslConfiguration_setCiphers_QList(void* __this_nativeId,
 void* ciphers0);
private extern(C) void  qtd_QSslConfiguration_setLocalCertificate_QSslCertificate(void* __this_nativeId,
 void* certificate0);
private extern(C) void  qtd_QSslConfiguration_setPeerVerifyDepth_int(void* __this_nativeId,
 int depth0);
private extern(C) void  qtd_QSslConfiguration_setPeerVerifyMode_PeerVerifyMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QSslConfiguration_setPrivateKey_QSslKey(void* __this_nativeId,
 void* key0);
private extern(C) void  qtd_QSslConfiguration_setProtocol_SslProtocol(void* __this_nativeId,
 int protocol0);
private extern(C) void*  qtd_QSslConfiguration_defaultConfiguration();
private extern(C) void  qtd_QSslConfiguration_setDefaultConfiguration_QSslConfiguration(void* configuration0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QSslConfiguration() {
    QSslConfiguration.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QSslConfiguration_QTypeInfo_isComplex();
private extern (C) bool qtd_QSslConfiguration_QTypeInfo_isStatic();
private extern (C) bool qtd_QSslConfiguration_QTypeInfo_isLarge();
private extern (C) bool qtd_QSslConfiguration_QTypeInfo_isPointer();
private extern (C) bool qtd_QSslConfiguration_QTypeInfo_isDummy();
