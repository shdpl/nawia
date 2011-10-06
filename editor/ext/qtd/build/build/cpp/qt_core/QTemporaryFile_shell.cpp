#include <QVariant>
#include <qabstractfileengine.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfile.h>
#include <qlist.h>
#include <qobject.h>
#include <qtemporaryfile.h>
#include <qvariant.h>

#include "QTemporaryFile_shell.h"
#include <iostream>
#include <qtemporaryfile.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QTemporaryFileEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTemporaryFileEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTemporaryFile_createEntity(void *nativeId, void* dId)
{
    new QTemporaryFileEntity((QObject*)nativeId, dId);
}

QTemporaryFile_QtDShell::QTemporaryFile_QtDShell(void *d_ptr)
    : QTemporaryFile(),
      QObjectLink(this, d_ptr)
{
}

QTemporaryFile_QtDShell::QTemporaryFile_QtDShell(void *d_ptr, QObject*  parent0)
    : QTemporaryFile(parent0),
      QObjectLink(this, d_ptr)
{
}

QTemporaryFile_QtDShell::QTemporaryFile_QtDShell(void *d_ptr, const QString&  templateName0)
    : QTemporaryFile(templateName0),
      QObjectLink(this, d_ptr)
{
}

QTemporaryFile_QtDShell::QTemporaryFile_QtDShell(void *d_ptr, const QString&  templateName0, QObject*  parent1)
    : QTemporaryFile(templateName0, parent1),
      QObjectLink(this, d_ptr)
{
}

QTemporaryFile_QtDShell::~QTemporaryFile_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTemporaryFile_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTemporaryFile::metaObject();
}

int QTemporaryFile_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTemporaryFile::qt_metacall(_c, _id, _a);
}

int QTemporaryFile_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTemporaryFile::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTemporaryFile_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTemporaryFile_QtDShell *__qt_this = (QTemporaryFile_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, bool, QIODevice_atEnd_const_dispatch, (void *dId))
bool  QTemporaryFile_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
qint64  QTemporaryFile_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
qint64  QTemporaryFile_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
bool  QTemporaryFile_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTemporaryFile_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QIODevice_close_dispatch, (void *dId))
void QTemporaryFile_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTemporaryFile_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTemporaryFile_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTemporaryFile_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void*, QFile_fileEngine_const_dispatch, (void *dId))
QAbstractFileEngine*  QTemporaryFile_QtDShell::fileEngine() const
{
    return (QAbstractFileEngine*) qtd_QFile_fileEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_isSequential_const_dispatch, (void *dId))
bool  QTemporaryFile_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int flags0))
bool  QTemporaryFile_QtDShell::open(QIODevice::OpenMode  flags0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )flags0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_pos_const_dispatch, (void *dId))
qint64  QTemporaryFile_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QTemporaryFile_QtDShell::readData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QTemporaryFile_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_reset_dispatch, (void *dId))
bool  QTemporaryFile_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 offset0))
bool  QTemporaryFile_QtDShell::seek(qint64  offset0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )offset0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_size_const_dispatch, (void *dId))
qint64  QTemporaryFile_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTemporaryFile_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
bool  QTemporaryFile_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
bool  QTemporaryFile_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
qint64  QTemporaryFile_QtDShell::writeData(const char*  data0, qint64  len1)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )len1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTemporaryFile_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
bool  QTemporaryFile_QtDShell::open()
{
    return QTemporaryFile::open();
}

// public overrides for functions that are protected in the base class
QObject*  QTemporaryFile_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTemporaryFile_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QTemporaryFile_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QTemporaryFile_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QTemporaryFile_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QTemporaryFile_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QTemporaryFile_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

// Write virtual function overries used to decide on static/virtual calls
bool  QTemporaryFile_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QFile::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QTemporaryFile_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QIODevice::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QTemporaryFile_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QIODevice::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QTemporaryFile_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QIODevice::canReadLine();
    } else {
        return canReadLine();
    }
}

void QTemporaryFile_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTemporaryFile_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QFile::close();
    } else {
        close();
    }
}

void QTemporaryFile_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTemporaryFile_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTemporaryFile_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QAbstractFileEngine*  QTemporaryFile_QtDShell::__override_fileEngine(bool static_call) const
{
    if (static_call) {
        return QTemporaryFile::fileEngine();
    } else {
        return fileEngine();
    }
}

bool  QTemporaryFile_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QFile::isSequential();
    } else {
        return isSequential();
    }
}

bool  QTemporaryFile_QtDShell::__override_open(int  flags0, bool static_call)
{
    if (static_call) {
        return QTemporaryFile::open((QIODevice::OpenMode )flags0);
    } else {
        return open((QIODevice::OpenMode )flags0);
    }
}

qint64  QTemporaryFile_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QFile::pos();
    } else {
        return pos();
    }
}

