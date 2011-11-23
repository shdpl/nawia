#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qudpsocket.h>
#include <qvariant.h>

#include "QUdpSocket_shell.h"
#include <iostream>
#include <qudpsocket.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QUdpSocketEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QUdpSocketEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QUdpSocket_createEntity(void *nativeId, void* dId)
{
    new QUdpSocketEntity((QObject*)nativeId, dId);
}

QUdpSocket_QtDShell::QUdpSocket_QtDShell(void *d_ptr, QObject*  parent0)
    : QUdpSocket(parent0),
      QObjectLink(this, d_ptr)
{
}

QUdpSocket_QtDShell::~QUdpSocket_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QUdpSocket_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QUdpSocket::metaObject();
}

int QUdpSocket_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QUdpSocket::qt_metacall(_c, _id, _a);
}

int QUdpSocket_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QUdpSocket::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QUdpSocket_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QUdpSocket_QtDShell *__qt_this = (QUdpSocket_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, bool, QIODevice_atEnd_const_dispatch, (void *dId))
bool  QUdpSocket_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
qint64  QUdpSocket_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
qint64  QUdpSocket_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
bool  QUdpSocket_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QUdpSocket_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QIODevice_close_dispatch, (void *dId))
void QUdpSocket_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QUdpSocket_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QUdpSocket_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QUdpSocket_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_isSequential_const_dispatch, (void *dId))
bool  QUdpSocket_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int mode0))
bool  QUdpSocket_QtDShell::open(QIODevice::OpenMode  mode0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )mode0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_pos_const_dispatch, (void *dId))
qint64  QUdpSocket_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QUdpSocket_QtDShell::readData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QUdpSocket_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_reset_dispatch, (void *dId))
bool  QUdpSocket_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 pos0))
bool  QUdpSocket_QtDShell::seek(qint64  pos0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )pos0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_size_const_dispatch, (void *dId))
qint64  QUdpSocket_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QUdpSocket_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
bool  QUdpSocket_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
bool  QUdpSocket_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
qint64  QUdpSocket_QtDShell::writeData(const char*  data0, qint64  len1)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )len1);
}

QTD_FUNC_DECL(NETWORK, void, QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch, (void *dId, const unsigned short* hostName0, int hostName0_size, unsigned short port1, int mode2))
void QUdpSocket_QtDShell::connectToHostImplementation(const QString&  hostName0, unsigned short  port1, QIODevice::OpenMode  mode2)
{
    qtd_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch(QObjectLink::getLink(this)->dId, hostName0.utf16(), hostName0.size(), (unsigned short )port1, (QIODevice::OpenMode )mode2);
}

QTD_EXTERN QTD_EXPORT void qtd_QUdpSocket_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QUdpSocket_QtDShell::__public_connectToHostImplementation(const QString&  hostName0, unsigned short  port1, int  mode2)
{
    QAbstractSocket::connectToHostImplementation((const QString& )hostName0, (unsigned short )port1, (QIODevice::OpenMode )mode2);
}

void QUdpSocket_QtDShell::__public_disconnectFromHostImplementation()
{
    QAbstractSocket::disconnectFromHostImplementation();
}

QObject*  QUdpSocket_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QUdpSocket_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QUdpSocket_QtDShell::__public_setLocalAddress(const QHostAddress&  address0)
{
    QAbstractSocket::setLocalAddress((const QHostAddress& )address0);
}

void QUdpSocket_QtDShell::__public_setLocalPort(unsigned short  port0)
{
    QAbstractSocket::setLocalPort((unsigned short )port0);
}

void QUdpSocket_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QUdpSocket_QtDShell::__public_setPeerAddress(const QHostAddress&  address0)
{
    QAbstractSocket::setPeerAddress((const QHostAddress& )address0);
}

void QUdpSocket_QtDShell::__public_setPeerName(const QString&  name0)
{
    QAbstractSocket::setPeerName((const QString& )name0);
}

void QUdpSocket_QtDShell::__public_setPeerPort(unsigned short  port0)
{
    QAbstractSocket::setPeerPort((unsigned short )port0);
}

