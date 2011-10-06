#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qsslcertificate.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qsslsocket.h>
#include <qvariant.h>

#include "QSslSocket_shell.h"
#include <iostream>
#include <qsslsocket.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QSslSocketEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSslSocketEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_createEntity(void *nativeId, void* dId)
{
    new QSslSocketEntity((QObject*)nativeId, dId);
}

QSslSocket_QtDShell::QSslSocket_QtDShell(void *d_ptr, QObject*  parent0)
    : QSslSocket(parent0),
      QObjectLink(this, d_ptr)
{
}

QSslSocket_QtDShell::~QSslSocket_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSslSocket_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSslSocket::metaObject();
}

int QSslSocket_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSslSocket::qt_metacall(_c, _id, _a);
}

int QSslSocket_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSslSocket::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSslSocket_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, bool, QIODevice_atEnd_const_dispatch, (void *dId))
bool  QSslSocket_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
qint64  QSslSocket_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
qint64  QSslSocket_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
bool  QSslSocket_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSslSocket_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QIODevice_close_dispatch, (void *dId))
void QSslSocket_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSslSocket_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QSslSocket_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSslSocket_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_isSequential_const_dispatch, (void *dId))
bool  QSslSocket_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int mode0))
bool  QSslSocket_QtDShell::open(QIODevice::OpenMode  mode0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )mode0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_pos_const_dispatch, (void *dId))
qint64  QSslSocket_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QSslSocket_QtDShell::readData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QSslSocket_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_reset_dispatch, (void *dId))
bool  QSslSocket_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 pos0))
bool  QSslSocket_QtDShell::seek(qint64  pos0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )pos0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_size_const_dispatch, (void *dId))
qint64  QSslSocket_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QSslSocket_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
bool  QSslSocket_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
bool  QSslSocket_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
qint64  QSslSocket_QtDShell::writeData(const char*  data0, qint64  len1)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )len1);
}

QTD_FUNC_DECL(NETWORK, void, QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch, (void *dId, const unsigned short* hostName0, int hostName0_size, unsigned short port1, int openMode2))
void QSslSocket_QtDShell::connectToHostImplementation(const QString&  hostName0, unsigned short  port1, QIODevice::OpenMode  openMode2)
{
    qtd_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch(QObjectLink::getLink(this)->dId, hostName0.utf16(), hostName0.size(), (unsigned short )port1, (QIODevice::OpenMode )openMode2);
}

QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QSslSocket_QtDShell::__public_connectToHostImplementation(const QString&  hostName0, unsigned short  port1, int  openMode2)
{
    QSslSocket::connectToHostImplementation((const QString& )hostName0, (unsigned short )port1, (QIODevice::OpenMode )openMode2);
}

void QSslSocket_QtDShell::__public_disconnectFromHostImplementation()
{
    QSslSocket::disconnectFromHostImplementation();
}

QObject*  QSslSocket_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QSslSocket_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QSslSocket_QtDShell::__public_setLocalAddress(const QHostAddress&  address0)
{
    QAbstractSocket::setLocalAddress((const QHostAddress& )address0);
}

void QSslSocket_QtDShell::__public_setLocalPort(unsigned short  port0)
{
    QAbstractSocket::setLocalPort((unsigned short )port0);
}

void QSslSocket_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QSslSocket_QtDShell::__public_setPeerAddress(const QHostAddress&  address0)
{
    QAbstractSocket::setPeerAddress((const QHostAddress& )address0);
}

void QSslSocket_QtDShell::__public_setPeerName(const QString&  name0)
{
    QAbstractSocket::setPeerName((const QString& )name0);
}

void QSslSocket_QtDShell::__public_setPeerPort(unsigned short  port0)
{
    QAbstractSocket::setPeerPort((unsigned short )port0);
}

void QSslSocket_QtDShell::__public_setSocketError(int  socketError0)
{
    QAbstractSocket::setSocketError((QAbstractSocket::SocketError )socketError0);
}

