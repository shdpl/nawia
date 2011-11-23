#include <QVariant>

#include "QAbstractFileEngine_MapExtensionOption_shell.h"
#include <iostream>
#include <qabstractfileengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_MapExtensionOption_delete(void* nativeId)
{
    delete (QAbstractFileEngine_MapExtensionOption_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_MapExtensionOption_destroy(void* nativeId)
{
    call_destructor((QAbstractFileEngine_MapExtensionOption_QtDShell*)nativeId);
}

QAbstractFileEngine_MapExtensionOption_QtDShell::QAbstractFileEngine_MapExtensionOption_QtDShell()
    : QAbstractFileEngine::MapExtensionOption()
{
}

QAbstractFileEngine_MapExtensionOption_QtDShell::~QAbstractFileEngine_MapExtensionOption_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_MapExtensionOption_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QAbstractFileEngine_MapExtensionOption::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractFileEngine_MapExtensionOption_QAbstractFileEngine_MapExtensionOption
(void *d_ptr)
{
    QAbstractFileEngine_MapExtensionOption_QtDShell *__qt_this = new QAbstractFileEngine_MapExtensionOption_QtDShell();
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QAbstractFileEngine_MapExtensionOption_flags
(void* __this_nativeId){
    QAbstractFileEngine_MapExtensionOption_QtDShell *__qt_object = (QAbstractFileEngine_MapExtensionOption_QtDShell *) __this_nativeId;
    QFile::MemoryMapFlags __tmp_flags = __qt_object->flags;
    int __d_return_value = __tmp_flags;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_MapExtensionOption_setFlags_MemoryMapFlags
(void* __this_nativeId,
 int flags0){
    QFile::MemoryMapFlags __qt_flags0 = (QFile::MemoryMapFlags) flags0;
    QAbstractFileEngine_MapExtensionOption_QtDShell *__qt_object = (QAbstractFileEngine_MapExtensionOption_QtDShell *) __this_nativeId;
    __qt_object->flags = __qt_flags0;
}

QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractFileEngine_MapExtensionOption_offset
(void* __this_nativeId){
    QAbstractFileEngine_MapExtensionOption_QtDShell *__qt_object = (QAbstractFileEngine_MapExtensionOption_QtDShell *) __this_nativeId;
    qint64 __tmp_offset = __qt_object->offset;
    qint64 __d_return_value = __tmp_offset;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_MapExtensionOption_setOffset_long
(void* __this_nativeId,
 qint64 offset0){
    QAbstractFileEngine_MapExtensionOption_QtDShell *__qt_object = (QAbstractFileEngine_MapExtensionOption_QtDShell *) __this_nativeId;
    __qt_object->offset = offset0;
}

QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractFileEngine_MapExtensionOption_size
(void* __this_nativeId){
    QAbstractFileEngine_MapExtensionOption_QtDShell *__qt_object = (QAbstractFileEngine_MapExtensionOption_QtDShell *) __this_nativeId;
    qint64 __tmp_size = __qt_object->size;
    qint64 __d_return_value = __tmp_size;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_MapExtensionOption_setSize_long
(void* __this_nativeId,
 qint64 size0){
    QAbstractFileEngine_MapExtensionOption_QtDShell *__qt_object = (QAbstractFileEngine_MapExtensionOption_QtDShell *) __this_nativeId;
    __qt_object->size = size0;
}



