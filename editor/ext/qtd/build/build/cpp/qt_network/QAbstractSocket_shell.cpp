#include <QVariant>
#include <qabstractsocket.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qvariant.h>

#include "QAbstractSocket_shell.h"
#include <iostream>
#include <qabstractsocket.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QAbstractSocketEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractSocketEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_createEntity(void *nativeId, void* dId)
{
    new QAbstractSocketEntity((QObject*)nativeId, dId);
}

QAbstractSocket_QtDShell::QAbstractSocket_QtDShell(void *d_ptr, QAbstractSocket::SocketType  socketType0, QObject*  parent1)
    : QAbstractSocket(socketType0, parent1),
      QObjectLink(this, d_ptr)
{
}

QAbstractSocket_QtDShell::~QAbstractSocket_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractSocket_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractSocket::metaObject();
}

int QAbstractSocket_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractSocket::qt_metacall(_c, _id, _a);
}

int QAbstractSocket_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractSocket::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractSocket_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, bool, QIODevice_atEnd_const_dispatch, (void *dId))
bool  QAbstractSocket_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
qint64  QAbstractSocket_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
qint64  QAbstractSocket_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
bool  QAbstractSocket_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSocket_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QIODevice_close_dispatch, (void *dId))
void QAbstractSocket_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSocket_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QAbstractSocket_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractSocket_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_isSequential_const_dispatch, (void *dId))
bool  QAbstractSocket_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int mode0))
bool  QAbstractSocket_QtDShell::open(QIODevice::OpenMode  mode0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )mode0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_pos_const_dispatch, (void *dId))
qint64  QAbstractSocket_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QAbstractSocket_QtDShell::readData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QAbstractSocket_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_reset_dispatch, (void *dId))
bool  QAbstractSocket_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 pos0))
bool  QAbstractSocket_QtDShell::seek(qint64  pos0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )pos0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_size_const_dispatch, (void *dId))
qint64  QAbstractSocket_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSocket_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
bool  QAbstractSocket_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
bool  QAbstractSocket_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
qint64  QAbstractSocket_QtDShell::writeData(const char*  data0, qint64  len1)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )len1);
}

QTD_FUNC_DECL(NETWORK, void, QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch, (void *dId, const unsigned short* hostName0, int hostName0_size, unsigned short port1, int mode2))
QTD_FUNC(NETWORK, QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch)
void QAbstractSocket_QtDShell::connectToHostImplementation(const QString&  hostName0, unsigned short  port1, QIODevice::OpenMode  mode2)
{
    qtd_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch(QObjectLink::getLink(this)->dId, hostName0.utf16(), hostName0.size(), (unsigned short )port1, (QIODevice::OpenMode )mode2);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch = (qtd_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QAbstractSocket_QtDShell::__public_connectToHostImplementation(const QString&  hostName0, unsigned short  port1, int  mode2)
{
    QAbstractSocket::connectToHostImplementation((const QString& )hostName0, (unsigned short )port1, (QIODevice::OpenMode )mode2);
}

void QAbstractSocket_QtDShell::__public_disconnectFromHostImplementation()
{
    QAbstractSocket::disconnectFromHostImplementation();
}

QObject*  QAbstractSocket_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAbstractSocket_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QAbstractSocket_QtDShell::__public_setLocalAddress(const QHostAddress&  address0)
{
    QAbstractSocket::setLocalAddress((const QHostAddress& )address0);
}

void QAbstractSocket_QtDShell::__public_setLocalPort(unsigned short  port0)
{
    QAbstractSocket::setLocalPort((unsigned short )port0);
}

void QAbstractSocket_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QAbstractSocket_QtDShell::__public_setPeerAddress(const QHostAddress&  address0)
{
    QAbstractSocket::setPeerAddress((const QHostAddress& )address0);
}

void QAbstractSocket_QtDShell::__public_setPeerName(const QString&  name0)
{
    QAbstractSocket::setPeerName((const QString& )name0);
}

void QAbstractSocket_QtDShell::__public_setPeerPort(unsigned short  port0)
{
    QAbstractSocket::setPeerPort((unsigned short )port0);
}

void QAbstractSocket_QtDShell::__public_setSocketError(int  socketError0)
{
    QAbstractSocket::setSocketError((QAbstractSocket::SocketError )socketError0);
}

void QAbstractSocket_QtDShell::__public_setSocketState(int  state0)
{
    QAbstractSocket::setSocketState((QAbstractSocket::SocketState )state0);
}

void QAbstractSocket_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QAbstractSocket_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QAbstractSocket_QtDShell::__public_connected()
{
    QAbstractSocket::connected();
}

void QAbstractSocket_QtDShell::__public_disconnected()
{
    QAbstractSocket::disconnected();
}

void QAbstractSocket_QtDShell::__public_error(int  arg__1)
{
    QAbstractSocket::error((QAbstractSocket::SocketError )arg__1);
}

void QAbstractSocket_QtDShell::__public_hostFound()
{
    QAbstractSocket::hostFound();
}

void QAbstractSocket_QtDShell::__public_proxyAuthenticationRequired(const QNetworkProxy&  proxy0, QAuthenticator*  authenticator1)
{
    QAbstractSocket::proxyAuthenticationRequired((const QNetworkProxy& )proxy0, (QAuthenticator* )authenticator1);
}

void QAbstractSocket_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QAbstractSocket_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

void QAbstractSocket_QtDShell::__public_stateChanged(int  arg__1)
{
    QAbstractSocket::stateChanged((QAbstractSocket::SocketState )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
bool  QAbstractSocket_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QAbstractSocket_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QAbstractSocket_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QAbstractSocket_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::canReadLine();
    } else {
        return canReadLine();
    }
}

void QAbstractSocket_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QAbstractSocket_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QAbstractSocket::close();
    } else {
        close();
    }
}

