#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QIODevice_shell.h"
#include <iostream>
#include <qiodevice.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QIODeviceEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QIODeviceEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QIODevice_createEntity(void *nativeId, void* dId)
{
    new QIODeviceEntity((QObject*)nativeId, dId);
}

QIODevice_QtDShell::QIODevice_QtDShell(void *d_ptr)
    : QIODevice(),
      QObjectLink(this, d_ptr)
{
}

QIODevice_QtDShell::QIODevice_QtDShell(void *d_ptr, QObject*  parent0)
    : QIODevice(parent0),
      QObjectLink(this, d_ptr)
{
}

QIODevice_QtDShell::~QIODevice_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QIODevice_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QIODevice::metaObject();
}

int QIODevice_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QIODevice::qt_metacall(_c, _id, _a);
}

int QIODevice_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QIODevice::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QIODevice_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, bool, QIODevice_atEnd_const_dispatch, (void *dId))
QTD_FUNC(CORE, QIODevice_atEnd_const_dispatch)
bool  QIODevice_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
QTD_FUNC(CORE, QIODevice_bytesAvailable_const_dispatch)
qint64  QIODevice_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
QTD_FUNC(CORE, QIODevice_bytesToWrite_const_dispatch)
qint64  QIODevice_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
QTD_FUNC(CORE, QIODevice_canReadLine_const_dispatch)
bool  QIODevice_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QIODevice_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QIODevice_close_dispatch, (void *dId))
QTD_FUNC(CORE, QIODevice_close_dispatch)
void QIODevice_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QIODevice_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QIODevice_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QIODevice_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_isSequential_const_dispatch, (void *dId))
QTD_FUNC(CORE, QIODevice_isSequential_const_dispatch)
bool  QIODevice_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int mode0))
QTD_FUNC(CORE, QIODevice_open_OpenMode_dispatch)
bool  QIODevice_QtDShell::open(QIODevice::OpenMode  mode0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )mode0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_pos_const_dispatch, (void *dId))
QTD_FUNC(CORE, QIODevice_pos_const_dispatch)
qint64  QIODevice_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
QTD_FUNC(CORE, QIODevice_readData_nativepointerchar_long_dispatch)
qint64  QIODevice_QtDShell::readData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
QTD_FUNC(CORE, QIODevice_readLineData_nativepointerchar_long_dispatch)
qint64  QIODevice_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_reset_dispatch, (void *dId))
QTD_FUNC(CORE, QIODevice_reset_dispatch)
bool  QIODevice_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 pos0))
QTD_FUNC(CORE, QIODevice_seek_long_dispatch)
bool  QIODevice_QtDShell::seek(qint64  pos0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )pos0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_size_const_dispatch, (void *dId))
QTD_FUNC(CORE, QIODevice_size_const_dispatch)
qint64  QIODevice_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QIODevice_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
QTD_FUNC(CORE, QIODevice_waitForBytesWritten_int_dispatch)
bool  QIODevice_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
QTD_FUNC(CORE, QIODevice_waitForReadyRead_int_dispatch)
bool  QIODevice_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
QTD_FUNC(CORE, QIODevice_writeData_nativepointerchar_long_dispatch)
qint64  QIODevice_QtDShell::writeData(const char*  data0, qint64  len1)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )len1);
}

