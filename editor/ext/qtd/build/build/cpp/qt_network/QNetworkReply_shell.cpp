#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpair.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qurl.h>
#include <qvariant.h>

#include "QNetworkReply_shell.h"
#include <iostream>
#include <qnetworkreply.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QNetworkReplyEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QNetworkReplyEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_createEntity(void *nativeId, void* dId)
{
    new QNetworkReplyEntity((QObject*)nativeId, dId);
}

QNetworkReply_QtDShell::QNetworkReply_QtDShell(void *d_ptr, QObject*  parent0)
    : QNetworkReply(parent0),
      QObjectLink(this, d_ptr)
{
}

QNetworkReply_QtDShell::~QNetworkReply_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QNetworkReply_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QNetworkReply::metaObject();
}

int QNetworkReply_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QNetworkReply::qt_metacall(_c, _id, _a);
}

int QNetworkReply_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QNetworkReply::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QNetworkReply_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, void, QNetworkReply_abort_dispatch, (void *dId))
QTD_FUNC(NETWORK, QNetworkReply_abort_dispatch)
void QNetworkReply_QtDShell::abort()
{
    qtd_QNetworkReply_abort_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_atEnd_const_dispatch, (void *dId))
bool  QNetworkReply_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
qint64  QNetworkReply_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
qint64  QNetworkReply_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
bool  QNetworkReply_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QNetworkReply_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QIODevice_close_dispatch, (void *dId))
void QNetworkReply_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QNetworkReply_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QNetworkReply_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QNetworkReply_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, void, QNetworkReply_ignoreSslErrors_dispatch, (void *dId))
QTD_FUNC(NETWORK, QNetworkReply_ignoreSslErrors_dispatch)
void QNetworkReply_QtDShell::ignoreSslErrors()
{
    qtd_QNetworkReply_ignoreSslErrors_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_isSequential_const_dispatch, (void *dId))
bool  QNetworkReply_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int mode0))
bool  QNetworkReply_QtDShell::open(QIODevice::OpenMode  mode0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )mode0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_pos_const_dispatch, (void *dId))
qint64  QNetworkReply_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QNetworkReply_QtDShell::readData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QNetworkReply_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_reset_dispatch, (void *dId))
bool  QNetworkReply_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 pos0))
bool  QNetworkReply_QtDShell::seek(qint64  pos0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )pos0);
}

QTD_FUNC_DECL(NETWORK, void, QNetworkReply_setReadBufferSize_long_dispatch, (void *dId, qint64 size0))
QTD_FUNC(NETWORK, QNetworkReply_setReadBufferSize_long_dispatch)
void QNetworkReply_QtDShell::setReadBufferSize(qint64  size0)
{
    qtd_QNetworkReply_setReadBufferSize_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )size0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_size_const_dispatch, (void *dId))
qint64  QNetworkReply_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QNetworkReply_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
bool  QNetworkReply_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
bool  QNetworkReply_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(NETWORK, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
qint64  QNetworkReply_QtDShell::writeData(const char*  data0, qint64  len1)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )len1);
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_initCallBacks(VoidFunc *virts) {
    qtd_QNetworkReply_abort_dispatch = (qtd_QNetworkReply_abort_dispatch_t) virts[0];
    qtd_QNetworkReply_ignoreSslErrors_dispatch = (qtd_QNetworkReply_ignoreSslErrors_dispatch_t) virts[1];
    qtd_QNetworkReply_setReadBufferSize_long_dispatch = (qtd_QNetworkReply_setReadBufferSize_long_dispatch_t) virts[2];
}
// Functions in shell class
void QNetworkReply_QtDShell::ignoreSslErrors(const QList<QSslError >&  errors0)
{
    QNetworkReply::ignoreSslErrors((const QList<QSslError >& )errors0);
}

// public overrides for functions that are protected in the base class
QObject*  QNetworkReply_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QNetworkReply_QtDShell::__public_setAttribute(int  code0, const QVariant&  value1)
{
    QNetworkReply::setAttribute((QNetworkRequest::Attribute )code0, (const QVariant& )value1);
}

void QNetworkReply_QtDShell::__public_setError(int  errorCode0, const QString&  errorString1)
{
    QNetworkReply::setError((QNetworkReply::NetworkError )errorCode0, (const QString& )errorString1);
}

void QNetworkReply_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QNetworkReply_QtDShell::__public_setHeader(int  header0, const QVariant&  value1)
{
    QNetworkReply::setHeader((QNetworkRequest::KnownHeaders )header0, (const QVariant& )value1);
}

