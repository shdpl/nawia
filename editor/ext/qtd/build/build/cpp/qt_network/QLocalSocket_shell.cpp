#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocalsocket.h>
#include <qobject.h>
#include <qvariant.h>

#include "QLocalSocket_shell.h"
#include <iostream>
#include <qlocalsocket.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QLocalSocketEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QLocalSocketEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_createEntity(void *nativeId, void* dId)
{
    new QLocalSocketEntity((QObject*)nativeId, dId);
}

QLocalSocket_QtDShell::QLocalSocket_QtDShell(void *d_ptr, QObject*  parent0)
    : QLocalSocket(parent0),
      QObjectLink(this, d_ptr)
{
}

QLocalSocket_QtDShell::~QLocalSocket_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QLocalSocket_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QLocalSocket::metaObject();
}

int QLocalSocket_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QLocalSocket::qt_metacall(_c, _id, _a);
}

int QLocalSocket_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QLocalSocket::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QLocalSocket_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, bool, QIODevice_atEnd_const_dispatch, (void *dId))
bool  QLocalSocket_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
qint64  QLocalSocket_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
qint64  QLocalSocket_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
bool  QLocalSocket_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QLocalSocket_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QIODevice_close_dispatch, (void *dId))
void QLocalSocket_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QLocalSocket_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QLocalSocket_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QLocalSocket_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_isSequential_const_dispatch, (void *dId))
bool  QLocalSocket_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int mode0))
bool  QLocalSocket_QtDShell::open(QIODevice::OpenMode  mode0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )mode0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_pos_const_dispatch, (void *dId))
qint64  QLocalSocket_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* arg__1, qint64 arg__2))
qint64  QLocalSocket_QtDShell::readData(char*  arg__1, qint64  arg__2)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )arg__1, (qint64 )arg__2);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QLocalSocket_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_reset_dispatch, (void *dId))
bool  QLocalSocket_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 pos0))
bool  QLocalSocket_QtDShell::seek(qint64  pos0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )pos0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_size_const_dispatch, (void *dId))
qint64  QLocalSocket_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QLocalSocket_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
bool  QLocalSocket_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
bool  QLocalSocket_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* arg__1, qint64 arg__2))
qint64  QLocalSocket_QtDShell::writeData(const char*  arg__1, qint64  arg__2)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )arg__1, (qint64 )arg__2);
}

QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QLocalSocket_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QLocalSocket_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QLocalSocket_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QLocalSocket_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QLocalSocket_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QLocalSocket_QtDShell::__public_connected()
{
    QLocalSocket::connected();
}

void QLocalSocket_QtDShell::__public_disconnected()
{
    QLocalSocket::disconnected();
}

void QLocalSocket_QtDShell::__public_error(int  socketError0)
{
    QLocalSocket::error((QLocalSocket::LocalSocketError )socketError0);
}

void QLocalSocket_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QLocalSocket_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

void QLocalSocket_QtDShell::__public_stateChanged(int  socketState0)
{
    QLocalSocket::stateChanged((QLocalSocket::LocalSocketState )socketState0);
}

// Write virtual function overries used to decide on static/virtual calls
bool  QLocalSocket_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QIODevice::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QLocalSocket_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QLocalSocket::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QLocalSocket_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QLocalSocket::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QLocalSocket_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QLocalSocket::canReadLine();
    } else {
        return canReadLine();
    }
}

void QLocalSocket_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QLocalSocket_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QLocalSocket::close();
    } else {
        close();
    }
}

void QLocalSocket_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QLocalSocket_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QLocalSocket_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QLocalSocket_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QLocalSocket::isSequential();
    } else {
        return isSequential();
    }
}

bool  QLocalSocket_QtDShell::__override_open(int  mode0, bool static_call)
{
    if (static_call) {
        return QIODevice::open((QIODevice::OpenMode )mode0);
    } else {
        return open((QIODevice::OpenMode )mode0);
    }
}

qint64  QLocalSocket_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QIODevice::pos();
    } else {
        return pos();
    }
}

qint64  QLocalSocket_QtDShell::__override_readData(char*  arg__1, qint64  arg__2, bool static_call)
{
    if (static_call) {
        return QLocalSocket::readData((char* )arg__1, (qint64 )arg__2);
    } else {
        return readData((char* )arg__1, (qint64 )arg__2);
    }
}

qint64  QLocalSocket_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QIODevice::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QLocalSocket_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QLocalSocket_QtDShell::__override_seek(qint64  pos0, bool static_call)
{
    if (static_call) {
        return QIODevice::seek((qint64 )pos0);
    } else {
        return seek((qint64 )pos0);
    }
}

qint64  QLocalSocket_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QIODevice::size();
    } else {
        return size();
    }
}

void QLocalSocket_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QLocalSocket_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QLocalSocket::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QLocalSocket_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QLocalSocket::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QLocalSocket_QtDShell::__override_writeData(const char*  arg__1, qint64  arg__2, bool static_call)
{
    if (static_call) {
        return QLocalSocket::writeData((const char* )arg__1, (qint64 )arg__2);
    } else {
        return writeData((const char* )arg__1, (qint64 )arg__2);
    }
}

// QLocalSocket::connected()
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_connected
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_connected();

}

// QLocalSocket::disconnected()
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_disconnected
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_disconnected();

}

// QLocalSocket::error(QLocalSocket::LocalSocketError socketError)
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_error_LocalSocketError
(void* __this_nativeId,
 int socketError0)
{
    QLocalSocket::LocalSocketError __qt_socketError0 = (QLocalSocket::LocalSocketError) socketError0;
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_error((QLocalSocket::LocalSocketError )__qt_socketError0);

}

