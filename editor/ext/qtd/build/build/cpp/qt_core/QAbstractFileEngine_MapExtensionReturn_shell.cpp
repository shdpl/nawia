#include <QVariant>

#include "QAbstractFileEngine_MapExtensionReturn_shell.h"
#include <iostream>
#include <qabstractfileengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_MapExtensionReturn_delete(void* nativeId)
{
    delete (QAbstractFileEngine_MapExtensionReturn_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_MapExtensionReturn_destroy(void* nativeId)
{
    call_destructor((QAbstractFileEngine_MapExtensionReturn_QtDShell*)nativeId);
}

QAbstractFileEngine_MapExtensionReturn_QtDShell::QAbstractFileEngine_MapExtensionReturn_QtDShell()
    : QAbstractFileEngine::MapExtensionReturn()
{
}

QAbstractFileEngine_MapExtensionReturn_QtDShell::~QAbstractFileEngine_MapExtensionReturn_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_MapExtensionReturn_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QAbstractFileEngine_MapExtensionReturn::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractFileEngine_MapExtensionReturn_QAbstractFileEngine_MapExtensionReturn
(void *d_ptr)
{
    QAbstractFileEngine_MapExtensionReturn_QtDShell *__qt_this = new QAbstractFileEngine_MapExtensionReturn_QtDShell();
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT unsigned char* qtd_QAbstractFileEngine_MapExtensionReturn_address_private
(void* __this_nativeId){
    QAbstractFileEngine_MapExtensionReturn_QtDShell *__qt_object = (QAbstractFileEngine_MapExtensionReturn_QtDShell *) __this_nativeId;
    unsigned char* __tmp_address_private = __qt_object->address;
    unsigned char* __d_return_value = (unsigned char*) __tmp_address_private;// qtjambi_from_cpointer
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngine_MapExtensionReturn_address_private_nativepointerubyte
(void* __this_nativeId,
 unsigned char* address0){
    unsigned char*  __qt_address0 = (unsigned char* ) address0;
    QAbstractFileEngine_MapExtensionReturn_QtDShell *__qt_object = (QAbstractFileEngine_MapExtensionReturn_QtDShell *) __this_nativeId;
    __qt_object->address = __qt_address0;
}



