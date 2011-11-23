#include <QVariant>

#include "QStyleHintReturn_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturn_delete(void* nativeId)
{
    delete (QStyleHintReturn_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturn_destroy(void* nativeId)
{
    call_destructor((QStyleHintReturn_QtDShell*)nativeId);
}

QStyleHintReturn_QtDShell::QStyleHintReturn_QtDShell(int  version0, int  type1)
    : QStyleHintReturn(version0, type1)
{
}

QStyleHintReturn_QtDShell::~QStyleHintReturn_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturn_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleHintReturn::QStyleHintReturn(int version_, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleHintReturn_QStyleHintReturn_int_int
(void *d_ptr,
 int version0,
 int type1)
{
    QStyleHintReturn_QtDShell *__qt_this = new QStyleHintReturn_QtDShell((int )version0, (int )type1);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleHintReturn_version_
(void* __this_nativeId){
    QStyleHintReturn_QtDShell *__qt_object = (QStyleHintReturn_QtDShell *) __this_nativeId;
    int __tmp_version_ = __qt_object->version;
    int __d_return_value = __tmp_version_;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturn_version__int
(void* __this_nativeId,
 int version0){
    QStyleHintReturn_QtDShell *__qt_object = (QStyleHintReturn_QtDShell *) __this_nativeId;
    __qt_object->version = version0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleHintReturn_type
(void* __this_nativeId){
    QStyleHintReturn_QtDShell *__qt_object = (QStyleHintReturn_QtDShell *) __this_nativeId;
    int __tmp_type = __qt_object->type;
    int __d_return_value = __tmp_type;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturn_setType_int
(void* __this_nativeId,
 int type0){
    QStyleHintReturn_QtDShell *__qt_object = (QStyleHintReturn_QtDShell *) __this_nativeId;
    __qt_object->type = type0;
}



