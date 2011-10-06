#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qprocess.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QProcess_shell.h"
#include <iostream>
#include <qprocess.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QProcessEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QProcessEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QProcess_createEntity(void *nativeId, void* dId)
{
    new QProcessEntity((QObject*)nativeId, dId);
}

QProcess_QtDShell::QProcess_QtDShell(void *d_ptr, QObject*  parent0)
    : QProcess(parent0),
      QObjectLink(this, d_ptr)
{
}

QProcess_QtDShell::~QProcess_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QProcess_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QProcess::metaObject();
}

int QProcess_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QProcess::qt_metacall(_c, _id, _a);
}

int QProcess_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QProcess::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QProcess_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, bool, QIODevice_atEnd_const_dispatch, (void *dId))
bool  QProcess_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
qint64  QProcess_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
qint64  QProcess_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
bool  QProcess_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QProcess_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QIODevice_close_dispatch, (void *dId))
void QProcess_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QProcess_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QProcess_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QProcess_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_isSequential_const_dispatch, (void *dId))
bool  QProcess_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int mode0))
bool  QProcess_QtDShell::open(QIODevice::OpenMode  mode0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )mode0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_pos_const_dispatch, (void *dId))
qint64  QProcess_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QProcess_QtDShell::readData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QProcess_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_reset_dispatch, (void *dId))
bool  QProcess_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 pos0))
bool  QProcess_QtDShell::seek(qint64  pos0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )pos0);
}

QTD_FUNC_DECL(CORE, void, QProcess_setupChildProcess_dispatch, (void *dId))
QTD_FUNC(CORE, QProcess_setupChildProcess_dispatch)
void QProcess_QtDShell::setupChildProcess()
{
    qtd_QProcess_setupChildProcess_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_size_const_dispatch, (void *dId))
qint64  QProcess_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QProcess_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
bool  QProcess_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
bool  QProcess_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
qint64  QProcess_QtDShell::writeData(const char*  data0, qint64  len1)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )len1);
}

QTD_EXTERN QTD_EXPORT void qtd_QProcess_initCallBacks(VoidFunc *virts) {
    qtd_QProcess_setupChildProcess_dispatch = (qtd_QProcess_setupChildProcess_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QProcess_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QProcess_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QProcess_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QProcess_QtDShell::__public_setProcessState(int  state0)
{
    QProcess::setProcessState((QProcess::ProcessState )state0);
}

void QProcess_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QProcess_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QProcess_QtDShell::__public_error(int  error0)
{
    QProcess::error((QProcess::ProcessError )error0);
}

void QProcess_QtDShell::__public_finished(int  exitCode0)
{
    QProcess::finished((int )exitCode0);
}

void QProcess_QtDShell::__public_finished(int  exitCode0, int  exitStatus1)
{
    QProcess::finished((int )exitCode0, (QProcess::ExitStatus )exitStatus1);
}

void QProcess_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QProcess_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

void QProcess_QtDShell::__public_readyReadStandardError()
{
    QProcess::readyReadStandardError();
}

void QProcess_QtDShell::__public_readyReadStandardOutput()
{
    QProcess::readyReadStandardOutput();
}

void QProcess_QtDShell::__public_started()
{
    QProcess::started();
}

void QProcess_QtDShell::__public_stateChanged(int  state0)
{
    QProcess::stateChanged((QProcess::ProcessState )state0);
}

// Write virtual function overries used to decide on static/virtual calls
bool  QProcess_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QProcess::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QProcess_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QProcess::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QProcess_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QProcess::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QProcess_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QProcess::canReadLine();
    } else {
        return canReadLine();
    }
}

void QProcess_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QProcess_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QProcess::close();
    } else {
        close();
    }
}

void QProcess_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QProcess_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QProcess_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QProcess_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QProcess::isSequential();
    } else {
        return isSequential();
    }
}

bool  QProcess_QtDShell::__override_open(int  mode0, bool static_call)
{
    if (static_call) {
        return QIODevice::open((QIODevice::OpenMode )mode0);
    } else {
        return open((QIODevice::OpenMode )mode0);
    }
}

qint64  QProcess_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QIODevice::pos();
    } else {
        return pos();
    }
}

