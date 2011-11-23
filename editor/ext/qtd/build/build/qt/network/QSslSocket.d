module qt.network.QSslSocket;

public import qt.network.QSslSocket_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.network.ArrayOps2;
// automatic imports-------------
public import qt.core.QRegExp;
public import qt.network.QSsl;
public import qt.network.QAbstractSocket;
public import qt.network.QAuthenticator;
public import qt.network.QSslError;
public import qt.core.QList;
public import qt.network.QTcpSocket;
public import qt.network.QNetworkProxy;
public import qt.network.QSslCertificate;
public import qt.core.QChildEvent;
public import qt.core.QEvent;
public import qt.network.QSslConfiguration;
public import qt.network.QSslKey;
public import qt.core.QObject;
public import qt.core.QTimerEvent;
public import qt.core.QByteArray;
public import qt.network.QSslCipher;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSslSocket : QTcpSocket
{
    public enum SslMode {
        UnencryptedMode = 0,
        SslClientMode = 1,
        SslServerMode = 2
    }

    alias SslMode.UnencryptedMode UnencryptedMode;
    alias SslMode.SslClientMode SslClientMode;
    alias SslMode.SslServerMode SslServerMode;

    public enum PeerVerifyMode {
        VerifyNone = 0,
        QueryPeer = 1,
        VerifyPeer = 2,
        AutoVerifyPeer = 3
    }

    alias PeerVerifyMode.VerifyNone VerifyNone;
    alias PeerVerifyMode.QueryPeer QueryPeer;
    alias PeerVerifyMode.VerifyPeer VerifyPeer;
    alias PeerVerifyMode.AutoVerifyPeer AutoVerifyPeer;


    private static const string[] __signalSignatures = [
            "encrypted()", 
            "encryptedBytesWritten(qint64)", 
            "modeChanged(QSslSocket::SslMode)", 
            "peerVerifyError(QSslError)", 
            "sslErrors(QList<QSslError>)"    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }

    protected final void encrypted() {
        qtd_QSslSocket_encrypted(qtdNativeId);
    }

    protected final void encryptedBytesWritten(long totalBytes) {
        qtd_QSslSocket_encryptedBytesWritten_long(qtdNativeId, totalBytes);
    }

    protected final void modeChanged(QSslSocket.SslMode newMode) {
        qtd_QSslSocket_modeChanged_SslMode(qtdNativeId, newMode);
    }

    protected final void peerVerifyError(const(QSslError) error) {
        qtd_QSslSocket_peerVerifyError_QSslError(qtdNativeId, error is null ? null : (cast(QSslError)error).qtdNativeId);
    }

    protected final void sslErrors(QList!(QSslError) errors) {
        qtd_QSslSocket_sslErrors_QList(qtdNativeId, &errors);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QSslSocket_QSslSocket_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void abort() {
        qtd_QSslSocket_abort(qtdNativeId);
    }

    public final void addCaCertificate(const(QSslCertificate) certificate) {
        qtd_QSslSocket_addCaCertificate_QSslCertificate(qtdNativeId, certificate is null ? null : (cast(QSslCertificate)certificate).qtdNativeId);
    }

    public final void addCaCertificates(QList!(QSslCertificate) certificates) {
        qtd_QSslSocket_addCaCertificates_QList(qtdNativeId, &certificates);
    }

    public final bool addCaCertificates(string path, QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem, QRegExp.PatternSyntax syntax = QRegExp.PatternSyntax.FixedString) {
        return qtd_QSslSocket_addCaCertificates_string_EncodingFormat_PatternSyntax(qtdNativeId, path, format, syntax);
    }

    public final QList!(QSslCertificate) caCertificates() const {
        auto res = QList!(QSslCertificate).opCall();
        qtd_QSslSocket_caCertificates_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(QSslCipher) ciphers() const {
        auto res = QList!(QSslCipher).opCall();
        qtd_QSslSocket_ciphers_const(qtdNativeId, &res);
        return res;
    }

    public final void connectToHostEncrypted(string hostName, ushort port, int mode = 3) {
        qtd_QSslSocket_connectToHostEncrypted_string_ushort_OpenMode(qtdNativeId, hostName, port, mode);
    }

    public final void connectToHostEncrypted(string hostName, ushort port, string sslPeerName, int mode = 3) {
        qtd_QSslSocket_connectToHostEncrypted_string_ushort_string_OpenMode(qtdNativeId, hostName, port, sslPeerName, mode);
    }

    protected final void connectToHostImplementation(string hostName, ushort port, int openMode) {
        qtd_QSslSocket_connectToHostImplementation_string_ushort_OpenMode(qtdNativeId, hostName, port, openMode);
    }

    protected final void disconnectFromHostImplementation() {
        qtd_QSslSocket_disconnectFromHostImplementation(qtdNativeId);
    }

    public final long encryptedBytesAvailable() const {
        return qtd_QSslSocket_encryptedBytesAvailable_const(qtdNativeId);
    }

    public final long encryptedBytesToWrite() const {
        return qtd_QSslSocket_encryptedBytesToWrite_const(qtdNativeId);
    }

    public final bool flush() {
        return qtd_QSslSocket_flush(qtdNativeId);
    }

    public final void ignoreSslErrors() {
        qtd_QSslSocket_ignoreSslErrors(qtdNativeId);
    }

    public final void ignoreSslErrors(QList!(QSslError) errors) {
        qtd_QSslSocket_ignoreSslErrors_QList(qtdNativeId, &errors);
    }

    public final bool isEncrypted() const {
        return qtd_QSslSocket_isEncrypted_const(qtdNativeId);
    }

    public final QSslCertificate localCertificate() const {
        void* ret = qtd_QSslSocket_localCertificate_const(qtdNativeId);
        QSslCertificate __d_return_value = new QSslCertificate(ret);
        return __d_return_value;
    }

    public final QSslSocket.SslMode mode() const {
        return cast(QSslSocket.SslMode) qtd_QSslSocket_mode_const(qtdNativeId);
    }

    public final QSslCertificate peerCertificate() const {
        void* ret = qtd_QSslSocket_peerCertificate_const(qtdNativeId);
        QSslCertificate __d_return_value = new QSslCertificate(ret);
        return __d_return_value;
    }

    public final QList!(QSslCertificate) peerCertificateChain() const {
        auto res = QList!(QSslCertificate).opCall();
        qtd_QSslSocket_peerCertificateChain_const(qtdNativeId, &res);
        return res;
    }

    public final int peerVerifyDepth() const {
        return qtd_QSslSocket_peerVerifyDepth_const(qtdNativeId);
    }

    public final QSslSocket.PeerVerifyMode peerVerifyMode() const {
        return cast(QSslSocket.PeerVerifyMode) qtd_QSslSocket_peerVerifyMode_const(qtdNativeId);
    }

    public final QSslKey privateKey() const {
        void* ret = qtd_QSslSocket_privateKey_const(qtdNativeId);
        QSslKey __d_return_value = new QSslKey(ret);
        return __d_return_value;
    }

    public final QSsl.SslProtocol protocol() const {
        return cast(QSsl.SslProtocol) qtd_QSslSocket_protocol_const(qtdNativeId);
    }

    public final QSslCipher sessionCipher() const {
        void* ret = qtd_QSslSocket_sessionCipher_const(qtdNativeId);
        QSslCipher __d_return_value = new QSslCipher(ret);
        return __d_return_value;
    }

    public final void setCaCertificates(QList!(QSslCertificate) certificates) {
        qtd_QSslSocket_setCaCertificates_QList(qtdNativeId, &certificates);
    }

    public final void setCiphers(QList!(QSslCipher) ciphers) {
        qtd_QSslSocket_setCiphers_QList(qtdNativeId, &ciphers);
    }

    public final void setCiphers(string ciphers) {
        qtd_QSslSocket_setCiphers_string(qtdNativeId, ciphers);
    }

    public final void setLocalCertificate(const(QSslCertificate) certificate) {
        qtd_QSslSocket_setLocalCertificate_QSslCertificate(qtdNativeId, certificate is null ? null : (cast(QSslCertificate)certificate).qtdNativeId);
    }

    public final void setLocalCertificate(string fileName, QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem) {
        qtd_QSslSocket_setLocalCertificate_string_EncodingFormat(qtdNativeId, fileName, format);
    }

    public final void setPeerVerifyDepth(int depth) {
        qtd_QSslSocket_setPeerVerifyDepth_int(qtdNativeId, depth);
    }

    public final void setPeerVerifyMode(QSslSocket.PeerVerifyMode mode) {
        qtd_QSslSocket_setPeerVerifyMode_PeerVerifyMode(qtdNativeId, mode);
    }

    public final void setPrivateKey(const(QSslKey) key) {
        qtd_QSslSocket_setPrivateKey_QSslKey(qtdNativeId, key is null ? null : (cast(QSslKey)key).qtdNativeId);
    }

    public final void setPrivateKey(string fileName, QSsl.KeyAlgorithm algorithm = QSsl.KeyAlgorithm.Rsa, QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem, const(QByteArray) passPhrase = new QByteArray()) {
        qtd_QSslSocket_setPrivateKey_string_KeyAlgorithm_EncodingFormat_QByteArray(qtdNativeId, fileName, algorithm, format, passPhrase is null ? null : (cast(QByteArray)passPhrase).qtdNativeId);
    }

    public final void setProtocol(QSsl.SslProtocol protocol) {
        qtd_QSslSocket_setProtocol_SslProtocol(qtdNativeId, protocol);
    }

    public final void setReadBufferSize(long size) {
        qtd_QSslSocket_setReadBufferSize_long(qtdNativeId, size);
    }

    public final bool setSocketDescriptor(int socketDescriptor, QAbstractSocket.SocketState state = QAbstractSocket.SocketState.ConnectedState, int openMode = 3) {
        return qtd_QSslSocket_setSocketDescriptor_int_SocketState_OpenMode(qtdNativeId, socketDescriptor, state, openMode);
    }

    public final void setSslConfiguration(const(QSslConfiguration) config) {
        qtd_QSslSocket_setSslConfiguration_QSslConfiguration(qtdNativeId, config is null ? null : (cast(QSslConfiguration)config).qtdNativeId);
    }

    public final QSslConfiguration sslConfiguration() const {
        void* ret = qtd_QSslSocket_sslConfiguration_const(qtdNativeId);
        QSslConfiguration __d_return_value = new QSslConfiguration(ret);
        return __d_return_value;
    }

    public final QList!(QSslError) error_() const {
        auto res = QList!(QSslError).opCall();
        qtd_QSslSocket_error__const(qtdNativeId, &res);
        return res;
    }

    public final void startClientEncryption() {
        qtd_QSslSocket_startClientEncryption(qtdNativeId);
    }

    public final void startServerEncryption() {
        qtd_QSslSocket_startServerEncryption(qtdNativeId);
    }

    public final bool waitForConnected(int msecs = 30000) {
        return qtd_QSslSocket_waitForConnected_int(qtdNativeId, msecs);
    }

    public final bool waitForDisconnected(int msecs = 30000) {
        return qtd_QSslSocket_waitForDisconnected_int(qtdNativeId, msecs);
    }

    public final bool waitForEncrypted(int msecs = 30000) {
        return qtd_QSslSocket_waitForEncrypted_int(qtdNativeId, msecs);
    }

    public bool atEnd() const {
        return qtd_QSslSocket_atEnd_const(qtdNativeId);
    }

    public long bytesAvailable() const {
        return qtd_QSslSocket_bytesAvailable_const(qtdNativeId);
    }

    public long bytesToWrite() const {
        return qtd_QSslSocket_bytesToWrite_const(qtdNativeId);
    }

    public bool canReadLine() const {
        return qtd_QSslSocket_canReadLine_const(qtdNativeId);
    }

    public void close() {
        qtd_QSslSocket_close(qtdNativeId);
    }

    protected long readData(char* data, long maxlen) {
        return qtd_QSslSocket_readData_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public bool waitForBytesWritten(int msecs = 30000) {
        return qtd_QSslSocket_waitForBytesWritten_int(qtdNativeId, msecs);
    }

    public bool waitForReadyRead(int msecs = 30000) {
        return qtd_QSslSocket_waitForReadyRead_int(qtdNativeId, msecs);
    }

    protected long writeData(const(char*) data, long len) {
        return qtd_QSslSocket_writeData_nativepointerchar_long(qtdNativeId, data, len);
    }

    public static void addDefaultCaCertificate(const(QSslCertificate) certificate) {
        qtd_QSslSocket_addDefaultCaCertificate_QSslCertificate(certificate is null ? null : (cast(QSslCertificate)certificate).qtdNativeId);
    }

    public static void addDefaultCaCertificates(QList!(QSslCertificate) certificates) {
        qtd_QSslSocket_addDefaultCaCertificates_QList(&certificates);
    }

    public static bool addDefaultCaCertificates(string path, QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem, QRegExp.PatternSyntax syntax = QRegExp.PatternSyntax.FixedString) {
        return qtd_QSslSocket_addDefaultCaCertificates_string_EncodingFormat_PatternSyntax(path, format, syntax);
    }

    public static QList!(QSslCertificate) defaultCaCertificates() {
        auto res = QList!(QSslCertificate).opCall();
        qtd_QSslSocket_defaultCaCertificates(&res);
        return res;
    }

    public static QList!(QSslCipher) defaultCiphers() {
        auto res = QList!(QSslCipher).opCall();
        qtd_QSslSocket_defaultCiphers(&res);
        return res;
    }

    public static void setDefaultCaCertificates(QList!(QSslCertificate) certificates) {
        qtd_QSslSocket_setDefaultCaCertificates_QList(&certificates);
    }

    public static void setDefaultCiphers(QList!(QSslCipher) ciphers) {
        qtd_QSslSocket_setDefaultCiphers_QList(&ciphers);
    }

    public static QList!(QSslCipher) supportedCiphers() {
        auto res = QList!(QSslCipher).opCall();
        qtd_QSslSocket_supportedCiphers(&res);
        return res;
    }

    public static bool supportsSsl() {
        return qtd_QSslSocket_supportsSsl();
    }

    public static QList!(QSslCertificate) systemCaCertificates() {
        auto res = QList!(QSslCertificate).opCall();
        qtd_QSslSocket_systemCaCertificates(&res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "connectToHostImplementation(QString,unsigned short,QFlags<QIODevice::OpenModeFlag>)", 
            "disconnectFromHostImplementation()", 
            "ignoreSslErrors()", 
            "startClientEncryption()", 
            "startServerEncryption()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSslSocket_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSslSocket);
    }

    static QSslSocket __getObject(void* nativeId) {
        return static_cast!(QSslSocket)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSslSocket_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSslSocket_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSslSocket(nativeId, initFlags);
        QSslSocket.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("encrypted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(long)("encryptedBytesWritten"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(QSslSocket.SslMode)("modeChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(const(QSslError))("peerVerifyError"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(QList!(QSslError))("sslErrors"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(string,ushort,int)("connectToHostImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("disconnectFromHostImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("ignoreSslErrors"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("startClientEncryption"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("startServerEncryption"), index));

    }

    public alias void __isQtType_QSslSocket;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QSslSocket_encrypted(void* __this_nativeId);
private extern(C) void  qtd_QSslSocket_encryptedBytesWritten_long(void* __this_nativeId,
 long totalBytes0);
private extern(C) void  qtd_QSslSocket_modeChanged_SslMode(void* __this_nativeId,
 int newMode0);
private extern(C) void  qtd_QSslSocket_peerVerifyError_QSslError(void* __this_nativeId,
 void* error0);
private extern(C) void  qtd_QSslSocket_sslErrors_QList(void* __this_nativeId,
 void* errors0);

// C wrappers
private extern(C) void* qtd_QSslSocket_QSslSocket_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QSslSocket_abort(void* __this_nativeId);
private extern(C) void  qtd_QSslSocket_addCaCertificate_QSslCertificate(void* __this_nativeId,
 void* certificate0);
private extern(C) void  qtd_QSslSocket_addCaCertificates_QList(void* __this_nativeId,
 void* certificates0);
private extern(C) bool  qtd_QSslSocket_addCaCertificates_string_EncodingFormat_PatternSyntax(void* __this_nativeId,
 string path0,
 int format1,
 int syntax2);
private extern(C) void  qtd_QSslSocket_caCertificates_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSslSocket_ciphers_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSslSocket_connectToHostEncrypted_string_ushort_OpenMode(void* __this_nativeId,
 string hostName0,
 ushort port1,
 int mode2);
private extern(C) void  qtd_QSslSocket_connectToHostEncrypted_string_ushort_string_OpenMode(void* __this_nativeId,
 string hostName0,
 ushort port1,
 string sslPeerName2,
 int mode3);
private extern(C) void  qtd_QSslSocket_connectToHostImplementation_string_ushort_OpenMode(void* __this_nativeId,
 string hostName0,
 ushort port1,
 int openMode2);
private extern(C) void  qtd_QSslSocket_disconnectFromHostImplementation(void* __this_nativeId);
private extern(C) long  qtd_QSslSocket_encryptedBytesAvailable_const(void* __this_nativeId);
private extern(C) long  qtd_QSslSocket_encryptedBytesToWrite_const(void* __this_nativeId);
private extern(C) bool  qtd_QSslSocket_flush(void* __this_nativeId);
private extern(C) void  qtd_QSslSocket_ignoreSslErrors(void* __this_nativeId);
private extern(C) void  qtd_QSslSocket_ignoreSslErrors_QList(void* __this_nativeId,
 void* errors0);
private extern(C) bool  qtd_QSslSocket_isEncrypted_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslSocket_localCertificate_const(void* __this_nativeId);
private extern(C) int  qtd_QSslSocket_mode_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslSocket_peerCertificate_const(void* __this_nativeId);
private extern(C) void  qtd_QSslSocket_peerCertificateChain_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QSslSocket_peerVerifyDepth_const(void* __this_nativeId);
private extern(C) int  qtd_QSslSocket_peerVerifyMode_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslSocket_privateKey_const(void* __this_nativeId);
private extern(C) int  qtd_QSslSocket_protocol_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslSocket_sessionCipher_const(void* __this_nativeId);
private extern(C) void  qtd_QSslSocket_setCaCertificates_QList(void* __this_nativeId,
 void* certificates0);
private extern(C) void  qtd_QSslSocket_setCiphers_QList(void* __this_nativeId,
 void* ciphers0);
private extern(C) void  qtd_QSslSocket_setCiphers_string(void* __this_nativeId,
 string ciphers0);
private extern(C) void  qtd_QSslSocket_setLocalCertificate_QSslCertificate(void* __this_nativeId,
 void* certificate0);
private extern(C) void  qtd_QSslSocket_setLocalCertificate_string_EncodingFormat(void* __this_nativeId,
 string fileName0,
 int format1);
private extern(C) void  qtd_QSslSocket_setPeerVerifyDepth_int(void* __this_nativeId,
 int depth0);
private extern(C) void  qtd_QSslSocket_setPeerVerifyMode_PeerVerifyMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QSslSocket_setPrivateKey_QSslKey(void* __this_nativeId,
 void* key0);
private extern(C) void  qtd_QSslSocket_setPrivateKey_string_KeyAlgorithm_EncodingFormat_QByteArray(void* __this_nativeId,
 string fileName0,
 int algorithm1,
 int format2,
 void* passPhrase3);
private extern(C) void  qtd_QSslSocket_setProtocol_SslProtocol(void* __this_nativeId,
 int protocol0);
private extern(C) void  qtd_QSslSocket_setReadBufferSize_long(void* __this_nativeId,
 long size0);
private extern(C) bool  qtd_QSslSocket_setSocketDescriptor_int_SocketState_OpenMode(void* __this_nativeId,
 int socketDescriptor0,
 int state1,
 int openMode2);
private extern(C) void  qtd_QSslSocket_setSslConfiguration_QSslConfiguration(void* __this_nativeId,
 void* config0);
private extern(C) void*  qtd_QSslSocket_sslConfiguration_const(void* __this_nativeId);
private extern(C) void  qtd_QSslSocket_error__const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSslSocket_startClientEncryption(void* __this_nativeId);
private extern(C) void  qtd_QSslSocket_startServerEncryption(void* __this_nativeId);
private extern(C) bool  qtd_QSslSocket_waitForConnected_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QSslSocket_waitForDisconnected_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QSslSocket_waitForEncrypted_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QSslSocket_atEnd_const(void* __this_nativeId);
private extern(C) long  qtd_QSslSocket_bytesAvailable_const(void* __this_nativeId);
private extern(C) long  qtd_QSslSocket_bytesToWrite_const(void* __this_nativeId);
private extern(C) bool  qtd_QSslSocket_canReadLine_const(void* __this_nativeId);
private extern(C) void  qtd_QSslSocket_close(void* __this_nativeId);
private extern(C) long  qtd_QSslSocket_readData_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) bool  qtd_QSslSocket_waitForBytesWritten_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QSslSocket_waitForReadyRead_int(void* __this_nativeId,
 int msecs0);
private extern(C) long  qtd_QSslSocket_writeData_nativepointerchar_long(void* __this_nativeId,
 const (char*) data0,
 long len1);
private extern(C) void  qtd_QSslSocket_addDefaultCaCertificate_QSslCertificate(void* certificate0);
private extern(C) void  qtd_QSslSocket_addDefaultCaCertificates_QList(void* certificates0);
private extern(C) bool  qtd_QSslSocket_addDefaultCaCertificates_string_EncodingFormat_PatternSyntax(string path0,
 int format1,
 int syntax2);
private extern(C) void  qtd_QSslSocket_defaultCaCertificates(void* __d_return_value);
private extern(C) void  qtd_QSslSocket_defaultCiphers(void* __d_return_value);
private extern(C) void  qtd_QSslSocket_setDefaultCaCertificates_QList(void* certificates0);
private extern(C) void  qtd_QSslSocket_setDefaultCiphers_QList(void* ciphers0);
private extern(C) void  qtd_QSslSocket_supportedCiphers(void* __d_return_value);
private extern(C) bool  qtd_QSslSocket_supportsSsl();
private extern(C) void  qtd_QSslSocket_systemCaCertificates(void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSslSocket_initCallBacks(void* virtuals);

extern(C) void static_init_QSslSocket() {
    qtd_QSslSocket_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QSslSocket_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QSslSocket_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QSslSocket_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QSslSocket_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        //d_object.readyRead_emit();
}*/
/*private extern(C) void qtd_QSslSocket_connected_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        //d_object.connected_emit();
}*/
/*private extern(C) void qtd_QSslSocket_disconnected_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        //d_object.disconnected_emit();
}*/
/*private extern(C) void qtd_QSslSocket_error_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        auto arg__1 = *(cast(QAbstractSocket.SocketError*)args[1]);
        //d_object.error_emit(arg__1);
}*/
/*private extern(C) void qtd_QSslSocket_hostFound_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        //d_object.hostFound_emit();
}*/
/*private extern(C) void qtd_QSslSocket_proxyAuthenticationRequired_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        scope proxy0 = new QNetworkProxy(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope authenticator1 = new QAuthenticator(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.proxyAuthenticationRequired_emit(proxy0, authenticator1);
}*/
/*private extern(C) void qtd_QSslSocket_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        auto arg__1 = *(cast(QAbstractSocket.SocketState*)args[1]);
        //d_object.stateChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QSslSocket_encrypted_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        //d_object.encrypted_emit();
}*/
/*private extern(C) void qtd_QSslSocket_encryptedBytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        auto totalBytes0 = *(cast(long*)args[1]);
        //d_object.encryptedBytesWritten_emit(totalBytes0);
}*/
/*private extern(C) void qtd_QSslSocket_modeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        auto newMode0 = *(cast(QSslSocket.SslMode*)args[1]);
        //d_object.modeChanged_emit(newMode0);
}*/
/*private extern(C) void qtd_QSslSocket_peerVerifyError_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        scope error0 = new QSslError(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.peerVerifyError_emit(error0);
}*/
/*private extern(C) void qtd_QSslSocket_sslErrors_handle(void* dId, void** args) {
        auto d_object = cast(QSslSocket) dId;
        QList!(QSslError) errors0;
        qtd_qt_network_QSslError_fromcpp_QList(args[1], &errors0);

        //d_object.sslErrors_emit(errors0);
}*/

extern(C) QMetaObjectNative* qtd_QSslSocket_staticMetaObject();

extern(C) void qtd_QSslSocket_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSslSocket_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
