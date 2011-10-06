#include <QVariant>
#include <qabstractfileengine.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfile.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QFile_shell.h"
#include <iostream>
#include <qfile.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QFileEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QFileEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QFile_createEntity(void *nativeId, void* dId)
{
    new QFileEntity((QObject*)nativeId, dId);
}

QFile_QtDShell::QFile_QtDShell(void *d_ptr)
    : QFile(),
      QObjectLink(this, d_ptr)
{
}

QFile_QtDShell::QFile_QtDShell(void *d_ptr, QObject*  parent0)
    : QFile(parent0),
      QObjectLink(this, d_ptr)
{
}

QFile_QtDShell::QFile_QtDShell(void *d_ptr, const QString&  name0)
    : QFile(name0),
      QObjectLink(this, d_ptr)
{
}

QFile_QtDShell::QFile_QtDShell(void *d_ptr, const QString&  name0, QObject*  parent1)
    : QFile(name0, parent1),
      QObjectLink(this, d_ptr)
{
}

QFile_QtDShell::~QFile_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QFile_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QFile::metaObject();
}

int QFile_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QFile::qt_metacall(_c, _id, _a);
}

int QFile_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QFile::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QFile_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, bool, QIODevice_atEnd_const_dispatch, (void *dId))
bool  QFile_QtDShell::atEnd() const
{
    return qtd_QIODevice_atEnd_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_bytesAvailable_const_dispatch, (void *dId))
qint64  QFile_QtDShell::bytesAvailable() const
{
    return qtd_QIODevice_bytesAvailable_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_bytesToWrite_const_dispatch, (void *dId))
qint64  QFile_QtDShell::bytesToWrite() const
{
    return qtd_QIODevice_bytesToWrite_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_canReadLine_const_dispatch, (void *dId))
bool  QFile_QtDShell::canReadLine() const
{
    return qtd_QIODevice_canReadLine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QFile_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QIODevice_close_dispatch, (void *dId))
void QFile_QtDShell::close()
{
    qtd_QIODevice_close_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFile_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QFile_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QFile_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void*, QFile_fileEngine_const_dispatch, (void *dId))
QTD_FUNC(CORE, QFile_fileEngine_const_dispatch)
QAbstractFileEngine*  QFile_QtDShell::fileEngine() const
{
    return (QAbstractFileEngine*) qtd_QFile_fileEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_isSequential_const_dispatch, (void *dId))
bool  QFile_QtDShell::isSequential() const
{
    return qtd_QIODevice_isSequential_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_open_OpenMode_dispatch, (void *dId, int flags0))
