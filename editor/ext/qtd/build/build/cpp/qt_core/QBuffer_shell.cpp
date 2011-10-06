#include <QVariant>
#include <qbuffer.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QBuffer_shell.h"
#include <iostream>
#include <qbuffer.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QBufferEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QBufferEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QBuffer_createEntity(void *nativeId, void* dId)
{
    new QBufferEntity((QObject*)nativeId, dId);
}

QBuffer_QtDShell::QBuffer_QtDShell(void *d_ptr, QByteArray*  buf0, QObject*  parent1)
    : QBuffer(buf0, parent1),
      QObjectLink(this, d_ptr)
{
}

QBuffer_QtDShell::QBuffer_QtDShell(void *d_ptr, QObject*  parent0)
    : QBuffer(parent0),
      QObjectLink(this, d_ptr)
{
}

QBuffer_QtDShell::~QBuffer_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QBuffer_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QBuffer::metaObject();
}

int QBuffer_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QBuffer::qt_metacall(_c, _id, _a);
}

int QBuffer_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QBuffer::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QBuffer_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, bool, QIODevice_atEnd_const_dispatch, (void *dId))
bool  QBuffer_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
qint64  QBuffer_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
qint64  QBuffer_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
bool  QBuffer_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QBuffer_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QIODevice_close_dispatch, (void *dId))
void QBuffer_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QBuffer_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QBuffer_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QBuffer_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_isSequential_const_dispatch, (void *dId))
bool  QBuffer_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int openMode0))
bool  QBuffer_QtDShell::open(QIODevice::OpenMode  openMode0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )openMode0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_pos_const_dispatch, (void *dId))
qint64  QBuffer_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QBuffer_QtDShell::readData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QBuffer_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_reset_dispatch, (void *dId))
bool  QBuffer_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 off0))
bool  QBuffer_QtDShell::seek(qint64  off0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )off0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_size_const_dispatch, (void *dId))
qint64  QBuffer_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QBuffer_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
bool  QBuffer_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
bool  QBuffer_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
qint64  QBuffer_QtDShell::writeData(const char*  data0, qint64  len1)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )len1);
}

QTD_EXTERN QTD_EXPORT void qtd_QBuffer_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QBuffer_QtDShell::__public_connectNotify(const char*  arg__1)
{
    QBuffer::connectNotify((const char* )arg__1);
}

void QBuffer_QtDShell::__public_disconnectNotify(const char*  arg__1)
{
    QBuffer::disconnectNotify((const char* )arg__1);
}

QObject*  QBuffer_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QBuffer_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QBuffer_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QBuffer_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QBuffer_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QBuffer_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QBuffer_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

// Write virtual function overries used to decide on static/virtual calls
bool  QBuffer_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QBuffer::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QBuffer_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QIODevice::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QBuffer_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QIODevice::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QBuffer_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QBuffer::canReadLine();
    } else {
        return canReadLine();
    }
}

void QBuffer_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QBuffer_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QBuffer::close();
    } else {
        close();
    }
}

void QBuffer_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QBuffer_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QBuffer_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QBuffer_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QIODevice::isSequential();
    } else {
        return isSequential();
    }
}

bool  QBuffer_QtDShell::__override_open(int  openMode0, bool static_call)
{
    if (static_call) {
        return QBuffer::open((QIODevice::OpenMode )openMode0);
    } else {
        return open((QIODevice::OpenMode )openMode0);
    }
}

qint64  QBuffer_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QBuffer::pos();
    } else {
        return pos();
    }
}

qint64  QBuffer_QtDShell::__override_readData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QBuffer::readData((char* )data0, (qint64 )maxlen1);
    } else {
        return readData((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QBuffer_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QIODevice::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QBuffer_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QBuffer_QtDShell::__override_seek(qint64  off0, bool static_call)
{
    if (static_call) {
        return QBuffer::seek((qint64 )off0);
    } else {
        return seek((qint64 )off0);
    }
}

qint64  QBuffer_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QBuffer::size();
    } else {
        return size();
    }
}

void QBuffer_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QBuffer_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QIODevice::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QBuffer_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QIODevice::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QBuffer_QtDShell::__override_writeData(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QBuffer::writeData((const char* )data0, (qint64 )len1);
    } else {
        return writeData((const char* )data0, (qint64 )len1);
    }
}

