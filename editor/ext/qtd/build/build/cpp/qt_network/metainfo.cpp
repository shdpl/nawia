#include "metainfo.h"
#include <QMetaType>
#include <QString>
#include <QLatin1String>
#include <QHash>
#include <QReadWriteLock>
#include <QReadLocker>
#include <QWriteLocker>
#include <qtjambi_cache.h>
#include <qtjambi_core.h>

#include <qabstractnetworkcache.h>
#include <qabstractsocket.h>
#include <qauthenticator.h>
#include <qftp.h>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qhttp.h>
#include <qhttp.h>
#include <qhttp.h>
#include <qhttp.h>
#include <qhostaddress.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkinterface.h>
#include <qabstractnetworkcache.h>
#include <qnetworkcookie.h>
#include <qnetworkcookiejar.h>
#include <qnetworkdiskcache.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkproxy.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qssl.h>
#include <qsslcertificate.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qsslsocket.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qudpsocket.h>
#include <qurlinfo.h>

void destructor_qt_network_QHttpHeader_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QHttpHeader *>(ptr);
}

void destructor_qt_network_QNetworkProxyFactory_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QNetworkProxyFactory *>(ptr);
}

static int sns_count = 61;
static const char *qtNames[] = {
    "QAbstractNetworkCache::clear()",
    "QAbstractSocket::connectToHostImplementation(QString,quint16,QIODevice::OpenMode)",
    "QAbstractSocket::connectToHostImplementation(QString,quint16)",
    "QAbstractSocket::connected()",
    "QAbstractSocket::disconnectFromHostImplementation()",
    "QAbstractSocket::disconnected()",
    "QAbstractSocket::error(QAbstractSocket::SocketError)",
    "QAbstractSocket::hostFound()",
    "QAbstractSocket::proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)",
    "QAbstractSocket::stateChanged(QAbstractSocket::SocketState)",
    "QFtp::abort()",
    "QFtp::commandFinished(int,bool)",
    "QFtp::commandStarted(int)",
    "QFtp::dataTransferProgress(qint64,qint64)",
    "QFtp::done(bool)",
    "QFtp::listInfo(QUrlInfo)",
    "QFtp::rawCommandReply(int,QString)",
    "QFtp::readyRead()",
    "QFtp::stateChanged(int)",
    "QHttp::abort()",
    "QHttp::authenticationRequired(QString,quint16,QAuthenticator*)",
    "QHttp::dataReadProgress(int,int)",
    "QHttp::dataSendProgress(int,int)",
    "QHttp::done(bool)",
    "QHttp::ignoreSslErrors()",
    "QHttp::proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)",
    "QHttp::readyRead(QHttpResponseHeader)",
    "QHttp::requestFinished(int,bool)",
    "QHttp::requestStarted(int)",
    "QHttp::responseHeaderReceived(QHttpResponseHeader)",
    "QHttp::sslErrors(QList<QSslError>)",
    "QHttp::stateChanged(int)",
    "QLocalServer::newConnection()",
    "QLocalSocket::connected()",
    "QLocalSocket::disconnected()",
    "QLocalSocket::error(QLocalSocket::LocalSocketError)",
    "QLocalSocket::stateChanged(QLocalSocket::LocalSocketState)",
    "QNetworkAccessManager::authenticationRequired(QNetworkReply*,QAuthenticator*)",
    "QNetworkAccessManager::finished(QNetworkReply*)",
    "QNetworkAccessManager::networkSessionConnected()",
    "QNetworkAccessManager::proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)",
    "QNetworkAccessManager::sslErrors(QNetworkReply*,QList<QSslError>)",
    "QNetworkDiskCache::clear()",
    "QNetworkReply::downloadProgress(qint64,qint64)",
    "QNetworkReply::error(QNetworkReply::NetworkError)",
    "QNetworkReply::finished()",
    "QNetworkReply::ignoreSslErrors()",
    "QNetworkReply::metaDataChanged()",
    "QNetworkReply::sslErrors(QList<QSslError>)",
    "QNetworkReply::uploadProgress(qint64,qint64)",
    "QSslSocket::connectToHostImplementation(QString,quint16,QIODevice::OpenMode)",
    "QSslSocket::disconnectFromHostImplementation()",
    "QSslSocket::encrypted()",
    "QSslSocket::encryptedBytesWritten(qint64)",
    "QSslSocket::ignoreSslErrors()",
    "QSslSocket::modeChanged(QSslSocket::SslMode)",
    "QSslSocket::peerVerifyError(QSslError)",
    "QSslSocket::sslErrors(QList<QSslError>)",
    "QSslSocket::startClientEncryption()",
    "QSslSocket::startServerEncryption()",
    "QTcpServer::newConnection()",
};

