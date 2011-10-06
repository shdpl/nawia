#include <QVariant>
#include <qdatetime.h>
#include <qurl.h>
#include <qurlinfo.h>

#include "QUrlInfo_shell.h"
#include <iostream>
#include <qurlinfo.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_delete(void* nativeId)
{
    delete (QUrlInfo_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_destroy(void* nativeId)
{
    call_destructor((QUrlInfo_QtDShell*)nativeId);
}

QUrlInfo_QtDShell::QUrlInfo_QtDShell(void *d_ptr)
    : QUrlInfo(),
      QtdObjectLink(d_ptr)
{
}

QUrlInfo_QtDShell::QUrlInfo_QtDShell(void *d_ptr, const QString&  name0, int  permissions1, const QString&  owner2, const QString&  group3, qint64  size4, const QDateTime&  lastModified5, const QDateTime&  lastRead6, bool  isDir7, bool  isFile8, bool  isSymLink9, bool  isWritable10, bool  isReadable11, bool  isExecutable12)
    : QUrlInfo(name0, permissions1, owner2, group3, size4, lastModified5, lastRead6, isDir7, isFile8, isSymLink9, isWritable10, isReadable11, isExecutable12),
      QtdObjectLink(d_ptr)
{
}

QUrlInfo_QtDShell::QUrlInfo_QtDShell(void *d_ptr, const QUrl&  url0, int  permissions1, const QString&  owner2, const QString&  group3, qint64  size4, const QDateTime&  lastModified5, const QDateTime&  lastRead6, bool  isDir7, bool  isFile8, bool  isSymLink9, bool  isWritable10, bool  isReadable11, bool  isExecutable12)
    : QUrlInfo(url0, permissions1, owner2, group3, size4, lastModified5, lastRead6, isDir7, isFile8, isSymLink9, isWritable10, isReadable11, isExecutable12),
      QtdObjectLink(d_ptr)
{
}

QUrlInfo_QtDShell::QUrlInfo_QtDShell(void *d_ptr, const QUrlInfo&  ui0)
    : QUrlInfo(ui0),
      QtdObjectLink(d_ptr)
{
}

QUrlInfo_QtDShell::~QUrlInfo_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QUrlInfo_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QUrlInfo*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setDir_bool_dispatch, (void *dId, bool b0))
QTD_FUNC(NETWORK, QUrlInfo_setDir_bool_dispatch)
void QUrlInfo_QtDShell::setDir(bool  b0)
{
    qtd_QUrlInfo_setDir_bool_dispatch(this->dId, (bool )b0);
}

QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setFile_bool_dispatch, (void *dId, bool b0))
QTD_FUNC(NETWORK, QUrlInfo_setFile_bool_dispatch)
void QUrlInfo_QtDShell::setFile(bool  b0)
{
    qtd_QUrlInfo_setFile_bool_dispatch(this->dId, (bool )b0);
}

QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setGroup_string_dispatch, (void *dId, const unsigned short* s0, int s0_size))
QTD_FUNC(NETWORK, QUrlInfo_setGroup_string_dispatch)
void QUrlInfo_QtDShell::setGroup(const QString&  s0)
{
    qtd_QUrlInfo_setGroup_string_dispatch(this->dId, s0.utf16(), s0.size());
}

QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setLastModified_QDateTime_dispatch, (void *dId, void* dt0))
QTD_FUNC(NETWORK, QUrlInfo_setLastModified_QDateTime_dispatch)
void QUrlInfo_QtDShell::setLastModified(const QDateTime&  dt0)
{
    qtd_QUrlInfo_setLastModified_QDateTime_dispatch(this->dId, &(QDateTime& )dt0);
}

QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setName_string_dispatch, (void *dId, const unsigned short* name0, int name0_size))
QTD_FUNC(NETWORK, QUrlInfo_setName_string_dispatch)
void QUrlInfo_QtDShell::setName(const QString&  name0)
{
    qtd_QUrlInfo_setName_string_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setOwner_string_dispatch, (void *dId, const unsigned short* s0, int s0_size))
