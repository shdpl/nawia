#include <QDateTime>
#include <QVariant>
#include <qabstractfileengine.h>
#include <qdatetime.h>
#include <qstringlist.h>

#include "QAbstractFileEngine_shell.h"
#include <iostream>
#include <qabstractfileengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_delete(void* nativeId)
{
    delete (QAbstractFileEngine_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_destroy(void* nativeId)
{
    call_destructor((QAbstractFileEngine_QtDShell*)nativeId);
}

QAbstractFileEngine_QtDShell::QAbstractFileEngine_QtDShell(void *d_ptr)
    : QAbstractFileEngine(),
      QtdObjectLink(d_ptr)
{
}

QAbstractFileEngine_QtDShell::~QAbstractFileEngine_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractFileEngine_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_caseSensitive_const_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngine_caseSensitive_const_dispatch)
bool  QAbstractFileEngine_QtDShell::caseSensitive() const
{
    return qtd_QAbstractFileEngine_caseSensitive_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_close_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngine_close_dispatch)
bool  QAbstractFileEngine_QtDShell::close()
{
    return qtd_QAbstractFileEngine_close_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_copy_string_dispatch, (void *dId, const unsigned short* newName0, int newName0_size))
QTD_FUNC(CORE, QAbstractFileEngine_copy_string_dispatch)
bool  QAbstractFileEngine_QtDShell::copy(const QString&  newName0)
{
    return qtd_QAbstractFileEngine_copy_string_dispatch(this->dId, newName0.utf16(), newName0.size());
}

QTD_FUNC_DECL(CORE, void, QAbstractFileEngine_entryList_Filters_QList_const_dispatch, (void *dId, void * __d_arr, int filters0, void* filterNames1))
QTD_FUNC(CORE, QAbstractFileEngine_entryList_Filters_QList_const_dispatch)
QStringList  QAbstractFileEngine_QtDShell::entryList(QDir::Filters  filters0, const QStringList&  filterNames1) const
{
    QStringList __d_return_value;
    qtd_QAbstractFileEngine_entryList_Filters_QList_const_dispatch(this->dId, &__d_return_value, (QDir::Filters )filters0, (void*)&filterNames1);
    return __d_return_value;
}

QTD_FUNC_DECL(CORE, int, QAbstractFileEngine_fileFlags_FileFlags_const_dispatch, (void *dId, int type0))
QTD_FUNC(CORE, QAbstractFileEngine_fileFlags_FileFlags_const_dispatch)
QAbstractFileEngine::FileFlags  QAbstractFileEngine_QtDShell::fileFlags(QAbstractFileEngine::FileFlags  type0) const
{
    return (QFlags<QAbstractFileEngine::FileFlag>) qtd_QAbstractFileEngine_fileFlags_FileFlags_const_dispatch(this->dId, (QAbstractFileEngine::FileFlags )type0);
}

QTD_FUNC_DECL(CORE, void, QAbstractFileEngine_fileName_FileName_const_dispatch, (void *dId, DArray* ret_str, int file0))
QTD_FUNC(CORE, QAbstractFileEngine_fileName_FileName_const_dispatch)
QString  QAbstractFileEngine_QtDShell::fileName(QAbstractFileEngine::FileName  file0) const
{
    DArray ret_str;
    qtd_QAbstractFileEngine_fileName_FileName_const_dispatch(this->dId, &ret_str, (QAbstractFileEngine::FileName )file0);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(CORE, void*, QAbstractFileEngine_fileTime_FileTime_const_dispatch, (void *dId, int time0))
QTD_FUNC(CORE, QAbstractFileEngine_fileTime_FileTime_const_dispatch)
QDateTime  QAbstractFileEngine_QtDShell::fileTime(QAbstractFileEngine::FileTime  time0) const
{
    QDateTime *__qt_return_value = (QDateTime*) qtd_QAbstractFileEngine_fileTime_FileTime_const_dispatch(this->dId, (QAbstractFileEngine::FileTime )time0);
    return QDateTime(*__qt_return_value);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_flush_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngine_flush_dispatch)
bool  QAbstractFileEngine_QtDShell::flush()
{
    return qtd_QAbstractFileEngine_flush_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, int, QAbstractFileEngine_handle_const_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngine_handle_const_dispatch)
int  QAbstractFileEngine_QtDShell::handle() const
{
    return qtd_QAbstractFileEngine_handle_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_isRelativePath_const_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngine_isRelativePath_const_dispatch)
bool  QAbstractFileEngine_QtDShell::isRelativePath() const
{
    return qtd_QAbstractFileEngine_isRelativePath_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_isSequential_const_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngine_isSequential_const_dispatch)
bool  QAbstractFileEngine_QtDShell::isSequential() const
{
    return qtd_QAbstractFileEngine_isSequential_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_link_string_dispatch, (void *dId, const unsigned short* newName0, int newName0_size))
QTD_FUNC(CORE, QAbstractFileEngine_link_string_dispatch)
bool  QAbstractFileEngine_QtDShell::link(const QString&  newName0)
{
    return qtd_QAbstractFileEngine_link_string_dispatch(this->dId, newName0.utf16(), newName0.size());
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_mkdir_string_bool_const_dispatch, (void *dId, const unsigned short* dirName0, int dirName0_size, bool createParentDirectories1))
QTD_FUNC(CORE, QAbstractFileEngine_mkdir_string_bool_const_dispatch)
bool  QAbstractFileEngine_QtDShell::mkdir(const QString&  dirName0, bool  createParentDirectories1) const
{
    return qtd_QAbstractFileEngine_mkdir_string_bool_const_dispatch(this->dId, dirName0.utf16(), dirName0.size(), (bool )createParentDirectories1);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_open_OpenMode_dispatch, (void *dId, int openMode0))
QTD_FUNC(CORE, QAbstractFileEngine_open_OpenMode_dispatch)
bool  QAbstractFileEngine_QtDShell::open(QIODevice::OpenMode  openMode0)
{
    return qtd_QAbstractFileEngine_open_OpenMode_dispatch(this->dId, (QIODevice::OpenMode )openMode0);
}

QTD_FUNC_DECL(CORE, void, QAbstractFileEngine_owner_FileOwner_const_dispatch, (void *dId, DArray* ret_str, int arg__1))
QTD_FUNC(CORE, QAbstractFileEngine_owner_FileOwner_const_dispatch)
QString  QAbstractFileEngine_QtDShell::owner(QAbstractFileEngine::FileOwner  arg__1) const
{
    DArray ret_str;
    qtd_QAbstractFileEngine_owner_FileOwner_const_dispatch(this->dId, &ret_str, (QAbstractFileEngine::FileOwner )arg__1);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(CORE, uint, QAbstractFileEngine_ownerId_FileOwner_const_dispatch, (void *dId, int arg__1))
QTD_FUNC(CORE, QAbstractFileEngine_ownerId_FileOwner_const_dispatch)
uint  QAbstractFileEngine_QtDShell::ownerId(QAbstractFileEngine::FileOwner  arg__1) const
{
    return qtd_QAbstractFileEngine_ownerId_FileOwner_const_dispatch(this->dId, (QAbstractFileEngine::FileOwner )arg__1);
}

QTD_FUNC_DECL(CORE, qint64, QAbstractFileEngine_pos_const_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngine_pos_const_dispatch)
qint64  QAbstractFileEngine_QtDShell::pos() const
{
    return qtd_QAbstractFileEngine_pos_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, qint64, QAbstractFileEngine_read_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
QTD_FUNC(CORE, QAbstractFileEngine_read_nativepointerchar_long_dispatch)
qint64  QAbstractFileEngine_QtDShell::read(char*  data0, qint64  maxlen1)
{
    return qtd_QAbstractFileEngine_read_nativepointerchar_long_dispatch(this->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, qint64, QAbstractFileEngine_readLine_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 maxlen1))
QTD_FUNC(CORE, QAbstractFileEngine_readLine_nativepointerchar_long_dispatch)
qint64  QAbstractFileEngine_QtDShell::readLine(char*  data0, qint64  maxlen1)
{
    return qtd_QAbstractFileEngine_readLine_nativepointerchar_long_dispatch(this->dId, (char* )data0, (qint64 )maxlen1);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_remove_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngine_remove_dispatch)
bool  QAbstractFileEngine_QtDShell::remove()
{
    return qtd_QAbstractFileEngine_remove_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_rename_string_dispatch, (void *dId, const unsigned short* newName0, int newName0_size))
QTD_FUNC(CORE, QAbstractFileEngine_rename_string_dispatch)
bool  QAbstractFileEngine_QtDShell::rename(const QString&  newName0)
{
    return qtd_QAbstractFileEngine_rename_string_dispatch(this->dId, newName0.utf16(), newName0.size());
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_rmdir_string_bool_const_dispatch, (void *dId, const unsigned short* dirName0, int dirName0_size, bool recurseParentDirectories1))
QTD_FUNC(CORE, QAbstractFileEngine_rmdir_string_bool_const_dispatch)
bool  QAbstractFileEngine_QtDShell::rmdir(const QString&  dirName0, bool  recurseParentDirectories1) const
{
    return qtd_QAbstractFileEngine_rmdir_string_bool_const_dispatch(this->dId, dirName0.utf16(), dirName0.size(), (bool )recurseParentDirectories1);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_seek_long_dispatch, (void *dId, qint64 pos0))
QTD_FUNC(CORE, QAbstractFileEngine_seek_long_dispatch)
bool  QAbstractFileEngine_QtDShell::seek(qint64  pos0)
{
    return qtd_QAbstractFileEngine_seek_long_dispatch(this->dId, (qint64 )pos0);
}

QTD_FUNC_DECL(CORE, void, QAbstractFileEngine_setFileName_string_dispatch, (void *dId, const unsigned short* file0, int file0_size))
QTD_FUNC(CORE, QAbstractFileEngine_setFileName_string_dispatch)
void QAbstractFileEngine_QtDShell::setFileName(const QString&  file0)
{
    qtd_QAbstractFileEngine_setFileName_string_dispatch(this->dId, file0.utf16(), file0.size());
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_setPermissions_uint_dispatch, (void *dId, uint perms0))
QTD_FUNC(CORE, QAbstractFileEngine_setPermissions_uint_dispatch)
bool  QAbstractFileEngine_QtDShell::setPermissions(uint  perms0)
{
    return qtd_QAbstractFileEngine_setPermissions_uint_dispatch(this->dId, (uint )perms0);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_setSize_long_dispatch, (void *dId, qint64 size0))
QTD_FUNC(CORE, QAbstractFileEngine_setSize_long_dispatch)
bool  QAbstractFileEngine_QtDShell::setSize(qint64  size0)
{
    return qtd_QAbstractFileEngine_setSize_long_dispatch(this->dId, (qint64 )size0);
}

QTD_FUNC_DECL(CORE, qint64, QAbstractFileEngine_size_const_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngine_size_const_dispatch)
qint64  QAbstractFileEngine_QtDShell::size() const
{
    return qtd_QAbstractFileEngine_size_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngine_supportsExtension_Extension_const_dispatch, (void *dId, int extension0))
QTD_FUNC(CORE, QAbstractFileEngine_supportsExtension_Extension_const_dispatch)
bool  QAbstractFileEngine_QtDShell::supportsExtension(QAbstractFileEngine::Extension  extension0) const
{
    return qtd_QAbstractFileEngine_supportsExtension_Extension_const_dispatch(this->dId, (QAbstractFileEngine::Extension )extension0);
}

QTD_FUNC_DECL(CORE, qint64, QAbstractFileEngine_write_nativepointerchar_long_dispatch, (void *dId, char* data0, qint64 len1))
QTD_FUNC(CORE, QAbstractFileEngine_write_nativepointerchar_long_dispatch)
qint64  QAbstractFileEngine_QtDShell::write(const char*  data0, qint64  len1)
{
    return qtd_QAbstractFileEngine_write_nativepointerchar_long_dispatch(this->dId, (char* )data0, (qint64 )len1);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractFileEngine_caseSensitive_const_dispatch = (qtd_QAbstractFileEngine_caseSensitive_const_dispatch_t) virts[0];
    qtd_QAbstractFileEngine_close_dispatch = (qtd_QAbstractFileEngine_close_dispatch_t) virts[1];
    qtd_QAbstractFileEngine_copy_string_dispatch = (qtd_QAbstractFileEngine_copy_string_dispatch_t) virts[2];
    qtd_QAbstractFileEngine_entryList_Filters_QList_const_dispatch = (qtd_QAbstractFileEngine_entryList_Filters_QList_const_dispatch_t) virts[3];
    qtd_QAbstractFileEngine_fileFlags_FileFlags_const_dispatch = (qtd_QAbstractFileEngine_fileFlags_FileFlags_const_dispatch_t) virts[4];
    qtd_QAbstractFileEngine_fileName_FileName_const_dispatch = (qtd_QAbstractFileEngine_fileName_FileName_const_dispatch_t) virts[5];
    qtd_QAbstractFileEngine_fileTime_FileTime_const_dispatch = (qtd_QAbstractFileEngine_fileTime_FileTime_const_dispatch_t) virts[6];
    qtd_QAbstractFileEngine_flush_dispatch = (qtd_QAbstractFileEngine_flush_dispatch_t) virts[7];
    qtd_QAbstractFileEngine_handle_const_dispatch = (qtd_QAbstractFileEngine_handle_const_dispatch_t) virts[8];
    qtd_QAbstractFileEngine_isRelativePath_const_dispatch = (qtd_QAbstractFileEngine_isRelativePath_const_dispatch_t) virts[9];
    qtd_QAbstractFileEngine_isSequential_const_dispatch = (qtd_QAbstractFileEngine_isSequential_const_dispatch_t) virts[10];
    qtd_QAbstractFileEngine_link_string_dispatch = (qtd_QAbstractFileEngine_link_string_dispatch_t) virts[11];
    qtd_QAbstractFileEngine_mkdir_string_bool_const_dispatch = (qtd_QAbstractFileEngine_mkdir_string_bool_const_dispatch_t) virts[12];
    qtd_QAbstractFileEngine_open_OpenMode_dispatch = (qtd_QAbstractFileEngine_open_OpenMode_dispatch_t) virts[13];
    qtd_QAbstractFileEngine_owner_FileOwner_const_dispatch = (qtd_QAbstractFileEngine_owner_FileOwner_const_dispatch_t) virts[14];
    qtd_QAbstractFileEngine_ownerId_FileOwner_const_dispatch = (qtd_QAbstractFileEngine_ownerId_FileOwner_const_dispatch_t) virts[15];
    qtd_QAbstractFileEngine_pos_const_dispatch = (qtd_QAbstractFileEngine_pos_const_dispatch_t) virts[16];
    qtd_QAbstractFileEngine_read_nativepointerchar_long_dispatch = (qtd_QAbstractFileEngine_read_nativepointerchar_long_dispatch_t) virts[17];
    qtd_QAbstractFileEngine_readLine_nativepointerchar_long_dispatch = (qtd_QAbstractFileEngine_readLine_nativepointerchar_long_dispatch_t) virts[18];
    qtd_QAbstractFileEngine_remove_dispatch = (qtd_QAbstractFileEngine_remove_dispatch_t) virts[19];
    qtd_QAbstractFileEngine_rename_string_dispatch = (qtd_QAbstractFileEngine_rename_string_dispatch_t) virts[20];
    qtd_QAbstractFileEngine_rmdir_string_bool_const_dispatch = (qtd_QAbstractFileEngine_rmdir_string_bool_const_dispatch_t) virts[21];
    qtd_QAbstractFileEngine_seek_long_dispatch = (qtd_QAbstractFileEngine_seek_long_dispatch_t) virts[22];
    qtd_QAbstractFileEngine_setFileName_string_dispatch = (qtd_QAbstractFileEngine_setFileName_string_dispatch_t) virts[23];
    qtd_QAbstractFileEngine_setPermissions_uint_dispatch = (qtd_QAbstractFileEngine_setPermissions_uint_dispatch_t) virts[24];
    qtd_QAbstractFileEngine_setSize_long_dispatch = (qtd_QAbstractFileEngine_setSize_long_dispatch_t) virts[25];
    qtd_QAbstractFileEngine_size_const_dispatch = (qtd_QAbstractFileEngine_size_const_dispatch_t) virts[26];
    qtd_QAbstractFileEngine_supportsExtension_Extension_const_dispatch = (qtd_QAbstractFileEngine_supportsExtension_Extension_const_dispatch_t) virts[27];
    qtd_QAbstractFileEngine_write_nativepointerchar_long_dispatch = (qtd_QAbstractFileEngine_write_nativepointerchar_long_dispatch_t) virts[28];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QAbstractFileEngine_QtDShell::__public_setError(int  error0, const QString&  str1)
{
    QAbstractFileEngine::setError((QFile::FileError )error0, (const QString& )str1);
}

// Write virtual function overries used to decide on static/virtual calls
bool  QAbstractFileEngine_QtDShell::__override_caseSensitive(bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::caseSensitive();
    } else {
        return caseSensitive();
    }
}

bool  QAbstractFileEngine_QtDShell::__override_close(bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::close();
    } else {
        return close();
    }
}

bool  QAbstractFileEngine_QtDShell::__override_copy(const QString&  newName0, bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::copy((const QString& )newName0);
    } else {
        return copy((const QString& )newName0);
    }
}

QStringList  QAbstractFileEngine_QtDShell::__override_entryList(int  filters0, const QStringList&  filterNames1, bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::entryList((QDir::Filters )filters0, (const QStringList& )filterNames1);
    } else {
        return entryList((QDir::Filters )filters0, (const QStringList& )filterNames1);
    }
}

int  QAbstractFileEngine_QtDShell::__override_fileFlags(int  type0, bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::fileFlags((QAbstractFileEngine::FileFlags )type0);
    } else {
        return fileFlags((QAbstractFileEngine::FileFlags )type0);
    }
}

