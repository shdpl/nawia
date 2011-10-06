#include <QVariant>
#include <qabstractfileengine.h>
#include <qfileinfo.h>
#include <qstringlist.h>

#include "QAbstractFileEngineIterator_shell.h"
#include <iostream>
#include <qabstractfileengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineIterator_delete(void* nativeId)
{
    delete (QAbstractFileEngineIterator_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineIterator_destroy(void* nativeId)
{
    call_destructor((QAbstractFileEngineIterator_QtDShell*)nativeId);
}

QAbstractFileEngineIterator_QtDShell::QAbstractFileEngineIterator_QtDShell(void *d_ptr, QDir::Filters  filters0, const QStringList&  nameFilters1)
    : QAbstractFileEngineIterator(filters0, nameFilters1),
      QtdObjectLink(d_ptr)
{
}

QAbstractFileEngineIterator_QtDShell::~QAbstractFileEngineIterator_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractFileEngineIterator_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QAbstractFileEngineIterator*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void*, QAbstractFileEngineIterator_currentFileInfo_const_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngineIterator_currentFileInfo_const_dispatch)
QFileInfo  QAbstractFileEngineIterator_QtDShell::currentFileInfo() const
{
    QFileInfo *__qt_return_value = (QFileInfo*) qtd_QAbstractFileEngineIterator_currentFileInfo_const_dispatch(this->dId);
    return QFileInfo(*__qt_return_value);
}

QTD_FUNC_DECL(CORE, void, QAbstractFileEngineIterator_currentFileName_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(CORE, QAbstractFileEngineIterator_currentFileName_const_dispatch)
QString  QAbstractFileEngineIterator_QtDShell::currentFileName() const
{
    DArray ret_str;
    qtd_QAbstractFileEngineIterator_currentFileName_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(CORE, bool, QAbstractFileEngineIterator_hasNext_const_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractFileEngineIterator_hasNext_const_dispatch)
bool  QAbstractFileEngineIterator_QtDShell::hasNext() const
{
    return qtd_QAbstractFileEngineIterator_hasNext_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, void, QAbstractFileEngineIterator_next_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(CORE, QAbstractFileEngineIterator_next_dispatch)
QString  QAbstractFileEngineIterator_QtDShell::next()
{
    DArray ret_str;
    qtd_QAbstractFileEngineIterator_next_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineIterator_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractFileEngineIterator_currentFileInfo_const_dispatch = (qtd_QAbstractFileEngineIterator_currentFileInfo_const_dispatch_t) virts[0];
    qtd_QAbstractFileEngineIterator_currentFileName_const_dispatch = (qtd_QAbstractFileEngineIterator_currentFileName_const_dispatch_t) virts[1];
    qtd_QAbstractFileEngineIterator_hasNext_const_dispatch = (qtd_QAbstractFileEngineIterator_hasNext_const_dispatch_t) virts[2];
    qtd_QAbstractFileEngineIterator_next_dispatch = (qtd_QAbstractFileEngineIterator_next_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QFileInfo  QAbstractFileEngineIterator_QtDShell::__override_currentFileInfo(bool static_call) const
{
    if (static_call) {
        return QAbstractFileEngineIterator::currentFileInfo();
    } else {
        return currentFileInfo();
    }
}

QString  QAbstractFileEngineIterator_QtDShell::__override_currentFileName(bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return currentFileName();
    }
}

bool  QAbstractFileEngineIterator_QtDShell::__override_hasNext(bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return hasNext();
    }
}

QString  QAbstractFileEngineIterator_QtDShell::__override_next(bool static_call)
{
    if (static_call) {
        return QString();
    } else {
        return next();
    }
}

// ---externC---
// QAbstractFileEngineIterator::QAbstractFileEngineIterator(QFlags<QDir::Filter> filters, const QStringList & nameFilters)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractFileEngineIterator_QAbstractFileEngineIterator_Filters_QList
(void *d_ptr,
 int filters0,
 void* nameFilters1)
{
    QFlags<QDir::Filter> __qt_filters0 = (QFlags<QDir::Filter>) filters0;
QStringList __qt_nameFilters1 = (*(QStringList *)nameFilters1);
    QAbstractFileEngineIterator_QtDShell *__qt_this = new QAbstractFileEngineIterator_QtDShell(d_ptr, (QDir::Filters )__qt_filters0, (const QStringList& )__qt_nameFilters1);
    return (void *) __qt_this;

}

// QAbstractFileEngineIterator::currentFilePath() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineIterator_currentFilePath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractFileEngineIterator_QtDShell *__qt_this = (QAbstractFileEngineIterator_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->currentFilePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractFileEngineIterator::filters() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractFileEngineIterator_filters_const
(void* __this_nativeId)
{
    QAbstractFileEngineIterator_QtDShell *__qt_this = (QAbstractFileEngineIterator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->filters();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngineIterator::nameFilters() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineIterator_nameFilters_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractFileEngineIterator_QtDShell *__qt_this = (QAbstractFileEngineIterator_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->nameFilters();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAbstractFileEngineIterator::path() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineIterator_path_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractFileEngineIterator_QtDShell *__qt_this = (QAbstractFileEngineIterator_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->path();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractFileEngineIterator::currentFileInfo() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractFileEngineIterator_currentFileInfo_const
(void* __this_nativeId)
{
    QAbstractFileEngineIterator_QtDShell *__qt_this = (QAbstractFileEngineIterator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngineIterator*)__this_nativeId) != NULL;
    QFileInfo  __qt_return_value = __qt_this->__override_currentFileInfo(__do_static_call);

    void* __d_return_value = (void*) new QFileInfo(__qt_return_value);

    return __d_return_value;
}

// QAbstractFileEngineIterator::currentFileName() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineIterator_currentFileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractFileEngineIterator_QtDShell *__qt_this = (QAbstractFileEngineIterator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngineIterator*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_currentFileName(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractFileEngineIterator::hasNext() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractFileEngineIterator_hasNext_const
(void* __this_nativeId)
{
    QAbstractFileEngineIterator_QtDShell *__qt_this = (QAbstractFileEngineIterator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngineIterator*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasNext(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractFileEngineIterator::next()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineIterator_next
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractFileEngineIterator_QtDShell *__qt_this = (QAbstractFileEngineIterator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngineIterator*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_next(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