qint64  QProcess_QtDShell::__override_readData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QProcess::readData((char* )data0, (qint64 )maxlen1);
    } else {
        return readData((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QProcess_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QIODevice::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QProcess_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QProcess_QtDShell::__override_seek(qint64  pos0, bool static_call)
{
    if (static_call) {
        return QIODevice::seek((qint64 )pos0);
    } else {
        return seek((qint64 )pos0);
    }
}

void QProcess_QtDShell::__override_setupChildProcess(bool static_call)
{
    if (static_call) {
        QProcess::setupChildProcess();
    } else {
        setupChildProcess();
    }
}

qint64  QProcess_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QIODevice::size();
    } else {
        return size();
    }
}

void QProcess_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QProcess_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QProcess::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QProcess_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QProcess::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QProcess_QtDShell::__override_writeData(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QProcess::writeData((const char* )data0, (qint64 )len1);
    } else {
        return writeData((const char* )data0, (qint64 )len1);
    }
}

// QProcess::error(QProcess::ProcessError error)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_error_ProcessError
(void* __this_nativeId,
 int error0)
{
    QProcess::ProcessError __qt_error0 = (QProcess::ProcessError) error0;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->__public_error((QProcess::ProcessError )__qt_error0);

}

// QProcess::finished(int exitCode)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_finished_int
(void* __this_nativeId,
 int exitCode0)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->__public_finished((int )exitCode0);

}

// QProcess::finished(int exitCode, QProcess::ExitStatus exitStatus)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_finished_int_ExitStatus
(void* __this_nativeId,
 int exitCode0,
 int exitStatus1)
{
    QProcess::ExitStatus __qt_exitStatus1 = (QProcess::ExitStatus) exitStatus1;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->__public_finished((int )exitCode0, (QProcess::ExitStatus )__qt_exitStatus1);

}

// QProcess::readyReadStandardError()
QTD_EXTERN QTD_EXPORT void qtd_QProcess_readyReadStandardError
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->__public_readyReadStandardError();

}

// QProcess::readyReadStandardOutput()
QTD_EXTERN QTD_EXPORT void qtd_QProcess_readyReadStandardOutput
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->__public_readyReadStandardOutput();

}

// QProcess::started()
QTD_EXTERN QTD_EXPORT void qtd_QProcess_started
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->__public_started();

}

// QProcess::stateChanged(QProcess::ProcessState state)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_stateChanged_ProcessState
(void* __this_nativeId,
 int state0)
{
    QProcess::ProcessState __qt_state0 = (QProcess::ProcessState) state0;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->__public_stateChanged((QProcess::ProcessState )__qt_state0);

}

// ---externC---
// QProcess::QProcess(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QProcess_QProcess_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QProcess_QtDShell *__qt_this = new QProcess_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QProcess::closeReadChannel(QProcess::ProcessChannel channel)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_closeReadChannel_ProcessChannel
(void* __this_nativeId,
 int channel0)
{
    QProcess::ProcessChannel __qt_channel0 = (QProcess::ProcessChannel) channel0;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->closeReadChannel((QProcess::ProcessChannel )__qt_channel0);

}

// QProcess::closeWriteChannel()
QTD_EXTERN QTD_EXPORT void qtd_QProcess_closeWriteChannel
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->closeWriteChannel();

}

// QProcess::environment() const
QTD_EXTERN QTD_EXPORT void qtd_QProcess_environment_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->environment();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QProcess::error() const
QTD_EXTERN QTD_EXPORT int qtd_QProcess_lastError_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::exitCode() const
QTD_EXTERN QTD_EXPORT int qtd_QProcess_exitCode_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->exitCode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::exitStatus() const
QTD_EXTERN QTD_EXPORT int qtd_QProcess_exitStatus_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->exitStatus();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::kill()
QTD_EXTERN QTD_EXPORT void qtd_QProcess_kill
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->kill();

}

// QProcess::processChannelMode() const
QTD_EXTERN QTD_EXPORT int qtd_QProcess_processChannelMode_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->processChannelMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::readAllStandardError()
QTD_EXTERN QTD_EXPORT void* qtd_QProcess_readAllStandardError
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->readAllStandardError();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QProcess::readAllStandardOutput()
QTD_EXTERN QTD_EXPORT void* qtd_QProcess_readAllStandardOutput
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->readAllStandardOutput();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QProcess::readChannel() const
QTD_EXTERN QTD_EXPORT int qtd_QProcess_readChannel_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->readChannel();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::setEnvironment(const QStringList & environment)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_setEnvironment_QList
(void* __this_nativeId,
 void* environment0)
{
QStringList __qt_environment0 = (*(QStringList *)environment0);
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->setEnvironment((const QStringList& )__qt_environment0);

}

// QProcess::setProcessChannelMode(QProcess::ProcessChannelMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_setProcessChannelMode_ProcessChannelMode
(void* __this_nativeId,
 int mode0)
{
    QProcess::ProcessChannelMode __qt_mode0 = (QProcess::ProcessChannelMode) mode0;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->setProcessChannelMode((QProcess::ProcessChannelMode )__qt_mode0);

}

