#include <QDateTime>
#include <QVariant>
#include <qabstractfileengine.h>
#include <qdatetime.h>
#include <qfileinfo.h>
#include <qlist.h>
#include <qstringlist.h>

#include "QFSFileEngine_shell.h"
#include <iostream>
#include <qfsfileengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QFSFileEngine_QtDShell::QFSFileEngine_QtDShell(void *d_ptr)
    : QFSFileEngine(),
      QtdObjectLink(d_ptr)
{
}

QFSFileEngine_QtDShell::QFSFileEngine_QtDShell(void *d_ptr, const QString&  file0)
    : QFSFileEngine(file0),
      QtdObjectLink(d_ptr)
{
}

QFSFileEngine_QtDShell::~QFSFileEngine_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QFSFileEngine_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QFSFileEngine*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_caseSensitive_const_dispatch, (void *dId))
bool  QFSFileEngine_QtDShell::caseSensitive() const
{
    return qtd_QAbstractFileEngine_caseSensitive_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_close_dispatch, (void *dId))
bool  QFSFileEngine_QtDShell::close()
{
    return qtd_QAbstractFileEngine_close_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_copy_string_dispatch, (void *dId, const unsigned short* newName0, int newName0_size))
bool  QFSFileEngine_QtDShell::copy(const QString&  newName0)
{
    return qtd_QAbstractFileEngine_copy_string_dispatch(this->dId, newName0.utf16(), newName0.size());
}

QTD_FUNC_DECL(CORE, void, QAbstractFileEngine_entryList_Filters_QList_const_dispatch, (void *dId, void * __d_arr, int filters0, void* filterNames1))
QStringList  QFSFileEngine_QtDShell::entryList(QDir::Filters  filters0, const QStringList&  filterNames1) const
{
    QStringList __d_return_value;
    qtd_QAbstractFileEngine_entryList_Filters_QList_const_dispatch(this->dId, &__d_return_value, (QDir::Filters )filters0, (void*)&filterNames1);
    return __d_return_value;
}

QTD_FUNC_DECL(CORE, int, QAbstractFileEngine_fileFlags_FileFlags_const_dispatch, (void *dId, int type0))
QAbstractFileEngine::FileFlags  QFSFileEngine_QtDShell::fileFlags(QAbstractFileEngine::FileFlags  type0) const
{
    return (QFlags<QAbstractFileEngine::FileFlag>) qtd_QAbstractFileEngine_fileFlags_FileFlags_const_dispatch(this->dId, (QAbstractFileEngine::FileFlags )type0);
}