void QAbstractSocket_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QAbstractSocket_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QAbstractSocket_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QAbstractSocket_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::isSequential();
    } else {
        return isSequential();
    }
}

bool  QAbstractSocket_QtDShell::__override_open(int  mode0, bool static_call)
{
    if (static_call) {
        return QIODevice::open((QIODevice::OpenMode )mode0);
    } else {
        return open((QIODevice::OpenMode )mode0);
    }
}

qint64  QAbstractSocket_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QIODevice::pos();
    } else {
        return pos();
    }
}

qint64  QAbstractSocket_QtDShell::__override_readData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::readData((char* )data0, (qint64 )maxlen1);
    } else {
        return readData((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QAbstractSocket_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QAbstractSocket_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QAbstractSocket_QtDShell::__override_seek(qint64  pos0, bool static_call)
{
    if (static_call) {
        return QIODevice::seek((qint64 )pos0);
    } else {
        return seek((qint64 )pos0);
    }
}

qint64  QAbstractSocket_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QIODevice::size();
    } else {
        return size();
    }
}

void QAbstractSocket_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QAbstractSocket_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QAbstractSocket_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QAbstractSocket_QtDShell::__override_writeData(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::writeData((const char* )data0, (qint64 )len1);
    } else {
        return writeData((const char* )data0, (qint64 )len1);
    }
}

// QAbstractSocket::connected()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_connected
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_connected();

}

// QAbstractSocket::disconnected()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_disconnected
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_disconnected();

}

// QAbstractSocket::error(QAbstractSocket::SocketError arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_error_SocketError
(void* __this_nativeId,
 int arg__1)
{
    QAbstractSocket::SocketError __qt_arg__1 = (QAbstractSocket::SocketError) arg__1;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_error((QAbstractSocket::SocketError )__qt_arg__1);

}

// QAbstractSocket::hostFound()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_hostFound
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_hostFound();

}

// QAbstractSocket::proxyAuthenticationRequired(const QNetworkProxy & proxy, QAuthenticator * authenticator)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_proxyAuthenticationRequired_QNetworkProxy_nativepointerQAuthenticator
(void* __this_nativeId,
 void* proxy0,
 void* authenticator1)
{
    const QNetworkProxy&  __qt_proxy0 = (const QNetworkProxy& ) *(QNetworkProxy *)proxy0;
    QAuthenticator*  __qt_authenticator1 = (QAuthenticator* ) authenticator1;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_proxyAuthenticationRequired((const QNetworkProxy& )__qt_proxy0, (QAuthenticator* )__qt_authenticator1);

}

// QAbstractSocket::stateChanged(QAbstractSocket::SocketState arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_stateChanged_SocketState
(void* __this_nativeId,
 int arg__1)
{
    QAbstractSocket::SocketState __qt_arg__1 = (QAbstractSocket::SocketState) arg__1;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_stateChanged((QAbstractSocket::SocketState )__qt_arg__1);

}