static const char *javaFunctionNames[] = {
    "qt.network.QAbstractNetworkCache.clear()",
    "qt.network.QAbstractSocket.connectToHostImplementation(string, ushort, int = 3)",
    "qt.network.QAbstractSocket.connectToHostImplementation(string, ushort)",
    "qt.network.QAbstractSocket.connected()",
    "qt.network.QAbstractSocket.disconnectFromHostImplementation()",
    "qt.network.QAbstractSocket.disconnected()",
    "qt.network.QAbstractSocket.error(QAbstractSocket.SocketError)",
    "qt.network.QAbstractSocket.hostFound()",
    "qt.network.QAbstractSocket.proxyAuthenticationRequired(const(QNetworkProxy), QAuthenticator)",
    "qt.network.QAbstractSocket.stateChanged(QAbstractSocket.SocketState)",
    "qt.network.QFtp.abort()",
    "qt.network.QFtp.commandFinished(int, bool)",
    "qt.network.QFtp.commandStarted(int)",
    "qt.network.QFtp.dataTransferProgress(long, long)",
    "qt.network.QFtp.done(bool)",
    "qt.network.QFtp.listInfo(const(QUrlInfo))",
    "qt.network.QFtp.rawCommandReply(int, string)",
    "qt.network.QFtp.readyRead()",
    "qt.network.QFtp.stateChanged(int)",
    "qt.network.QHttp.abort()",
    "qt.network.QHttp.authenticationRequired(string, ushort, QAuthenticator)",
    "qt.network.QHttp.dataReadProgress(int, int)",
    "qt.network.QHttp.dataSendProgress(int, int)",
    "qt.network.QHttp.done(bool)",
    "qt.network.QHttp.ignoreSslErrors()",
    "qt.network.QHttp.proxyAuthenticationRequired(const(QNetworkProxy), QAuthenticator)",
    "qt.network.QHttp.readyRead(const(QHttpResponseHeader))",
    "qt.network.QHttp.requestFinished(int, bool)",
    "qt.network.QHttp.requestStarted(int)",
    "qt.network.QHttp.responseHeaderReceived(const(QHttpResponseHeader))",
    "qt.network.QHttp.sslErrors(QList!(QSslError))",
    "qt.network.QHttp.stateChanged(int)",
    "qt.network.QLocalServer.newConnection()",
    "qt.network.QLocalSocket.connected()",
    "qt.network.QLocalSocket.disconnected()",
    "qt.network.QLocalSocket.error(QLocalSocket.LocalSocketError)",
    "qt.network.QLocalSocket.stateChanged(QLocalSocket.LocalSocketState)",
    "qt.network.QNetworkAccessManager.authenticationRequired(QNetworkReply, QAuthenticator)",
    "qt.network.QNetworkAccessManager.finished(QNetworkReply)",
    "qt.network.QNetworkAccessManager.networkSessionConnected()",
    "qt.network.QNetworkAccessManager.proxyAuthenticationRequired(const(QNetworkProxy), QAuthenticator)",
    "qt.network.QNetworkAccessManager.sslErrors(QNetworkReply, QList!(QSslError))",
    "qt.network.QNetworkDiskCache.clear()",
    "qt.network.QNetworkReply.downloadProgress(long, long)",
    "qt.network.QNetworkReply.error(QNetworkReply.NetworkError)",
    "qt.network.QNetworkReply.finished()",
    "qt.network.QNetworkReply.ignoreSslErrors()",
    "qt.network.QNetworkReply.metaDataChanged()",
    "qt.network.QNetworkReply.sslErrors(QList!(QSslError))",
    "qt.network.QNetworkReply.uploadProgress(long, long)",
    "qt.network.QSslSocket.connectToHostImplementation(string, ushort, int)",
    "qt.network.QSslSocket.disconnectFromHostImplementation()",
    "qt.network.QSslSocket.encrypted()",
    "qt.network.QSslSocket.encryptedBytesWritten(long)",
    "qt.network.QSslSocket.ignoreSslErrors()",
    "qt.network.QSslSocket.modeChanged(QSslSocket.SslMode)",
    "qt.network.QSslSocket.peerVerifyError(const(QSslError))",
    "qt.network.QSslSocket.sslErrors(QList!(QSslError))",
    "qt.network.QSslSocket.startClientEncryption()",
    "qt.network.QSslSocket.startServerEncryption()",
    "qt.network.QTcpServer.newConnection()",
};