QTD_FUNC_DECL(CORE, void, QAbstractFileEngine_fileName_FileName_const_dispatch, (void *dId, DArray* ret_str, int file0))
QString  QFSFileEngine_QtDShell::fileName(QAbstractFileEngine::FileName  file0) const
{
    DArray ret_str;
    qtd_QAbstractFileEngine_fileName_FileName_const_dispatch(this->dId, &ret_str, (QAbstractFileEngine::FileName )file0);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(CORE, void*, QAbstractFileEngine_fileTime_FileTime_const_dispatch, (void *dId, int time0))
QDateTime  QFSFileEngine_QtDShell::fileTime(QAbstractFileEngine::FileTime  time0) const
{
    QDateTime *__qt_return_value = (QDateTime*) qtd_QAbstractFileEngine_fileTime_FileTime_const_dispatch(this->dId, (QAbstractFileEngine::FileTime )time0);
    return QDateTime(*__qt_return_value);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_flush_dispatch, (void *dId))
bool  QFSFileEngine_QtDShell::flush()
{
    return qtd_QAbstractFileEngine_flush_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, int, QAbstractFileEngine_handle_const_dispatch, (void *dId))
int  QFSFileEngine_QtDShell::handle() const
{
    return qtd_QAbstractFileEngine_handle_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_isRelativePath_const_dispatch, (void *dId))
bool  QFSFileEngine_QtDShell::isRelativePath() const
{
    return qtd_QAbstractFileEngine_isRelativePath_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_isSequential_const_dispatch, (void *dId))
bool  QFSFileEngine_QtDShell::isSequential() const
{
    return qtd_QAbstractFileEngine_isSequential_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_link_string_dispatch, (void *dId, const unsigned short* newName0, int newName0_size))
bool  QFSFileEngine_QtDShell::link(const QString&  newName0)
{
    return qtd_QAbstractFileEngine_link_string_dispatch(this->dId, newName0.utf16(), newName0.size());
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_mkdir_string_bool_const_dispatch, (void *dId, const unsigned short* dirName0, int dirName0_size, bool createParentDirectories1))
bool  QFSFileEngine_QtDShell::mkdir(const QString&  dirName0, bool  createParentDirectories1) const
{
    return qtd_QAbstractFileEngine_mkdir_string_bool_const_dispatch(this->dId, dirName0.utf16(), dirName0.size(), (bool )createParentDirectories1);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_open_OpenMode_dispatch, (void *dId, int openMode0))
bool  QFSFileEngine_QtDShell::open(QIODevice::OpenMode  openMode0)
{
    return qtd_QAbstractFileEngine_open_OpenMode_dispatch(this->dId, (QIODevice::OpenMode )openMode0);
}

QTD_FUNC_DECL(CORE, void, QAbstractFileEngine_owner_FileOwner_const_dispatch, (void *dId, DArray* ret_str, int arg__1))
QString  QFSFileEngine_QtDShell::owner(QAbstractFileEngine::FileOwner  arg__1) const
{
    DArray ret_str;
    qtd_QAbstractFileEngine_owner_FileOwner_const_dispatch(this->dId, &ret_str, (QAbstractFileEngine::FileOwner )arg__1);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(CORE, uint, QAbstractFileEngine_ownerId_FileOwner_const_dispatch, (void *dId, int arg__1))
uint  QFSFileEngine_QtDShell::ownerId(QAbstractFileEngine::FileOwner  arg__1) const
{
    return qtd_QAbstractFileEngine_ownerId_FileOwner_const_dispatch(this->dId, (QAbstractFileEngine::FileOwner )arg__1);
}

QTD_FUNC_DECL(CORE, qint64, QAbstractFileEngine_pos_const_dispatch, (void *dId))
qint64  QFSFileEngine_QtDShell::pos() const
{
    return qtd_QAbstractFileEngine_pos_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, qint64, QAbstractFileEngine_read_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QFSFileEngine_QtDShell::read(char*  data0, qint64  maxlen1)
{
    return qtd_QAbstractFileEngine_read_nativepointerchar_long_dispatch(this->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, qint64, QAbstractFileEngine_readLine_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
qint64  QFSFileEngine_QtDShell::readLine(char*  data0, qint64  maxlen1)
{
    return qtd_QAbstractFileEngine_readLine_nativepointerchar_long_dispatch(this->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_remove_dispatch, (void *dId))
bool  QFSFileEngine_QtDShell::remove()
{
    return qtd_QAbstractFileEngine_remove_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_rename_string_dispatch, (void *dId, const unsigned short* newName0, int newName0_size))
bool  QFSFileEngine_QtDShell::rename(const QString&  newName0)
{
    return qtd_QAbstractFileEngine_rename_string_dispatch(this->dId, newName0.utf16(), newName0.size());
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_rmdir_string_bool_const_dispatch, (void *dId, const unsigned short* dirName0, int dirName0_size, bool recurseParentDirectories1))
bool  QFSFileEngine_QtDShell::rmdir(const QString&  dirName0, bool  recurseParentDirectories1) const
{
    return qtd_QAbstractFileEngine_rmdir_string_bool_const_dispatch(this->dId, dirName0.utf16(), dirName0.size(), (bool )recurseParentDirectories1);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_seek_long_dispatch, (void *dId, qint64 arg__1))
bool  QFSFileEngine_QtDShell::seek(qint64  arg__1)
{
    return qtd_QAbstractFileEngine_seek_long_dispatch(this->dId, (qint64 )arg__1);
}

QTD_FUNC_DECL(CORE, void, QAbstractFileEngine_setFileName_string_dispatch, (void *dId, const unsigned short* file0, int file0_size))
void QFSFileEngine_QtDShell::setFileName(const QString&  file0)
{
    qtd_QAbstractFileEngine_setFileName_string_dispatch(this->dId, file0.utf16(), file0.size());
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_setPermissions_uint_dispatch, (void *dId, uint perms0))
bool  QFSFileEngine_QtDShell::setPermissions(uint  perms0)
{
    return qtd_QAbstractFileEngine_setPermissions_uint_dispatch(this->dId, (uint )perms0);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_setSize_long_dispatch, (void *dId, qint64 size0))
bool  QFSFileEngine_QtDShell::setSize(qint64  size0)
{
    return qtd_QAbstractFileEngine_setSize_long_dispatch(this->dId, (qint64 )size0);
}

QTD_FUNC_DECL(CORE, qint64, QAbstractFileEngine_size_const_dispatch, (void *dId))
qint64  QFSFileEngine_QtDShell::size() const
{
    return qtd_QAbstractFileEngine_size_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_supportsExtension_Extension_const_dispatch, (void *dId, int extension0))
bool  QFSFileEngine_QtDShell::supportsExtension(QAbstractFileEngine::Extension  extension0) const
{
    return qtd_QAbstractFileEngine_supportsExtension_Extension_const_dispatch(this->dId, (QAbstractFileEngine::Extension )extension0);
}

QTD_FUNC_DECL(CORE, qint64, QAbstractFileEngine_write_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
qint64  QFSFileEngine_QtDShell::write(const char*  data0, qint64  len1)
{
    return qtd_QAbstractFileEngine_write_nativepointerchar_long_dispatch(this->dId, (char* )data0, (qint64 )len1);
}

QTD_EXTERN QTD_EXPORT void qtd_QFSFileEngine_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
bool  QFSFileEngine_QtDShell::open(QIODevice::OpenMode  flags0, int  fd1)
{
    return QFSFileEngine::open((QIODevice::OpenMode )flags0, (int )fd1);
}

// public overrides for functions that are protected in the base class
void QFSFileEngine_QtDShell::__public_setError(int  error0, const QString&  str1)
{
    QAbstractFileEngine::setError((QFile::FileError )error0, (const QString& )str1);
}

// Write virtual function overries used to decide on static/virtual calls
bool  QFSFileEngine_QtDShell::__override_caseSensitive(bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::caseSensitive();
    } else {
        return caseSensitive();
    }
}

bool  QFSFileEngine_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        return QFSFileEngine::close();
    } else {
        return close();
    }
}

bool  QFSFileEngine_QtDShell::__override_copy(const QString&  newName0, bool static_call)
{
    if (static_call) {
        return QFSFileEngine::copy((const QString& )newName0);
    } else {
        return copy((const QString& )newName0);
    }
}

QStringList  QFSFileEngine_QtDShell::__override_entryList(int  filters0, const QStringList&  filterNames1, bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::entryList((QDir::Filters )filters0, (const QStringList& )filterNames1);
    } else {
        return entryList((QDir::Filters )filters0, (const QStringList& )filterNames1);
    }
}

int  QFSFileEngine_QtDShell::__override_fileFlags(int  type0, bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::fileFlags((QAbstractFileEngine::FileFlags )type0);
    } else {
        return fileFlags((QAbstractFileEngine::FileFlags )type0);
    }
}

QString  QFSFileEngine_QtDShell::__override_fileName(int  file0, bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::fileName((QAbstractFileEngine::FileName )file0);
    } else {
        return fileName((QAbstractFileEngine::FileName )file0);
    }
}

QDateTime  QFSFileEngine_QtDShell::__override_fileTime(int  time0, bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::fileTime((QAbstractFileEngine::FileTime )time0);
    } else {
        return fileTime((QAbstractFileEngine::FileTime )time0);
    }
}