QString  QAbstractFileEngine_QtDShell::__override_fileName(int  file0, bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::fileName((QAbstractFileEngine::FileName )file0);
    } else {
        return fileName((QAbstractFileEngine::FileName )file0);
    }
}

QDateTime  QAbstractFileEngine_QtDShell::__override_fileTime(int  time0, bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::fileTime((QAbstractFileEngine::FileTime )time0);
    } else {
        return fileTime((QAbstractFileEngine::FileTime )time0);
    }
}

bool  QAbstractFileEngine_QtDShell::__override_flush(bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::flush();
    } else {
        return flush();
    }
}

int  QAbstractFileEngine_QtDShell::__override_handle(bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::handle();
    } else {
        return handle();
    }
}

bool  QAbstractFileEngine_QtDShell::__override_isRelativePath(bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::isRelativePath();
    } else {
        return isRelativePath();
    }
}

bool  QAbstractFileEngine_QtDShell::__override_isSequential(bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::isSequential();
    } else {
        return isSequential();
    }
}

bool  QAbstractFileEngine_QtDShell::__override_link(const QString&  newName0, bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::link((const QString& )newName0);
    } else {
        return link((const QString& )newName0);
    }
}

bool  QAbstractFileEngine_QtDShell::__override_mkdir(const QString&  dirName0, bool  createParentDirectories1, bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::mkdir((const QString& )dirName0, (bool )createParentDirectories1);
    } else {
        return mkdir((const QString& )dirName0, (bool )createParentDirectories1);
    }
}