static const char *javaObjectNames[] = {
    "qt.network.QAbstractNetworkCache.clear()",
    "qt.network.QAbstractSocket.connectToHostImplementation(string, ushort, int = 3)",
    "qt.network.QAbstractSocket.connectToHostImplementation(string, ushort)",
    "qt.network.QAbstractSocket.connected",
    "qt.network.QAbstractSocket.disconnectFromHostImplementation()",
    "qt.network.QAbstractSocket.disconnected",
    "qt.network.QAbstractSocket.error",
    "qt.network.QAbstractSocket.hostFound",
    "qt.network.QAbstractSocket.proxyAuthenticationRequired",
    "qt.network.QAbstractSocket.stateChanged",
    "qt.network.QFtp.abort()",
    "qt.network.QFtp.commandFinished",
    "qt.network.QFtp.commandStarted",
    "qt.network.QFtp.dataTransferProgress",
    "qt.network.QFtp.done",
    "qt.network.QFtp.listInfo",
    "qt.network.QFtp.rawCommandReply",
    "qt.network.QFtp.readyRead",
    "qt.network.QFtp.stateChanged",
    "qt.network.QHttp.abort()",
    "qt.network.QHttp.authenticationRequired",
    "qt.network.QHttp.dataReadProgress",
    "qt.network.QHttp.dataSendProgress",
    "qt.network.QHttp.done",
    "qt.network.QHttp.ignoreSslErrors()",
    "qt.network.QHttp.proxyAuthenticationRequired",
    "qt.network.QHttp.readyRead",
    "qt.network.QHttp.requestFinished",
    "qt.network.QHttp.requestStarted",
    "qt.network.QHttp.responseHeaderReceived",
    "qt.network.QHttp.sslErrors",
    "qt.network.QHttp.stateChanged",
    "qt.network.QLocalServer.newConnection",
    "qt.network.QLocalSocket.connected",
    "qt.network.QLocalSocket.disconnected",
    "qt.network.QLocalSocket.error",
    "qt.network.QLocalSocket.stateChanged",
    "qt.network.QNetworkAccessManager.authenticationRequired",
    "qt.network.QNetworkAccessManager.finished",
    "qt.network.QNetworkAccessManager.networkSessionConnected",
    "qt.network.QNetworkAccessManager.proxyAuthenticationRequired",
    "qt.network.QNetworkAccessManager.sslErrors",
    "qt.network.QNetworkDiskCache.clear()",
    "qt.network.QNetworkReply.downloadProgress",
    "qt.network.QNetworkReply.error",
    "qt.network.QNetworkReply.finished",
    "qt.network.QNetworkReply.ignoreSslErrors()",
    "qt.network.QNetworkReply.metaDataChanged",
    "qt.network.QNetworkReply.sslErrors",
    "qt.network.QNetworkReply.uploadProgress",
    "qt.network.QSslSocket.connectToHostImplementation(string, ushort, int)",
    "qt.network.QSslSocket.disconnectFromHostImplementation()",
    "qt.network.QSslSocket.encrypted",
    "qt.network.QSslSocket.encryptedBytesWritten",
    "qt.network.QSslSocket.ignoreSslErrors()",
    "qt.network.QSslSocket.modeChanged",
    "qt.network.QSslSocket.peerVerifyError",
    "qt.network.QSslSocket.sslErrors",
    "qt.network.QSslSocket.startClientEncryption()",
    "qt.network.QSslSocket.startServerEncryption()",
    "qt.network.QTcpServer.newConnection",
};