bool  QFile_QtDShell::open(QIODevice::OpenMode  flags0)
{
    return qtd_QIODevice_open_OpenMode_dispatch(QObjectLink::getLink(this)->dId, (QIODevice::OpenMode )flags0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_pos_const_dispatch, (void *dId))
qint64  QFile_QtDShell::pos() const
{
    return qtd_QIODevice_pos_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_readData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QFile_QtDShell::readData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_readLineData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QFile_QtDShell::readLineData(char*  data0, qint64  maxlen1)
{
    return qtd_QIODevice_readLineData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_reset_dispatch, (void *dId))
bool  QFile_QtDShell::reset()
{
    return qtd_QIODevice_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_seek_long_dispatch, (void *dId, qint64 offset0))
bool  QFile_QtDShell::seek(qint64  offset0)
{
    return qtd_QIODevice_seek_long_dispatch(QObjectLink::getLink(this)->dId, (qint64 )offset0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_size_const_dispatch, (void *dId))
qint64  QFile_QtDShell::size() const
{
    return qtd_QIODevice_size_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QFile_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_waitForBytesWritten_int_dispatch, (void *dId, int msecs0))
bool  QFile_QtDShell::waitForBytesWritten(int  msecs0)
{
    return qtd_QIODevice_waitForBytesWritten_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(CORE, bool, QIODevice_waitForReadyRead_int_dispatch, (void *dId, int msecs0))
bool  QFile_QtDShell::waitForReadyRead(int  msecs0)
{
    return qtd_QIODevice_waitForReadyRead_int_dispatch(QObjectLink::getLink(this)->dId, (int )msecs0);
}

QTD_FUNC_DECL(CORE, qint64, QIODevice_writeData_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
qint64  QFile_QtDShell::writeData(const char*  data0, qint64  len1)
{
    return qtd_QIODevice_writeData_nativepointerchar_long_dispatch(QObjectLink::getLink(this)->dId, (char* )data0, (qint64 )len1);
}

QTD_EXTERN QTD_EXPORT void qtd_QFile_initCallBacks(VoidFunc *virts) {
    qtd_QFile_fileEngine_const_dispatch = (qtd_QFile_fileEngine_const_dispatch_t) virts[0];
}
// Functions in shell class
bool  QFile_QtDShell::open(int  fd0, QIODevice::OpenMode  flags1)
{
    return QFile::open((int )fd0, (QIODevice::OpenMode )flags1);
}

// public overrides for functions that are protected in the base class
QObject*  QFile_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QFile_QtDShell::__public_setErrorString(const QString&  errorString0)
{
    QIODevice::setErrorString((const QString& )errorString0);
}

void QFile_QtDShell::__public_setOpenMode(int  openMode0)
{
    QIODevice::setOpenMode((QIODevice::OpenMode )openMode0);
}

void QFile_QtDShell::__public_aboutToClose()
{
    QIODevice::aboutToClose();
}

void QFile_QtDShell::__public_bytesWritten(qint64  bytes0)
{
    QIODevice::bytesWritten((qint64 )bytes0);
}

void QFile_QtDShell::__public_readChannelFinished()
{
    QIODevice::readChannelFinished();
}

void QFile_QtDShell::__public_readyRead()
{
    QIODevice::readyRead();
}

// Write virtual function overries used to decide on static/virtual calls
bool  QFile_QtDShell::__override_atEnd(bool static_call) const
{
    if (static_call) {
        return QFile::atEnd();
    } else {
        return atEnd();
    }
}

qint64  QFile_QtDShell::__override_bytesAvailable(bool static_call) const
{
    if (static_call) {
        return QIODevice::bytesAvailable();
    } else {
        return bytesAvailable();
    }
}

qint64  QFile_QtDShell::__override_bytesToWrite(bool static_call) const
{
    if (static_call) {
        return QIODevice::bytesToWrite();
    } else {
        return bytesToWrite();
    }
}

bool  QFile_QtDShell::__override_canReadLine(bool static_call) const
{
    if (static_call) {
        return QIODevice::canReadLine();
    } else {
        return canReadLine();
    }
}

void QFile_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QFile_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        QFile::close();
    } else {
        close();
    }
}

void QFile_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QFile_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QFile_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QAbstractFileEngine*  QFile_QtDShell::__override_fileEngine(bool static_call) const
{
    if (static_call) {
        return QFile::fileEngine();
    } else {
        return fileEngine();
    }
}

bool  QFile_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QFile::isSequential();
    } else {
        return isSequential();
    }
}

bool  QFile_QtDShell::__override_open(int  flags0, bool static_call)
{
    if (static_call) {
        return QFile::open((QIODevice::OpenMode )flags0);
    } else {
        return open((QIODevice::OpenMode )flags0);
    }
}

qint64  QFile_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QFile::pos();
    } else {
        return pos();
    }
}

qint64  QFile_QtDShell::__override_readData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QFile::readData((char* )data0, (qint64 )maxlen1);
    } else {
        return readData((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QFile_QtDShell::__override_readLineData(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QFile::readLineData((char* )data0, (qint64 )maxlen1);
    } else {
        return readLineData((char* )data0, (qint64 )maxlen1);
    }
}

bool  QFile_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return QIODevice::reset();
    } else {
        return reset();
    }
}

bool  QFile_QtDShell::__override_seek(qint64  offset0, bool static_call)
{
    if (static_call) {
        return QFile::seek((qint64 )offset0);
    } else {
        return seek((qint64 )offset0);
    }
}

qint64  QFile_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QFile::size();
    } else {
        return size();
    }
}

void QFile_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QFile_QtDShell::__override_waitForBytesWritten(int  msecs0, bool static_call)
{
    if (static_call) {
        return QIODevice::waitForBytesWritten((int )msecs0);
    } else {
        return waitForBytesWritten((int )msecs0);
    }
}

bool  QFile_QtDShell::__override_waitForReadyRead(int  msecs0, bool static_call)
{
    if (static_call) {
        return QIODevice::waitForReadyRead((int )msecs0);
    } else {
        return waitForReadyRead((int )msecs0);
    }
}

qint64  QFile_QtDShell::__override_writeData(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QFile::writeData((const char* )data0, (qint64 )len1);
    } else {
        return writeData((const char* )data0, (qint64 )len1);
    }
}

