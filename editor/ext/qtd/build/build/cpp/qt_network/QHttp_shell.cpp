#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhttp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qsslerror.h>
#include <qtcpsocket.h>
#include <qvariant.h>

#include "QHttp_shell.h"
#include <iostream>
#include <qhttp.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QHttpEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QHttpEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QHttp_createEntity(void *nativeId, void* dId)
{
    new QHttpEntity((QObject*)nativeId, dId);
}

QHttp_QtDShell::QHttp_QtDShell(void *d_ptr, QObject*  parent0)
    : QHttp(parent0),
      QObjectLink(this, d_ptr)
{
}

QHttp_QtDShell::QHttp_QtDShell(void *d_ptr, const QString&  hostname0, QHttp::ConnectionMode  mode1, unsigned short  port2, QObject*  parent3)
    : QHttp(hostname0, mode1, port2, parent3),
      QObjectLink(this, d_ptr)
{
}

QHttp_QtDShell::QHttp_QtDShell(void *d_ptr, const QString&  hostname0, unsigned short  port1, QObject*  parent2)
    : QHttp(hostname0, port1, parent2),
      QObjectLink(this, d_ptr)
{
}

QHttp_QtDShell::~QHttp_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QHttp_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QHttp::metaObject();
}

int QHttp_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QHttp::qt_metacall(_c, _id, _a);
}

int QHttp_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QHttp::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QHttp_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QHttp_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QHttp_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QHttp_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QHttp_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QHttp_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QHttp_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QHttp_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QHttp_QtDShell::__public_authenticationRequired(const QString&  hostname0, unsigned short  port1, QAuthenticator*  arg__3)
{
    QHttp::authenticationRequired((const QString& )hostname0, (unsigned short )port1, (QAuthenticator* )arg__3);
}

void QHttp_QtDShell::__public_dataReadProgress(int  arg__1, int  arg__2)
{
    QHttp::dataReadProgress((int )arg__1, (int )arg__2);
}

void QHttp_QtDShell::__public_dataSendProgress(int  arg__1, int  arg__2)
{
    QHttp::dataSendProgress((int )arg__1, (int )arg__2);
}

void QHttp_QtDShell::__public_done(bool  arg__1)
{
    QHttp::done((bool )arg__1);
}

void QHttp_QtDShell::__public_proxyAuthenticationRequired(const QNetworkProxy&  proxy0, QAuthenticator*  arg__2)
{
    QHttp::proxyAuthenticationRequired((const QNetworkProxy& )proxy0, (QAuthenticator* )arg__2);
}

void QHttp_QtDShell::__public_readyRead(const QHttpResponseHeader&  resp0)
{
    QHttp::readyRead((const QHttpResponseHeader& )resp0);
}

void QHttp_QtDShell::__public_requestFinished(int  arg__1, bool  arg__2)
{
    QHttp::requestFinished((int )arg__1, (bool )arg__2);
}

void QHttp_QtDShell::__public_requestStarted(int  arg__1)
{
    QHttp::requestStarted((int )arg__1);
}

void QHttp_QtDShell::__public_responseHeaderReceived(const QHttpResponseHeader&  resp0)
{
    QHttp::responseHeaderReceived((const QHttpResponseHeader& )resp0);
}

void QHttp_QtDShell::__public_sslErrors(const QList<QSslError >&  errors0)
{
    QHttp::sslErrors((const QList<QSslError >& )errors0);
}

void QHttp_QtDShell::__public_stateChanged(int  arg__1)
{
    QHttp::stateChanged((int )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QHttp_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QHttp_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QHttp_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QHttp_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QHttp_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QHttp::authenticationRequired(const QString & hostname, unsigned short port, QAuthenticator * arg__3)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_authenticationRequired_string_ushort_nativepointerQAuthenticator
(void* __this_nativeId,
 DArray hostname0,
 unsigned short port1,
 void* arg__3)
{
    QString __qt_hostname0 = QString::fromUtf8((const char *)hostname0.ptr, hostname0.length);
    QAuthenticator*  __qt_arg__3 = (QAuthenticator* ) arg__3;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_authenticationRequired((const QString& )__qt_hostname0, (unsigned short )port1, (QAuthenticator* )__qt_arg__3);

}

// QHttp::dataReadProgress(int arg__1, int arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_dataReadProgress_int_int
(void* __this_nativeId,
 int arg__1,
 int arg__2)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_dataReadProgress((int )arg__1, (int )arg__2);

}

// QHttp::dataSendProgress(int arg__1, int arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_dataSendProgress_int_int
(void* __this_nativeId,
 int arg__1,
 int arg__2)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_dataSendProgress((int )arg__1, (int )arg__2);

}