void QSslSocket_QtDShell::__public_setSocketState(int  state0)
{
    QAbstractSocket::setSocketState((QAbstractSocket::SocketState )state0);
}

void QSslSocket_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QSslSocket_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QSslSocket_QtDShell::__public_connected()
{
    QAbstractSocket::connected();
}

void QSslSocket_QtDShell::__public_disconnected()
{
    QAbstractSocket::disconnected();
}

void QSslSocket_QtDShell::__public_encrypted()
{
    QSslSocket::encrypted();
}

void QSslSocket_QtDShell::__public_encryptedBytesWritten(qint64  totalBytes0)
{
    QSslSocket::encryptedBytesWritten((qint64 )totalBytes0);
}

void QSslSocket_QtDShell::__public_error(int  arg__1)
{
    QAbstractSocket::error((QAbstractSocket::SocketError )arg__1);
}

void QSslSocket_QtDShell::__public_hostFound()
{
    QAbstractSocket::hostFound();
}

void QSslSocket_QtDShell::__public_modeChanged(int  newMode0)
{
    QSslSocket::modeChanged((QSslSocket::SslMode )newMode0);
}

void QSslSocket_QtDShell::__public_peerVerifyError(const QSslError&  error0)
{
    QSslSocket::peerVerifyError((const QSslError& )error0);
}

void QSslSocket_QtDShell::__public_proxyAuthenticationRequired(const QNetworkProxy&  proxy0, QAuthenticator*  authenticator1)
{
    QAbstractSocket::proxyAuthenticationRequired((const QNetworkProxy& )proxy0, (QAuthenticator* )authenticator1);
}

void QSslSocket_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QSslSocket_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

void QSslSocket_QtDShell::__public_sslErrors(const QList<QSslError >&  errors0)
{
    QSslSocket::sslErrors((const QList<QSslError >& )errors0);
}

void QSslSocket_QtDShell::__public_stateChanged(int  arg__1)
{
    QAbstractSocket::stateChanged((QAbstractSocket::SocketState )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
bool  QSslSocket_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QSslSocket::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QSslSocket_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QSslSocket::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QSslSocket_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QSslSocket::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QSslSocket_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QSslSocket::canReadLine();
    } else {
        return canReadLine();
    }
}

void QSslSocket_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QSslSocket_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QSslSocket::close();
    } else {
        close();
    }
}

void QSslSocket_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QSslSocket_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QSslSocket_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QSslSocket_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::isSequential();
    } else {
        return isSequential();
    }
}

bool  QSslSocket_QtDShell::__override_open(int  mode0, bool static_call)
{
    if (static_call) {
        return QIODevice::open((QIODevice::OpenMode )mode0);
    } else {
        return open((QIODevice::OpenMode )mode0);
    }
}

qint64  QSslSocket_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QIODevice::pos();
    } else {
        return pos();
    }
}

qint64  QSslSocket_QtDShell::__override_readData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QSslSocket::readData((char* )data0, (qint64 )maxlen1);
    } else {
        return readData((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QSslSocket_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QSslSocket_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QSslSocket_QtDShell::__override_seek(qint64  pos0, bool static_call)
{
    if (static_call) {
        return QIODevice::seek((qint64 )pos0);
    } else {
        return seek((qint64 )pos0);
    }
}

qint64  QSslSocket_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QIODevice::size();
    } else {
        return size();
    }
}

void QSslSocket_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QSslSocket_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QSslSocket::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QSslSocket_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QSslSocket::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QSslSocket_QtDShell::__override_writeData(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QSslSocket::writeData((const char* )data0, (qint64 )len1);
    } else {
        return writeData((const char* )data0, (qint64 )len1);
    }
}

// QSslSocket::encrypted()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_encrypted
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_encrypted();

}