void QUdpSocket_QtDShell::__public_setSocketError(int  socketError0)
{
    QAbstractSocket::setSocketError((QAbstractSocket::SocketError )socketError0);
}

void QUdpSocket_QtDShell::__public_setSocketState(int  state0)
{
    QAbstractSocket::setSocketState((QAbstractSocket::SocketState )state0);
}

void QUdpSocket_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QUdpSocket_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QUdpSocket_QtDShell::__public_connected()
{
    QAbstractSocket::connected();
}

void QUdpSocket_QtDShell::__public_disconnected()
{
    QAbstractSocket::disconnected();
}

void QUdpSocket_QtDShell::__public_error(int  arg__1)
{
    QAbstractSocket::error((QAbstractSocket::SocketError )arg__1);
}

void QUdpSocket_QtDShell::__public_hostFound()
{
    QAbstractSocket::hostFound();
}

void QUdpSocket_QtDShell::__public_proxyAuthenticationRequired(const QNetworkProxy&  proxy0, QAuthenticator*  authenticator1)
{
    QAbstractSocket::proxyAuthenticationRequired((const QNetworkProxy& )proxy0, (QAuthenticator* )authenticator1);
}

void QUdpSocket_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QUdpSocket_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

void QUdpSocket_QtDShell::__public_stateChanged(int  arg__1)
{
    QAbstractSocket::stateChanged((QAbstractSocket::SocketState )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
bool  QUdpSocket_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QUdpSocket_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QUdpSocket_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QUdpSocket_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::canReadLine();
    } else {
        return canReadLine();
    }
}

void QUdpSocket_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QUdpSocket_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QAbstractSocket::close();
    } else {
        close();
    }
}

void QUdpSocket_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QUdpSocket_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QUdpSocket_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QUdpSocket_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QAbstractSocket::isSequential();
    } else {
        return isSequential();
    }
}

bool  QUdpSocket_QtDShell::__override_open(int  mode0, bool static_call)
{
    if (static_call) {
        return QIODevice::open((QIODevice::OpenMode )mode0);
    } else {
        return open((QIODevice::OpenMode )mode0);
    }
}

qint64  QUdpSocket_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QIODevice::pos();
    } else {
        return pos();
    }
}

qint64  QUdpSocket_QtDShell::__override_readData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::readData((char* )data0, (qint64 )maxlen1);
    } else {
        return readData((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QUdpSocket_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QUdpSocket_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QUdpSocket_QtDShell::__override_seek(qint64  pos0, bool static_call)
{
    if (static_call) {
        return QIODevice::seek((qint64 )pos0);
    } else {
        return seek((qint64 )pos0);
    }
}

qint64  QUdpSocket_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QIODevice::size();
    } else {
        return size();
    }
}

void QUdpSocket_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QUdpSocket_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QUdpSocket_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QUdpSocket_QtDShell::__override_writeData(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QAbstractSocket::writeData((const char* )data0, (qint64 )len1);
    } else {
        return writeData((const char* )data0, (qint64 )len1);
    }
}