void QNetworkReply_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QNetworkReply_QtDShell::__public_setOperation(int  operation0)
{
    QNetworkReply::setOperation((QNetworkAccessManager::Operation )operation0);
}

void QNetworkReply_QtDShell::__public_setRawHeader(const QByteArray&  headerName0, const QByteArray&  value1)
{
    QNetworkReply::setRawHeader((const QByteArray& )headerName0, (const QByteArray& )value1);
}

void QNetworkReply_QtDShell::__public_setRequest(const QNetworkRequest&  request0)
{
    QNetworkReply::setRequest((const QNetworkRequest& )request0);
}

void QNetworkReply_QtDShell::__public_setUrl(const QUrl&  url0)
{
    QNetworkReply::setUrl((const QUrl& )url0);
}

void QNetworkReply_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QNetworkReply_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QNetworkReply_QtDShell::__public_downloadProgress(qint64  bytesReceived0, qint64  bytesTotal1)
{
    QNetworkReply::downloadProgress((qint64 )bytesReceived0, (qint64 )bytesTotal1);
}

void QNetworkReply_QtDShell::__public_error(int  arg__1)
{
    QNetworkReply::error((QNetworkReply::NetworkError )arg__1);
}

void QNetworkReply_QtDShell::__public_finished()
{
    QNetworkReply::finished();
}

void QNetworkReply_QtDShell::__public_metaDataChanged()
{
    QNetworkReply::metaDataChanged();
}

void QNetworkReply_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QNetworkReply_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

void QNetworkReply_QtDShell::__public_sslErrors(const QList<QSslError >&  errors0)
{
    QNetworkReply::sslErrors((const QList<QSslError >& )errors0);
}

void QNetworkReply_QtDShell::__public_uploadProgress(qint64  bytesSent0, qint64  bytesTotal1)
{
    QNetworkReply::uploadProgress((qint64 )bytesSent0, (qint64 )bytesTotal1);
}

// Write virtual function overries used to decide on static/virtual calls
void QNetworkReply_QtDShell::__override_abort(bool static_call)
{
    if (static_call) {
        return;
    } else {
        abort();
    }
}

bool  QNetworkReply_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QIODevice::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QNetworkReply_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QIODevice::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QNetworkReply_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QIODevice::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QNetworkReply_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QIODevice::canReadLine();
    } else {
        return canReadLine();
    }
}

void QNetworkReply_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QNetworkReply_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QNetworkReply::close();
    } else {
        close();
    }
}

void QNetworkReply_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QNetworkReply_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QNetworkReply_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QNetworkReply_QtDShell::__override_ignoreSslErrors(bool static_call)
{
    if (static_call) {
        QNetworkReply::ignoreSslErrors();
    } else {
        ignoreSslErrors();
    }
}

bool  QNetworkReply_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QNetworkReply::isSequential();
    } else {
        return isSequential();
    }
}

bool  QNetworkReply_QtDShell::__override_open(int  mode0, bool static_call)
{
    if (static_call) {
        return QIODevice::open((QIODevice::OpenMode )mode0);
    } else {
        return open((QIODevice::OpenMode )mode0);
    }
}

qint64  QNetworkReply_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QIODevice::pos();
    } else {
        return pos();
    }
}

qint64  QNetworkReply_QtDShell::__override_readData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return readData((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QNetworkReply_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QIODevice::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QNetworkReply_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QNetworkReply_QtDShell::__override_seek(qint64  pos0, bool static_call)
{
    if (static_call) {
        return QIODevice::seek((qint64 )pos0);
    } else {
        return seek((qint64 )pos0);
    }
}

void QNetworkReply_QtDShell::__override_setReadBufferSize(qint64  size0, bool static_call)
{
    if (static_call) {
        QNetworkReply::setReadBufferSize((qint64 )size0);
    } else {
        setReadBufferSize((qint64 )size0);
    }
}

qint64  QNetworkReply_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QIODevice::size();
    } else {
        return size();
    }
}

void QNetworkReply_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QNetworkReply_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QIODevice::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QNetworkReply_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QIODevice::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QNetworkReply_QtDShell::__override_writeData(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QNetworkReply::writeData((const char* )data0, (qint64 )len1);
    } else {
        return writeData((const char* )data0, (qint64 )len1);
    }
}