static const char *javaSignatures[] = {
    "()V",
    "(Ljava/lang/string;Lushort;Lqt/core/QIODevice$OpenMode;)V",
    "(Ljava/lang/string;Lushort;)V",
    "()V",
    "()V",
    "()V",
    "(Lqt/network/QAbstractSocket$SocketError;)V",
    "()V",
    "(Lqt/network/QNetworkProxy;Lcom/trolltech/qt/QNativePointer;)V",
    "(Lqt/network/QAbstractSocket$SocketState;)V",
    "()V",
    "(ILbool;)V",
    "(I)V",
    "(JJ)V",
    "(Lbool;)V",
    "(Lqt/network/QUrlInfo;)V",
    "(ILjava/lang/string;)V",
    "()V",
    "(I)V",
    "()V",
    "(Ljava/lang/string;Lushort;Lcom/trolltech/qt/QNativePointer;)V",
    "(II)V",
    "(II)V",
    "(Lbool;)V",
    "()V",
    "(Lqt/network/QNetworkProxy;Lcom/trolltech/qt/QNativePointer;)V",
    "(Lqt/network/QHttpResponseHeader;)V",
    "(ILbool;)V",
    "(I)V",
    "(Lqt/network/QHttpResponseHeader;)V",
    "(Lqt/core/QList;)V",
    "(I)V",
    "()V",
    "()V",
    "()V",
    "(Lqt/network/QLocalSocket$LocalSocketError;)V",
    "(Lqt/network/QLocalSocket$LocalSocketState;)V",
    "(Lqt/network/QNetworkReply;Lcom/trolltech/qt/QNativePointer;)V",
    "(Lqt/network/QNetworkReply;)V",
    "()V",
    "(Lqt/network/QNetworkProxy;Lcom/trolltech/qt/QNativePointer;)V",
    "(Lqt/network/QNetworkReply;Lqt/core/QList;)V",
    "()V",
    "(JJ)V",
    "(Lqt/network/QNetworkReply$NetworkError;)V",
    "()V",
    "()V",
    "()V",
    "(Lqt/core/QList;)V",
    "(JJ)V",
    "(Ljava/lang/string;Lushort;Lqt/core/QIODevice$OpenMode;)V",
    "()V",
    "()V",
    "(J)V",
    "()V",
    "(Lqt/network/QSslSocket$SslMode;)V",
    "(Lqt/network/QSslError;)V",
    "(Lqt/core/QList;)V",
    "()V",
    "()V",
    "()V"
};

static int enum_count = 40;
static const char *enumJavaNames[] = {
    "qt/network/QSslSocket$SslMode",
    "qt/network/QNetworkInterface$InterfaceFlag",
    "qt/network/QNetworkReply$NetworkError",
    "qt/network/QFtp$State",
    "qt/network/QUdpSocket$BindFlag",
    "qt/network/QUdpSocket$BindFlag",
    "qt/network/QNetworkRequest$CacheLoadControl",
    "qt/network/QSsl$AlternateNameEntryType",
    "qt/network/QNetworkProxy$Capability",
    "qt/network/QHostAddress$SpecialAddress",
    "qt/network/QSslError$SslError",
    "qt/network/QAbstractSocket$NetworkLayerProtocol",
    "qt/network/QAbstractSocket$SocketError",
    "qt/network/QFtp$Command",
    "qt/network/QFtp$TransferMode",
    "qt/network/QSslSocket$PeerVerifyMode",
    "qt/network/QNetworkInterface$InterfaceFlag",
    "qt/network/QHttp$ConnectionMode",
    "qt/network/QLocalSocket$LocalSocketState",
    "qt/network/QUrlInfo$PermissionSpec",
    "qt/network/QHostInfo$HostInfoError",
    "qt/network/QNetworkRequest$Attribute",
    "qt/network/QSsl$KeyAlgorithm",
    "qt/network/QNetworkProxy$Capability",
    "qt/network/QSsl$KeyType",
    "qt/network/QFtp$TransferType",
    "qt/network/QHttp$Error",
    "qt/network/QSslCertificate$SubjectInfo",
    "qt/network/QSsl$SslProtocol",
    "qt/network/QHttp$State",
    "qt/network/QNetworkRequest$KnownHeaders",
    "qt/network/QNetworkProxyQuery$QueryType",
    "qt/network/QAbstractSocket$SocketType",
    "qt/network/QNetworkProxy$ProxyType",
    "qt/network/QNetworkCookie$RawForm",
    "qt/network/QSsl$EncodingFormat",
    "qt/network/QAbstractSocket$SocketState",
    "qt/network/QNetworkAccessManager$Operation",
    "qt/network/QFtp$Error",
    "qt/network/QLocalSocket$LocalSocketError",
};