bool  QAbstractFileEngine_QtDShell::__override_open(int  openMode0, bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::open((QIODevice::OpenMode )openMode0);
    } else {
        return open((QIODevice::OpenMode )openMode0);
    }
}

QString  QAbstractFileEngine_QtDShell::__override_owner(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::owner((QAbstractFileEngine::FileOwner )arg__1);
    } else {
        return owner((QAbstractFileEngine::FileOwner )arg__1);
    }
}

uint  QAbstractFileEngine_QtDShell::__override_ownerId(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::ownerId((QAbstractFileEngine::FileOwner )arg__1);
    } else {
        return ownerId((QAbstractFileEngine::FileOwner )arg__1);
    }
}

qint64  QAbstractFileEngine_QtDShell::__override_pos(bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::pos();
    } else {
        return pos();
    }
}

qint64  QAbstractFileEngine_QtDShell::__override_read(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::read((char* )data0, (qint64 )maxlen1);
    } else {
        return read((char* )data0, (qint64 )maxlen1);
    }
}

qint64  QAbstractFileEngine_QtDShell::__override_readLine(char*  data0, qint64  maxlen1, bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::readLine((char* )data0, (qint64 )maxlen1);
    } else {
        return readLine((char* )data0, (qint64 )maxlen1);
    }
}