QTD_FUNC(NETWORK, QUrlInfo_setOwner_string_dispatch)
void QUrlInfo_QtDShell::setOwner(const QString&  s0)
{
    qtd_QUrlInfo_setOwner_string_dispatch(this->dId, s0.utf16(), s0.size());
}

QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setPermissions_int_dispatch, (void *dId, int p0))
QTD_FUNC(NETWORK, QUrlInfo_setPermissions_int_dispatch)
void QUrlInfo_QtDShell::setPermissions(int  p0)
{
    qtd_QUrlInfo_setPermissions_int_dispatch(this->dId, (int )p0);
}

QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setReadable_bool_dispatch, (void *dId, bool b0))
QTD_FUNC(NETWORK, QUrlInfo_setReadable_bool_dispatch)
void QUrlInfo_QtDShell::setReadable(bool  b0)
{
    qtd_QUrlInfo_setReadable_bool_dispatch(this->dId, (bool )b0);
}

QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setSize_long_dispatch, (void *dId, qint64 size0))
QTD_FUNC(NETWORK, QUrlInfo_setSize_long_dispatch)
void QUrlInfo_QtDShell::setSize(qint64  size0)
{
    qtd_QUrlInfo_setSize_long_dispatch(this->dId, (qint64 )size0);
}

QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setSymLink_bool_dispatch, (void *dId, bool b0))
QTD_FUNC(NETWORK, QUrlInfo_setSymLink_bool_dispatch)
void QUrlInfo_QtDShell::setSymLink(bool  b0)
{
    qtd_QUrlInfo_setSymLink_bool_dispatch(this->dId, (bool )b0);
}

QTD_FUNC_DECL(NETWORK, void, QUrlInfo_setWritable_bool_dispatch, (void *dId, bool b0))
QTD_FUNC(NETWORK, QUrlInfo_setWritable_bool_dispatch)
void QUrlInfo_QtDShell::setWritable(bool  b0)
{
    qtd_QUrlInfo_setWritable_bool_dispatch(this->dId, (bool )b0);
}

QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_initCallBacks(VoidFunc *virts) {
    qtd_QUrlInfo_setDir_bool_dispatch = (qtd_QUrlInfo_setDir_bool_dispatch_t) virts[0];
    qtd_QUrlInfo_setFile_bool_dispatch = (qtd_QUrlInfo_setFile_bool_dispatch_t) virts[1];
    qtd_QUrlInfo_setGroup_string_dispatch = (qtd_QUrlInfo_setGroup_string_dispatch_t) virts[2];
    qtd_QUrlInfo_setLastModified_QDateTime_dispatch = (qtd_QUrlInfo_setLastModified_QDateTime_dispatch_t) virts[3];
    qtd_QUrlInfo_setName_string_dispatch = (qtd_QUrlInfo_setName_string_dispatch_t) virts[4];
    qtd_QUrlInfo_setOwner_string_dispatch = (qtd_QUrlInfo_setOwner_string_dispatch_t) virts[5];
    qtd_QUrlInfo_setPermissions_int_dispatch = (qtd_QUrlInfo_setPermissions_int_dispatch_t) virts[6];
    qtd_QUrlInfo_setReadable_bool_dispatch = (qtd_QUrlInfo_setReadable_bool_dispatch_t) virts[7];
    qtd_QUrlInfo_setSize_long_dispatch = (qtd_QUrlInfo_setSize_long_dispatch_t) virts[8];
    qtd_QUrlInfo_setSymLink_bool_dispatch = (qtd_QUrlInfo_setSymLink_bool_dispatch_t) virts[9];
    qtd_QUrlInfo_setWritable_bool_dispatch = (qtd_QUrlInfo_setWritable_bool_dispatch_t) virts[10];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
void QUrlInfo_QtDShell::__override_setDir(bool  b0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setDir((bool )b0);
    } else {
        setDir((bool )b0);
    }
}

void QUrlInfo_QtDShell::__override_setFile(bool  b0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setFile((bool )b0);
    } else {
        setFile((bool )b0);
    }
}

void QUrlInfo_QtDShell::__override_setGroup(const QString&  s0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setGroup((const QString& )s0);
    } else {
        setGroup((const QString& )s0);
    }
}

