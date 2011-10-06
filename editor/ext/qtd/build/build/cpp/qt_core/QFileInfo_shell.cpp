#include <QDateTime>
#include <QDir>
#include <QVariant>
#include <qdatetime.h>
#include <qdir.h>
#include <qfile.h>
#include <qfileinfo.h>

#include <iostream>
#include <qfileinfo.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_delete(void* nativeId)
{
    delete (QFileInfo*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_destroy(void* nativeId)
{
    call_destructor((QFileInfo*)nativeId);
}

// ---externC---
// QFileInfo::QFileInfo()
QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_QFileInfo
()
{
    QFileInfo *__qt_this = new QFileInfo();
    return (void *) __qt_this;

}

// QFileInfo::QFileInfo(const QDir & dir, const QString & file)
QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_QFileInfo_QDir_string
(void* dir0,
 DArray file1)
{
    const QDir&  __qt_dir0 = (const QDir& ) *(QDir *)dir0;
    QString __qt_file1 = QString::fromUtf8((const char *)file1.ptr, file1.length);
    QFileInfo *__qt_this = new QFileInfo((const QDir& )__qt_dir0, (const QString& )__qt_file1);
    return (void *) __qt_this;

}

// QFileInfo::QFileInfo(const QFile & file)
QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_QFileInfo_QFile
(void* file0)
{
    const QFile&  __qt_file0 = (const QFile& ) * (QFile *) file0;
    QFileInfo *__qt_this = new QFileInfo((const QFile& )__qt_file0);
    return (void *) __qt_this;

}

// QFileInfo::QFileInfo(const QFileInfo & fileinfo)
QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_QFileInfo_QFileInfo
(void* fileinfo0)
{
    const QFileInfo&  __qt_fileinfo0 = (const QFileInfo& ) *(QFileInfo *)fileinfo0;
    QFileInfo *__qt_this = new QFileInfo((const QFileInfo& )__qt_fileinfo0);
    return (void *) __qt_this;

}

// QFileInfo::QFileInfo(const QString & file)
QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_QFileInfo_string
(DArray file0)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QFileInfo *__qt_this = new QFileInfo((const QString& )__qt_file0);
    return (void *) __qt_this;

}

// QFileInfo::absoluteDir() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_absoluteDir_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QDir  __qt_return_value = __qt_this->absoluteDir();

    void* __d_return_value = (void*) new QDir(__qt_return_value);

    return __d_return_value;
}

// QFileInfo::absoluteFilePath() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_absoluteFilePath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->absoluteFilePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::absolutePath() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_absolutePath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->absolutePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::baseName() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_baseName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->baseName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::bundleName() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_bundleName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->bundleName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::caching() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_caching_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->caching();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::canonicalFilePath() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_canonicalFilePath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->canonicalFilePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::canonicalPath() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_canonicalPath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->canonicalPath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::completeBaseName() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_completeBaseName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->completeBaseName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::completeSuffix() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_completeSuffix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->completeSuffix();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::created() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_created_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->created();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QFileInfo::dir() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_dir_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QDir  __qt_return_value = __qt_this->dir();

    void* __d_return_value = (void*) new QDir(__qt_return_value);

    return __d_return_value;
}

// QFileInfo::exists() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_exists_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->exists();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_fileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::filePath() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_filePath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->filePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::group() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_group_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->group();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::groupId() const
QTD_EXTERN QTD_EXPORT uint qtd_QFileInfo_groupId_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    uint  __qt_return_value = __qt_this->groupId();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isAbsolute() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isAbsolute_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAbsolute();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isBundle() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isBundle_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isBundle();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isDir() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isDir_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDir();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isExecutable() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isExecutable_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isExecutable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isFile() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isFile_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFile();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isHidden() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isHidden_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isHidden();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isReadable() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isReadable_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isRelative() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isRelative_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRelative();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isRoot() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isRoot_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRoot();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isSymLink() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isSymLink_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSymLink();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::isWritable() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_isWritable_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWritable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::lastModified() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_lastModified_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->lastModified();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QFileInfo::lastRead() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_lastRead_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->lastRead();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QFileInfo::makeAbsolute()
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_makeAbsolute
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->makeAbsolute();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::operator==(const QFileInfo & fileinfo)
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_operator_equal_QFileInfo
(void* __this_nativeId,
 void* fileinfo0)
{
    const QFileInfo&  __qt_fileinfo0 = (const QFileInfo& ) *(QFileInfo *)fileinfo0;
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QFileInfo& )__qt_fileinfo0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::owner() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_owner_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->owner();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::ownerId() const
QTD_EXTERN QTD_EXPORT uint qtd_QFileInfo_ownerId_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    uint  __qt_return_value = __qt_this->ownerId();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::path() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_path_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->path();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::permission(QFlags<QFile::Permission> permissions) const
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_permission_Permissions_const
(void* __this_nativeId,
 int permissions0)
{
    QFlags<QFile::Permission> __qt_permissions0 = (QFlags<QFile::Permission>) permissions0;
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->permission((QFile::Permissions )__qt_permissions0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::permissions() const
QTD_EXTERN QTD_EXPORT int qtd_QFileInfo_permissions_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    int  __qt_return_value = __qt_this->permissions();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::refresh()
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_refresh
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    __qt_this->refresh();

}

// QFileInfo::setCaching(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_setCaching_bool
(void* __this_nativeId,
 bool on0)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    __qt_this->setCaching((bool )on0);

}

// QFileInfo::setFile(const QDir & dir, const QString & file)
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_setFile_QDir_string
(void* __this_nativeId,
 void* dir0,
 DArray file1)
{
    const QDir&  __qt_dir0 = (const QDir& ) *(QDir *)dir0;
    QString __qt_file1 = QString::fromUtf8((const char *)file1.ptr, file1.length);
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    __qt_this->setFile((const QDir& )__qt_dir0, (const QString& )__qt_file1);

}

// QFileInfo::setFile(const QFile & file)
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_setFile_QFile
(void* __this_nativeId,
 void* file0)
{
    const QFile&  __qt_file0 = (const QFile& ) * (QFile *) file0;
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    __qt_this->setFile((const QFile& )__qt_file0);

}

// QFileInfo::setFile(const QString & file)
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_setFile_string
(void* __this_nativeId,
 DArray file0)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    __qt_this->setFile((const QString& )__qt_file0);

}

// QFileInfo::size() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QFileInfo_size_const
(void* __this_nativeId)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->size();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileInfo::suffix() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_suffix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->suffix();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileInfo::symLinkTarget() const
QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_symLinkTarget_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileInfo *__qt_this = (QFileInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->symLinkTarget();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_QTypeInfo_isComplex() { return (bool) QTypeInfo<QFileInfo>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_QTypeInfo_isStatic() { return (bool) QTypeInfo<QFileInfo>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_QTypeInfo_isLarge() { return (bool) QTypeInfo<QFileInfo>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_QTypeInfo_isPointer() { return (bool) QTypeInfo<QFileInfo>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QFileInfo_QTypeInfo_isDummy() { return (bool) QTypeInfo<QFileInfo>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QFileInfo_placed_copy(void* orig, void* place) {
    const QFileInfo&  __qt_orig = (const QFileInfo& ) *(QFileInfo *)orig;
    QFileInfo *result = new (place) QFileInfo (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QFileInfo_native_copy(void* orig) {
    const QFileInfo&  __qt_orig = (const QFileInfo& ) *(QFileInfo *)orig;
    QFileInfo *result = new QFileInfo (__qt_orig);
    return result;
}