// QProcess::setProcessState(QProcess::ProcessState state)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_setProcessState_ProcessState
(void* __this_nativeId,
 int state0)
{
    QProcess::ProcessState __qt_state0 = (QProcess::ProcessState) state0;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->__public_setProcessState((QProcess::ProcessState )__qt_state0);

}

// QProcess::setReadChannel(QProcess::ProcessChannel channel)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_setReadChannel_ProcessChannel
(void* __this_nativeId,
 int channel0)
{
    QProcess::ProcessChannel __qt_channel0 = (QProcess::ProcessChannel) channel0;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->setReadChannel((QProcess::ProcessChannel )__qt_channel0);

}

// QProcess::setStandardErrorFile(const QString & fileName, QFlags<QIODevice::OpenModeFlag> mode)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_setStandardErrorFile_string_OpenMode
(void* __this_nativeId,
 DArray fileName0,
 int mode1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QFlags<QIODevice::OpenModeFlag> __qt_mode1 = (QFlags<QIODevice::OpenModeFlag>) mode1;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->setStandardErrorFile((const QString& )__qt_fileName0, (QIODevice::OpenMode )__qt_mode1);

}

// QProcess::setStandardInputFile(const QString & fileName)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_setStandardInputFile_string
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->setStandardInputFile((const QString& )__qt_fileName0);

}

// QProcess::setStandardOutputFile(const QString & fileName, QFlags<QIODevice::OpenModeFlag> mode)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_setStandardOutputFile_string_OpenMode
(void* __this_nativeId,
 DArray fileName0,
 int mode1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QFlags<QIODevice::OpenModeFlag> __qt_mode1 = (QFlags<QIODevice::OpenModeFlag>) mode1;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->setStandardOutputFile((const QString& )__qt_fileName0, (QIODevice::OpenMode )__qt_mode1);

}

// QProcess::setStandardOutputProcess(QProcess * destination)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_setStandardOutputProcess_QProcess
(void* __this_nativeId,
 void* destination0)
{
    QProcess*  __qt_destination0 = (QProcess* ) destination0;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->setStandardOutputProcess((QProcess* )__qt_destination0);

}

// QProcess::setWorkingDirectory(const QString & dir)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_setWorkingDirectory_string
(void* __this_nativeId,
 DArray dir0)
{
    QString __qt_dir0 = QString::fromUtf8((const char *)dir0.ptr, dir0.length);
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->setWorkingDirectory((const QString& )__qt_dir0);

}

// QProcess::start(const QString & program, QFlags<QIODevice::OpenModeFlag> mode)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_start_string_OpenMode
(void* __this_nativeId,
 DArray program0,
 int mode1)
{
    QString __qt_program0 = QString::fromUtf8((const char *)program0.ptr, program0.length);
    QFlags<QIODevice::OpenModeFlag> __qt_mode1 = (QFlags<QIODevice::OpenModeFlag>) mode1;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->start((const QString& )__qt_program0, (QIODevice::OpenMode )__qt_mode1);

}

// QProcess::start(const QString & program, const QStringList & arguments, QFlags<QIODevice::OpenModeFlag> mode)
QTD_EXTERN QTD_EXPORT void qtd_QProcess_start_string_QList_OpenMode
(void* __this_nativeId,
 DArray program0,
 void* arguments1,
 int mode2)
{
    QString __qt_program0 = QString::fromUtf8((const char *)program0.ptr, program0.length);
QStringList __qt_arguments1 = (*(QStringList *)arguments1);
    QFlags<QIODevice::OpenModeFlag> __qt_mode2 = (QFlags<QIODevice::OpenModeFlag>) mode2;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->start((const QString& )__qt_program0, (const QStringList& )__qt_arguments1, (QIODevice::OpenMode )__qt_mode2);

}

// QProcess::state() const
QTD_EXTERN QTD_EXPORT int qtd_QProcess_state_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->state();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::terminate()
QTD_EXTERN QTD_EXPORT void qtd_QProcess_terminate
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    __qt_this->terminate();

}

