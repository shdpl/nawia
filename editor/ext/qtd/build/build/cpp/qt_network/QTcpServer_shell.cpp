#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qvariant.h>

#include "QTcpServer_shell.h"
#include <iostream>
#include <qtcpserver.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QTcpServerEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTcpServerEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTcpServer_createEntity(void *nativeId, void* dId)
{
    new QTcpServerEntity((QObject*)nativeId, dId);
}

QTcpServer_QtDShell::QTcpServer_QtDShell(void *d_ptr, QObject*  parent0)
    : QTcpServer(parent0),
      QObjectLink(this, d_ptr)
{
}

QTcpServer_QtDShell::~QTcpServer_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTcpServer_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTcpServer::metaObject();
}

int QTcpServer_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTcpServer::qt_metacall(_c, _id, _a);
}

int QTcpServer_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTcpServer::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTcpServer_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTcpServer_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTcpServer_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTcpServer_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTcpServer_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, bool, QTcpServer_hasPendingConnections_const_dispatch, (void *dId))
QTD_FUNC(NETWORK, QTcpServer_hasPendingConnections_const_dispatch)
bool  QTcpServer_QtDShell::hasPendingConnections() const
{
    return qtd_QTcpServer_hasPendingConnections_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QTcpServer_incomingConnection_int_dispatch, (void *dId, int handle0))
QTD_FUNC(NETWORK, QTcpServer_incomingConnection_int_dispatch)
void QTcpServer_QtDShell::incomingConnection(int  handle0)
{
    qtd_QTcpServer_incomingConnection_int_dispatch(QObjectLink::getLink(this)->dId, (int )handle0);
}

QTD_FUNC_DECL(NETWORK, void*, QTcpServer_nextPendingConnection_dispatch, (void *dId))
QTD_FUNC(NETWORK, QTcpServer_nextPendingConnection_dispatch)
QTcpSocket*  QTcpServer_QtDShell::nextPendingConnection()
{
    return (QTcpSocket*) qtd_QTcpServer_nextPendingConnection_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTcpServer_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTcpServer_initCallBacks(VoidFunc *virts) {
    qtd_QTcpServer_hasPendingConnections_const_dispatch = (qtd_QTcpServer_hasPendingConnections_const_dispatch_t) virts[0];
    qtd_QTcpServer_incomingConnection_int_dispatch = (qtd_QTcpServer_incomingConnection_int_dispatch_t) virts[1];
    qtd_QTcpServer_nextPendingConnection_dispatch = (qtd_QTcpServer_nextPendingConnection_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QTcpServer_QtDShell::__public_addPendingConnection(QTcpSocket*  socket0)
{
    QTcpServer::addPendingConnection((QTcpSocket* )socket0);
}

QObject*  QTcpServer_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTcpServer_QtDShell::__public_newConnection()
{
    QTcpServer::newConnection();
}

// Write virtual function overries used to decide on static/virtual calls
void QTcpServer_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTcpServer_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTcpServer_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTcpServer_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QTcpServer_QtDShell::__override_hasPendingConnections(bool static_call) const
{
    if (static_call) {
        return QTcpServer::hasPendingConnections();
    } else {
        return hasPendingConnections();
    }
}

void QTcpServer_QtDShell::__override_incomingConnection(int  handle0, bool static_call)
{
    if (static_call) {
        QTcpServer::incomingConnection((int )handle0);
    } else {
        incomingConnection((int )handle0);
    }
}

QTcpSocket*  QTcpServer_QtDShell::__override_nextPendingConnection(bool static_call)
{
    if (static_call) {
        return QTcpServer::nextPendingConnection();
    } else {
        return nextPendingConnection();
    }
}

void QTcpServer_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QTcpServer::newConnection()
QTD_EXTERN QTD_EXPORT void qtd_QTcpServer_newConnection
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    __qt_this->__public_newConnection();

}

// ---externC---
// QTcpServer::QTcpServer(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTcpServer_QTcpServer_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QTcpServer_QtDShell *__qt_this = new QTcpServer_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QTcpServer::addPendingConnection(QTcpSocket * socket)
QTD_EXTERN QTD_EXPORT void qtd_QTcpServer_addPendingConnection_QTcpSocket
(void* __this_nativeId,
 void* socket0)
{
    QTcpSocket*  __qt_socket0 = (QTcpSocket* ) socket0;
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    __qt_this->__public_addPendingConnection((QTcpSocket* )__qt_socket0);

}

// QTcpServer::close()
QTD_EXTERN QTD_EXPORT void qtd_QTcpServer_close
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    __qt_this->close();

}

// QTcpServer::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QTcpServer_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTcpServer::isListening() const
QTD_EXTERN QTD_EXPORT bool qtd_QTcpServer_isListening_const
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isListening();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTcpServer::listen(const QHostAddress & address, unsigned short port)
QTD_EXTERN QTD_EXPORT bool qtd_QTcpServer_listen_QHostAddress_ushort
(void* __this_nativeId,
 void* address0,
 unsigned short port1)
{
    const QHostAddress&  __qt_address0 = (const QHostAddress& ) *(QHostAddress *)address0;
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->listen((const QHostAddress& )__qt_address0, (unsigned short )port1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTcpServer::maxPendingConnections() const
QTD_EXTERN QTD_EXPORT int qtd_QTcpServer_maxPendingConnections_const
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maxPendingConnections();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTcpServer::proxy() const
QTD_EXTERN QTD_EXPORT void* qtd_QTcpServer_proxy_const
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    QNetworkProxy  __qt_return_value = __qt_this->proxy();

    void* __d_return_value = (void*) new QNetworkProxy(__qt_return_value);

    return __d_return_value;
}

// QTcpServer::serverAddress() const
QTD_EXTERN QTD_EXPORT void* qtd_QTcpServer_serverAddress_const
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    QHostAddress  __qt_return_value = __qt_this->serverAddress();

    void* __d_return_value = (void*) new QHostAddress(__qt_return_value);

    return __d_return_value;
}

// QTcpServer::serverError() const
QTD_EXTERN QTD_EXPORT int qtd_QTcpServer_serverError_const
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->serverError();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTcpServer::serverPort() const
QTD_EXTERN QTD_EXPORT unsigned short qtd_QTcpServer_serverPort_const
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    unsigned short  __qt_return_value = __qt_this->serverPort();

    unsigned short __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTcpServer::setMaxPendingConnections(int numConnections)
QTD_EXTERN QTD_EXPORT void qtd_QTcpServer_setMaxPendingConnections_int
(void* __this_nativeId,
 int numConnections0)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    __qt_this->setMaxPendingConnections((int )numConnections0);

}