// QLocalSocket::stateChanged(QLocalSocket::LocalSocketState socketState)
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_stateChanged_LocalSocketState
(void* __this_nativeId,
 int socketState0)
{
    QLocalSocket::LocalSocketState __qt_socketState0 = (QLocalSocket::LocalSocketState) socketState0;
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    __qt_this->__public_stateChanged((QLocalSocket::LocalSocketState )__qt_socketState0);

}

// ---externC---
// QLocalSocket::QLocalSocket(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QLocalSocket_QLocalSocket_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QLocalSocket_QtDShell *__qt_this = new QLocalSocket_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QLocalSocket::abort()
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_abort
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    __qt_this->abort();

}

// QLocalSocket::connectToServer(const QString & name, QFlags<QIODevice::OpenModeFlag> openMode)
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_connectToServer_string_OpenMode
(void* __this_nativeId,
 DArray name0,
 int openMode1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QFlags<QIODevice::OpenModeFlag> __qt_openMode1 = (QFlags<QIODevice::OpenModeFlag>) openMode1;
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    __qt_this->connectToServer((const QString& )__qt_name0, (QIODevice::OpenMode )__qt_openMode1);

}

// QLocalSocket::disconnectFromServer()
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_disconnectFromServer
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    __qt_this->disconnectFromServer();

}

// QLocalSocket::error() const
QTD_EXTERN QTD_EXPORT int qtd_QLocalSocket_error__const
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::flush()
QTD_EXTERN QTD_EXPORT bool qtd_QLocalSocket_flush
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->flush();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::fullServerName() const
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_fullServerName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fullServerName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocalSocket::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QLocalSocket_isValid_const
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::readBufferSize() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QLocalSocket_readBufferSize_const
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->readBufferSize();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::serverName() const
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_serverName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->serverName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocalSocket::setReadBufferSize(qint64 size)
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_setReadBufferSize_long
(void* __this_nativeId,
 qint64 size0)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    __qt_this->setReadBufferSize((qint64 )size0);

}

// QLocalSocket::setSocketDescriptor(quintptr socketDescriptor, QLocalSocket::LocalSocketState socketState, QFlags<QIODevice::OpenModeFlag> openMode)
QTD_EXTERN QTD_EXPORT bool qtd_QLocalSocket_setSocketDescriptor_quintptr_LocalSocketState_OpenMode
(void* __this_nativeId,
 quintptr socketDescriptor0,
 int socketState1,
 int openMode2)
{
    QLocalSocket::LocalSocketState __qt_socketState1 = (QLocalSocket::LocalSocketState) socketState1;
    QFlags<QIODevice::OpenModeFlag> __qt_openMode2 = (QFlags<QIODevice::OpenModeFlag>) openMode2;
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setSocketDescriptor((quintptr )socketDescriptor0, (QLocalSocket::LocalSocketState )__qt_socketState1, (QIODevice::OpenMode )__qt_openMode2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::socketDescriptor() const
QTD_EXTERN QTD_EXPORT quintptr qtd_QLocalSocket_socketDescriptor_const
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    quintptr  __qt_return_value = __qt_this->socketDescriptor();

    quintptr __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::state() const
QTD_EXTERN QTD_EXPORT int qtd_QLocalSocket_state_const
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->state();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::waitForConnected(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QLocalSocket_waitForConnected_int
(void* __this_nativeId,
 int msecs0)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForConnected((int )msecs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::waitForDisconnected(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QLocalSocket_waitForDisconnected_int
(void* __this_nativeId,
 int msecs0)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForDisconnected((int )msecs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::bytesAvailable() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QLocalSocket_bytesAvailable_const
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_bytesAvailable(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::bytesToWrite() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QLocalSocket_bytesToWrite_const
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_bytesToWrite(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::canReadLine() const
QTD_EXTERN QTD_EXPORT bool qtd_QLocalSocket_canReadLine_const
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canReadLine(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::close()
QTD_EXTERN QTD_EXPORT void qtd_QLocalSocket_close
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_close(__do_static_call);

}

// QLocalSocket::isSequential() const
QTD_EXTERN QTD_EXPORT bool qtd_QLocalSocket_isSequential_const
(void* __this_nativeId)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isSequential(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::readData(char * arg__1, qint64 arg__2)
QTD_EXTERN QTD_EXPORT qint64 qtd_QLocalSocket_readData_nativepointerchar_long
(void* __this_nativeId,
 char* arg__1,
 qint64 arg__2)
{
    char*  __qt_arg__1 = (char* ) arg__1;
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readData((char* )__qt_arg__1, (qint64 )arg__2, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::waitForBytesWritten(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QLocalSocket_waitForBytesWritten_int
(void* __this_nativeId,
 int msecs0)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_waitForBytesWritten((int )msecs0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::waitForReadyRead(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QLocalSocket_waitForReadyRead_int
(void* __this_nativeId,
 int msecs0)
{
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_waitForReadyRead((int )msecs0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalSocket::writeData(const char * arg__1, qint64 arg__2)
QTD_EXTERN QTD_EXPORT qint64 qtd_QLocalSocket_writeData_nativepointerchar_long
(void* __this_nativeId,
 char* arg__1,
 qint64 arg__2)
{
    const char*  __qt_arg__1 = (const char* ) arg__1;
    QLocalSocket_QtDShell *__qt_this = (QLocalSocket_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_writeData((const char* )__qt_arg__1, (qint64 )arg__2, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QLocalSocket_staticMetaObject() {
    return (void*)&QLocalSocket::staticMetaObject;
}