// QSslSocket::encryptedBytesWritten(qint64 totalBytes)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_encryptedBytesWritten_long
(void* __this_nativeId,
 qint64 totalBytes0)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_encryptedBytesWritten((qint64 )totalBytes0);

}

// QSslSocket::modeChanged(QSslSocket::SslMode newMode)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_modeChanged_SslMode
(void* __this_nativeId,
 int newMode0)
{
    QSslSocket::SslMode __qt_newMode0 = (QSslSocket::SslMode) newMode0;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_modeChanged((QSslSocket::SslMode )__qt_newMode0);

}

// QSslSocket::peerVerifyError(const QSslError & error)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_peerVerifyError_QSslError
(void* __this_nativeId,
 void* error0)
{
    const QSslError&  __qt_error0 = (const QSslError& ) *(QSslError *)error0;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_peerVerifyError((const QSslError& )__qt_error0);

}

// QSslSocket::sslErrors(const QList<QSslError > & errors)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_sslErrors_QList
(void* __this_nativeId,
 void* errors0)
{
QList<QSslError > __qt_errors0 = (*(QList<QSslError > *)errors0);
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_sslErrors((const QList<QSslError >& )__qt_errors0);

}

// ---externC---
// QSslSocket::QSslSocket(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSslSocket_QSslSocket_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QSslSocket_QtDShell *__qt_this = new QSslSocket_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QSslSocket::abort()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_abort
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->abort();

}

// QSslSocket::addCaCertificate(const QSslCertificate & certificate)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_addCaCertificate_QSslCertificate
(void* __this_nativeId,
 void* certificate0)
{
    const QSslCertificate&  __qt_certificate0 = (const QSslCertificate& ) *(QSslCertificate *)certificate0;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->addCaCertificate((const QSslCertificate& )__qt_certificate0);

}

// QSslSocket::addCaCertificates(const QList<QSslCertificate > & certificates)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_addCaCertificates_QList
(void* __this_nativeId,
 void* certificates0)
{
QList<QSslCertificate > __qt_certificates0 = (*(QList<QSslCertificate > *)certificates0);
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->addCaCertificates((const QList<QSslCertificate >& )__qt_certificates0);

}

