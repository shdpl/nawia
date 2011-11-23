#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpsocket.h>
#include <qvariant.h>

#include "QTcpSocket_shell.h"
#include <iostream>
#include <qtcpsocket.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QTcpSocketEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTcpSocketEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTcpSocket_createEntity(void *nativeId, void* dId)
{
    new QTcpSocketEntity((QObject*)nativeId, dId);
}

QTcpSocket_QtDShell::QTcpSocket_QtDShell(void *d_ptr, QObject*  parent0)
    : QTcpSocket(parent0),
      QObjectLink(this, d_ptr)
{
}

QTcpSocket_QtDShell::~QTcpSocket_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTcpSocket_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTcpSocket::metaObject();
}

int QTcpSocket_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTcpSocket::qt_metacall(_c, _id, _a);
}

int QTcpSocket_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTcpSocket::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTcpSocket_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTcpSocket_QtDShell *__qt_this = (QTcpSocket_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, bool, QIODevice_atEnd_const_dispatch, (void *dId))
bool  QTcpSocket_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
qint64  QTcpSocket_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
qint64  QTcpSocket_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
bool  QTcpSocket_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTcpSocket_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QIODevice_close_dispatch, (void *dId))
void QTcpSocket_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTcpSocket_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTcpSocket_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTcpSocket_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_isSequential_const_dispatch, (void *dId))
bool  QTcpSocket_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int mode0))
bool  QTcpSocket_QtDShell::open(QIODevice::OpenMode  mode0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )mode0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_pos_const_dispatch, (void *dId))
qint64  QTcpSocket_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QTcpSocket_QtDShell::readData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QTcpSocket_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_reset_dispatch, (void *dId))
bool  QTcpSocket_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 pos0))
bool  QTcpSocket_QtDShell::seek(qint64  pos0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )pos0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_size_const_dispatch, (void *dId))
qint64  QTcpSocket_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTcpSocket_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
bool  QTcpSocket_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
bool  QTcpSocket_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
qint64  QTcpSocket_QtDShell::writeData(const char*  data0, qint64  len1)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )len1);
}

QTD_FUNC_DECL(NETWORK, void, QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch, (void *dId, const unsigned short* hostName0, int hostName0_size, unsigned short port1, int mode2))
void QTcpSocket_QtDShell::connectToHostImplementation(const QString&  hostName0, unsigned short  port1, QIODevice::OpenMode  mode2)
{
    qtd_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch(QObjectLink::getLink(this)->dId, hostName0.utf16(), hostName0.size(), (unsigned short )port1, (QIODevice::OpenMode )mode2);
}

QTD_EXTERN QTD_EXPORT void qtd_QTcpSocket_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QTcpSocket_QtDShell::__public_connectToHostImplementation(const QString&  hostName0, unsigned short  port1, int  mode2)
{
    QAbstractSocket::connectToHostImplementation((const QString& )hostName0, (unsigned short )port1, (QIODevice::OpenMode )mode2);
}

void QTcpSocket_QtDShell::__public_disconnectFromHostImplementation()
{
    QAbstractSocket::disconnectFromHostImplementation();
}

QObject*  QTcpSocket_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTcpSocket_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QTcpSocket_QtDShell::__public_setLocalAddress(const QHostAddress&  address0)
{
    QAbstractSocket::setLocalAddress((const QHostAddress& )address0);
}

void QTcpSocket_QtDShell::__public_setLocalPort(unsigned short  port0)
{
    QAbstractSocket::setLocalPort((unsigned short )port0);
}

void QTcpSocket_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QTcpSocket_QtDShell::__public_setPeerAddress(const QHostAddress&  address0)
{
    QAbstractSocket::setPeerAddress((const QHostAddress& )address0);
}

void QTcpSocket_QtDShell::__public_setPeerName(const QString&  name0)
{
    QAbstractSocket::setPeerName((const QString& )name0);
}

void QTcpSocket_QtDShell::__public_setPeerPort(unsigned short  port0)
{
    QAbstractSocket::setPeerPort((unsigned short )port0);
}

void QTcpSocket_QtDShell::__public_setSocketError(int  socketError0)
{
    QAbstractSocket::setSocketError((QAbstractSocket::SocketError )socketError0);
}

void QTcpSocket_QtDShell::__public_setSocketState(int  state0)
{
    QAbstractSocket::setSocketState((QAbstractSocket::SocketState )state0);
}

void QTcpSocket_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QTcpSocket_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QTcpSocket_QtDShell::__public_connected()
{
    QAbstractSocket::connected();
}

void QTcpSocket_QtDShell::__public_disconnected()
{
    QAbstractSocket::disconnected();
}

void QTcpSocket_QtDShell::__public_error(int  arg__1)
{
    QAbstractSocket::error((QAbstractSocket::SocketError )arg__1);
}

void QTcpSocket_QtDShell::__public_hostFound()
{
    QAbstractSocket::hostFound();
}

void QTcpSocket_QtDShell::__public_proxyAuthenticationRequired(const QNetworkProxy&  proxy0, QAuthenticator*  authenticator1)
{
    QAbstractSocket::proxyAuthenticationRequired((const QNetworkProxy& )proxy0, (QAuthenticator* )authenticator1);
}

void QTcpSocket_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QTcpSocket_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

void QTcpSocket_QtDShell::__public_stateChanged(int  arg__1)
{
    QAbstractSocket::stateChanged((QAbstractSocket::SocketState )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
bool  QTcpSocket_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QTcpSocket_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QTcpSocket_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QTcpSocket_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::canReadLine();
    } else {
        return canReadLine();
    }
}

void QTcpSocket_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTcpSocket_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QAbstractSocket::close();
    } else {
        close();
    }
}

void QTcpSocket_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTcpSocket_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTcpSocket_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QTcpSocket_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::isSequential();
    } else {
        return isSequential();
    }
}

bool  QTcpSocket_QtDShell::__override_open(int  mode0, bool static_call)
{
    if (static_call) {
        return QIODevice::open((QIODevice::OpenMode )mode0);
    } else {
        return open((QIODevice::OpenMode )mode0);
    }
}

qint64  QTcpSocket_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QIODevice::pos();
    } else {
        return pos();
    }
}

qint64  QTcpSocket_QtDShell::__override_readData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::readData((char* )data0, (qint64 )maxlen1);
    } else {
        return readData((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QTcpSocket_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QTcpSocket_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QTcpSocket_QtDShell::__override_seek(qint64  pos0, bool static_call)
{
    if (static_call) {
        return QIODevice::seek((qint64 )pos0);
    } else {
        return seek((qint64 )pos0);
    }
}

qint64  QTcpSocket_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QIODevice::size();
    } else {
        return size();
    }
}

void QTcpSocket_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QTcpSocket_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QTcpSocket_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QTcpSocket_QtDShell::__override_writeData(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::writeData((const char* )data0, (qint64 )len1);
    } else {
        return writeData((const char* )data0, (qint64 )len1);
    }
}

// ---externC---
// QTcpSocket::QTcpSocket(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTcpSocket_QTcpSocket_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QTcpSocket_QtDShell *__qt_this = new QTcpSocket_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTcpSocket_staticMetaObject() {
    return (void*)&QTcpSocket::staticMetaObject;
}