// QHttp::done(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_done_bool
(void* __this_nativeId,
 bool arg__1)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_done((bool )arg__1);

}

// QHttp::proxyAuthenticationRequired(const QNetworkProxy & proxy, QAuthenticator * arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_proxyAuthenticationRequired_QNetworkProxy_nativepointerQAuthenticator
(void* __this_nativeId,
 void* proxy0,
 void* arg__2)
{
    const QNetworkProxy&  __qt_proxy0 = (const QNetworkProxy& ) *(QNetworkProxy *)proxy0;
    QAuthenticator*  __qt_arg__2 = (QAuthenticator* ) arg__2;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_proxyAuthenticationRequired((const QNetworkProxy& )__qt_proxy0, (QAuthenticator* )__qt_arg__2);

}

// QHttp::readyRead(const QHttpResponseHeader & resp)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_readyRead_QHttpResponseHeader
(void* __this_nativeId,
 void* resp0)
{
    const QHttpResponseHeader&  __qt_resp0 = (const QHttpResponseHeader& ) *(QHttpResponseHeader *)resp0;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_readyRead((const QHttpResponseHeader& )__qt_resp0);

}

// QHttp::requestFinished(int arg__1, bool arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_requestFinished_int_bool
(void* __this_nativeId,
 int arg__1,
 bool arg__2)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_requestFinished((int )arg__1, (bool )arg__2);

}

// QHttp::requestStarted(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_requestStarted_int
(void* __this_nativeId,
 int arg__1)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_requestStarted((int )arg__1);

}

// QHttp::responseHeaderReceived(const QHttpResponseHeader & resp)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_responseHeaderReceived_QHttpResponseHeader
(void* __this_nativeId,
 void* resp0)
{
    const QHttpResponseHeader&  __qt_resp0 = (const QHttpResponseHeader& ) *(QHttpResponseHeader *)resp0;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_responseHeaderReceived((const QHttpResponseHeader& )__qt_resp0);

}

// QHttp::sslErrors(const QList<QSslError > & errors)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_sslErrors_QList
(void* __this_nativeId,
 void* errors0)
{
QList<QSslError > __qt_errors0 = (*(QList<QSslError > *)errors0);
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_sslErrors((const QList<QSslError >& )__qt_errors0);

}

// QHttp::stateChanged(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QHttp_stateChanged_int
(void* __this_nativeId,
 int arg__1)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->__public_stateChanged((int )arg__1);

}

// ---externC---
// QHttp::QHttp(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QHttp_QHttp_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QHttp_QtDShell *__qt_this = new QHttp_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QHttp::QHttp(const QString & hostname, QHttp::ConnectionMode mode, unsigned short port, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QHttp_QHttp_string_ConnectionMode_ushort_QObject
(void *d_ptr,
 DArray hostname0,
 int mode1,
 unsigned short port2,
 void* parent3)
{
    QString __qt_hostname0 = QString::fromUtf8((const char *)hostname0.ptr, hostname0.length);
    QHttp::ConnectionMode __qt_mode1 = (QHttp::ConnectionMode) mode1;
    QObject*  __qt_parent3 = (QObject* ) parent3;
    QHttp_QtDShell *__qt_this = new QHttp_QtDShell(d_ptr, (const QString& )__qt_hostname0, (QHttp::ConnectionMode )__qt_mode1, (unsigned short )port2, (QObject* )__qt_parent3);
    return (void *) __qt_this;

}

