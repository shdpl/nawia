#include <QVariant>
#include <qdir.h>
#include <qfileinfo.h>
#include <qlist.h>
#include <qstringlist.h>

#include <iostream>
#include <qdir.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QDir_delete(void* nativeId)
{
    delete (QDir*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDir_destroy(void* nativeId)
{
    call_destructor((QDir*)nativeId);
}

// ---externC---
// QDir::QDir(const QDir & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QDir_QDir_QDir
(void* arg__1)
{
    const QDir&  __qt_arg__1 = (const QDir& ) *(QDir *)arg__1;
    QDir *__qt_this = new QDir((const QDir& )__qt_arg__1);
    return (void *) __qt_this;

}

// QDir::QDir(const QString & path)
QTD_EXTERN QTD_EXPORT void* qtd_QDir_QDir_string
(DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QDir *__qt_this = new QDir((const QString& )__qt_path0);
    return (void *) __qt_this;

}

// QDir::QDir(const QString & path, const QString & nameFilter, QFlags<QDir::SortFlag> sort, QFlags<QDir::Filter> filter)
QTD_EXTERN QTD_EXPORT void* qtd_QDir_QDir_string_string_SortFlags_Filters
(DArray path0,
 DArray nameFilter1,
 int sort2,
 int filter3)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QString __qt_nameFilter1 = QString::fromUtf8((const char *)nameFilter1.ptr, nameFilter1.length);
    QFlags<QDir::SortFlag> __qt_sort2 = (QFlags<QDir::SortFlag>) sort2;
    QFlags<QDir::Filter> __qt_filter3 = (QFlags<QDir::Filter>) filter3;
    QDir *__qt_this = new QDir((const QString& )__qt_path0, (const QString& )__qt_nameFilter1, (QDir::SortFlags )__qt_sort2, (QDir::Filters )__qt_filter3);
    return (void *) __qt_this;

}

// QDir::absoluteFilePath(const QString & fileName) const
QTD_EXTERN QTD_EXPORT void qtd_QDir_absoluteFilePath_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    QString  __qt_return_value = __qt_this->absoluteFilePath((const QString& )__qt_fileName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::absolutePath() const
QTD_EXTERN QTD_EXPORT void qtd_QDir_absolutePath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    QString  __qt_return_value = __qt_this->absolutePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::canonicalPath() const
QTD_EXTERN QTD_EXPORT void qtd_QDir_canonicalPath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    QString  __qt_return_value = __qt_this->canonicalPath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::cd(const QString & dirName)
QTD_EXTERN QTD_EXPORT bool qtd_QDir_cd_string
(void* __this_nativeId,
 DArray dirName0)
{
    QString __qt_dirName0 = QString::fromUtf8((const char *)dirName0.ptr, dirName0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->cd((const QString& )__qt_dirName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::cdUp()
QTD_EXTERN QTD_EXPORT bool qtd_QDir_cdUp
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->cdUp();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::count() const
QTD_EXTERN QTD_EXPORT uint qtd_QDir_count_const
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    uint  __qt_return_value = __qt_this->count();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::dirName() const
QTD_EXTERN QTD_EXPORT void qtd_QDir_dirName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    QString  __qt_return_value = __qt_this->dirName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::entryInfoList(QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) const
QTD_EXTERN QTD_EXPORT void qtd_QDir_entryInfoList_Filters_SortFlags_const
(void* __this_nativeId,
 void* __d_return_value,
 int filters0,
 int sort1)
{
    QFlags<QDir::Filter> __qt_filters0 = (QFlags<QDir::Filter>) filters0;
    QFlags<QDir::SortFlag> __qt_sort1 = (QFlags<QDir::SortFlag>) sort1;
    QDir *__qt_this = (QDir *) __this_nativeId;
    QList<QFileInfo >  __qt_return_value = __qt_this->entryInfoList((QDir::Filters )__qt_filters0, (QDir::SortFlags )__qt_sort1);

QList<QFileInfo > &__d_return_value_tmp = (*(QList<QFileInfo > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDir::entryInfoList(const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) const
QTD_EXTERN QTD_EXPORT void qtd_QDir_entryInfoList_QList_Filters_SortFlags_const
(void* __this_nativeId,
 void* __d_return_value,
 void* nameFilters0,
 int filters1,
 int sort2)
{
QStringList __qt_nameFilters0 = (*(QStringList *)nameFilters0);
    QFlags<QDir::Filter> __qt_filters1 = (QFlags<QDir::Filter>) filters1;
    QFlags<QDir::SortFlag> __qt_sort2 = (QFlags<QDir::SortFlag>) sort2;
    QDir *__qt_this = (QDir *) __this_nativeId;
    QList<QFileInfo >  __qt_return_value = __qt_this->entryInfoList((const QStringList& )__qt_nameFilters0, (QDir::Filters )__qt_filters1, (QDir::SortFlags )__qt_sort2);

QList<QFileInfo > &__d_return_value_tmp = (*(QList<QFileInfo > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDir::entryList(QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) const
QTD_EXTERN QTD_EXPORT void qtd_QDir_entryList_Filters_SortFlags_const
(void* __this_nativeId,
 void* __d_return_value,
 int filters0,
 int sort1)
{
    QFlags<QDir::Filter> __qt_filters0 = (QFlags<QDir::Filter>) filters0;
    QFlags<QDir::SortFlag> __qt_sort1 = (QFlags<QDir::SortFlag>) sort1;
    QDir *__qt_this = (QDir *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->entryList((QDir::Filters )__qt_filters0, (QDir::SortFlags )__qt_sort1);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDir::entryList(const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) const
QTD_EXTERN QTD_EXPORT void qtd_QDir_entryList_QList_Filters_SortFlags_const
(void* __this_nativeId,
 void* __d_return_value,
 void* nameFilters0,
 int filters1,
 int sort2)
{
QStringList __qt_nameFilters0 = (*(QStringList *)nameFilters0);
    QFlags<QDir::Filter> __qt_filters1 = (QFlags<QDir::Filter>) filters1;
    QFlags<QDir::SortFlag> __qt_sort2 = (QFlags<QDir::SortFlag>) sort2;
    QDir *__qt_this = (QDir *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->entryList((const QStringList& )__qt_nameFilters0, (QDir::Filters )__qt_filters1, (QDir::SortFlags )__qt_sort2);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDir::exists() const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_exists_const
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->exists();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::exists(const QString & name) const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_exists_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->exists((const QString& )__qt_name0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::filePath(const QString & fileName) const
QTD_EXTERN QTD_EXPORT void qtd_QDir_filePath_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    QString  __qt_return_value = __qt_this->filePath((const QString& )__qt_fileName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::filter() const
QTD_EXTERN QTD_EXPORT int qtd_QDir_filter_const
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    int  __qt_return_value = __qt_this->filter();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::isAbsolute() const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_isAbsolute_const
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAbsolute();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::isReadable() const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_isReadable_const
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::isRelative() const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_isRelative_const
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRelative();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::isRoot() const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_isRoot_const
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRoot();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::makeAbsolute()
QTD_EXTERN QTD_EXPORT bool qtd_QDir_makeAbsolute
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->makeAbsolute();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::mkdir(const QString & dirName) const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_mkdir_string_const
(void* __this_nativeId,
 DArray dirName0)
{
    QString __qt_dirName0 = QString::fromUtf8((const char *)dirName0.ptr, dirName0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->mkdir((const QString& )__qt_dirName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::mkpath(const QString & dirPath) const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_mkpath_string_const
(void* __this_nativeId,
 DArray dirPath0)
{
    QString __qt_dirPath0 = QString::fromUtf8((const char *)dirPath0.ptr, dirPath0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->mkpath((const QString& )__qt_dirPath0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::nameFilters() const
QTD_EXTERN QTD_EXPORT void qtd_QDir_nameFilters_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->nameFilters();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDir::operator==(const QDir & dir) const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_operator_equal_QDir_const
(void* __this_nativeId,
 void* dir0)
{
    const QDir&  __qt_dir0 = (const QDir& ) *(QDir *)dir0;
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QDir& )__qt_dir0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::operator[](int arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QDir_operator_subscript_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int arg__1)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    QString  __qt_return_value = __qt_this->operator[]((int )arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::path() const
QTD_EXTERN QTD_EXPORT void qtd_QDir_path_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    QString  __qt_return_value = __qt_this->path();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::refresh() const
QTD_EXTERN QTD_EXPORT void qtd_QDir_refresh_const
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    __qt_this->refresh();

}

// QDir::relativeFilePath(const QString & fileName) const
QTD_EXTERN QTD_EXPORT void qtd_QDir_relativeFilePath_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    QString  __qt_return_value = __qt_this->relativeFilePath((const QString& )__qt_fileName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::remove(const QString & fileName)
QTD_EXTERN QTD_EXPORT bool qtd_QDir_remove_string
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->remove((const QString& )__qt_fileName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::rename(const QString & oldName, const QString & newName)
QTD_EXTERN QTD_EXPORT bool qtd_QDir_rename_string_string
(void* __this_nativeId,
 DArray oldName0,
 DArray newName1)
{
    QString __qt_oldName0 = QString::fromUtf8((const char *)oldName0.ptr, oldName0.length);
    QString __qt_newName1 = QString::fromUtf8((const char *)newName1.ptr, newName1.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rename((const QString& )__qt_oldName0, (const QString& )__qt_newName1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::rmdir(const QString & dirName) const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_rmdir_string_const
(void* __this_nativeId,
 DArray dirName0)
{
    QString __qt_dirName0 = QString::fromUtf8((const char *)dirName0.ptr, dirName0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rmdir((const QString& )__qt_dirName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::rmpath(const QString & dirPath) const
QTD_EXTERN QTD_EXPORT bool qtd_QDir_rmpath_string_const
(void* __this_nativeId,
 DArray dirPath0)
{
    QString __qt_dirPath0 = QString::fromUtf8((const char *)dirPath0.ptr, dirPath0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rmpath((const QString& )__qt_dirPath0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::setFilter(QFlags<QDir::Filter> filter)
QTD_EXTERN QTD_EXPORT void qtd_QDir_setFilter_Filters
(void* __this_nativeId,
 int filter0)
{
    QFlags<QDir::Filter> __qt_filter0 = (QFlags<QDir::Filter>) filter0;
    QDir *__qt_this = (QDir *) __this_nativeId;
    __qt_this->setFilter((QDir::Filters )__qt_filter0);

}

// QDir::setNameFilters(const QStringList & nameFilters)
QTD_EXTERN QTD_EXPORT void qtd_QDir_setNameFilters_QList
(void* __this_nativeId,
 void* nameFilters0)
{
QStringList __qt_nameFilters0 = (*(QStringList *)nameFilters0);
    QDir *__qt_this = (QDir *) __this_nativeId;
    __qt_this->setNameFilters((const QStringList& )__qt_nameFilters0);

}

// QDir::setPath(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QDir_setPath_string
(void* __this_nativeId,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QDir *__qt_this = (QDir *) __this_nativeId;
    __qt_this->setPath((const QString& )__qt_path0);

}

// QDir::setSorting(QFlags<QDir::SortFlag> sort)
QTD_EXTERN QTD_EXPORT void qtd_QDir_setSorting_SortFlags
(void* __this_nativeId,
 int sort0)
{
    QFlags<QDir::SortFlag> __qt_sort0 = (QFlags<QDir::SortFlag>) sort0;
    QDir *__qt_this = (QDir *) __this_nativeId;
    __qt_this->setSorting((QDir::SortFlags )__qt_sort0);

}

// QDir::sorting() const
QTD_EXTERN QTD_EXPORT int qtd_QDir_sorting_const
(void* __this_nativeId)
{
    QDir *__qt_this = (QDir *) __this_nativeId;
    int  __qt_return_value = __qt_this->sorting();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::addSearchPath(const QString & prefix, const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QDir_addSearchPath_string_string
(DArray prefix0,
 DArray path1)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QString __qt_path1 = QString::fromUtf8((const char *)path1.ptr, path1.length);
    QDir::addSearchPath((const QString& )__qt_prefix0, (const QString& )__qt_path1);

}

// QDir::cleanPath(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QDir_cleanPath_string
(void* __d_return_value,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QString  __qt_return_value = QDir::cleanPath((const QString& )__qt_path0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::convertSeparators(const QString & pathName)
QTD_EXTERN QTD_EXPORT void qtd_QDir_convertSeparators_string
(void* __d_return_value,
 DArray pathName0)
{
    QString __qt_pathName0 = QString::fromUtf8((const char *)pathName0.ptr, pathName0.length);
    QString  __qt_return_value = QDir::convertSeparators((const QString& )__qt_pathName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::current()
QTD_EXTERN QTD_EXPORT void* qtd_QDir_current
()
{
    QDir  __qt_return_value = QDir::current();

    void* __d_return_value = (void*) new QDir(__qt_return_value);

    return __d_return_value;
}

// QDir::currentPath()
QTD_EXTERN QTD_EXPORT void qtd_QDir_currentPath
(void* __d_return_value)
{
    QString  __qt_return_value = QDir::currentPath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::drives()
QTD_EXTERN QTD_EXPORT void qtd_QDir_drives
(void* __d_return_value)
{
    QList<QFileInfo >  __qt_return_value = QDir::drives();

QList<QFileInfo > &__d_return_value_tmp = (*(QList<QFileInfo > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDir::fromNativeSeparators(const QString & pathName)
QTD_EXTERN QTD_EXPORT void qtd_QDir_fromNativeSeparators_string
(void* __d_return_value,
 DArray pathName0)
{
    QString __qt_pathName0 = QString::fromUtf8((const char *)pathName0.ptr, pathName0.length);
    QString  __qt_return_value = QDir::fromNativeSeparators((const QString& )__qt_pathName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::home()
QTD_EXTERN QTD_EXPORT void* qtd_QDir_home
()
{
    QDir  __qt_return_value = QDir::home();

    void* __d_return_value = (void*) new QDir(__qt_return_value);

    return __d_return_value;
}

// QDir::homePath()
QTD_EXTERN QTD_EXPORT void qtd_QDir_homePath
(void* __d_return_value)
{
    QString  __qt_return_value = QDir::homePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::isAbsolutePath(const QString & path)
QTD_EXTERN QTD_EXPORT bool qtd_QDir_isAbsolutePath_string
(DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    bool  __qt_return_value = QDir::isAbsolutePath((const QString& )__qt_path0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::isRelativePath(const QString & path)
QTD_EXTERN QTD_EXPORT bool qtd_QDir_isRelativePath_string
(DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    bool  __qt_return_value = QDir::isRelativePath((const QString& )__qt_path0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::match(const QString & filter, const QString & fileName)
QTD_EXTERN QTD_EXPORT bool qtd_QDir_match_string_string
(DArray filter0,
 DArray fileName1)
{
    QString __qt_filter0 = QString::fromUtf8((const char *)filter0.ptr, filter0.length);
    QString __qt_fileName1 = QString::fromUtf8((const char *)fileName1.ptr, fileName1.length);
    bool  __qt_return_value = QDir::match((const QString& )__qt_filter0, (const QString& )__qt_fileName1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::match(const QStringList & filters, const QString & fileName)
QTD_EXTERN QTD_EXPORT bool qtd_QDir_match_QList_string
(void* filters0,
 DArray fileName1)
{
QStringList __qt_filters0 = (*(QStringList *)filters0);
    QString __qt_fileName1 = QString::fromUtf8((const char *)fileName1.ptr, fileName1.length);
    bool  __qt_return_value = QDir::match((const QStringList& )__qt_filters0, (const QString& )__qt_fileName1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::nameFiltersFromString(const QString & nameFilter)
QTD_EXTERN QTD_EXPORT void qtd_QDir_nameFiltersFromString_string
(void* __d_return_value,
 DArray nameFilter0)
{
    QString __qt_nameFilter0 = QString::fromUtf8((const char *)nameFilter0.ptr, nameFilter0.length);
    QStringList  __qt_return_value = QDir::nameFiltersFromString((const QString& )__qt_nameFilter0);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDir::root()
QTD_EXTERN QTD_EXPORT void* qtd_QDir_root
()
{
    QDir  __qt_return_value = QDir::root();

    void* __d_return_value = (void*) new QDir(__qt_return_value);

    return __d_return_value;
}

// QDir::rootPath()
QTD_EXTERN QTD_EXPORT void qtd_QDir_rootPath
(void* __d_return_value)
{
    QString  __qt_return_value = QDir::rootPath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::searchPaths(const QString & prefix)
QTD_EXTERN QTD_EXPORT void qtd_QDir_searchPaths_string
(void* __d_return_value,
 DArray prefix0)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QStringList  __qt_return_value = QDir::searchPaths((const QString& )__qt_prefix0);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDir::separator()
// QDir::setCurrent(const QString & path)
QTD_EXTERN QTD_EXPORT bool qtd_QDir_setCurrent_string
(DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    bool  __qt_return_value = QDir::setCurrent((const QString& )__qt_path0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDir::setSearchPaths(const QString & prefix, const QStringList & searchPaths)
QTD_EXTERN QTD_EXPORT void qtd_QDir_setSearchPaths_string_QList
(DArray prefix0,
 void* searchPaths1)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
QStringList __qt_searchPaths1 = (*(QStringList *)searchPaths1);
    QDir::setSearchPaths((const QString& )__qt_prefix0, (const QStringList& )__qt_searchPaths1);

}

// QDir::temp()
QTD_EXTERN QTD_EXPORT void* qtd_QDir_temp
()
{
    QDir  __qt_return_value = QDir::temp();

    void* __d_return_value = (void*) new QDir(__qt_return_value);

    return __d_return_value;
}

// QDir::tempPath()
QTD_EXTERN QTD_EXPORT void qtd_QDir_tempPath
(void* __d_return_value)
{
    QString  __qt_return_value = QDir::tempPath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDir::toNativeSeparators(const QString & pathName)
QTD_EXTERN QTD_EXPORT void qtd_QDir_toNativeSeparators_string
(void* __d_return_value,
 DArray pathName0)
{
    QString __qt_pathName0 = QString::fromUtf8((const char *)pathName0.ptr, pathName0.length);
    QString  __qt_return_value = QDir::toNativeSeparators((const QString& )__qt_pathName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDir_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDir>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDir_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDir>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDir_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDir>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDir_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDir>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDir_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDir>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDir_placed_copy(void* orig, void* place) {
    const QDir&  __qt_orig = (const QDir& ) *(QDir *)orig;
    QDir *result = new (place) QDir (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDir_native_copy(void* orig) {
    const QDir&  __qt_orig = (const QDir& ) *(QDir *)orig;
    QDir *result = new QDir (__qt_orig);
    return result;
}