QTD_EXTERN QTD_EXPORT void qtd_QIODevice_initCallBacks(VoidFunc *virts) {
    qtd_QIODevice_atEnd_const_dispatch = (qtd_QIODevice_atEnd_const_dispatch_t) virts[0];
    qtd_QIODevice_bytesAvailable_const_dispatch = (qtd_QIODevice_bytesAvailable_const_dispatch_t) virts[1];
    qtd_QIODevice_bytesToWrite_const_dispatch = (qtd_QIODevice_bytesToWrite_const_dispatch_t) virts[2];
    qtd_QIODevice_canReadLine_const_dispatch = (qtd_QIODevice_canReadLine_const_dispatch_t) virts[3];
    qtd_QIODevice_close_dispatch = (qtd_QIODevice_close_dispatch_t) virts[4];
    qtd_QIODevice_isSequential_const_dispatch = (qtd_QIODevice_isSequential_const_dispatch_t) virts[5];
    qtd_QIODevice_open_OpenMode_dispatch = (qtd_QIODevice_open_OpenMode_dispatch_t) virts[6];
    qtd_QIODevice_pos_const_dispatch = (qtd_QIODevice_pos_const_dispatch_t) virts[7];
    qtd_QIODevice_readData_nativepointerchar_long_dispatch = (qtd_QIODevice_readData_nativepointerchar_long_dispatch_t) virts[8];
    qtd_QIODevice_readLineData_nativepointerchar_long_dispatch = (qtd_QIODevice_readLineData_nativepointerchar_long_dispatch_t) virts[9];
    qtd_QIODevice_reset_dispatch = (qtd_QIODevice_reset_dispatch_t) virts[10];
    qtd_QIODevice_seek_long_dispatch = (qtd_QIODevice_seek_long_dispatch_t) virts[11];
    qtd_QIODevice_size_const_dispatch = (qtd_QIODevice_size_const_dispatch_t) virts[12];
    qtd_QIODevice_waitForBytesWritten_int_dispatch = (qtd_QIODevice_waitForBytesWritten_int_dispatch_t) virts[13];
    qtd_QIODevice_waitForReadyRead_int_dispatch = (qtd_QIODevice_waitForReadyRead_int_dispatch_t) virts[14];
    qtd_QIODevice_writeData_nativepointerchar_long_dispatch = (qtd_QIODevice_writeData_nativepointerchar_long_dispatch_t) virts[15];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QIODevice_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QIODevice_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QIODevice_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QIODevice_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QIODevice_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QIODevice_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QIODevice_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

// Write virtual function overries used to decide on static/virtual calls
bool  QIODevice_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QIODevice::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QIODevice_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QIODevice::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QIODevice_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QIODevice::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QIODevice_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QIODevice::canReadLine();
    } else {
        return canReadLine();
    }
}

void QIODevice_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QIODevice_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QIODevice::close();
    } else {
        close();
    }
}

void QIODevice_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QIODevice_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QIODevice_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QIODevice_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QIODevice::isSequential();
    } else {
        return isSequential();
    }
}

bool  QIODevice_QtDShell::__override_open(int  mode0, bool static_call)
{
    if (static_call) {
        return QIODevice::open((QIODevice::OpenMode )mode0);
    } else {
        return open((QIODevice::OpenMode )mode0);
    }
}

qint64  QIODevice_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QIODevice::pos();
    } else {
        return pos();
    }
}

qint64  QIODevice_QtDShell::__override_readData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return readData((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QIODevice_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QIODevice::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QIODevice_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QIODevice_QtDShell::__override_seek(qint64  pos0, bool static_call)
{
    if (static_call) {
        return QIODevice::seek((qint64 )pos0);
    } else {
        return seek((qint64 )pos0);
    }
}

qint64  QIODevice_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QIODevice::size();
    } else {
        return size();
    }
}

void QIODevice_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QIODevice_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QIODevice::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QIODevice_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QIODevice::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QIODevice_QtDShell::__override_writeData(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return writeData((const char* )data0, (qint64 )len1);
    }
}

// QIODevice::aboutToClose()
QTD_EXTERN QTD_EXPORT void qtd_QIODevice_aboutToClose
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    __qt_this->__public_aboutToClose();

}

// QIODevice::bytesWritten(qint64 bytes)
QTD_EXTERN QTD_EXPORT void qtd_QIODevice_bytesWritten_long
(void* __this_nativeId,
 qint64 bytes0)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    __qt_this->__public_bytesWritten((qint64 )bytes0);

}

// QIODevice::readChannelFinished()
QTD_EXTERN QTD_EXPORT void qtd_QIODevice_readChannelFinished
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    __qt_this->__public_readChannelFinished();

}

// QIODevice::readyRead()
QTD_EXTERN QTD_EXPORT void qtd_QIODevice_readyRead
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    __qt_this->__public_readyRead();

}