bool  QFSFileEngine_QtDShell::__override_flush(bool static_call)
{
    if (static_call) {
        return QFSFileEngine::flush();
    } else {
        return flush();
    }
}

int  QFSFileEngine_QtDShell::__override_handle(bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::handle();
    } else {
        return handle();
    }
}

bool  QFSFileEngine_QtDShell::__override_isRelativePath(bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::isRelativePath();
    } else {
        return isRelativePath();
    }
}

bool  QFSFileEngine_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::isSequential();
    } else {
        return isSequential();
    }
}

bool  QFSFileEngine_QtDShell::__override_link(const QString&  newName0, bool static_call)
{
    if (static_call) {
        return QFSFileEngine::link((const QString& )newName0);
    } else {
        return link((const QString& )newName0);
    }
}

bool  QFSFileEngine_QtDShell::__override_mkdir(const QString&  dirName0, bool  createParentDirectories1, bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::mkdir((const QString& )dirName0, (bool )createParentDirectories1);
    } else {
        return mkdir((const QString& )dirName0, (bool )createParentDirectories1);
    }
}

bool  QFSFileEngine_QtDShell::__override_open(int  openMode0, bool static_call)
{
    if (static_call) {
        return QFSFileEngine::open((QIODevice::OpenMode )openMode0);
    } else {
        return open((QIODevice::OpenMode )openMode0);
    }
}