// ---externC---
// QBuffer::QBuffer(QByteArray * buf, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QBuffer_QBuffer_nativepointerQByteArray_QObject
(void *d_ptr,
 void* buf0,
 void* parent1)
{
    QByteArray*  __qt_buf0 = (QByteArray* ) buf0;
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QBuffer_QtDShell *__qt_this = new QBuffer_QtDShell(d_ptr, (QByteArray* )__qt_buf0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QBuffer::QBuffer(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QBuffer_QBuffer_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QBuffer_QtDShell *__qt_this = new QBuffer_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QBuffer::buffer()
QTD_EXTERN QTD_EXPORT void* qtd_QBuffer_buffer
(void* __this_nativeId)
{
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->buffer();

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QBuffer::connectNotify(const char * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBuffer_connectNotify_nativepointerchar
(void* __this_nativeId,
 char* arg__1)
{
    const char*  __qt_arg__1 = (const char* ) arg__1;
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    __qt_this->__public_connectNotify((const char* )__qt_arg__1);

}

// QBuffer::data() const
QTD_EXTERN QTD_EXPORT void* qtd_QBuffer_data_const
(void* __this_nativeId)
{
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    const QByteArray&  __qt_return_value = __qt_this->data();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QBuffer::disconnectNotify(const char * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBuffer_disconnectNotify_nativepointerchar
(void* __this_nativeId,
 char* arg__1)
{
    const char*  __qt_arg__1 = (const char* ) arg__1;
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    __qt_this->__public_disconnectNotify((const char* )__qt_arg__1);

}

// QBuffer::setBuffer(QByteArray * a)
QTD_EXTERN QTD_EXPORT void qtd_QBuffer_setBuffer_private_nativepointerQByteArray
(void* __this_nativeId,
 void* a0)
{
    QByteArray*  __qt_a0 = (QByteArray* ) a0;
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    __qt_this->setBuffer((QByteArray* )__qt_a0);

}

// QBuffer::setData(const QByteArray & data)
QTD_EXTERN QTD_EXPORT void qtd_QBuffer_setData_QByteArray
(void* __this_nativeId,
 void* data0)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    __qt_this->setData((const QByteArray& )__qt_data0);

}

// QBuffer::setData(const char * data, int len)
QTD_EXTERN QTD_EXPORT void qtd_QBuffer_setData_nativepointerchar_int
(void* __this_nativeId,
 char* data0,
 int len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    __qt_this->setData((const char* )__qt_data0, (int )len1);

}

// QBuffer::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QBuffer_atEnd_const
(void* __this_nativeId)
{
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_atEnd(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBuffer::canReadLine() const
QTD_EXTERN QTD_EXPORT bool qtd_QBuffer_canReadLine_const
(void* __this_nativeId)
{
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canReadLine(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBuffer::close()
QTD_EXTERN QTD_EXPORT void qtd_QBuffer_close
(void* __this_nativeId)
{
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_close(__do_static_call);

}

// QBuffer::open(QFlags<QIODevice::OpenModeFlag> openMode)
QTD_EXTERN QTD_EXPORT bool qtd_QBuffer_open_OpenMode
(void* __this_nativeId,
 int openMode0)
{
    QFlags<QIODevice::OpenModeFlag> __qt_openMode0 = (QFlags<QIODevice::OpenModeFlag>) openMode0;
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_open((QIODevice::OpenMode )__qt_openMode0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBuffer::pos() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QBuffer_pos_const
(void* __this_nativeId)
{
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_pos(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBuffer::readData(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QBuffer_readData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readData((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBuffer::seek(qint64 off)
QTD_EXTERN QTD_EXPORT bool qtd_QBuffer_seek_long
(void* __this_nativeId,
 qint64 off0)
{
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_seek((qint64 )off0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBuffer::size() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QBuffer_size_const
(void* __this_nativeId)
{
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_size(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBuffer::writeData(const char * data, qint64 len)
QTD_EXTERN QTD_EXPORT qint64 qtd_QBuffer_writeData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QBuffer_QtDShell *__qt_this = (QBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_writeData((const char* )__qt_data0, (qint64 )len1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QBuffer_staticMetaObject() {
    return (void*)&QBuffer::staticMetaObject;
}