void QUrlInfo_QtDShell::__override_setLastModified(const QDateTime&  dt0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setLastModified((const QDateTime& )dt0);
    } else {
        setLastModified((const QDateTime& )dt0);
    }
}

void QUrlInfo_QtDShell::__override_setName(const QString&  name0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setName((const QString& )name0);
    } else {
        setName((const QString& )name0);
    }
}

void QUrlInfo_QtDShell::__override_setOwner(const QString&  s0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setOwner((const QString& )s0);
    } else {
        setOwner((const QString& )s0);
    }
}

void QUrlInfo_QtDShell::__override_setPermissions(int  p0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setPermissions((int )p0);
    } else {
        setPermissions((int )p0);
    }
}

void QUrlInfo_QtDShell::__override_setReadable(bool  b0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setReadable((bool )b0);
    } else {
        setReadable((bool )b0);
    }
}

void QUrlInfo_QtDShell::__override_setSize(qint64  size0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setSize((qint64 )size0);
    } else {
        setSize((qint64 )size0);
    }
}

void QUrlInfo_QtDShell::__override_setSymLink(bool  b0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setSymLink((bool )b0);
    } else {
        setSymLink((bool )b0);
    }
}

void QUrlInfo_QtDShell::__override_setWritable(bool  b0, bool static_call)
{
    if (static_call) {
        QUrlInfo::setWritable((bool )b0);
    } else {
        setWritable((bool )b0);
    }
}

// ---externC---
// QUrlInfo::QUrlInfo()
QTD_EXTERN QTD_EXPORT void* qtd_QUrlInfo_QUrlInfo
(void *d_ptr)
{
    QUrlInfo_QtDShell *__qt_this = new QUrlInfo_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QUrlInfo::QUrlInfo(const QString & name, int permissions, const QString & owner, const QString & group, qint64 size, const QDateTime & lastModified, const QDateTime & lastRead, bool isDir, bool isFile, bool isSymLink, bool isWritable, bool isReadable, bool isExecutable)
QTD_EXTERN QTD_EXPORT void* qtd_QUrlInfo_QUrlInfo_string_int_string_string_long_QDateTime_QDateTime_bool_bool_bool_bool_bool_bool
(void *d_ptr,
 DArray name0,
 int permissions1,
 DArray owner2,
 DArray group3,
 qint64 size4,
 void* lastModified5,
 void* lastRead6,
 bool isDir7,
 bool isFile8,
 bool isSymLink9,
 bool isWritable10,
 bool isReadable11,
 bool isExecutable12)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_owner2 = QString::fromUtf8((const char *)owner2.ptr, owner2.length);
    QString __qt_group3 = QString::fromUtf8((const char *)group3.ptr, group3.length);
    const QDateTime&  __qt_lastModified5 = (const QDateTime& ) *(QDateTime *)lastModified5;
    const QDateTime&  __qt_lastRead6 = (const QDateTime& ) *(QDateTime *)lastRead6;
    QUrlInfo_QtDShell *__qt_this = new QUrlInfo_QtDShell(d_ptr, (const QString& )__qt_name0, (int )permissions1, (const QString& )__qt_owner2, (const QString& )__qt_group3, (qint64 )size4, (const QDateTime& )__qt_lastModified5, (const QDateTime& )__qt_lastRead6, (bool )isDir7, (bool )isFile8, (bool )isSymLink9, (bool )isWritable10, (bool )isReadable11, (bool )isExecutable12);
    return (void *) __qt_this;

}