// ---externC---
// QAbstractSocket::QAbstractSocket(QAbstractSocket::SocketType socketType, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSocket_QAbstractSocket_SocketType_QObject
(void *d_ptr,
 int socketType0,
 void* parent1)
{
    QAbstractSocket::SocketType __qt_socketType0 = (QAbstractSocket::SocketType) socketType0;
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QAbstractSocket_QtDShell *__qt_this = new QAbstractSocket_QtDShell(d_ptr, (QAbstractSocket::SocketType )__qt_socketType0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QAbstractSocket::abort()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_abort
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->abort();

}

// QAbstractSocket::connectToHost(const QHostAddress & address, unsigned short port, QFlags<QIODevice::OpenModeFlag> mode)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_connectToHost_QHostAddress_ushort_OpenMode
(void* __this_nativeId,
 void* address0,
 unsigned short port1,
 int mode2)
{
    const QHostAddress&  __qt_address0 = (const QHostAddress& ) *(QHostAddress *)address0;
    QFlags<QIODevice::OpenModeFlag> __qt_mode2 = (QFlags<QIODevice::OpenModeFlag>) mode2;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->connectToHost((const QHostAddress& )__qt_address0, (unsigned short )port1, (QIODevice::OpenMode )__qt_mode2);

}

// QAbstractSocket::connectToHost(const QString & hostName, unsigned short port, QFlags<QIODevice::OpenModeFlag> mode)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_connectToHost_string_ushort_OpenMode
(void* __this_nativeId,
 DArray hostName0,
 unsigned short port1,
 int mode2)
{
    QString __qt_hostName0 = QString::fromUtf8((const char *)hostName0.ptr, hostName0.length);
    QFlags<QIODevice::OpenModeFlag> __qt_mode2 = (QFlags<QIODevice::OpenModeFlag>) mode2;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->connectToHost((const QString& )__qt_hostName0, (unsigned short )port1, (QIODevice::OpenMode )__qt_mode2);

}

// QAbstractSocket::connectToHostImplementation(const QString & hostName, unsigned short port, QFlags<QIODevice::OpenModeFlag> mode)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode
(void* __this_nativeId,
 DArray hostName0,
 unsigned short port1,
 int mode2)
{
    QString __qt_hostName0 = QString::fromUtf8((const char *)hostName0.ptr, hostName0.length);
    QFlags<QIODevice::OpenModeFlag> __qt_mode2 = (QFlags<QIODevice::OpenModeFlag>) mode2;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_connectToHostImplementation((const QString& )__qt_hostName0, (unsigned short )port1, (QIODevice::OpenMode )__qt_mode2);

}

// QAbstractSocket::disconnectFromHost()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_disconnectFromHost
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->disconnectFromHost();

}

// QAbstractSocket::disconnectFromHostImplementation()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_disconnectFromHostImplementation
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_disconnectFromHostImplementation();

}

// QAbstractSocket::error() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSocket_error__const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::flush()
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSocket_flush
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->flush();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSocket_isValid_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::localAddress() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSocket_localAddress_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    QHostAddress  __qt_return_value = __qt_this->localAddress();

    void* __d_return_value = (void*) new QHostAddress(__qt_return_value);

    return __d_return_value;
}

// QAbstractSocket::localPort() const
QTD_EXTERN QTD_EXPORT unsigned short qtd_QAbstractSocket_localPort_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    unsigned short  __qt_return_value = __qt_this->localPort();

    unsigned short __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::peerAddress() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSocket_peerAddress_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    QHostAddress  __qt_return_value = __qt_this->peerAddress();

    void* __d_return_value = (void*) new QHostAddress(__qt_return_value);

    return __d_return_value;
}

// QAbstractSocket::peerName() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_peerName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->peerName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractSocket::peerPort() const
QTD_EXTERN QTD_EXPORT unsigned short qtd_QAbstractSocket_peerPort_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    unsigned short  __qt_return_value = __qt_this->peerPort();

    unsigned short __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::proxy() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSocket_proxy_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    QNetworkProxy  __qt_return_value = __qt_this->proxy();

    void* __d_return_value = (void*) new QNetworkProxy(__qt_return_value);

    return __d_return_value;
}

// QAbstractSocket::readBufferSize() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractSocket_readBufferSize_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->readBufferSize();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::setLocalAddress(const QHostAddress & address)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_setLocalAddress_QHostAddress
(void* __this_nativeId,
 void* address0)
{
    const QHostAddress&  __qt_address0 = (const QHostAddress& ) *(QHostAddress *)address0;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_setLocalAddress((const QHostAddress& )__qt_address0);

}