static const char *enumCppNames[] = {
    "QSslSocket::SslMode",
    "QNetworkInterface::InterfaceFlag",
    "QNetworkReply::NetworkError",
    "QFtp::State",
    "QUdpSocket::BindFlag",
    "QUdpSocket::BindMode",
    "QNetworkRequest::CacheLoadControl",
    "QSsl::AlternateNameEntryType",
    "QNetworkProxy::Capability",
    "QHostAddress::SpecialAddress",
    "QSslError::SslError",
    "QAbstractSocket::NetworkLayerProtocol",
    "QAbstractSocket::SocketError",
    "QFtp::Command",
    "QFtp::TransferMode",
    "QSslSocket::PeerVerifyMode",
    "QNetworkInterface::InterfaceFlags",
    "QHttp::ConnectionMode",
    "QLocalSocket::LocalSocketState",
    "QUrlInfo::PermissionSpec",
    "QHostInfo::HostInfoError",
    "QNetworkRequest::Attribute",
    "QSsl::KeyAlgorithm",
    "QNetworkProxy::Capabilities",
    "QSsl::KeyType",
    "QFtp::TransferType",
    "QHttp::Error",
    "QSslCertificate::SubjectInfo",
    "QSsl::SslProtocol",
    "QHttp::State",
    "QNetworkRequest::KnownHeaders",
    "QNetworkProxyQuery::QueryType",
    "QAbstractSocket::SocketType",
    "QNetworkProxy::ProxyType",
    "QNetworkCookie::RawForm",
    "QSsl::EncodingFormat",
    "QAbstractSocket::SocketState",
    "QNetworkAccessManager::Operation",
    "QFtp::Error",
    "QLocalSocket::LocalSocketError"
};