QString  QFSFileEngine_QtDShell::__override_owner(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::owner((QAbstractFileEngine::FileOwner )arg__1);
    } else {
        return owner((QAbstractFileEngine::FileOwner )arg__1);
    }
}

uint  QFSFileEngine_QtDShell::__override_ownerId(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::ownerId((QAbstractFileEngine::FileOwner )arg__1);
    } else {
        return ownerId((QAbstractFileEngine::FileOwner )arg__1);
    }
}

qint64  QFSFileEngine_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::pos();
    } else {
        return pos();
    }
}

qint64  QFSFileEngine_QtDShell::__override_read(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QFSFileEngine::read((char* )data0, (qint64 )maxlen1);
    } else {
        return read((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QFSFileEngine_QtDShell::__override_readLine(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QFSFileEngine::readLine((char* )data0, (qint64 )maxlen1);
    } else {
        return readLine((char* )data0, (qint64 )maxlen1);
    }
}

bool  QFSFileEngine_QtDShell::__override_remove(bool static_call)
{
    if (static_call) {
        return QFSFileEngine::remove();
    } else {
        return remove();
    }
}

bool  QFSFileEngine_QtDShell::__override_rename(const QString&  newName0, bool static_call)
{
    if (static_call) {
        return QFSFileEngine::rename((const QString& )newName0);
    } else {
        return rename((const QString& )newName0);
    }
}

bool  QFSFileEngine_QtDShell::__override_rmdir(const QString&  dirName0, bool  recurseParentDirectories1, bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::rmdir((const QString& )dirName0, (bool )recurseParentDirectories1);
    } else {
        return rmdir((const QString& )dirName0, (bool )recurseParentDirectories1);
    }
}

bool  QFSFileEngine_QtDShell::__override_seek(qint64  arg__1, bool static_call)
{
    if (static_call) {
        return QFSFileEngine::seek((qint64 )arg__1);
    } else {
        return seek((qint64 )arg__1);
    }
}

void QFSFileEngine_QtDShell::__override_setFileName(const QString&  file0, bool static_call)
{
    if (static_call) {
        QFSFileEngine::setFileName((const QString& )file0);
    } else {
        setFileName((const QString& )file0);
    }
}

bool  QFSFileEngine_QtDShell::__override_setPermissions(uint  perms0, bool static_call)
{
    if (static_call) {
        return QFSFileEngine::setPermissions((uint )perms0);
    } else {
        return setPermissions((uint )perms0);
    }
}

bool  QFSFileEngine_QtDShell::__override_setSize(qint64  size0, bool static_call)
{
    if (static_call) {
        return QFSFileEngine::setSize((qint64 )size0);
    } else {
        return setSize((qint64 )size0);
    }
}

qint64  QFSFileEngine_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::size();
    } else {
        return size();
    }
}

