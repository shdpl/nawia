#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qobject.h>
#include <qvariant.h>

#include "QLocalServer_shell.h"
#include <iostream>
#include <qlocalserver.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QLocalServerEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QLocalServerEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QLocalServer_createEntity(void *nativeId, void* dId)
{
    new QLocalServerEntity((QObject*)nativeId, dId);
}

QLocalServer_QtDShell::QLocalServer_QtDShell(void *d_ptr, QObject*  parent0)
    : QLocalServer(parent0),
      QObjectLink(this, d_ptr)
{
}

QLocalServer_QtDShell::~QLocalServer_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QLocalServer_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QLocalServer::metaObject();
}

int QLocalServer_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QLocalServer::qt_metacall(_c, _id, _a);
}

int QLocalServer_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QLocalServer::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QLocalServer_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QLocalServer_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QLocalServer_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QLocalServer_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QLocalServer_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, bool, QLocalServer_hasPendingConnections_const_dispatch, (void *dId))
QTD_FUNC(NETWORK, QLocalServer_hasPendingConnections_const_dispatch)
bool  QLocalServer_QtDShell::hasPendingConnections() const
{
    return qtd_QLocalServer_hasPendingConnections_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QLocalServer_incomingConnection_quintptr_dispatch, (void *dId, quintptr socketDescriptor0))
QTD_FUNC(NETWORK, QLocalServer_incomingConnection_quintptr_dispatch)
void QLocalServer_QtDShell::incomingConnection(quintptr  socketDescriptor0)
{
    qtd_QLocalServer_incomingConnection_quintptr_dispatch(QObjectLink::getLink(this)->dId, (quintptr )socketDescriptor0);
}

QTD_FUNC_DECL(NETWORK, void*, QLocalServer_nextPendingConnection_dispatch, (void *dId))
QTD_FUNC(NETWORK, QLocalServer_nextPendingConnection_dispatch)
QLocalSocket*  QLocalServer_QtDShell::nextPendingConnection()
{
    return (QLocalSocket*) qtd_QLocalServer_nextPendingConnection_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QLocalServer_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QLocalServer_initCallBacks(VoidFunc *virts) {
    qtd_QLocalServer_hasPendingConnections_const_dispatch = (qtd_QLocalServer_hasPendingConnections_const_dispatch_t) virts[0];
    qtd_QLocalServer_incomingConnection_quintptr_dispatch = (qtd_QLocalServer_incomingConnection_quintptr_dispatch_t) virts[1];
    qtd_QLocalServer_nextPendingConnection_dispatch = (qtd_QLocalServer_nextPendingConnection_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QLocalServer_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QLocalServer_QtDShell::__public_newConnection()
{
    QLocalServer::newConnection();
}

// Write virtual function overries used to decide on static/virtual calls
void QLocalServer_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QLocalServer_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QLocalServer_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QLocalServer_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QLocalServer_QtDShell::__override_hasPendingConnections(bool static_call) const
{
    if (static_call) {
        return QLocalServer::hasPendingConnections();
    } else {
        return hasPendingConnections();
    }
}

void QLocalServer_QtDShell::__override_incomingConnection(quintptr  socketDescriptor0, bool static_call)
{
    if (static_call) {
        QLocalServer::incomingConnection((quintptr )socketDescriptor0);
    } else {
        incomingConnection((quintptr )socketDescriptor0);
    }
}

QLocalSocket*  QLocalServer_QtDShell::__override_nextPendingConnection(bool static_call)
{
    if (static_call) {
        return QLocalServer::nextPendingConnection();
    } else {
        return nextPendingConnection();
    }
}

void QLocalServer_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QLocalServer::newConnection()
QTD_EXTERN QTD_EXPORT void qtd_QLocalServer_newConnection
(void* __this_nativeId)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    __qt_this->__public_newConnection();

}

// ---externC---
// QLocalServer::QLocalServer(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QLocalServer_QLocalServer_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QLocalServer_QtDShell *__qt_this = new QLocalServer_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QLocalServer::close()
QTD_EXTERN QTD_EXPORT void qtd_QLocalServer_close
(void* __this_nativeId)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    __qt_this->close();

}

// QLocalServer::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QLocalServer_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocalServer::fullServerName() const
QTD_EXTERN QTD_EXPORT void qtd_QLocalServer_fullServerName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fullServerName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocalServer::isListening() const
QTD_EXTERN QTD_EXPORT bool qtd_QLocalServer_isListening_const
(void* __this_nativeId)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isListening();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalServer::listen(const QString & name)
QTD_EXTERN QTD_EXPORT bool qtd_QLocalServer_listen_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->listen((const QString& )__qt_name0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalServer::maxPendingConnections() const
QTD_EXTERN QTD_EXPORT int qtd_QLocalServer_maxPendingConnections_const
(void* __this_nativeId)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maxPendingConnections();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalServer::serverError() const
QTD_EXTERN QTD_EXPORT int qtd_QLocalServer_serverError_const
(void* __this_nativeId)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->serverError();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalServer::serverName() const
QTD_EXTERN QTD_EXPORT void qtd_QLocalServer_serverName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->serverName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocalServer::setMaxPendingConnections(int numConnections)
QTD_EXTERN QTD_EXPORT void qtd_QLocalServer_setMaxPendingConnections_int
(void* __this_nativeId,
 int numConnections0)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    __qt_this->setMaxPendingConnections((int )numConnections0);

}

// QLocalServer::waitForNewConnection(int msec, bool * timedOut)
QTD_EXTERN QTD_EXPORT bool qtd_QLocalServer_waitForNewConnection_int_nativepointerbool
(void* __this_nativeId,
 int msec0,
 bool* timedOut1)
{
    bool*  __qt_timedOut1 = (bool* ) timedOut1;
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForNewConnection((int )msec0, (bool* )__qt_timedOut1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalServer::hasPendingConnections() const
QTD_EXTERN QTD_EXPORT bool qtd_QLocalServer_hasPendingConnections_const
(void* __this_nativeId)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasPendingConnections(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocalServer::incomingConnection(quintptr socketDescriptor)
QTD_EXTERN QTD_EXPORT void qtd_QLocalServer_incomingConnection_quintptr
(void* __this_nativeId,
 quintptr socketDescriptor0)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_incomingConnection((quintptr )socketDescriptor0, __do_static_call);

}

// QLocalServer::nextPendingConnection()
QTD_EXTERN QTD_EXPORT void* qtd_QLocalServer_nextPendingConnection
(void* __this_nativeId)
{
    QLocalServer_QtDShell *__qt_this = (QLocalServer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLocalSocket*  __qt_return_value = __qt_this->__override_nextPendingConnection(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLocalServer::removeServer(const QString & name)
QTD_EXTERN QTD_EXPORT bool qtd_QLocalServer_removeServer_string
(DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    bool  __qt_return_value = QLocalServer_QtDShell::removeServer((const QString& )__qt_name0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QLocalServer_staticMetaObject() {
    return (void*)&QLocalServer::staticMetaObject;
}