// QUrlInfo::QUrlInfo(const QUrl & url, int permissions, const QString & owner, const QString & group, qint64 size, const QDateTime & lastModified, const QDateTime & lastRead, bool isDir, bool isFile, bool isSymLink, bool isWritable, bool isReadable, bool isExecutable)
QTD_EXTERN QTD_EXPORT void* qtd_QUrlInfo_QUrlInfo_QUrl_int_string_string_long_QDateTime_QDateTime_bool_bool_bool_bool_bool_bool
(void *d_ptr,
 void* url0,
 int permissions1,
 DArray owner2,
 DArray group3,
 qint64 size4,
 void* lastModified5,
 void* lastRead6,
 bool isDir7,
 bool isFile8,
 bool isSymLink9,
 bool isWritable10,
 bool isReadable11,
 bool isExecutable12)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QString __qt_owner2 = QString::fromUtf8((const char *)owner2.ptr, owner2.length);
    QString __qt_group3 = QString::fromUtf8((const char *)group3.ptr, group3.length);
    const QDateTime&  __qt_lastModified5 = (const QDateTime& ) *(QDateTime *)lastModified5;
    const QDateTime&  __qt_lastRead6 = (const QDateTime& ) *(QDateTime *)lastRead6;
    QUrlInfo_QtDShell *__qt_this = new QUrlInfo_QtDShell(d_ptr, (const QUrl& )__qt_url0, (int )permissions1, (const QString& )__qt_owner2, (const QString& )__qt_group3, (qint64 )size4, (const QDateTime& )__qt_lastModified5, (const QDateTime& )__qt_lastRead6, (bool )isDir7, (bool )isFile8, (bool )isSymLink9, (bool )isWritable10, (bool )isReadable11, (bool )isExecutable12);
    return (void *) __qt_this;

}

// QUrlInfo::QUrlInfo(const QUrlInfo & ui)
QTD_EXTERN QTD_EXPORT void* qtd_QUrlInfo_QUrlInfo_QUrlInfo
(void *d_ptr,
 void* ui0)
{
    const QUrlInfo&  __qt_ui0 = (const QUrlInfo& ) *(QUrlInfo *)ui0;
    QUrlInfo_QtDShell *__qt_this = new QUrlInfo_QtDShell(d_ptr, (const QUrlInfo& )__qt_ui0);
    return (void *) __qt_this;

}

// QUrlInfo::group() const
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_group_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->group();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrlInfo::isDir() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_isDir_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDir();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::isExecutable() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_isExecutable_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isExecutable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::isFile() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_isFile_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFile();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::isReadable() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_isReadable_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::isSymLink() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_isSymLink_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSymLink();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_isValid_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::isWritable() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_isWritable_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWritable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::lastModified() const
QTD_EXTERN QTD_EXPORT void* qtd_QUrlInfo_lastModified_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->lastModified();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QUrlInfo::lastRead() const
QTD_EXTERN QTD_EXPORT void* qtd_QUrlInfo_lastRead_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->lastRead();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QUrlInfo::name() const
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->name();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrlInfo::operator==(const QUrlInfo & i) const
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_operator_equal_QUrlInfo_const
(void* __this_nativeId,
 void* i0)
{
    const QUrlInfo&  __qt_i0 = (const QUrlInfo& ) *(QUrlInfo *)i0;
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QUrlInfo& )__qt_i0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::owner() const
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_owner_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->owner();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrlInfo::permissions() const
QTD_EXTERN QTD_EXPORT int qtd_QUrlInfo_permissions_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->permissions();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::setLastRead(const QDateTime & dt)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setLastRead_QDateTime
(void* __this_nativeId,
 void* dt0)
{
    const QDateTime&  __qt_dt0 = (const QDateTime& ) *(QDateTime *)dt0;
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    __qt_this->setLastRead((const QDateTime& )__qt_dt0);

}

// QUrlInfo::size() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QUrlInfo_size_const
(void* __this_nativeId)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->size();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::setDir(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setDir_bool
(void* __this_nativeId,
 bool b0)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setDir((bool )b0, __do_static_call);

}

// QUrlInfo::setFile(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setFile_bool
(void* __this_nativeId,
 bool b0)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setFile((bool )b0, __do_static_call);

}

// QUrlInfo::setGroup(const QString & s)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setGroup_string
(void* __this_nativeId,
 DArray s0)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setGroup((const QString& )__qt_s0, __do_static_call);

}

// QUrlInfo::setLastModified(const QDateTime & dt)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setLastModified_QDateTime
(void* __this_nativeId,
 void* dt0)
{
    const QDateTime&  __qt_dt0 = (const QDateTime& ) *(QDateTime *)dt0;
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setLastModified((const QDateTime& )__qt_dt0, __do_static_call);

}

// QUrlInfo::setName(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setName_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setName((const QString& )__qt_name0, __do_static_call);

}