// ---externC---
// QUdpSocket::QUdpSocket(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QUdpSocket_QUdpSocket_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QUdpSocket_QtDShell *__qt_this = new QUdpSocket_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QUdpSocket::bind(const QHostAddress & address, unsigned short port)
QTD_EXTERN QTD_EXPORT bool qtd_QUdpSocket_bind_QHostAddress_ushort
(void* __this_nativeId,
 void* address0,
 unsigned short port1)
{
    const QHostAddress&  __qt_address0 = (const QHostAddress& ) *(QHostAddress *)address0;
    QUdpSocket_QtDShell *__qt_this = (QUdpSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->bind((const QHostAddress& )__qt_address0, (unsigned short )port1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUdpSocket::bind(const QHostAddress & address, unsigned short port, QFlags<QUdpSocket::BindFlag> mode)
QTD_EXTERN QTD_EXPORT bool qtd_QUdpSocket_bind_QHostAddress_ushort_BindMode
(void* __this_nativeId,
 void* address0,
 unsigned short port1,
 int mode2)
{
    const QHostAddress&  __qt_address0 = (const QHostAddress& ) *(QHostAddress *)address0;
    QFlags<QUdpSocket::BindFlag> __qt_mode2 = (QFlags<QUdpSocket::BindFlag>) mode2;
    QUdpSocket_QtDShell *__qt_this = (QUdpSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->bind((const QHostAddress& )__qt_address0, (unsigned short )port1, (QUdpSocket::BindMode )__qt_mode2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUdpSocket::bind(unsigned short port)
QTD_EXTERN QTD_EXPORT bool qtd_QUdpSocket_bind_ushort
(void* __this_nativeId,
 unsigned short port0)
{
    QUdpSocket_QtDShell *__qt_this = (QUdpSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->bind((unsigned short )port0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUdpSocket::bind(unsigned short port, QFlags<QUdpSocket::BindFlag> mode)
QTD_EXTERN QTD_EXPORT bool qtd_QUdpSocket_bind_ushort_BindMode
(void* __this_nativeId,
 unsigned short port0,
 int mode1)
{
    QFlags<QUdpSocket::BindFlag> __qt_mode1 = (QFlags<QUdpSocket::BindFlag>) mode1;
    QUdpSocket_QtDShell *__qt_this = (QUdpSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->bind((unsigned short )port0, (QUdpSocket::BindMode )__qt_mode1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUdpSocket::hasPendingDatagrams() const
QTD_EXTERN QTD_EXPORT bool qtd_QUdpSocket_hasPendingDatagrams_const
(void* __this_nativeId)
{
    QUdpSocket_QtDShell *__qt_this = (QUdpSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasPendingDatagrams();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUdpSocket::pendingDatagramSize() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QUdpSocket_pendingDatagramSize_const
(void* __this_nativeId)
{
    QUdpSocket_QtDShell *__qt_this = (QUdpSocket_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->pendingDatagramSize();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUdpSocket::readDatagram(char * data, qint64 maxlen, QHostAddress * host, unsigned short * port)
QTD_EXTERN QTD_EXPORT qint64 qtd_QUdpSocket_readDatagram_nativepointerchar_long_nativepointerQHostAddress_nativepointerushort
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1,
 void* host2,
 unsigned short* port3)
{
    char*  __qt_data0 = (char* ) data0;
    QHostAddress*  __qt_host2 = (QHostAddress* ) host2;
    unsigned short*  __qt_port3 = (unsigned short* ) port3;
    QUdpSocket_QtDShell *__qt_this = (QUdpSocket_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->readDatagram((char* )__qt_data0, (qint64 )maxlen1, (QHostAddress* )__qt_host2, (unsigned short* )__qt_port3);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUdpSocket::writeDatagram(const QByteArray & datagram, const QHostAddress & host, unsigned short port)
QTD_EXTERN QTD_EXPORT qint64 qtd_QUdpSocket_writeDatagram_QByteArray_QHostAddress_ushort
(void* __this_nativeId,
 void* datagram0,
 void* host1,
 unsigned short port2)
{
    const QByteArray&  __qt_datagram0 = (const QByteArray& ) *(QByteArray *)datagram0;
    const QHostAddress&  __qt_host1 = (const QHostAddress& ) *(QHostAddress *)host1;
    QUdpSocket_QtDShell *__qt_this = (QUdpSocket_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->writeDatagram((const QByteArray& )__qt_datagram0, (const QHostAddress& )__qt_host1, (unsigned short )port2);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUdpSocket::writeDatagram(const char * data, qint64 len, const QHostAddress & host, unsigned short port)
QTD_EXTERN QTD_EXPORT qint64 qtd_QUdpSocket_writeDatagram_nativepointerchar_long_QHostAddress_ushort
(void* __this_nativeId,
 char* data0,
 qint64 len1,
 void* host2,
 unsigned short port3)
{
    const char*  __qt_data0 = (const char* ) data0;
    const QHostAddress&  __qt_host2 = (const QHostAddress& ) *(QHostAddress *)host2;
    QUdpSocket_QtDShell *__qt_this = (QUdpSocket_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->writeDatagram((const char* )__qt_data0, (qint64 )len1, (const QHostAddress& )__qt_host2, (unsigned short )port3);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QUdpSocket_staticMetaObject() {
    return (void*)&QUdpSocket::staticMetaObject;
}