// QTcpServer::setProxy(const QNetworkProxy & networkProxy)
QTD_EXTERN QTD_EXPORT void qtd_QTcpServer_setProxy_QNetworkProxy
(void* __this_nativeId,
 void* networkProxy0)
{
    const QNetworkProxy&  __qt_networkProxy0 = (const QNetworkProxy& ) *(QNetworkProxy *)networkProxy0;
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    __qt_this->setProxy((const QNetworkProxy& )__qt_networkProxy0);

}

// QTcpServer::setSocketDescriptor(int socketDescriptor)
QTD_EXTERN QTD_EXPORT bool qtd_QTcpServer_setSocketDescriptor_int
(void* __this_nativeId,
 int socketDescriptor0)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setSocketDescriptor((int )socketDescriptor0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTcpServer::socketDescriptor() const
QTD_EXTERN QTD_EXPORT int qtd_QTcpServer_socketDescriptor_const
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->socketDescriptor();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTcpServer::waitForNewConnection(int msec, bool * timedOut)
QTD_EXTERN QTD_EXPORT bool qtd_QTcpServer_waitForNewConnection_int_nativepointerbool
(void* __this_nativeId,
 int msec0,
 bool* timedOut1)
{
    bool*  __qt_timedOut1 = (bool* ) timedOut1;
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForNewConnection((int )msec0, (bool* )__qt_timedOut1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTcpServer::hasPendingConnections() const
QTD_EXTERN QTD_EXPORT bool qtd_QTcpServer_hasPendingConnections_const
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasPendingConnections(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTcpServer::incomingConnection(int handle)
QTD_EXTERN QTD_EXPORT void qtd_QTcpServer_incomingConnection_int
(void* __this_nativeId,
 int handle0)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_incomingConnection((int )handle0, __do_static_call);

}

// QTcpServer::nextPendingConnection()
QTD_EXTERN QTD_EXPORT void* qtd_QTcpServer_nextPendingConnection
(void* __this_nativeId)
{
    QTcpServer_QtDShell *__qt_this = (QTcpServer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QTcpSocket*  __qt_return_value = __qt_this->__override_nextPendingConnection(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTcpServer_staticMetaObject() {
    return (void*)&QTcpServer::staticMetaObject;
}