bool  QFSFileEngine_QtDShell::__override_supportsExtension(int  extension0, bool static_call) const
{
    if (static_call) {
        return QFSFileEngine::supportsExtension((QAbstractFileEngine::Extension )extension0);
    } else {
        return supportsExtension((QAbstractFileEngine::Extension )extension0);
    }
}

qint64  QFSFileEngine_QtDShell::__override_write(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QFSFileEngine::write((const char* )data0, (qint64 )len1);
    } else {
        return write((const char* )data0, (qint64 )len1);
    }
}

// ---externC---
// QFSFileEngine::QFSFileEngine()
QTD_EXTERN QTD_EXPORT void* qtd_QFSFileEngine_QFSFileEngine
(void *d_ptr)
{
    QFSFileEngine_QtDShell *__qt_this = new QFSFileEngine_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QFSFileEngine::QFSFileEngine(const QString & file)
QTD_EXTERN QTD_EXPORT void* qtd_QFSFileEngine_QFSFileEngine_string
(void *d_ptr,
 DArray file0)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QFSFileEngine_QtDShell *__qt_this = new QFSFileEngine_QtDShell(d_ptr, (const QString& )__qt_file0);
    return (void *) __qt_this;

}

// QFSFileEngine::beginEntryList(QFlags<QDir::Filter> filters, const QStringList & filterNames)
QTD_EXTERN QTD_EXPORT void* qtd_QFSFileEngine_beginEntryList_Filters_QList
(void* __this_nativeId,
 int filters0,
 void* filterNames1)
{
    QFlags<QDir::Filter> __qt_filters0 = (QFlags<QDir::Filter>) filters0;
QStringList __qt_filterNames1 = (*(QStringList *)filterNames1);
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    QAbstractFileEngineIterator*  __qt_return_value = __qt_this->beginEntryList((QDir::Filters )__qt_filters0, (const QStringList& )__qt_filterNames1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::endEntryList()
QTD_EXTERN QTD_EXPORT void* qtd_QFSFileEngine_endEntryList
(void* __this_nativeId)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    QAbstractFileEngineIterator*  __qt_return_value = __qt_this->endEntryList();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::open(QFlags<QIODevice::OpenModeFlag> flags, int fd)
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_open_OpenMode_int
(void* __this_nativeId,
 int flags0,
 int fd1)
{
    QFlags<QIODevice::OpenModeFlag> __qt_flags0 = (QFlags<QIODevice::OpenModeFlag>) flags0;
    QFSFileEngine *__qt_this = (QFSFileEngine *) __this_nativeId;
    bool  __qt_return_value = __qt_this->open((QIODevice::OpenMode )__qt_flags0, (int )fd1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::caseSensitive() const
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_caseSensitive_const
(void* __this_nativeId)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_caseSensitive(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::close()
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_close
(void* __this_nativeId)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_close(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::copy(const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_copy_string
(void* __this_nativeId,
 DArray newName0)
{
    QString __qt_newName0 = QString::fromUtf8((const char *)newName0.ptr, newName0.length);
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_copy((const QString& )__qt_newName0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::entryList(QFlags<QDir::Filter> filters, const QStringList & filterNames) const
QTD_EXTERN QTD_EXPORT void qtd_QFSFileEngine_entryList_Filters_QList_const
(void* __this_nativeId,
 void* __d_return_value,
 int filters0,
 void* filterNames1)
{
    QFlags<QDir::Filter> __qt_filters0 = (QFlags<QDir::Filter>) filters0;
QStringList __qt_filterNames1 = (*(QStringList *)filterNames1);
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_entryList((QDir::Filters )__qt_filters0, (const QStringList& )__qt_filterNames1, __do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFSFileEngine::fileFlags(QFlags<QAbstractFileEngine::FileFlag> type) const
QTD_EXTERN QTD_EXPORT int qtd_QFSFileEngine_fileFlags_FileFlags_const
(void* __this_nativeId,
 int type0)
{
    QFlags<QAbstractFileEngine::FileFlag> __qt_type0 = (QFlags<QAbstractFileEngine::FileFlag>) type0;
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_fileFlags((QAbstractFileEngine::FileFlags )__qt_type0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::fileName(QAbstractFileEngine::FileName file) const
QTD_EXTERN QTD_EXPORT void qtd_QFSFileEngine_fileName_FileName_const
(void* __this_nativeId,
 void* __d_return_value,
 int file0)
{
    QAbstractFileEngine::FileName __qt_file0 = (QAbstractFileEngine::FileName) file0;
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_fileName((QAbstractFileEngine::FileName )__qt_file0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFSFileEngine::fileTime(QAbstractFileEngine::FileTime time) const
QTD_EXTERN QTD_EXPORT void* qtd_QFSFileEngine_fileTime_FileTime_const
(void* __this_nativeId,
 int time0)
{
    QAbstractFileEngine::FileTime __qt_time0 = (QAbstractFileEngine::FileTime) time0;
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    QDateTime  __qt_return_value = __qt_this->__override_fileTime((QAbstractFileEngine::FileTime )__qt_time0, __do_static_call);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QFSFileEngine::flush()
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_flush
(void* __this_nativeId)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_flush(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::handle() const
QTD_EXTERN QTD_EXPORT int qtd_QFSFileEngine_handle_const
(void* __this_nativeId)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_handle(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::isRelativePath() const
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_isRelativePath_const
(void* __this_nativeId)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isRelativePath(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::isSequential() const
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_isSequential_const
(void* __this_nativeId)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isSequential(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::link(const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_link_string
(void* __this_nativeId,
 DArray newName0)
{
    QString __qt_newName0 = QString::fromUtf8((const char *)newName0.ptr, newName0.length);
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_link((const QString& )__qt_newName0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::mkdir(const QString & dirName, bool createParentDirectories) const
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_mkdir_string_bool_const
(void* __this_nativeId,
 DArray dirName0,
 bool createParentDirectories1)
{
    QString __qt_dirName0 = QString::fromUtf8((const char *)dirName0.ptr, dirName0.length);
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_mkdir((const QString& )__qt_dirName0, (bool )createParentDirectories1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::open(QFlags<QIODevice::OpenModeFlag> openMode)
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_open_OpenMode
(void* __this_nativeId,
 int openMode0)
{
    QFlags<QIODevice::OpenModeFlag> __qt_openMode0 = (QFlags<QIODevice::OpenModeFlag>) openMode0;
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_open((QIODevice::OpenMode )__qt_openMode0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::owner(QAbstractFileEngine::FileOwner arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QFSFileEngine_owner_FileOwner_const
(void* __this_nativeId,
 void* __d_return_value,
 int arg__1)
{
    QAbstractFileEngine::FileOwner __qt_arg__1 = (QAbstractFileEngine::FileOwner) arg__1;
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_owner((QAbstractFileEngine::FileOwner )__qt_arg__1, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFSFileEngine::ownerId(QAbstractFileEngine::FileOwner arg__1) const
QTD_EXTERN QTD_EXPORT uint qtd_QFSFileEngine_ownerId_FileOwner_const
(void* __this_nativeId,
 int arg__1)
{
    QAbstractFileEngine::FileOwner __qt_arg__1 = (QAbstractFileEngine::FileOwner) arg__1;
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    uint  __qt_return_value = __qt_this->__override_ownerId((QAbstractFileEngine::FileOwner )__qt_arg__1, __do_static_call);

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::pos() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QFSFileEngine_pos_const
(void* __this_nativeId)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_pos(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::read(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QFSFileEngine_read_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_read((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::readLine(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QFSFileEngine_readLine_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readLine((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::remove()
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_remove
(void* __this_nativeId)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_remove(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::rename(const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_rename_string
(void* __this_nativeId,
 DArray newName0)
{
    QString __qt_newName0 = QString::fromUtf8((const char *)newName0.ptr, newName0.length);
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_rename((const QString& )__qt_newName0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::rmdir(const QString & dirName, bool recurseParentDirectories) const
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_rmdir_string_bool_const
(void* __this_nativeId,
 DArray dirName0,
 bool recurseParentDirectories1)
{
    QString __qt_dirName0 = QString::fromUtf8((const char *)dirName0.ptr, dirName0.length);
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_rmdir((const QString& )__qt_dirName0, (bool )recurseParentDirectories1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::seek(qint64 arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_seek_long
(void* __this_nativeId,
 qint64 arg__1)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_seek((qint64 )arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::setFileName(const QString & file)
QTD_EXTERN QTD_EXPORT void qtd_QFSFileEngine_setFileName_string
(void* __this_nativeId,
 DArray file0)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    __qt_this->__override_setFileName((const QString& )__qt_file0, __do_static_call);

}

// QFSFileEngine::setPermissions(uint perms)
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_setPermissions_uint
(void* __this_nativeId,
 uint perms0)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setPermissions((uint )perms0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::setSize(qint64 size)
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_setSize_long
(void* __this_nativeId,
 qint64 size0)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setSize((qint64 )size0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::size() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QFSFileEngine_size_const
(void* __this_nativeId)
{
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_size(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::supportsExtension(QAbstractFileEngine::Extension extension) const
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_supportsExtension_Extension_const
(void* __this_nativeId,
 int extension0)
{
    QAbstractFileEngine::Extension __qt_extension0 = (QAbstractFileEngine::Extension) extension0;
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_supportsExtension((QAbstractFileEngine::Extension )__qt_extension0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::write(const char * data, qint64 len)
QTD_EXTERN QTD_EXPORT qint64 qtd_QFSFileEngine_write_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QFSFileEngine_QtDShell *__qt_this = (QFSFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_write((const char* )__qt_data0, (qint64 )len1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::currentPath(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QFSFileEngine_currentPath_string
(void* __d_return_value,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QString  __qt_return_value = QFSFileEngine_QtDShell::currentPath((const QString& )__qt_path0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFSFileEngine::drives()
QTD_EXTERN QTD_EXPORT void qtd_QFSFileEngine_drives
(void* __d_return_value)
{
    QList<QFileInfo >  __qt_return_value = QFSFileEngine_QtDShell::drives();

QList<QFileInfo > &__d_return_value_tmp = (*(QList<QFileInfo > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFSFileEngine::homePath()
QTD_EXTERN QTD_EXPORT void qtd_QFSFileEngine_homePath
(void* __d_return_value)
{
    QString  __qt_return_value = QFSFileEngine_QtDShell::homePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFSFileEngine::rootPath()
QTD_EXTERN QTD_EXPORT void qtd_QFSFileEngine_rootPath
(void* __d_return_value)
{
    QString  __qt_return_value = QFSFileEngine_QtDShell::rootPath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFSFileEngine::setCurrentPath(const QString & path)
QTD_EXTERN QTD_EXPORT bool qtd_QFSFileEngine_setCurrentPath_string
(DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    bool  __qt_return_value = QFSFileEngine_QtDShell::setCurrentPath((const QString& )__qt_path0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFSFileEngine::tempPath()
QTD_EXTERN QTD_EXPORT void qtd_QFSFileEngine_tempPath
(void* __d_return_value)
{
    QString  __qt_return_value = QFSFileEngine_QtDShell::tempPath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