// QProcess::waitForFinished(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QProcess_waitForFinished_int
(void* __this_nativeId,
 int msecs0)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForFinished((int )msecs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::waitForStarted(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QProcess_waitForStarted_int
(void* __this_nativeId,
 int msecs0)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->waitForStarted((int )msecs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::workingDirectory() const
QTD_EXTERN QTD_EXPORT void qtd_QProcess_workingDirectory_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->workingDirectory();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QProcess::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QProcess_atEnd_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_atEnd(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::bytesAvailable() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QProcess_bytesAvailable_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_bytesAvailable(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::bytesToWrite() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QProcess_bytesToWrite_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_bytesToWrite(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::canReadLine() const
QTD_EXTERN QTD_EXPORT bool qtd_QProcess_canReadLine_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canReadLine(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::close()
QTD_EXTERN QTD_EXPORT void qtd_QProcess_close
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_close(__do_static_call);

}

// QProcess::isSequential() const
QTD_EXTERN QTD_EXPORT bool qtd_QProcess_isSequential_const
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isSequential(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::readData(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QProcess_readData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readData((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::setupChildProcess()
QTD_EXTERN QTD_EXPORT void qtd_QProcess_setupChildProcess
(void* __this_nativeId)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setupChildProcess(__do_static_call);

}

// QProcess::waitForBytesWritten(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QProcess_waitForBytesWritten_int
(void* __this_nativeId,
 int msecs0)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_waitForBytesWritten((int )msecs0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::waitForReadyRead(int msecs)
QTD_EXTERN QTD_EXPORT bool qtd_QProcess_waitForReadyRead_int
(void* __this_nativeId,
 int msecs0)
{
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_waitForReadyRead((int )msecs0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::writeData(const char * data, qint64 len)
QTD_EXTERN QTD_EXPORT qint64 qtd_QProcess_writeData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QProcess_QtDShell *__qt_this = (QProcess_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_writeData((const char* )__qt_data0, (qint64 )len1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::execute(const QString & program)
QTD_EXTERN QTD_EXPORT int qtd_QProcess_execute_string
(DArray program0)
{
    QString __qt_program0 = QString::fromUtf8((const char *)program0.ptr, program0.length);
    int  __qt_return_value = QProcess_QtDShell::execute((const QString& )__qt_program0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::execute(const QString & program, const QStringList & arguments)
QTD_EXTERN QTD_EXPORT int qtd_QProcess_execute_string_QList
(DArray program0,
 void* arguments1)
{
    QString __qt_program0 = QString::fromUtf8((const char *)program0.ptr, program0.length);
QStringList __qt_arguments1 = (*(QStringList *)arguments1);
    int  __qt_return_value = QProcess_QtDShell::execute((const QString& )__qt_program0, (const QStringList& )__qt_arguments1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::startDetached(const QString & program)
QTD_EXTERN QTD_EXPORT bool qtd_QProcess_startDetached_string
(DArray program0)
{
    QString __qt_program0 = QString::fromUtf8((const char *)program0.ptr, program0.length);
    bool  __qt_return_value = QProcess_QtDShell::startDetached((const QString& )__qt_program0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::startDetached(const QString & program, const QStringList & arguments)
QTD_EXTERN QTD_EXPORT bool qtd_QProcess_startDetached_string_QList
(DArray program0,
 void* arguments1)
{
    QString __qt_program0 = QString::fromUtf8((const char *)program0.ptr, program0.length);
QStringList __qt_arguments1 = (*(QStringList *)arguments1);
    bool  __qt_return_value = QProcess_QtDShell::startDetached((const QString& )__qt_program0, (const QStringList& )__qt_arguments1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::startDetached(const QString & program, const QStringList & arguments, const QString & workingDirectory, qint64 * pid)
QTD_EXTERN QTD_EXPORT bool qtd_QProcess_startDetached_string_QList_string_nativepointerlong
(DArray program0,
 void* arguments1,
 DArray workingDirectory2,
 qint64* pid3)
{
    QString __qt_program0 = QString::fromUtf8((const char *)program0.ptr, program0.length);
QStringList __qt_arguments1 = (*(QStringList *)arguments1);
    QString __qt_workingDirectory2 = QString::fromUtf8((const char *)workingDirectory2.ptr, workingDirectory2.length);
    qint64*  __qt_pid3 = (qint64* ) pid3;
    bool  __qt_return_value = QProcess_QtDShell::startDetached((const QString& )__qt_program0, (const QStringList& )__qt_arguments1, (const QString& )__qt_workingDirectory2, (qint64* )__qt_pid3);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProcess::systemEnvironment()
QTD_EXTERN QTD_EXPORT void qtd_QProcess_systemEnvironment
(void* __d_return_value)
{
    QStringList  __qt_return_value = QProcess_QtDShell::systemEnvironment();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QProcess_staticMetaObject() {
    return (void*)&QProcess::staticMetaObject;
}