// QHttp::QHttp(const QString & hostname, unsigned short port, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QHttp_QHttp_string_ushort_QObject
(void *d_ptr,
 DArray hostname0,
 unsigned short port1,
 void* parent2)
{
    QString __qt_hostname0 = QString::fromUtf8((const char *)hostname0.ptr, hostname0.length);
    QObject*  __qt_parent2 = (QObject* ) parent2;
    QHttp_QtDShell *__qt_this = new QHttp_QtDShell(d_ptr, (const QString& )__qt_hostname0, (unsigned short )port1, (QObject* )__qt_parent2);
    return (void *) __qt_this;

}

// QHttp::abort()
QTD_EXTERN QTD_EXPORT void qtd_QHttp_abort
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->abort();

}

// QHttp::bytesAvailable() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QHttp_bytesAvailable_const
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->bytesAvailable();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::clearPendingRequests()
QTD_EXTERN QTD_EXPORT void qtd_QHttp_clearPendingRequests
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->clearPendingRequests();

}

// QHttp::close()
QTD_EXTERN QTD_EXPORT int qtd_QHttp_close
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->close();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::currentDestinationDevice() const
QTD_EXTERN QTD_EXPORT void* qtd_QHttp_currentDestinationDevice_const
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->currentDestinationDevice();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QHttp::currentId() const
QTD_EXTERN QTD_EXPORT int qtd_QHttp_currentId_const
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentId();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::currentRequest() const
QTD_EXTERN QTD_EXPORT void* qtd_QHttp_currentRequest_const
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    QHttpRequestHeader  __qt_return_value = __qt_this->currentRequest();

    void* __d_return_value = (void*) new QHttpRequestHeader(__qt_return_value);

    return __d_return_value;
}