// ---externC---
// QIODevice::QIODevice()
QTD_EXTERN QTD_EXPORT void* qtd_QIODevice_QIODevice
(void *d_ptr)
{
    QIODevice_QtDShell *__qt_this = new QIODevice_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QIODevice::QIODevice(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QIODevice_QIODevice_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QIODevice_QtDShell *__qt_this = new QIODevice_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QIODevice::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QIODevice_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QIODevice::getChar(char * c)
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_getByte_nativepointerchar
(void* __this_nativeId,
 char* c0)
{
    char*  __qt_c0 = (char* ) c0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->getChar((char* )__qt_c0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::isOpen() const
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_isOpen_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isOpen();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::isReadable() const
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_isReadable_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::isTextModeEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_isTextModeEnabled_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTextModeEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::isWritable() const
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_isWritable_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWritable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::openMode() const
QTD_EXTERN QTD_EXPORT int qtd_QIODevice_openMode_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->openMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::peek(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_peek_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->peek((char* )__qt_data0, (qint64 )maxlen1);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::peek(qint64 maxlen)
QTD_EXTERN QTD_EXPORT void* qtd_QIODevice_peek_long
(void* __this_nativeId,
 qint64 maxlen0)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->peek((qint64 )maxlen0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QIODevice::putChar(char c)
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_putByte_char
(void* __this_nativeId,
 char c0)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->putChar((char )c0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::read(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_read_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->read((char* )__qt_data0, (qint64 )maxlen1);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::read(qint64 maxlen)
QTD_EXTERN QTD_EXPORT void* qtd_QIODevice_read_long
(void* __this_nativeId,
 qint64 maxlen0)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->read((qint64 )maxlen0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QIODevice::readAll()
QTD_EXTERN QTD_EXPORT void* qtd_QIODevice_readAll
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->readAll();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QIODevice::readLine(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_readLine_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->readLine((char* )__qt_data0, (qint64 )maxlen1);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::readLine(qint64 maxlen)
QTD_EXTERN QTD_EXPORT void* qtd_QIODevice_readLine_long
(void* __this_nativeId,
 qint64 maxlen0)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->readLine((qint64 )maxlen0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QIODevice::setErrorString(const QString & errorString)
QTD_EXTERN QTD_EXPORT void qtd_QIODevice_setErrorString_string
(void* __this_nativeId,
 DArray errorString0)
{
    QString __qt_errorString0 = QString::fromUtf8((const char *)errorString0.ptr, errorString0.length);
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    __qt_this->__public_setErrorString((const QString& )__qt_errorString0);

}

// QIODevice::setOpenMode(QFlags<QIODevice::OpenModeFlag> openMode)
QTD_EXTERN QTD_EXPORT void qtd_QIODevice_setOpenMode_OpenMode
(void* __this_nativeId,
 int openMode0)
{
    QFlags<QIODevice::OpenModeFlag> __qt_openMode0 = (QFlags<QIODevice::OpenModeFlag>) openMode0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    __qt_this->__public_setOpenMode((QIODevice::OpenMode )__qt_openMode0);

}

// QIODevice::setTextModeEnabled(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QIODevice_setTextModeEnabled_bool
(void* __this_nativeId,
 bool enabled0)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    __qt_this->setTextModeEnabled((bool )enabled0);

}

// QIODevice::ungetChar(char c)
QTD_EXTERN QTD_EXPORT void qtd_QIODevice_ungetByte_char
(void* __this_nativeId,
 char c0)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    __qt_this->ungetChar((char )c0);

}

// QIODevice::write(const QByteArray & data)
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_write_QByteArray
(void* __this_nativeId,
 void* data0)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->write((const QByteArray& )__qt_data0);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::write(const char * data)
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_write_nativepointerchar
(void* __this_nativeId,
 char* data0)
{
    const char*  __qt_data0 = (const char* ) data0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->write((const char* )__qt_data0);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::write(const char * data, qint64 len)
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_write_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->write((const char* )__qt_data0, (qint64 )len1);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_atEnd_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_atEnd(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::bytesAvailable() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_bytesAvailable_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_bytesAvailable(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::bytesToWrite() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_bytesToWrite_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_bytesToWrite(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::canReadLine() const
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_canReadLine_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canReadLine(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::close()
QTD_EXTERN QTD_EXPORT void qtd_QIODevice_close
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_close(__do_static_call);

}

// QIODevice::isSequential() const
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_isSequential_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isSequential(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::open(QFlags<QIODevice::OpenModeFlag> mode)
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_open_OpenMode
(void* __this_nativeId,
 int mode0)
{
    QFlags<QIODevice::OpenModeFlag> __qt_mode0 = (QFlags<QIODevice::OpenModeFlag>) mode0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_open((QIODevice::OpenMode )__qt_mode0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::pos() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_pos_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_pos(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::readData(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_readData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readData((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::readLineData(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_readLineData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readLineData((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::reset()
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_reset
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_reset(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::seek(qint64 pos)
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_seek_long
(void* __this_nativeId,
 qint64 pos0)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_seek((qint64 )pos0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::size() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_size_const
(void* __this_nativeId)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_size(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::waitForBytesWritten(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_waitForBytesWritten_int
(void* __this_nativeId,
 int msecs0)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_waitForBytesWritten((int )msecs0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::waitForReadyRead(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QIODevice_waitForReadyRead_int
(void* __this_nativeId,
 int msecs0)
{
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_waitForReadyRead((int )msecs0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIODevice::writeData(const char * data, qint64 len)
QTD_EXTERN QTD_EXPORT qint64 qtd_QIODevice_writeData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QIODevice_QtDShell *__qt_this = (QIODevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_writeData((const char* )__qt_data0, (qint64 )len1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QIODevice_staticMetaObject() {
    return (void*)&QIODevice::staticMetaObject;
}