// QAbstractSocket::setLocalPort(unsigned short port)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_setLocalPort_ushort
(void* __this_nativeId,
 unsigned short port0)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_setLocalPort((unsigned short )port0);

}

// QAbstractSocket::setPeerAddress(const QHostAddress & address)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_setPeerAddress_QHostAddress
(void* __this_nativeId,
 void* address0)
{
    const QHostAddress&  __qt_address0 = (const QHostAddress& ) *(QHostAddress *)address0;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_setPeerAddress((const QHostAddress& )__qt_address0);

}

// QAbstractSocket::setPeerName(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_setPeerName_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_setPeerName((const QString& )__qt_name0);

}

// QAbstractSocket::setPeerPort(unsigned short port)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_setPeerPort_ushort
(void* __this_nativeId,
 unsigned short port0)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_setPeerPort((unsigned short )port0);

}

// QAbstractSocket::setProxy(const QNetworkProxy & networkProxy)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_setProxy_QNetworkProxy
(void* __this_nativeId,
 void* networkProxy0)
{
    const QNetworkProxy&  __qt_networkProxy0 = (const QNetworkProxy& ) *(QNetworkProxy *)networkProxy0;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->setProxy((const QNetworkProxy& )__qt_networkProxy0);

}

// QAbstractSocket::setReadBufferSize(qint64 size)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_setReadBufferSize_long
(void* __this_nativeId,
 qint64 size0)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->setReadBufferSize((qint64 )size0);

}

// QAbstractSocket::setSocketDescriptor(int socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODevice::OpenModeFlag> openMode)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSocket_setSocketDescriptor_int_SocketState_OpenMode
(void* __this_nativeId,
 int socketDescriptor0,
 int state1,
 int openMode2)
{
    QAbstractSocket::SocketState __qt_state1 = (QAbstractSocket::SocketState) state1;
    QFlags<QIODevice::OpenModeFlag> __qt_openMode2 = (QFlags<QIODevice::OpenModeFlag>) openMode2;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setSocketDescriptor((int )socketDescriptor0, (QAbstractSocket::SocketState )__qt_state1, (QIODevice::OpenMode )__qt_openMode2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::setSocketError(QAbstractSocket::SocketError socketError)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_setSocketError_SocketError
(void* __this_nativeId,
 int socketError0)
{
    QAbstractSocket::SocketError __qt_socketError0 = (QAbstractSocket::SocketError) socketError0;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_setSocketError((QAbstractSocket::SocketError )__qt_socketError0);

}

// QAbstractSocket::setSocketState(QAbstractSocket::SocketState state)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_setSocketState_SocketState
(void* __this_nativeId,
 int state0)
{
    QAbstractSocket::SocketState __qt_state0 = (QAbstractSocket::SocketState) state0;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_setSocketState((QAbstractSocket::SocketState )__qt_state0);

}

// QAbstractSocket::socketDescriptor() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSocket_socketDescriptor_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->socketDescriptor();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::socketType() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSocket_socketType_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->socketType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::state() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSocket_state_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->state();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::waitForConnected(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSocket_waitForConnected_int
(void* __this_nativeId,
 int msecs0)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForConnected((int )msecs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::waitForDisconnected(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSocket_waitForDisconnected_int
(void* __this_nativeId,
 int msecs0)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForDisconnected((int )msecs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSocket_atEnd_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_atEnd(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::bytesAvailable() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractSocket_bytesAvailable_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_bytesAvailable(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::bytesToWrite() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractSocket_bytesToWrite_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_bytesToWrite(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::canReadLine() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSocket_canReadLine_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canReadLine(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::close()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSocket_close
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_close(__do_static_call);

}

// QAbstractSocket::isSequential() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSocket_isSequential_const
(void* __this_nativeId)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isSequential(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::readData(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractSocket_readData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readData((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::readLineData(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractSocket_readLineData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readLineData((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::waitForBytesWritten(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSocket_waitForBytesWritten_int
(void* __this_nativeId,
 int msecs0)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_waitForBytesWritten((int )msecs0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::waitForReadyRead(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSocket_waitForReadyRead_int
(void* __this_nativeId,
 int msecs0)
{
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_waitForReadyRead((int )msecs0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSocket::writeData(const char * data, qint64 len)
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractSocket_writeData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QAbstractSocket_QtDShell *__qt_this = (QAbstractSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_writeData((const char* )__qt_data0, (qint64 )len1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSocket_staticMetaObject() {
    return (void*)&QAbstractSocket::staticMetaObject;
}


