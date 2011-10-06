#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qftp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qurlinfo.h>
#include <qvariant.h>

#include "QFtp_shell.h"
#include <iostream>
#include <qftp.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QFtpEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QFtpEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QFtp_createEntity(void *nativeId, void* dId)
{
    new QFtpEntity((QObject*)nativeId, dId);
}

QFtp_QtDShell::QFtp_QtDShell(void *d_ptr, QObject*  parent0)
    : QFtp(parent0),
      QObjectLink(this, d_ptr)
{
}

QFtp_QtDShell::~QFtp_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QFtp_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QFtp::metaObject();
}

int QFtp_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QFtp::qt_metacall(_c, _id, _a);
}

int QFtp_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QFtp::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QFtp_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QFtp_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFtp_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QFtp_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QFtp_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QFtp_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QFtp_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QFtp_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QFtp_QtDShell::__public_commandFinished(int  arg__1, bool  arg__2)
{
    QFtp::commandFinished((int )arg__1, (bool )arg__2);
}

void QFtp_QtDShell::__public_commandStarted(int  arg__1)
{
    QFtp::commandStarted((int )arg__1);
}

void QFtp_QtDShell::__public_dataTransferProgress(qint64  arg__1, qint64  arg__2)
{
    QFtp::dataTransferProgress((qint64 )arg__1, (qint64 )arg__2);
}

void QFtp_QtDShell::__public_done(bool  arg__1)
{
    QFtp::done((bool )arg__1);
}

void QFtp_QtDShell::__public_listInfo(const QUrlInfo&  arg__1)
{
    QFtp::listInfo((const QUrlInfo& )arg__1);
}

void QFtp_QtDShell::__public_rawCommandReply(int  arg__1, const QString&  arg__2)
{
    QFtp::rawCommandReply((int )arg__1, (const QString& )arg__2);
}

void QFtp_QtDShell::__public_readyRead()
{
    QFtp::readyRead();
}

void QFtp_QtDShell::__public_stateChanged(int  arg__1)
{
    QFtp::stateChanged((int )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QFtp_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QFtp_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QFtp_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QFtp_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QFtp_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QFtp::commandFinished(int arg__1, bool arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QFtp_commandFinished_int_bool
(void* __this_nativeId,
 int arg__1,
 bool arg__2)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    __qt_this->__public_commandFinished((int )arg__1, (bool )arg__2);

}

// QFtp::commandStarted(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFtp_commandStarted_int
(void* __this_nativeId,
 int arg__1)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    __qt_this->__public_commandStarted((int )arg__1);

}

// QFtp::dataTransferProgress(qint64 arg__1, qint64 arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QFtp_dataTransferProgress_long_long
(void* __this_nativeId,
 qint64 arg__1,
 qint64 arg__2)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    __qt_this->__public_dataTransferProgress((qint64 )arg__1, (qint64 )arg__2);

}

// QFtp::done(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFtp_done_bool
(void* __this_nativeId,
 bool arg__1)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    __qt_this->__public_done((bool )arg__1);

}

// QFtp::listInfo(const QUrlInfo & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFtp_listInfo_QUrlInfo
(void* __this_nativeId,
 void* arg__1)
{
    const QUrlInfo&  __qt_arg__1 = (const QUrlInfo& ) *(QUrlInfo *)arg__1;
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    __qt_this->__public_listInfo((const QUrlInfo& )__qt_arg__1);

}

// QFtp::rawCommandReply(int arg__1, const QString & arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QFtp_rawCommandReply_int_string
(void* __this_nativeId,
 int arg__1,
 DArray arg__2)
{
    QString __qt_arg__2 = QString::fromUtf8((const char *)arg__2.ptr, arg__2.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    __qt_this->__public_rawCommandReply((int )arg__1, (const QString& )__qt_arg__2);

}

// QFtp::readyRead()
QTD_EXTERN QTD_EXPORT void qtd_QFtp_readyRead
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    __qt_this->__public_readyRead();

}

// QFtp::stateChanged(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFtp_stateChanged_int
(void* __this_nativeId,
 int arg__1)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    __qt_this->__public_stateChanged((int )arg__1);

}

// ---externC---
// QFtp::QFtp(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFtp_QFtp_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QFtp_QtDShell *__qt_this = new QFtp_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QFtp::abort()
QTD_EXTERN QTD_EXPORT void qtd_QFtp_abort
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    __qt_this->abort();

}