// QNetworkReply::downloadProgress(qint64 bytesReceived, qint64 bytesTotal)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_downloadProgress_long_long
(void* __this_nativeId,
 qint64 bytesReceived0,
 qint64 bytesTotal1)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_downloadProgress((qint64 )bytesReceived0, (qint64 )bytesTotal1);

}

// QNetworkReply::error(QNetworkReply::NetworkError arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_error_NetworkError
(void* __this_nativeId,
 int arg__1)
{
    QNetworkReply::NetworkError __qt_arg__1 = (QNetworkReply::NetworkError) arg__1;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_error((QNetworkReply::NetworkError )__qt_arg__1);

}

// QNetworkReply::finished()
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_finished
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_finished();

}

// QNetworkReply::metaDataChanged()
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_metaDataChanged
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_metaDataChanged();

}

// QNetworkReply::sslErrors(const QList<QSslError > & errors)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_sslErrors_QList
(void* __this_nativeId,
 void* errors0)
{
QList<QSslError > __qt_errors0 = (*(QList<QSslError > *)errors0);
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_sslErrors((const QList<QSslError >& )__qt_errors0);

}

// QNetworkReply::uploadProgress(qint64 bytesSent, qint64 bytesTotal)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_uploadProgress_long_long
(void* __this_nativeId,
 qint64 bytesSent0,
 qint64 bytesTotal1)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_uploadProgress((qint64 )bytesSent0, (qint64 )bytesTotal1);

}