bool  QAbstractFileEngine_QtDShell::__override_remove(bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::remove();
    } else {
        return remove();
    }
}

bool  QAbstractFileEngine_QtDShell::__override_rename(const QString&  newName0, bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::rename((const QString& )newName0);
    } else {
        return rename((const QString& )newName0);
    }
}

bool  QAbstractFileEngine_QtDShell::__override_rmdir(const QString&  dirName0, bool  recurseParentDirectories1, bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::rmdir((const QString& )dirName0, (bool )recurseParentDirectories1);
    } else {
        return rmdir((const QString& )dirName0, (bool )recurseParentDirectories1);
    }
}

bool  QAbstractFileEngine_QtDShell::__override_seek(qint64  pos0, bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::seek((qint64 )pos0);
    } else {
        return seek((qint64 )pos0);
    }
}

void QAbstractFileEngine_QtDShell::__override_setFileName(const QString&  file0, bool static_call)
{
    if (static_call) {
        QAbstractFileEngine::setFileName((const QString& )file0);
    } else {
        setFileName((const QString& )file0);
    }
}

bool  QAbstractFileEngine_QtDShell::__override_setPermissions(uint  perms0, bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::setPermissions((uint )perms0);
    } else {
        return setPermissions((uint )perms0);
    }
}

bool  QAbstractFileEngine_QtDShell::__override_setSize(qint64  size0, bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::setSize((qint64 )size0);
    } else {
        return setSize((qint64 )size0);
    }
}