qint64  QTemporaryFile_QtDShell::__override_readData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QFile::readData((char* )data0, (qint64 )maxlen1);
    } else {
        return readData((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QTemporaryFile_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QFile::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QTemporaryFile_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QTemporaryFile_QtDShell::__override_seek(qint64  offset0, bool static_call)
{
    if (static_call) {
        return QFile::seek((qint64 )offset0);
    } else {
        return seek((qint64 )offset0);
    }
}

qint64  QTemporaryFile_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QFile::size();
    } else {
        return size();
    }
}

void QTemporaryFile_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QTemporaryFile_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QIODevice::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QTemporaryFile_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QIODevice::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QTemporaryFile_QtDShell::__override_writeData(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QFile::writeData((const char* )data0, (qint64 )len1);
    } else {
        return writeData((const char* )data0, (qint64 )len1);
    }
}

// ---externC---
// QTemporaryFile::QTemporaryFile()
QTD_EXTERN QTD_EXPORT void* qtd_QTemporaryFile_QTemporaryFile
(void *d_ptr)
{
    QTemporaryFile_QtDShell *__qt_this = new QTemporaryFile_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QTemporaryFile::QTemporaryFile(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTemporaryFile_QTemporaryFile_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QTemporaryFile_QtDShell *__qt_this = new QTemporaryFile_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QTemporaryFile::QTemporaryFile(const QString & templateName)
QTD_EXTERN QTD_EXPORT void* qtd_QTemporaryFile_QTemporaryFile_string
(void *d_ptr,
 DArray templateName0)
{
    QString __qt_templateName0 = QString::fromUtf8((const char *)templateName0.ptr, templateName0.length);
    QTemporaryFile_QtDShell *__qt_this = new QTemporaryFile_QtDShell(d_ptr, (const QString& )__qt_templateName0);
    return (void *) __qt_this;

}

// QTemporaryFile::QTemporaryFile(const QString & templateName, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTemporaryFile_QTemporaryFile_string_QObject
(void *d_ptr,
 DArray templateName0,
 void* parent1)
{
    QString __qt_templateName0 = QString::fromUtf8((const char *)templateName0.ptr, templateName0.length);
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QTemporaryFile_QtDShell *__qt_this = new QTemporaryFile_QtDShell(d_ptr, (const QString& )__qt_templateName0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QTemporaryFile::autoRemove() const
QTD_EXTERN QTD_EXPORT bool qtd_QTemporaryFile_autoRemove_const
(void* __this_nativeId)
{
    QTemporaryFile_QtDShell *__qt_this = (QTemporaryFile_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoRemove();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTemporaryFile::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QTemporaryFile_uniqueFilename_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTemporaryFile_QtDShell *__qt_this = (QTemporaryFile_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTemporaryFile::fileTemplate() const
QTD_EXTERN QTD_EXPORT void qtd_QTemporaryFile_fileTemplate_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTemporaryFile_QtDShell *__qt_this = (QTemporaryFile_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileTemplate();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTemporaryFile::open()
QTD_EXTERN QTD_EXPORT bool qtd_QTemporaryFile_open
(void* __this_nativeId)
{
    QTemporaryFile *__qt_this = (QTemporaryFile *) __this_nativeId;
    bool  __qt_return_value = __qt_this->open();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTemporaryFile::setAutoRemove(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTemporaryFile_setAutoRemove_bool
(void* __this_nativeId,
 bool b0)
{
    QTemporaryFile_QtDShell *__qt_this = (QTemporaryFile_QtDShell *) __this_nativeId;
    __qt_this->setAutoRemove((bool )b0);

}

// QTemporaryFile::setFileTemplate(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QTemporaryFile_setFileTemplate_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QTemporaryFile_QtDShell *__qt_this = (QTemporaryFile_QtDShell *) __this_nativeId;
    __qt_this->setFileTemplate((const QString& )__qt_name0);

}

// QTemporaryFile::fileEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QTemporaryFile_fileEngine_const
(void* __this_nativeId)
{
    QTemporaryFile_QtDShell *__qt_this = (QTemporaryFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QAbstractFileEngine*  __qt_return_value = __qt_this->__override_fileEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTemporaryFile::open(QFlags<QIODevice::OpenModeFlag> flags)
QTD_EXTERN QTD_EXPORT bool qtd_QTemporaryFile_open_OpenMode
(void* __this_nativeId,
 int flags0)
{
    QFlags<QIODevice::OpenModeFlag> __qt_flags0 = (QFlags<QIODevice::OpenModeFlag>) flags0;
    QTemporaryFile_QtDShell *__qt_this = (QTemporaryFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_open((QIODevice::OpenMode )__qt_flags0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTemporaryFile::createLocalFile(QFile & file)
QTD_EXTERN QTD_EXPORT void* qtd_QTemporaryFile_createLocalFile_QFile
(void* file0)
{
    QFile&  __qt_file0 = (QFile& ) * (QFile *) file0;
    QTemporaryFile*  __qt_return_value = QTemporaryFile_QtDShell::createLocalFile((QFile& )__qt_file0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTemporaryFile::createLocalFile(const QString & fileName)
QTD_EXTERN QTD_EXPORT void* qtd_QTemporaryFile_createLocalFile_string
(DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QTemporaryFile*  __qt_return_value = QTemporaryFile_QtDShell::createLocalFile((const QString& )__qt_fileName0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTemporaryFile_staticMetaObject() {
    return (void*)&QTemporaryFile::staticMetaObject;
}