// QSslSocket::addCaCertificates(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax)
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_addCaCertificates_string_EncodingFormat_PatternSyntax
(void* __this_nativeId,
 DArray path0,
 int format1,
 int syntax2)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QSsl::EncodingFormat __qt_format1 = (QSsl::EncodingFormat) format1;
    QRegExp::PatternSyntax __qt_syntax2 = (QRegExp::PatternSyntax) syntax2;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->addCaCertificates((const QString& )__qt_path0, (QSsl::EncodingFormat )__qt_format1, (QRegExp::PatternSyntax )__qt_syntax2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::caCertificates() const
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_caCertificates_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    QList<QSslCertificate >  __qt_return_value = __qt_this->caCertificates();

QList<QSslCertificate > &__d_return_value_tmp = (*(QList<QSslCertificate > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslSocket::ciphers() const
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_ciphers_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    QList<QSslCipher >  __qt_return_value = __qt_this->ciphers();

QList<QSslCipher > &__d_return_value_tmp = (*(QList<QSslCipher > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslSocket::connectToHostEncrypted(const QString & hostName, unsigned short port, QFlags<QIODevice::OpenModeFlag> mode)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_connectToHostEncrypted_string_ushort_OpenMode
(void* __this_nativeId,
 DArray hostName0,
 unsigned short port1,
 int mode2)
{
    QString __qt_hostName0 = QString::fromUtf8((const char *)hostName0.ptr, hostName0.length);
    QFlags<QIODevice::OpenModeFlag> __qt_mode2 = (QFlags<QIODevice::OpenModeFlag>) mode2;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->connectToHostEncrypted((const QString& )__qt_hostName0, (unsigned short )port1, (QIODevice::OpenMode )__qt_mode2);

}

// QSslSocket::connectToHostEncrypted(const QString & hostName, unsigned short port, const QString & sslPeerName, QFlags<QIODevice::OpenModeFlag> mode)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_connectToHostEncrypted_string_ushort_string_OpenMode
(void* __this_nativeId,
 DArray hostName0,
 unsigned short port1,
 DArray sslPeerName2,
 int mode3)
{
    QString __qt_hostName0 = QString::fromUtf8((const char *)hostName0.ptr, hostName0.length);
    QString __qt_sslPeerName2 = QString::fromUtf8((const char *)sslPeerName2.ptr, sslPeerName2.length);
    QFlags<QIODevice::OpenModeFlag> __qt_mode3 = (QFlags<QIODevice::OpenModeFlag>) mode3;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->connectToHostEncrypted((const QString& )__qt_hostName0, (unsigned short )port1, (const QString& )__qt_sslPeerName2, (QIODevice::OpenMode )__qt_mode3);

}

// QSslSocket::connectToHostImplementation(const QString & hostName, unsigned short port, QFlags<QIODevice::OpenModeFlag> openMode)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_connectToHostImplementation_string_ushort_OpenMode
(void* __this_nativeId,
 DArray hostName0,
 unsigned short port1,
 int openMode2)
{
    QString __qt_hostName0 = QString::fromUtf8((const char *)hostName0.ptr, hostName0.length);
    QFlags<QIODevice::OpenModeFlag> __qt_openMode2 = (QFlags<QIODevice::OpenModeFlag>) openMode2;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_connectToHostImplementation((const QString& )__qt_hostName0, (unsigned short )port1, (QIODevice::OpenMode )__qt_openMode2);

}

// QSslSocket::disconnectFromHostImplementation()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_disconnectFromHostImplementation
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_disconnectFromHostImplementation();

}

// QSslSocket::encryptedBytesAvailable() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QSslSocket_encryptedBytesAvailable_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->encryptedBytesAvailable();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::encryptedBytesToWrite() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QSslSocket_encryptedBytesToWrite_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->encryptedBytesToWrite();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::flush()
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_flush
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->flush();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::ignoreSslErrors()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_ignoreSslErrors
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->ignoreSslErrors();

}

// QSslSocket::ignoreSslErrors(const QList<QSslError > & errors)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_ignoreSslErrors_QList
(void* __this_nativeId,
 void* errors0)
{
QList<QSslError > __qt_errors0 = (*(QList<QSslError > *)errors0);
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->ignoreSslErrors((const QList<QSslError >& )__qt_errors0);

}

// QSslSocket::isEncrypted() const
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_isEncrypted_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEncrypted();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::localCertificate() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslSocket_localCertificate_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    QSslCertificate  __qt_return_value = __qt_this->localCertificate();

    void* __d_return_value = (void*) new QSslCertificate(__qt_return_value);

    return __d_return_value;
}

// QSslSocket::mode() const
QTD_EXTERN QTD_EXPORT int qtd_QSslSocket_mode_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->mode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::peerCertificate() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslSocket_peerCertificate_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    QSslCertificate  __qt_return_value = __qt_this->peerCertificate();

    void* __d_return_value = (void*) new QSslCertificate(__qt_return_value);

    return __d_return_value;
}

// QSslSocket::peerCertificateChain() const
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_peerCertificateChain_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    QList<QSslCertificate >  __qt_return_value = __qt_this->peerCertificateChain();

QList<QSslCertificate > &__d_return_value_tmp = (*(QList<QSslCertificate > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslSocket::peerVerifyDepth() const
QTD_EXTERN QTD_EXPORT int qtd_QSslSocket_peerVerifyDepth_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->peerVerifyDepth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::peerVerifyMode() const
QTD_EXTERN QTD_EXPORT int qtd_QSslSocket_peerVerifyMode_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->peerVerifyMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::privateKey() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslSocket_privateKey_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    QSslKey  __qt_return_value = __qt_this->privateKey();

    void* __d_return_value = (void*) new QSslKey(__qt_return_value);

    return __d_return_value;
}

// QSslSocket::protocol() const
QTD_EXTERN QTD_EXPORT int qtd_QSslSocket_protocol_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->protocol();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::sessionCipher() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslSocket_sessionCipher_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    QSslCipher  __qt_return_value = __qt_this->sessionCipher();

    void* __d_return_value = (void*) new QSslCipher(__qt_return_value);

    return __d_return_value;
}

// QSslSocket::setCaCertificates(const QList<QSslCertificate > & certificates)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setCaCertificates_QList
(void* __this_nativeId,
 void* certificates0)
{
QList<QSslCertificate > __qt_certificates0 = (*(QList<QSslCertificate > *)certificates0);
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setCaCertificates((const QList<QSslCertificate >& )__qt_certificates0);

}

// QSslSocket::setCiphers(const QList<QSslCipher > & ciphers)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setCiphers_QList
(void* __this_nativeId,
 void* ciphers0)
{
QList<QSslCipher > __qt_ciphers0 = (*(QList<QSslCipher > *)ciphers0);
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setCiphers((const QList<QSslCipher >& )__qt_ciphers0);

}

// QSslSocket::setCiphers(const QString & ciphers)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setCiphers_string
(void* __this_nativeId,
 DArray ciphers0)
{
    QString __qt_ciphers0 = QString::fromUtf8((const char *)ciphers0.ptr, ciphers0.length);
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setCiphers((const QString& )__qt_ciphers0);

}

// QSslSocket::setLocalCertificate(const QSslCertificate & certificate)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setLocalCertificate_QSslCertificate
(void* __this_nativeId,
 void* certificate0)
{
    const QSslCertificate&  __qt_certificate0 = (const QSslCertificate& ) *(QSslCertificate *)certificate0;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setLocalCertificate((const QSslCertificate& )__qt_certificate0);

}

// QSslSocket::setLocalCertificate(const QString & fileName, QSsl::EncodingFormat format)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setLocalCertificate_string_EncodingFormat
(void* __this_nativeId,
 DArray fileName0,
 int format1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QSsl::EncodingFormat __qt_format1 = (QSsl::EncodingFormat) format1;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setLocalCertificate((const QString& )__qt_fileName0, (QSsl::EncodingFormat )__qt_format1);

}

// QSslSocket::setPeerVerifyDepth(int depth)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setPeerVerifyDepth_int
(void* __this_nativeId,
 int depth0)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setPeerVerifyDepth((int )depth0);

}