// QUrlInfo::setOwner(const QString & s)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setOwner_string
(void* __this_nativeId,
 DArray s0)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setOwner((const QString& )__qt_s0, __do_static_call);

}

// QUrlInfo::setPermissions(int p)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setPermissions_int
(void* __this_nativeId,
 int p0)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setPermissions((int )p0, __do_static_call);

}

// QUrlInfo::setReadable(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setReadable_bool
(void* __this_nativeId,
 bool b0)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setReadable((bool )b0, __do_static_call);

}

// QUrlInfo::setSize(qint64 size)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setSize_long
(void* __this_nativeId,
 qint64 size0)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setSize((qint64 )size0, __do_static_call);

}

// QUrlInfo::setSymLink(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setSymLink_bool
(void* __this_nativeId,
 bool b0)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setSymLink((bool )b0, __do_static_call);

}

// QUrlInfo::setWritable(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_setWritable_bool
(void* __this_nativeId,
 bool b0)
{
    QUrlInfo_QtDShell *__qt_this = (QUrlInfo_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUrlInfo*)__this_nativeId) != NULL;
    __qt_this->__override_setWritable((bool )b0, __do_static_call);

}

// QUrlInfo::equal(const QUrlInfo & i1, const QUrlInfo & i2, int sortBy)
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_equal_QUrlInfo_QUrlInfo_int
(void* i10,
 void* i21,
 int sortBy2)
{
    const QUrlInfo&  __qt_i10 = (const QUrlInfo& ) *(QUrlInfo *)i10;
    const QUrlInfo&  __qt_i21 = (const QUrlInfo& ) *(QUrlInfo *)i21;
    bool  __qt_return_value = QUrlInfo_QtDShell::equal((const QUrlInfo& )__qt_i10, (const QUrlInfo& )__qt_i21, (int )sortBy2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::greaterThan(const QUrlInfo & i1, const QUrlInfo & i2, int sortBy)
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_greaterThan_QUrlInfo_QUrlInfo_int
(void* i10,
 void* i21,
 int sortBy2)
{
    const QUrlInfo&  __qt_i10 = (const QUrlInfo& ) *(QUrlInfo *)i10;
    const QUrlInfo&  __qt_i21 = (const QUrlInfo& ) *(QUrlInfo *)i21;
    bool  __qt_return_value = QUrlInfo_QtDShell::greaterThan((const QUrlInfo& )__qt_i10, (const QUrlInfo& )__qt_i21, (int )sortBy2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrlInfo::lessThan(const QUrlInfo & i1, const QUrlInfo & i2, int sortBy)
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_lessThan_QUrlInfo_QUrlInfo_int
(void* i10,
 void* i21,
 int sortBy2)
{
    const QUrlInfo&  __qt_i10 = (const QUrlInfo& ) *(QUrlInfo *)i10;
    const QUrlInfo&  __qt_i21 = (const QUrlInfo& ) *(QUrlInfo *)i21;
    bool  __qt_return_value = QUrlInfo_QtDShell::lessThan((const QUrlInfo& )__qt_i10, (const QUrlInfo& )__qt_i21, (int )sortBy2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_QTypeInfo_isComplex() { return (bool) QTypeInfo<QUrlInfo>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_QTypeInfo_isStatic() { return (bool) QTypeInfo<QUrlInfo>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_QTypeInfo_isLarge() { return (bool) QTypeInfo<QUrlInfo>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_QTypeInfo_isPointer() { return (bool) QTypeInfo<QUrlInfo>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QUrlInfo_QTypeInfo_isDummy() { return (bool) QTypeInfo<QUrlInfo>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QUrlInfo_placed_copy(void* orig, void* place) {
    const QUrlInfo_QtDShell&  __qt_orig = (const QUrlInfo_QtDShell& ) *(QUrlInfo_QtDShell *)orig;
    QUrlInfo *result = new (place) QUrlInfo (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QUrlInfo_native_copy(void* orig) {
    const QUrlInfo_QtDShell&  __qt_orig = (const QUrlInfo_QtDShell& ) *(QUrlInfo_QtDShell *)orig;
    QUrlInfo *result = new QUrlInfo (__qt_orig);
    return result;
}