// QFtp::bytesAvailable() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QFtp_bytesAvailable_const
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->bytesAvailable();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::cd(const QString & dir)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_cd_string
(void* __this_nativeId,
 DArray dir0)
{
    QString __qt_dir0 = QString::fromUtf8((const char *)dir0.ptr, dir0.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->cd((const QString& )__qt_dir0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::clearPendingCommands()
QTD_EXTERN QTD_EXPORT void qtd_QFtp_clearPendingCommands
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    __qt_this->clearPendingCommands();

}

// QFtp::close()
QTD_EXTERN QTD_EXPORT int qtd_QFtp_close
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->close();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::connectToHost(const QString & host, unsigned short port)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_connectToHost_string_ushort
(void* __this_nativeId,
 DArray host0,
 unsigned short port1)
{
    QString __qt_host0 = QString::fromUtf8((const char *)host0.ptr, host0.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->connectToHost((const QString& )__qt_host0, (unsigned short )port1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::currentCommand() const
QTD_EXTERN QTD_EXPORT int qtd_QFtp_currentCommand_const
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentCommand();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::currentDevice() const
QTD_EXTERN QTD_EXPORT void* qtd_QFtp_currentDevice_const
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->currentDevice();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFtp::currentId() const
QTD_EXTERN QTD_EXPORT int qtd_QFtp_currentId_const
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentId();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::error() const
QTD_EXTERN QTD_EXPORT int qtd_QFtp_error_const
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QFtp_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFtp::get(const QString & file, QIODevice * dev, QFtp::TransferType type)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_get_string_QIODevice_TransferType
(void* __this_nativeId,
 DArray file0,
 void* dev1,
 int type2)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QIODevice*  __qt_dev1 = (QIODevice* ) dev1;
    QFtp::TransferType __qt_type2 = (QFtp::TransferType) type2;
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->get((const QString& )__qt_file0, (QIODevice* )__qt_dev1, (QFtp::TransferType )__qt_type2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::hasPendingCommands() const
QTD_EXTERN QTD_EXPORT bool qtd_QFtp_hasPendingCommands_const
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasPendingCommands();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::list(const QString & dir)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_list_string
(void* __this_nativeId,
 DArray dir0)
{
    QString __qt_dir0 = QString::fromUtf8((const char *)dir0.ptr, dir0.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->list((const QString& )__qt_dir0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::login(const QString & user, const QString & password)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_login_string_string
(void* __this_nativeId,
 DArray user0,
 DArray password1)
{
    QString __qt_user0 = QString::fromUtf8((const char *)user0.ptr, user0.length);
    QString __qt_password1 = QString::fromUtf8((const char *)password1.ptr, password1.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->login((const QString& )__qt_user0, (const QString& )__qt_password1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::mkdir(const QString & dir)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_mkdir_string
(void* __this_nativeId,
 DArray dir0)
{
    QString __qt_dir0 = QString::fromUtf8((const char *)dir0.ptr, dir0.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->mkdir((const QString& )__qt_dir0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::put(QIODevice * dev, const QString & file, QFtp::TransferType type)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_put_QIODevice_string_TransferType
(void* __this_nativeId,
 void* dev0,
 DArray file1,
 int type2)
{
    QIODevice*  __qt_dev0 = (QIODevice* ) dev0;
    QString __qt_file1 = QString::fromUtf8((const char *)file1.ptr, file1.length);
    QFtp::TransferType __qt_type2 = (QFtp::TransferType) type2;
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->put((QIODevice* )__qt_dev0, (const QString& )__qt_file1, (QFtp::TransferType )__qt_type2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::put(const QByteArray & data, const QString & file, QFtp::TransferType type)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_put_QByteArray_string_TransferType
(void* __this_nativeId,
 void* data0,
 DArray file1,
 int type2)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QString __qt_file1 = QString::fromUtf8((const char *)file1.ptr, file1.length);
    QFtp::TransferType __qt_type2 = (QFtp::TransferType) type2;
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->put((const QByteArray& )__qt_data0, (const QString& )__qt_file1, (QFtp::TransferType )__qt_type2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::rawCommand(const QString & command)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_rawCommand_string
(void* __this_nativeId,
 DArray command0)
{
    QString __qt_command0 = QString::fromUtf8((const char *)command0.ptr, command0.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rawCommand((const QString& )__qt_command0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::read(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QFtp_read_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->read((char* )__qt_data0, (qint64 )maxlen1);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::readAll()
QTD_EXTERN QTD_EXPORT void* qtd_QFtp_readAll
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->readAll();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QFtp::remove(const QString & file)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_remove_string
(void* __this_nativeId,
 DArray file0)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->remove((const QString& )__qt_file0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::rename(const QString & oldname, const QString & newname)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_rename_string_string
(void* __this_nativeId,
 DArray oldname0,
 DArray newname1)
{
    QString __qt_oldname0 = QString::fromUtf8((const char *)oldname0.ptr, oldname0.length);
    QString __qt_newname1 = QString::fromUtf8((const char *)newname1.ptr, newname1.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rename((const QString& )__qt_oldname0, (const QString& )__qt_newname1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::rmdir(const QString & dir)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_rmdir_string
(void* __this_nativeId,
 DArray dir0)
{
    QString __qt_dir0 = QString::fromUtf8((const char *)dir0.ptr, dir0.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rmdir((const QString& )__qt_dir0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::setProxy(const QString & host, unsigned short port)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_setProxy_string_ushort
(void* __this_nativeId,
 DArray host0,
 unsigned short port1)
{
    QString __qt_host0 = QString::fromUtf8((const char *)host0.ptr, host0.length);
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->setProxy((const QString& )__qt_host0, (unsigned short )port1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::setTransferMode(QFtp::TransferMode mode)
QTD_EXTERN QTD_EXPORT int qtd_QFtp_setTransferMode_TransferMode
(void* __this_nativeId,
 int mode0)
{
    QFtp::TransferMode __qt_mode0 = (QFtp::TransferMode) mode0;
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->setTransferMode((QFtp::TransferMode )__qt_mode0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFtp::state() const
QTD_EXTERN QTD_EXPORT int qtd_QFtp_state_const
(void* __this_nativeId)
{
    QFtp_QtDShell *__qt_this = (QFtp_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->state();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QFtp_staticMetaObject() {
    return (void*)&QFtp::staticMetaObject;
}


