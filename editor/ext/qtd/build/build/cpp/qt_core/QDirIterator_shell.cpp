#include <QVariant>
#include <qdir.h>
#include <qdiriterator.h>
#include <qfileinfo.h>
#include <qstringlist.h>

#include "QDirIterator_shell.h"
#include <iostream>
#include <qdiriterator.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QDirIterator_delete(void* nativeId)
{
    delete (QDirIterator_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDirIterator_destroy(void* nativeId)
{
    call_destructor((QDirIterator_QtDShell*)nativeId);
}

QDirIterator_QtDShell::QDirIterator_QtDShell(void *d_ptr, const QDir&  dir0, QDirIterator::IteratorFlags  flags1)
    : QDirIterator(dir0, flags1),
      QtdObjectLink(d_ptr)
{
}

QDirIterator_QtDShell::QDirIterator_QtDShell(void *d_ptr, const QString&  path0, QDir::Filters  filter1, QDirIterator::IteratorFlags  flags2)
    : QDirIterator(path0, filter1, flags2),
      QtdObjectLink(d_ptr)
{
}

QDirIterator_QtDShell::QDirIterator_QtDShell(void *d_ptr, const QString&  path0, QDirIterator::IteratorFlags  flags1)
    : QDirIterator(path0, flags1),
      QtdObjectLink(d_ptr)
{
}

QDirIterator_QtDShell::QDirIterator_QtDShell(void *d_ptr, const QString&  path0, const QStringList&  nameFilters1, QDir::Filters  filters2, QDirIterator::IteratorFlags  flags3)
    : QDirIterator(path0, nameFilters1, filters2, flags3),
      QtdObjectLink(d_ptr)
{
}

QDirIterator_QtDShell::~QDirIterator_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QDirIterator_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QDirIterator::QDirIterator(const QDir & dir, QFlags<QDirIterator::IteratorFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QDirIterator_QDirIterator_QDir_IteratorFlags
(void *d_ptr,
 void* dir0,
 int flags1)
{
    const QDir&  __qt_dir0 = (const QDir& ) *(QDir *)dir0;
    QFlags<QDirIterator::IteratorFlag> __qt_flags1 = (QFlags<QDirIterator::IteratorFlag>) flags1;
    QDirIterator_QtDShell *__qt_this = new QDirIterator_QtDShell(d_ptr, (const QDir& )__qt_dir0, (QDirIterator::IteratorFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QDirIterator::QDirIterator(const QString & path, QFlags<QDir::Filter> filter, QFlags<QDirIterator::IteratorFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QDirIterator_QDirIterator_string_Filters_IteratorFlags
(void *d_ptr,
 DArray path0,
 int filter1,
 int flags2)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QFlags<QDir::Filter> __qt_filter1 = (QFlags<QDir::Filter>) filter1;
    QFlags<QDirIterator::IteratorFlag> __qt_flags2 = (QFlags<QDirIterator::IteratorFlag>) flags2;
    QDirIterator_QtDShell *__qt_this = new QDirIterator_QtDShell(d_ptr, (const QString& )__qt_path0, (QDir::Filters )__qt_filter1, (QDirIterator::IteratorFlags )__qt_flags2);
    return (void *) __qt_this;

}

// QDirIterator::QDirIterator(const QString & path, QFlags<QDirIterator::IteratorFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QDirIterator_QDirIterator_string_IteratorFlags
(void *d_ptr,
 DArray path0,
 int flags1)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QFlags<QDirIterator::IteratorFlag> __qt_flags1 = (QFlags<QDirIterator::IteratorFlag>) flags1;
    QDirIterator_QtDShell *__qt_this = new QDirIterator_QtDShell(d_ptr, (const QString& )__qt_path0, (QDirIterator::IteratorFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QDirIterator::QDirIterator(const QString & path, const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDirIterator::IteratorFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QDirIterator_QDirIterator_string_QList_Filters_IteratorFlags
(void *d_ptr,
 DArray path0,
 void* nameFilters1,
 int filters2,
 int flags3)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
QStringList __qt_nameFilters1 = (*(QStringList *)nameFilters1);
    QFlags<QDir::Filter> __qt_filters2 = (QFlags<QDir::Filter>) filters2;
    QFlags<QDirIterator::IteratorFlag> __qt_flags3 = (QFlags<QDirIterator::IteratorFlag>) flags3;
    QDirIterator_QtDShell *__qt_this = new QDirIterator_QtDShell(d_ptr, (const QString& )__qt_path0, (const QStringList& )__qt_nameFilters1, (QDir::Filters )__qt_filters2, (QDirIterator::IteratorFlags )__qt_flags3);
    return (void *) __qt_this;

}

// QDirIterator::fileInfo() const
QTD_EXTERN QTD_EXPORT void* qtd_QDirIterator_fileInfo_const
(void* __this_nativeId)
{
    QDirIterator_QtDShell *__qt_this = (QDirIterator_QtDShell *) __this_nativeId;
    QFileInfo  __qt_return_value = __qt_this->fileInfo();

    void* __d_return_value = (void*) new QFileInfo(__qt_return_value);

    return __d_return_value;
}

// QDirIterator::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QDirIterator_fileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDirIterator_QtDShell *__qt_this = (QDirIterator_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDirIterator::filePath() const
QTD_EXTERN QTD_EXPORT void qtd_QDirIterator_filePath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDirIterator_QtDShell *__qt_this = (QDirIterator_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->filePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDirIterator::hasNext() const
QTD_EXTERN QTD_EXPORT bool qtd_QDirIterator_hasNext_const
(void* __this_nativeId)
{
    QDirIterator_QtDShell *__qt_this = (QDirIterator_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasNext();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirIterator::next()
QTD_EXTERN QTD_EXPORT void qtd_QDirIterator_next
(void* __this_nativeId,
 void* __d_return_value)
{
    QDirIterator_QtDShell *__qt_this = (QDirIterator_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->next();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDirIterator::path() const
QTD_EXTERN QTD_EXPORT void qtd_QDirIterator_path_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDirIterator_QtDShell *__qt_this = (QDirIterator_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->path();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