// ---externC---
// QNetworkReply::QNetworkReply(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkReply_QNetworkReply_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QNetworkReply_QtDShell *__qt_this = new QNetworkReply_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QNetworkReply::attribute(QNetworkRequest::Attribute code) const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkReply_attribute_Attribute_const
(void* __this_nativeId,
 int code0)
{
    QNetworkRequest::Attribute __qt_code0 = (QNetworkRequest::Attribute) code0;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->attribute((QNetworkRequest::Attribute )__qt_code0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QNetworkReply::error() const
QTD_EXTERN QTD_EXPORT int qtd_QNetworkReply_error__const
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkReply::hasRawHeader(const QByteArray & headerName) const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkReply_hasRawHeader_QByteArray_const
(void* __this_nativeId,
 void* headerName0)
{
    const QByteArray&  __qt_headerName0 = (const QByteArray& ) *(QByteArray *)headerName0;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasRawHeader((const QByteArray& )__qt_headerName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkReply::header(QNetworkRequest::KnownHeaders header) const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkReply_header_KnownHeaders_const
(void* __this_nativeId,
 int header0)
{
    QNetworkRequest::KnownHeaders __qt_header0 = (QNetworkRequest::KnownHeaders) header0;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->header((QNetworkRequest::KnownHeaders )__qt_header0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QNetworkReply::ignoreSslErrors(const QList<QSslError > & errors)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_ignoreSslErrors_QList
(void* __this_nativeId,
 void* errors0)
{
QList<QSslError > __qt_errors0 = (*(QList<QSslError > *)errors0);
    QNetworkReply *__qt_this = (QNetworkReply *) __this_nativeId;
    __qt_this->ignoreSslErrors((const QList<QSslError >& )__qt_errors0);

}

// QNetworkReply::isFinished() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkReply_isFinished_const
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFinished();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkReply::isRunning() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkReply_isRunning_const
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRunning();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkReply::manager() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkReply_manager_const
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    QNetworkAccessManager*  __qt_return_value = __qt_this->manager();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkReply::operation() const
QTD_EXTERN QTD_EXPORT int qtd_QNetworkReply_operation_const
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->operation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkReply::rawHeader(const QByteArray & headerName) const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkReply_rawHeader_QByteArray_const
(void* __this_nativeId,
 void* headerName0)
{
    const QByteArray&  __qt_headerName0 = (const QByteArray& ) *(QByteArray *)headerName0;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->rawHeader((const QByteArray& )__qt_headerName0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QNetworkReply::rawHeaderList() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_rawHeaderList_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    QList<QByteArray >  __qt_return_value = __qt_this->rawHeaderList();

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QNetworkReply::rawHeaderPairs() const
// QNetworkReply::readBufferSize() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QNetworkReply_readBufferSize_const
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->readBufferSize();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkReply::request() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkReply_request_const
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    QNetworkRequest  __qt_return_value = __qt_this->request();

    void* __d_return_value = (void*) new QNetworkRequest(__qt_return_value);

    return __d_return_value;
}

// QNetworkReply::setAttribute(QNetworkRequest::Attribute code, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_setAttribute_Attribute_QVariant
(void* __this_nativeId,
 int code0,
 QVariant* value1)
{
    QNetworkRequest::Attribute __qt_code0 = (QNetworkRequest::Attribute) code0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_setAttribute((QNetworkRequest::Attribute )__qt_code0, (const QVariant& )__qt_value1);

}

// QNetworkReply::setError(QNetworkReply::NetworkError errorCode, const QString & errorString)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_setError_NetworkError_string
(void* __this_nativeId,
 int errorCode0,
 DArray errorString1)
{
    QNetworkReply::NetworkError __qt_errorCode0 = (QNetworkReply::NetworkError) errorCode0;
    QString __qt_errorString1 = QString::fromUtf8((const char *)errorString1.ptr, errorString1.length);
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_setError((QNetworkReply::NetworkError )__qt_errorCode0, (const QString& )__qt_errorString1);

}

// QNetworkReply::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_setHeader_KnownHeaders_QVariant
(void* __this_nativeId,
 int header0,
 QVariant* value1)
{
    QNetworkRequest::KnownHeaders __qt_header0 = (QNetworkRequest::KnownHeaders) header0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_setHeader((QNetworkRequest::KnownHeaders )__qt_header0, (const QVariant& )__qt_value1);

}

// QNetworkReply::setOperation(QNetworkAccessManager::Operation operation)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_setOperation_Operation
(void* __this_nativeId,
 int operation0)
{
    QNetworkAccessManager::Operation __qt_operation0 = (QNetworkAccessManager::Operation) operation0;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_setOperation((QNetworkAccessManager::Operation )__qt_operation0);

}

// QNetworkReply::setRawHeader(const QByteArray & headerName, const QByteArray & value)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_setRawHeader_QByteArray_QByteArray
(void* __this_nativeId,
 void* headerName0,
 void* value1)
{
    const QByteArray&  __qt_headerName0 = (const QByteArray& ) *(QByteArray *)headerName0;
    const QByteArray&  __qt_value1 = (const QByteArray& ) *(QByteArray *)value1;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_setRawHeader((const QByteArray& )__qt_headerName0, (const QByteArray& )__qt_value1);

}

// QNetworkReply::setRequest(const QNetworkRequest & request)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_setRequest_QNetworkRequest
(void* __this_nativeId,
 void* request0)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_setRequest((const QNetworkRequest& )__qt_request0);

}

// QNetworkReply::setSslConfiguration(const QSslConfiguration & configuration)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_setSslConfiguration_QSslConfiguration
(void* __this_nativeId,
 void* configuration0)
{
    const QSslConfiguration&  __qt_configuration0 = (const QSslConfiguration& ) *(QSslConfiguration *)configuration0;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->setSslConfiguration((const QSslConfiguration& )__qt_configuration0);

}

// QNetworkReply::setUrl(const QUrl & url)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_setUrl_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    __qt_this->__public_setUrl((const QUrl& )__qt_url0);

}

// QNetworkReply::sslConfiguration() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkReply_sslConfiguration_const
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    QSslConfiguration  __qt_return_value = __qt_this->sslConfiguration();

    void* __d_return_value = (void*) new QSslConfiguration(__qt_return_value);

    return __d_return_value;
}

// QNetworkReply::url() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkReply_url_const
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->url();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QNetworkReply::abort()
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_abort
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_abort(__do_static_call);

}

// QNetworkReply::close()
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_close
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_close(__do_static_call);

}

// QNetworkReply::ignoreSslErrors()
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_ignoreSslErrors
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_ignoreSslErrors(__do_static_call);

}

// QNetworkReply::isSequential() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkReply_isSequential_const
(void* __this_nativeId)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isSequential(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkReply::setReadBufferSize(qint64 size)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkReply_setReadBufferSize_long
(void* __this_nativeId,
 qint64 size0)
{
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setReadBufferSize((qint64 )size0, __do_static_call);

}

// QNetworkReply::writeData(const char * data, qint64 len)
QTD_EXTERN QTD_EXPORT qint64 qtd_QNetworkReply_writeData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_writeData((const char* )__qt_data0, (qint64 )len1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// QNetworkReply::readData(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QNetworkReply_readData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QNetworkReply_QtDShell *__qt_this = (QNetworkReply_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readData((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QNetworkReply_staticMetaObject() {
    return (void*)&QNetworkReply::staticMetaObject;
}