// ---externC---
// QFile::QFile()
QTD_EXTERN QTD_EXPORT void* qtd_QFile_QFile
(void *d_ptr)
{
    QFile_QtDShell *__qt_this = new QFile_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QFile::QFile(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFile_QFile_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QFile_QtDShell *__qt_this = new QFile_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QFile::QFile(const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QFile_QFile_string
(void *d_ptr,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QFile_QtDShell *__qt_this = new QFile_QtDShell(d_ptr, (const QString& )__qt_name0);
    return (void *) __qt_this;

}

// QFile::QFile(const QString & name, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFile_QFile_string_QObject
(void *d_ptr,
 DArray name0,
 void* parent1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QFile_QtDShell *__qt_this = new QFile_QtDShell(d_ptr, (const QString& )__qt_name0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QFile::copy(const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_copy_string
(void* __this_nativeId,
 DArray newName0)
{
    QString __qt_newName0 = QString::fromUtf8((const char *)newName0.ptr, newName0.length);
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->copy((const QString& )__qt_newName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::error() const
QTD_EXTERN QTD_EXPORT int qtd_QFile_error_const
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::exists() const
QTD_EXTERN QTD_EXPORT bool qtd_QFile_exists_const
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->exists();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QFile_fileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFile::flush()
QTD_EXTERN QTD_EXPORT bool qtd_QFile_flush
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->flush();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::handle() const
QTD_EXTERN QTD_EXPORT int qtd_QFile_handle_const
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->handle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::link(const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_link_string
(void* __this_nativeId,
 DArray newName0)
{
    QString __qt_newName0 = QString::fromUtf8((const char *)newName0.ptr, newName0.length);
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->link((const QString& )__qt_newName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::map(qint64 offset, qint64 size, QFile::MemoryMapFlags flags)
QTD_EXTERN QTD_EXPORT unsigned char* qtd_QFile_map_long_long_MemoryMapFlags
(void* __this_nativeId,
 qint64 offset0,
 qint64 size1,
 int flags2)
{
    QFile::MemoryMapFlags __qt_flags2 = (QFile::MemoryMapFlags) flags2;
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    unsigned char*  __qt_return_value = __qt_this->map((qint64 )offset0, (qint64 )size1, (QFile::MemoryMapFlags )__qt_flags2);

    unsigned char* __d_return_value = (unsigned char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QFile::open(int fd, QFlags<QIODevice::OpenModeFlag> flags)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_open_int_OpenMode
(void* __this_nativeId,
 int fd0,
 int flags1)
{
    QFlags<QIODevice::OpenModeFlag> __qt_flags1 = (QFlags<QIODevice::OpenModeFlag>) flags1;
    QFile *__qt_this = (QFile *) __this_nativeId;
    bool  __qt_return_value = __qt_this->open((int )fd0, (QIODevice::OpenMode )__qt_flags1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::permissions() const
QTD_EXTERN QTD_EXPORT int qtd_QFile_permissions_const
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->permissions();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::remove()
QTD_EXTERN QTD_EXPORT bool qtd_QFile_remove
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->remove();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::rename(const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_rename_string
(void* __this_nativeId,
 DArray newName0)
{
    QString __qt_newName0 = QString::fromUtf8((const char *)newName0.ptr, newName0.length);
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rename((const QString& )__qt_newName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::resize(qint64 sz)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_resize_long
(void* __this_nativeId,
 qint64 sz0)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->resize((qint64 )sz0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::setFileName(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QFile_setFileName_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    __qt_this->setFileName((const QString& )__qt_name0);

}

// QFile::setPermissions(QFlags<QFile::Permission> permissionSpec)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_setPermissions_Permissions
(void* __this_nativeId,
 int permissionSpec0)
{
    QFlags<QFile::Permission> __qt_permissionSpec0 = (QFlags<QFile::Permission>) permissionSpec0;
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setPermissions((QFile::Permissions )__qt_permissionSpec0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::symLinkTarget() const
QTD_EXTERN QTD_EXPORT void qtd_QFile_symLinkTarget_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->symLinkTarget();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFile::unsetError()
QTD_EXTERN QTD_EXPORT void qtd_QFile_unsetError
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    __qt_this->unsetError();

}

// QFile::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QFile_atEnd_const
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_atEnd(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::close()
QTD_EXTERN QTD_EXPORT void qtd_QFile_close
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_close(__do_static_call);

}

// QFile::fileEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QFile_fileEngine_const
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QAbstractFileEngine*  __qt_return_value = __qt_this->__override_fileEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFile::isSequential() const
QTD_EXTERN QTD_EXPORT bool qtd_QFile_isSequential_const
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isSequential(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::open(QFlags<QIODevice::OpenModeFlag> flags)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_open_OpenMode
(void* __this_nativeId,
 int flags0)
{
    QFlags<QIODevice::OpenModeFlag> __qt_flags0 = (QFlags<QIODevice::OpenModeFlag>) flags0;
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_open((QIODevice::OpenMode )__qt_flags0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::pos() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QFile_pos_const
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_pos(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::readData(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QFile_readData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readData((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::readLineData(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QFile_readLineData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readLineData((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::seek(qint64 offset)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_seek_long
(void* __this_nativeId,
 qint64 offset0)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_seek((qint64 )offset0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::size() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QFile_size_const
(void* __this_nativeId)
{
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_size(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::writeData(const char * data, qint64 len)
QTD_EXTERN QTD_EXPORT qint64 qtd_QFile_writeData_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QFile_QtDShell *__qt_this = (QFile_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_writeData((const char* )__qt_data0, (qint64 )len1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::copy(const QString & fileName, const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_copy_string_string
(DArray fileName0,
 DArray newName1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QString __qt_newName1 = QString::fromUtf8((const char *)newName1.ptr, newName1.length);
    bool  __qt_return_value = QFile_QtDShell::copy((const QString& )__qt_fileName0, (const QString& )__qt_newName1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::decodeName(const QByteArray & localFileName)
QTD_EXTERN QTD_EXPORT void qtd_QFile_decodeName_QByteArray
(void* __d_return_value,
 void* localFileName0)
{
    const QByteArray&  __qt_localFileName0 = (const QByteArray& ) *(QByteArray *)localFileName0;
    QString  __qt_return_value = QFile_QtDShell::decodeName((const QByteArray& )__qt_localFileName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFile::decodeName(const char * localFileName)
QTD_EXTERN QTD_EXPORT void qtd_QFile_decodeName_nativepointerchar
(void* __d_return_value,
 char* localFileName0)
{
    const char*  __qt_localFileName0 = (const char* ) localFileName0;
    QString  __qt_return_value = QFile_QtDShell::decodeName((const char* )__qt_localFileName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFile::encodeName(const QString & fileName)
QTD_EXTERN QTD_EXPORT void* qtd_QFile_encodeName_string
(DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QByteArray  __qt_return_value = QFile_QtDShell::encodeName((const QString& )__qt_fileName0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QFile::exists(const QString & fileName)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_exists_string
(DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    bool  __qt_return_value = QFile_QtDShell::exists((const QString& )__qt_fileName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::link(const QString & oldname, const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_link_string_string
(DArray oldname0,
 DArray newName1)
{
    QString __qt_oldname0 = QString::fromUtf8((const char *)oldname0.ptr, oldname0.length);
    QString __qt_newName1 = QString::fromUtf8((const char *)newName1.ptr, newName1.length);
    bool  __qt_return_value = QFile_QtDShell::link((const QString& )__qt_oldname0, (const QString& )__qt_newName1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::permissions(const QString & filename)
QTD_EXTERN QTD_EXPORT int qtd_QFile_permissions_string
(DArray filename0)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    int  __qt_return_value = QFile_QtDShell::permissions((const QString& )__qt_filename0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::remove(const QString & fileName)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_remove_string
(DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    bool  __qt_return_value = QFile_QtDShell::remove((const QString& )__qt_fileName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::rename(const QString & oldName, const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_rename_string_string
(DArray oldName0,
 DArray newName1)
{
    QString __qt_oldName0 = QString::fromUtf8((const char *)oldName0.ptr, oldName0.length);
    QString __qt_newName1 = QString::fromUtf8((const char *)newName1.ptr, newName1.length);
    bool  __qt_return_value = QFile_QtDShell::rename((const QString& )__qt_oldName0, (const QString& )__qt_newName1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::resize(const QString & filename, qint64 sz)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_resize_string_long
(DArray filename0,
 qint64 sz1)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    bool  __qt_return_value = QFile_QtDShell::resize((const QString& )__qt_filename0, (qint64 )sz1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::setPermissions(const QString & filename, QFlags<QFile::Permission> permissionSpec)
QTD_EXTERN QTD_EXPORT bool qtd_QFile_setPermissions_string_Permissions
(DArray filename0,
 int permissionSpec1)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    QFlags<QFile::Permission> __qt_permissionSpec1 = (QFlags<QFile::Permission>) permissionSpec1;
    bool  __qt_return_value = QFile_QtDShell::setPermissions((const QString& )__qt_filename0, (QFile::Permissions )__qt_permissionSpec1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFile::symLinkTarget(const QString & fileName)
QTD_EXTERN QTD_EXPORT void qtd_QFile_symLinkTarget_string
(void* __d_return_value,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QString  __qt_return_value = QFile_QtDShell::symLinkTarget((const QString& )__qt_fileName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QFile_staticMetaObject() {
    return (void*)&QFile::staticMetaObject;
}