qint64  QAbstractFileEngine_QtDShell::__override_size(bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::size();
    } else {
        return size();
    }
}

bool  QAbstractFileEngine_QtDShell::__override_supportsExtension(int  extension0, bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngine::supportsExtension((QAbstractFileEngine::Extension )extension0);
    } else {
        return supportsExtension((QAbstractFileEngine::Extension )extension0);
    }
}

qint64  QAbstractFileEngine_QtDShell::__override_write(const char*  data0, qint64  len1, bool static_call)
{
    if (static_call) {
        return QAbstractFileEngine::write((const char* )data0, (qint64 )len1);
    } else {
        return write((const char* )data0, (qint64 )len1);
    }
}

// ---externC---
// QAbstractFileEngine::QAbstractFileEngine()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractFileEngine_QAbstractFileEngine
(void *d_ptr)
{
    QAbstractFileEngine_QtDShell *__qt_this = new QAbstractFileEngine_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAbstractFileEngine::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_atEnd_const
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->atEnd();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::error() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractFileEngine_error_const
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractFileEngine::map(qint64 offset, qint64 size, QFile::MemoryMapFlags flags)
QTD_EXTERN QTD_EXPORT unsigned char* qtd_QAbstractFileEngine_map_long_long_MemoryMapFlags
(void* __this_nativeId,
 qint64 offset0,
 qint64 size1,
 int flags2)
{
    QFile::MemoryMapFlags __qt_flags2 = (QFile::MemoryMapFlags) flags2;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    unsigned char*  __qt_return_value = __qt_this->map((qint64 )offset0, (qint64 )size1, (QFile::MemoryMapFlags )__qt_flags2);

    unsigned char* __d_return_value = (unsigned char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QAbstractFileEngine::setError(QFile::FileError error, const QString & str)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_setError_FileError_string
(void* __this_nativeId,
 int error0,
 DArray str1)
{
    QFile::FileError __qt_error0 = (QFile::FileError) error0;
    QString __qt_str1 = QString::fromUtf8((const char *)str1.ptr, str1.length);
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    __qt_this->__public_setError((QFile::FileError )__qt_error0, (const QString& )__qt_str1);

}

// QAbstractFileEngine::caseSensitive() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_caseSensitive_const
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_caseSensitive(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::close()
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_close
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_close(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::copy(const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_copy_string
(void* __this_nativeId,
 DArray newName0)
{
    QString __qt_newName0 = QString::fromUtf8((const char *)newName0.ptr, newName0.length);
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_copy((const QString& )__qt_newName0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::entryList(QFlags<QDir::Filter> filters, const QStringList & filterNames) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_entryList_Filters_QList_const
(void* __this_nativeId,
 void* __d_return_value,
 int filters0,
 void* filterNames1)
{
    QFlags<QDir::Filter> __qt_filters0 = (QFlags<QDir::Filter>) filters0;
QStringList __qt_filterNames1 = (*(QStringList *)filterNames1);
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_entryList((QDir::Filters )__qt_filters0, (const QStringList& )__qt_filterNames1, __do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAbstractFileEngine::fileFlags(QFlags<QAbstractFileEngine::FileFlag> type) const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractFileEngine_fileFlags_FileFlags_const
(void* __this_nativeId,
 int type0)
{
    QFlags<QAbstractFileEngine::FileFlag> __qt_type0 = (QFlags<QAbstractFileEngine::FileFlag>) type0;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_fileFlags((QAbstractFileEngine::FileFlags )__qt_type0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::fileName(QAbstractFileEngine::FileName file) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_fileName_FileName_const
(void* __this_nativeId,
 void* __d_return_value,
 int file0)
{
    QAbstractFileEngine::FileName __qt_file0 = (QAbstractFileEngine::FileName) file0;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_fileName((QAbstractFileEngine::FileName )__qt_file0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractFileEngine::fileTime(QAbstractFileEngine::FileTime time) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractFileEngine_fileTime_FileTime_const
(void* __this_nativeId,
 int time0)
{
    QAbstractFileEngine::FileTime __qt_time0 = (QAbstractFileEngine::FileTime) time0;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    QDateTime  __qt_return_value = __qt_this->__override_fileTime((QAbstractFileEngine::FileTime )__qt_time0, __do_static_call);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QAbstractFileEngine::flush()
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_flush
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_flush(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::handle() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractFileEngine_handle_const
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_handle(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::isRelativePath() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_isRelativePath_const
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isRelativePath(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::isSequential() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_isSequential_const
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isSequential(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::link(const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_link_string
(void* __this_nativeId,
 DArray newName0)
{
    QString __qt_newName0 = QString::fromUtf8((const char *)newName0.ptr, newName0.length);
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_link((const QString& )__qt_newName0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::mkdir(const QString & dirName, bool createParentDirectories) const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_mkdir_string_bool_const
(void* __this_nativeId,
 DArray dirName0,
 bool createParentDirectories1)
{
    QString __qt_dirName0 = QString::fromUtf8((const char *)dirName0.ptr, dirName0.length);
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_mkdir((const QString& )__qt_dirName0, (bool )createParentDirectories1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::open(QFlags<QIODevice::OpenModeFlag> openMode)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_open_OpenMode
(void* __this_nativeId,
 int openMode0)
{
    QFlags<QIODevice::OpenModeFlag> __qt_openMode0 = (QFlags<QIODevice::OpenModeFlag>) openMode0;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_open((QIODevice::OpenMode )__qt_openMode0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::owner(QAbstractFileEngine::FileOwner arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_owner_FileOwner_const
(void* __this_nativeId,
 void* __d_return_value,
 int arg__1)
{
    QAbstractFileEngine::FileOwner __qt_arg__1 = (QAbstractFileEngine::FileOwner) arg__1;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_owner((QAbstractFileEngine::FileOwner )__qt_arg__1, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractFileEngine::ownerId(QAbstractFileEngine::FileOwner arg__1) const
QTD_EXTERN QTD_EXPORT uint qtd_QAbstractFileEngine_ownerId_FileOwner_const
(void* __this_nativeId,
 int arg__1)
{
    QAbstractFileEngine::FileOwner __qt_arg__1 = (QAbstractFileEngine::FileOwner) arg__1;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    uint  __qt_return_value = __qt_this->__override_ownerId((QAbstractFileEngine::FileOwner )__qt_arg__1, __do_static_call);

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::pos() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractFileEngine_pos_const
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_pos(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::read(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractFileEngine_read_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_read((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::readLine(char * data, qint64 maxlen)
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractFileEngine_readLine_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 maxlen1)
{
    char*  __qt_data0 = (char* ) data0;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_readLine((char* )__qt_data0, (qint64 )maxlen1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::remove()
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_remove
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_remove(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::rename(const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_rename_string
(void* __this_nativeId,
 DArray newName0)
{
    QString __qt_newName0 = QString::fromUtf8((const char *)newName0.ptr, newName0.length);
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_rename((const QString& )__qt_newName0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::rmdir(const QString & dirName, bool recurseParentDirectories) const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_rmdir_string_bool_const
(void* __this_nativeId,
 DArray dirName0,
 bool recurseParentDirectories1)
{
    QString __qt_dirName0 = QString::fromUtf8((const char *)dirName0.ptr, dirName0.length);
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_rmdir((const QString& )__qt_dirName0, (bool )recurseParentDirectories1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::seek(qint64 pos)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_seek_long
(void* __this_nativeId,
 qint64 pos0)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_seek((qint64 )pos0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::setFileName(const QString & file)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_setFileName_string
(void* __this_nativeId,
 DArray file0)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    __qt_this->__override_setFileName((const QString& )__qt_file0, __do_static_call);

}

// QAbstractFileEngine::setPermissions(uint perms)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_setPermissions_uint
(void* __this_nativeId,
 uint perms0)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setPermissions((uint )perms0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::setSize(qint64 size)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_setSize_long
(void* __this_nativeId,
 qint64 size0)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setSize((qint64 )size0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::size() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractFileEngine_size_const
(void* __this_nativeId)
{
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_size(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::supportsExtension(QAbstractFileEngine::Extension extension) const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngine_supportsExtension_Extension_const
(void* __this_nativeId,
 int extension0)
{
    QAbstractFileEngine::Extension __qt_extension0 = (QAbstractFileEngine::Extension) extension0;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_supportsExtension((QAbstractFileEngine::Extension )__qt_extension0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::write(const char * data, qint64 len)
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractFileEngine_write_nativepointerchar_long
(void* __this_nativeId,
 char* data0,
 qint64 len1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QAbstractFileEngine_QtDShell *__qt_this = (QAbstractFileEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngine*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_write((const char* )__qt_data0, (qint64 )len1, __do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngine::create(const QString & fileName)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractFileEngine_create_string
(DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QAbstractFileEngine*  __qt_return_value = QAbstractFileEngine_QtDShell::create((const QString& )__qt_fileName0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