void __metainfo_init_qt_network()
{
    registerQtToJava("unsigned char", "ubyte");
    registerQtToJava("int", "int");
    registerJavaToQt("int", "int");
    registerQtToJava("QString", "java/lang/string");
    registerJavaToQt("java/lang/string", "QString");
    registerQtToJava("QStringRef", "java/lang/string");
    registerQtToJava("QLatin1String", "java/lang/string");
    registerQtToJava("GLint", "int");
    registerQtToJava("ulong", "ulong");
    registerQtToJava("QBool", "bool");
    registerQtToJava("QChar", "char");
    registerJavaToQt("char", "QChar");
    registerQtToJava("signed char", "byte");
    registerQtToJava("float", "float");
    registerJavaToQt("float", "float");
    registerQtToJava("double", "double");
    registerJavaToQt("double", "double");
    registerQtToJava("signed int", "int");
    registerQtToJava("unsigned int", "uint");
    registerQtToJava("Qt::HANDLE", "long");
    registerQtToJava("size_t", "size_t");
    registerJavaToQt("size_t", "size_t");
    qRegisterMetaType<size_t>("size_t");
    registerQtToJava("long", "int");
    registerQtToJava("quintptr", "quintptr");
    registerQtToJava("bool", "bool");
    registerJavaToQt("bool", "bool");
    registerQtToJava("qint64", "long");
    registerQtToJava("signed long", "int");
    registerQtToJava("unsigned short", "ushort");
    registerQtToJava("char", "char");
    registerJavaToQt("char", "char");
    registerQtToJava("unsigned __int64", "long");
    registerQtToJava("short", "short");
    registerJavaToQt("short", "short");
    registerQtToJava("QXmlStreamStringRef", "java/lang/string");
    registerQtToJava("uint", "uint");
    registerJavaToQt("uint", "uint");
    registerQtToJava("WId", "long");
    registerQtToJava("unsigned long long", "ulong");
    registerQtToJava("QLatin1Char", "char");
    registerQtToJava("jobject", "java.lang.Object");
    registerJavaToQt("java.lang.Object", "jobject");
    qRegisterMetaType<jobject>("jobject");
    registerQtToJava("__int64", "long");
    registerQtToJava("QVariant", "QVariant");
    registerJavaToQt("QVariant", "QVariant");
    registerQtToJava("GLenum", "int");
    registerQtToJava("QByteRef", "byte");
    registerQtToJava("unsigned long", "uint");
    registerQtToJava("signed short", "short");
    registerQtToJava("GLuint", "int");
    registerQtToJava("QBitRef", "bool");
    for (int i=0;i<sns_count; ++i) {
        registerQtToJava(qtNames[i], javaFunctionNames[i]);
        if (getQtName(javaObjectNames[i]).length() < QByteArray(qtNames[i]).size())
            registerJavaToQt(javaObjectNames[i], qtNames[i]);
        registerJavaSignature(qtNames[i], javaSignatures[i]);
    }
    for (int i=0;i<enum_count; ++i) {
        registerQtToJava(enumCppNames[i], enumJavaNames[i]);
        registerJavaToQt(enumJavaNames[i], enumCppNames[i]);
    }
    registerQtToJava("QAbstractNetworkCache", "qt/network/QAbstractNetworkCache_ConcreteWrapper");
    registerJavaToQt("qt/network/QAbstractNetworkCache_ConcreteWrapper", "QAbstractNetworkCache");
    registerQtToJava("QAbstractSocket", "qt/network/QAbstractSocket");
    registerJavaToQt("qt/network/QAbstractSocket", "QAbstractSocket");
    registerQtToJava("QAuthenticator", "qt/network/QAuthenticator");
    registerJavaToQt("qt/network/QAuthenticator", "QAuthenticator");
    qRegisterMetaType<QAuthenticator>("QAuthenticator");
    registerQtToJava("QFtp", "qt/network/QFtp");
    registerJavaToQt("qt/network/QFtp", "QFtp");
    registerQtToJava("QHostAddress", "qt/network/QHostAddress");
    registerJavaToQt("qt/network/QHostAddress", "QHostAddress");
    qRegisterMetaType<QHostAddress>("QHostAddress");
    registerQtToJava("QHostInfo", "qt/network/QHostInfo");
    registerJavaToQt("qt/network/QHostInfo", "QHostInfo");
    qRegisterMetaType<QHostInfo>("QHostInfo");
    registerQtToJava("QHttp", "qt/network/QHttp");
    registerJavaToQt("qt/network/QHttp", "QHttp");
    registerQtToJava("QHttpHeader", "qt/network/QHttpHeader_ConcreteWrapper");
    registerJavaToQt("qt/network/QHttpHeader_ConcreteWrapper", "QHttpHeader");
    registerDestructor("qt/network/QHttpHeader_ConcreteWrapper", destructor_qt_network_QHttpHeader_ConcreteWrapper);
    registerQtToJava("QHttpRequestHeader", "qt/network/QHttpRequestHeader");
    registerJavaToQt("qt/network/QHttpRequestHeader", "QHttpRequestHeader");
    qRegisterMetaType<QHttpRequestHeader>("QHttpRequestHeader");
    registerQtToJava("QHttpResponseHeader", "qt/network/QHttpResponseHeader");
    registerJavaToQt("qt/network/QHttpResponseHeader", "QHttpResponseHeader");
    qRegisterMetaType<QHttpResponseHeader>("QHttpResponseHeader");
    registerQtToJava("QIPv6Address", "qt/network/QIPv6Address");
    registerJavaToQt("qt/network/QIPv6Address", "QIPv6Address");
    qRegisterMetaType<QIPv6Address>("QIPv6Address");
    registerQtToJava("QLocalServer", "qt/network/QLocalServer");
    registerJavaToQt("qt/network/QLocalServer", "QLocalServer");
    registerQtToJava("QLocalSocket", "qt/network/QLocalSocket");
    registerJavaToQt("qt/network/QLocalSocket", "QLocalSocket");
    registerQtToJava("QNetworkAccessManager", "qt/network/QNetworkAccessManager");
    registerJavaToQt("qt/network/QNetworkAccessManager", "QNetworkAccessManager");
    registerQtToJava("QNetworkAddressEntry", "qt/network/QNetworkAddressEntry");
    registerJavaToQt("qt/network/QNetworkAddressEntry", "QNetworkAddressEntry");
    qRegisterMetaType<QNetworkAddressEntry>("QNetworkAddressEntry");
    registerQtToJava("QNetworkCacheMetaData", "qt/network/QNetworkCacheMetaData");
    registerJavaToQt("qt/network/QNetworkCacheMetaData", "QNetworkCacheMetaData");
    qRegisterMetaType<QNetworkCacheMetaData>("QNetworkCacheMetaData");
    registerQtToJava("QNetworkCookie", "qt/network/QNetworkCookie");
    registerJavaToQt("qt/network/QNetworkCookie", "QNetworkCookie");
    qRegisterMetaType<QNetworkCookie>("QNetworkCookie");
    registerQtToJava("QNetworkCookieJar", "qt/network/QNetworkCookieJar");
    registerJavaToQt("qt/network/QNetworkCookieJar", "QNetworkCookieJar");
    registerQtToJava("QNetworkDiskCache", "qt/network/QNetworkDiskCache");
    registerJavaToQt("qt/network/QNetworkDiskCache", "QNetworkDiskCache");
    registerQtToJava("QNetworkInterface", "qt/network/QNetworkInterface");
    registerJavaToQt("qt/network/QNetworkInterface", "QNetworkInterface");
    qRegisterMetaType<QNetworkInterface>("QNetworkInterface");
    registerQtToJava("QNetworkProxy", "qt/network/QNetworkProxy");
    registerJavaToQt("qt/network/QNetworkProxy", "QNetworkProxy");
    qRegisterMetaType<QNetworkProxy>("QNetworkProxy");
    registerQtToJava("QNetworkProxyFactory", "qt/network/QNetworkProxyFactory_ConcreteWrapper");
    registerJavaToQt("qt/network/QNetworkProxyFactory_ConcreteWrapper", "QNetworkProxyFactory");
    registerDestructor("qt/network/QNetworkProxyFactory_ConcreteWrapper", destructor_qt_network_QNetworkProxyFactory_ConcreteWrapper);
    registerQtToJava("QNetworkProxyQuery", "qt/network/QNetworkProxyQuery");
    registerJavaToQt("qt/network/QNetworkProxyQuery", "QNetworkProxyQuery");
    qRegisterMetaType<QNetworkProxyQuery>("QNetworkProxyQuery");
    registerQtToJava("QNetworkReply", "qt/network/QNetworkReply_ConcreteWrapper");
    registerJavaToQt("qt/network/QNetworkReply_ConcreteWrapper", "QNetworkReply");
    registerQtToJava("QNetworkRequest", "qt/network/QNetworkRequest");
    registerJavaToQt("qt/network/QNetworkRequest", "QNetworkRequest");
    qRegisterMetaType<QNetworkRequest>("QNetworkRequest");
    registerQtToJava("QSsl", "qt/network/QSsl");
    registerJavaToQt("qt/network/QSsl", "QSsl");
    registerQtToJava("QSslCertificate", "qt/network/QSslCertificate");
    registerJavaToQt("qt/network/QSslCertificate", "QSslCertificate");
    qRegisterMetaType<QSslCertificate>("QSslCertificate");
    registerQtToJava("QSslCipher", "qt/network/QSslCipher");
    registerJavaToQt("qt/network/QSslCipher", "QSslCipher");
    qRegisterMetaType<QSslCipher>("QSslCipher");
    registerQtToJava("QSslConfiguration", "qt/network/QSslConfiguration");
    registerJavaToQt("qt/network/QSslConfiguration", "QSslConfiguration");
    qRegisterMetaType<QSslConfiguration>("QSslConfiguration");
    registerQtToJava("QSslError", "qt/network/QSslError");
    registerJavaToQt("qt/network/QSslError", "QSslError");
    qRegisterMetaType<QSslError>("QSslError");
    registerQtToJava("QSslKey", "qt/network/QSslKey");
    registerJavaToQt("qt/network/QSslKey", "QSslKey");
    qRegisterMetaType<QSslKey>("QSslKey");
    registerQtToJava("QSslSocket", "qt/network/QSslSocket");
    registerJavaToQt("qt/network/QSslSocket", "QSslSocket");
    registerQtToJava("QTcpServer", "qt/network/QTcpServer");
    registerJavaToQt("qt/network/QTcpServer", "QTcpServer");
    registerQtToJava("QTcpSocket", "qt/network/QTcpSocket");
    registerJavaToQt("qt/network/QTcpSocket", "QTcpSocket");
    registerQtToJava("QUdpSocket", "qt/network/QUdpSocket");
    registerJavaToQt("qt/network/QUdpSocket", "QUdpSocket");
    registerQtToJava("QUrlInfo", "qt/network/QUrlInfo");
    registerJavaToQt("qt/network/QUrlInfo", "QUrlInfo");
    qRegisterMetaType<QUrlInfo>("QUrlInfo");
}