// QSslSocket::setPeerVerifyMode(QSslSocket::PeerVerifyMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setPeerVerifyMode_PeerVerifyMode
(void* __this_nativeId,
 int mode0)
{
    QSslSocket::PeerVerifyMode __qt_mode0 = (QSslSocket::PeerVerifyMode) mode0;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setPeerVerifyMode((QSslSocket::PeerVerifyMode )__qt_mode0);

}

// QSslSocket::setPrivateKey(const QSslKey & key)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setPrivateKey_QSslKey
(void* __this_nativeId,
 void* key0)
{
    const QSslKey&  __qt_key0 = (const QSslKey& ) *(QSslKey *)key0;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setPrivateKey((const QSslKey& )__qt_key0);

}

// QSslSocket::setPrivateKey(const QString & fileName, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, const QByteArray & passPhrase)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setPrivateKey_string_KeyAlgorithm_EncodingFormat_QByteArray
(void* __this_nativeId,
 DArray fileName0,
 int algorithm1,
 int format2,
 void* passPhrase3)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QSsl::KeyAlgorithm __qt_algorithm1 = (QSsl::KeyAlgorithm) algorithm1;
    QSsl::EncodingFormat __qt_format2 = (QSsl::EncodingFormat) format2;
    const QByteArray&  __qt_passPhrase3 = (const QByteArray& ) *(QByteArray *)passPhrase3;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setPrivateKey((const QString& )__qt_fileName0, (QSsl::KeyAlgorithm )__qt_algorithm1, (QSsl::EncodingFormat )__qt_format2, (const QByteArray& )__qt_passPhrase3);

}