// QHttp::currentSourceDevice() const
QTD_EXTERN QTD_EXPORT void* qtd_QHttp_currentSourceDevice_const
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->currentSourceDevice();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QHttp::error() const
QTD_EXTERN QTD_EXPORT int qtd_QHttp_error_const
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QHttp_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHttp::get(const QString & path, QIODevice * to)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_get_string_QIODevice
(void* __this_nativeId,
 DArray path0,
 void* to1)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QIODevice*  __qt_to1 = (QIODevice* ) to1;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->get((const QString& )__qt_path0, (QIODevice* )__qt_to1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::hasPendingRequests() const
QTD_EXTERN QTD_EXPORT bool qtd_QHttp_hasPendingRequests_const
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasPendingRequests();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::head(const QString & path)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_head_string
(void* __this_nativeId,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->head((const QString& )__qt_path0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::ignoreSslErrors()
QTD_EXTERN QTD_EXPORT void qtd_QHttp_ignoreSslErrors
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    __qt_this->ignoreSslErrors();

}

// QHttp::lastResponse() const
QTD_EXTERN QTD_EXPORT void* qtd_QHttp_lastResponse_const
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    QHttpResponseHeader  __qt_return_value = __qt_this->lastResponse();

    void* __d_return_value = (void*) new QHttpResponseHeader(__qt_return_value);

    return __d_return_value;
}

// QHttp::post(const QString & path, QIODevice * data, QIODevice * to)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_post_string_QIODevice_QIODevice
(void* __this_nativeId,
 DArray path0,
 void* data1,
 void* to2)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QIODevice*  __qt_data1 = (QIODevice* ) data1;
    QIODevice*  __qt_to2 = (QIODevice* ) to2;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->post((const QString& )__qt_path0, (QIODevice* )__qt_data1, (QIODevice* )__qt_to2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::post(const QString & path, const QByteArray & data, QIODevice * to)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_post_string_QByteArray_QIODevice
(void* __this_nativeId,
 DArray path0,
 void* data1,
 void* to2)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    const QByteArray&  __qt_data1 = (const QByteArray& ) *(QByteArray *)data1;
    QIODevice*  __qt_to2 = (QIODevice* ) to2;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->post((const QString& )__qt_path0, (const QByteArray& )__qt_data1, (QIODevice* )__qt_to2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::read(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QHttp_read_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->read((char* )__qt_data0, (qint64 )maxlen1);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::readAll()
QTD_EXTERN QTD_EXPORT void* qtd_QHttp_readAll
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->readAll();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QHttp::request(const QHttpRequestHeader & header, QIODevice * device, QIODevice * to)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_request_QHttpRequestHeader_QIODevice_QIODevice
(void* __this_nativeId,
 void* header0,
 void* device1,
 void* to2)
{
    const QHttpRequestHeader&  __qt_header0 = (const QHttpRequestHeader& ) *(QHttpRequestHeader *)header0;
    QIODevice*  __qt_device1 = (QIODevice* ) device1;
    QIODevice*  __qt_to2 = (QIODevice* ) to2;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->request((const QHttpRequestHeader& )__qt_header0, (QIODevice* )__qt_device1, (QIODevice* )__qt_to2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::request(const QHttpRequestHeader & header, const QByteArray & data, QIODevice * to)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_request_QHttpRequestHeader_QByteArray_QIODevice
(void* __this_nativeId,
 void* header0,
 void* data1,
 void* to2)
{
    const QHttpRequestHeader&  __qt_header0 = (const QHttpRequestHeader& ) *(QHttpRequestHeader *)header0;
    const QByteArray&  __qt_data1 = (const QByteArray& ) *(QByteArray *)data1;
    QIODevice*  __qt_to2 = (QIODevice* ) to2;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->request((const QHttpRequestHeader& )__qt_header0, (const QByteArray& )__qt_data1, (QIODevice* )__qt_to2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::setHost(const QString & hostname, QHttp::ConnectionMode mode, unsigned short port)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_setHost_string_ConnectionMode_ushort
(void* __this_nativeId,
 DArray hostname0,
 int mode1,
 unsigned short port2)
{
    QString __qt_hostname0 = QString::fromUtf8((const char *)hostname0.ptr, hostname0.length);
    QHttp::ConnectionMode __qt_mode1 = (QHttp::ConnectionMode) mode1;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->setHost((const QString& )__qt_hostname0, (QHttp::ConnectionMode )__qt_mode1, (unsigned short )port2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::setHost(const QString & hostname, unsigned short port)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_setHost_string_ushort
(void* __this_nativeId,
 DArray hostname0,
 unsigned short port1)
{
    QString __qt_hostname0 = QString::fromUtf8((const char *)hostname0.ptr, hostname0.length);
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->setHost((const QString& )__qt_hostname0, (unsigned short )port1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::setProxy(const QNetworkProxy & proxy)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_setProxy_QNetworkProxy
(void* __this_nativeId,
 void* proxy0)
{
    const QNetworkProxy&  __qt_proxy0 = (const QNetworkProxy& ) *(QNetworkProxy *)proxy0;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->setProxy((const QNetworkProxy& )__qt_proxy0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::setProxy(const QString & host, int port, const QString & username, const QString & password)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_setProxy_string_int_string_string
(void* __this_nativeId,
 DArray host0,
 int port1,
 DArray username2,
 DArray password3)
{
    QString __qt_host0 = QString::fromUtf8((const char *)host0.ptr, host0.length);
    QString __qt_username2 = QString::fromUtf8((const char *)username2.ptr, username2.length);
    QString __qt_password3 = QString::fromUtf8((const char *)password3.ptr, password3.length);
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->setProxy((const QString& )__qt_host0, (int )port1, (const QString& )__qt_username2, (const QString& )__qt_password3);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::setSocket(QTcpSocket * socket)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_setSocket_QTcpSocket
(void* __this_nativeId,
 void* socket0)
{
    QTcpSocket*  __qt_socket0 = (QTcpSocket* ) socket0;
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->setSocket((QTcpSocket* )__qt_socket0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::setUser(const QString & username, const QString & password)
QTD_EXTERN QTD_EXPORT int qtd_QHttp_setUser_string_string
(void* __this_nativeId,
 DArray username0,
 DArray password1)
{
    QString __qt_username0 = QString::fromUtf8((const char *)username0.ptr, username0.length);
    QString __qt_password1 = QString::fromUtf8((const char *)password1.ptr, password1.length);
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->setUser((const QString& )__qt_username0, (const QString& )__qt_password1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttp::state() const
QTD_EXTERN QTD_EXPORT int qtd_QHttp_state_const
(void* __this_nativeId)
{
    QHttp_QtDShell *__qt_this = (QHttp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->state();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QHttp_staticMetaObject() {
    return (void*)&QHttp::staticMetaObject;
}