// QSslSocket::setProtocol(QSsl::SslProtocol protocol)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setProtocol_SslProtocol
(void* __this_nativeId,
 int protocol0)
{
    QSsl::SslProtocol __qt_protocol0 = (QSsl::SslProtocol) protocol0;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setProtocol((QSsl::SslProtocol )__qt_protocol0);

}

// QSslSocket::setReadBufferSize(qint64 size)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setReadBufferSize_long
(void* __this_nativeId,
 qint64 size0)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setReadBufferSize((qint64 )size0);

}

// QSslSocket::setSocketDescriptor(int socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODevice::OpenModeFlag> openMode)
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_setSocketDescriptor_int_SocketState_OpenMode
(void* __this_nativeId,
 int socketDescriptor0,
 int state1,
 int openMode2)
{
    QAbstractSocket::SocketState __qt_state1 = (QAbstractSocket::SocketState) state1;
    QFlags<QIODevice::OpenModeFlag> __qt_openMode2 = (QFlags<QIODevice::OpenModeFlag>) openMode2;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setSocketDescriptor((int )socketDescriptor0, (QAbstractSocket::SocketState )__qt_state1, (QIODevice::OpenMode )__qt_openMode2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::setSslConfiguration(const QSslConfiguration & config)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setSslConfiguration_QSslConfiguration
(void* __this_nativeId,
 void* config0)
{
    const QSslConfiguration&  __qt_config0 = (const QSslConfiguration& ) *(QSslConfiguration *)config0;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->setSslConfiguration((const QSslConfiguration& )__qt_config0);

}

// QSslSocket::sslConfiguration() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslSocket_sslConfiguration_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    QSslConfiguration  __qt_return_value = __qt_this->sslConfiguration();

    void* __d_return_value = (void*) new QSslConfiguration(__qt_return_value);

    return __d_return_value;
}

// QSslSocket::sslErrors() const
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_error__const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    QList<QSslError >  __qt_return_value = __qt_this->sslErrors();

QList<QSslError > &__d_return_value_tmp = (*(QList<QSslError > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslSocket::startClientEncryption()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_startClientEncryption
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->startClientEncryption();

}

// QSslSocket::startServerEncryption()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_startServerEncryption
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    __qt_this->startServerEncryption();

}

// QSslSocket::waitForConnected(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_waitForConnected_int
(void* __this_nativeId,
 int msecs0)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForConnected((int )msecs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::waitForDisconnected(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_waitForDisconnected_int
(void* __this_nativeId,
 int msecs0)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForDisconnected((int )msecs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::waitForEncrypted(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_waitForEncrypted_int
(void* __this_nativeId,
 int msecs0)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForEncrypted((int )msecs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_atEnd_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_atEnd(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::bytesAvailable() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QSslSocket_bytesAvailable_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_bytesAvailable(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::bytesToWrite() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QSslSocket_bytesToWrite_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_bytesToWrite(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::canReadLine() const
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_canReadLine_const
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canReadLine(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::close()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_close
(void* __this_nativeId)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_close(__do_static_call);

}

// QSslSocket::readData(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QSslSocket_readData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readData((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::waitForBytesWritten(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_waitForBytesWritten_int
(void* __this_nativeId,
 int msecs0)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_waitForBytesWritten((int )msecs0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::waitForReadyRead(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_waitForReadyRead_int
(void* __this_nativeId,
 int msecs0)
{
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_waitForReadyRead((int )msecs0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::writeData(const char * data, qint64 len)
QTD_EXTERN QTD_EXPORT qint64 qtd_QSslSocket_writeData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QSslSocket_QtDShell *__qt_this = (QSslSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_writeData((const char* )__qt_data0, (qint64 )len1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::addDefaultCaCertificate(const QSslCertificate & certificate)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_addDefaultCaCertificate_QSslCertificate
(void* certificate0)
{
    const QSslCertificate&  __qt_certificate0 = (const QSslCertificate& ) *(QSslCertificate *)certificate0;
    QSslSocket_QtDShell::addDefaultCaCertificate((const QSslCertificate& )__qt_certificate0);

}

// QSslSocket::addDefaultCaCertificates(const QList<QSslCertificate > & certificates)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_addDefaultCaCertificates_QList
(void* certificates0)
{
QList<QSslCertificate > __qt_certificates0 = (*(QList<QSslCertificate > *)certificates0);
    QSslSocket_QtDShell::addDefaultCaCertificates((const QList<QSslCertificate >& )__qt_certificates0);

}

// QSslSocket::addDefaultCaCertificates(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax)
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_addDefaultCaCertificates_string_EncodingFormat_PatternSyntax
(DArray path0,
 int format1,
 int syntax2)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QSsl::EncodingFormat __qt_format1 = (QSsl::EncodingFormat) format1;
    QRegExp::PatternSyntax __qt_syntax2 = (QRegExp::PatternSyntax) syntax2;
    bool  __qt_return_value = QSslSocket_QtDShell::addDefaultCaCertificates((const QString& )__qt_path0, (QSsl::EncodingFormat )__qt_format1, (QRegExp::PatternSyntax )__qt_syntax2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::defaultCaCertificates()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_defaultCaCertificates
(void* __d_return_value)
{
    QList<QSslCertificate >  __qt_return_value = QSslSocket_QtDShell::defaultCaCertificates();

QList<QSslCertificate > &__d_return_value_tmp = (*(QList<QSslCertificate > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslSocket::defaultCiphers()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_defaultCiphers
(void* __d_return_value)
{
    QList<QSslCipher >  __qt_return_value = QSslSocket_QtDShell::defaultCiphers();

QList<QSslCipher > &__d_return_value_tmp = (*(QList<QSslCipher > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslSocket::setDefaultCaCertificates(const QList<QSslCertificate > & certificates)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setDefaultCaCertificates_QList
(void* certificates0)
{
QList<QSslCertificate > __qt_certificates0 = (*(QList<QSslCertificate > *)certificates0);
    QSslSocket_QtDShell::setDefaultCaCertificates((const QList<QSslCertificate >& )__qt_certificates0);

}

// QSslSocket::setDefaultCiphers(const QList<QSslCipher > & ciphers)
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_setDefaultCiphers_QList
(void* ciphers0)
{
QList<QSslCipher > __qt_ciphers0 = (*(QList<QSslCipher > *)ciphers0);
    QSslSocket_QtDShell::setDefaultCiphers((const QList<QSslCipher >& )__qt_ciphers0);

}

// QSslSocket::supportedCiphers()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_supportedCiphers
(void* __d_return_value)
{
    QList<QSslCipher >  __qt_return_value = QSslSocket_QtDShell::supportedCiphers();

QList<QSslCipher > &__d_return_value_tmp = (*(QList<QSslCipher > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslSocket::supportsSsl()
QTD_EXTERN QTD_EXPORT bool qtd_QSslSocket_supportsSsl
()
{
    bool  __qt_return_value = QSslSocket_QtDShell::supportsSsl();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslSocket::systemCaCertificates()
QTD_EXTERN QTD_EXPORT void qtd_QSslSocket_systemCaCertificates
(void* __d_return_value)
{
    QList<QSslCertificate >  __qt_return_value = QSslSocket_QtDShell::systemCaCertificates();

QList<QSslCertificate > &__d_return_value_tmp = (*(QList<QSslCertificate > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSslSocket_staticMetaObject() {
    return (void*)&QSslSocket::staticMetaObject;
}


