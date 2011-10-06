#include <QVariant>

#include "QStyleHintReturnMask_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturnMask_delete(void* nativeId)
{
    delete (QStyleHintReturnMask_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturnMask_destroy(void* nativeId)
{
    call_destructor((QStyleHintReturnMask_QtDShell*)nativeId);
}

QStyleHintReturnMask_QtDShell::QStyleHintReturnMask_QtDShell()
    : QStyleHintReturnMask()
{
}

QStyleHintReturnMask_QtDShell::~QStyleHintReturnMask_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturnMask_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleHintReturnMask::QStyleHintReturnMask()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleHintReturnMask_QStyleHintReturnMask
(void *d_ptr)
{
    QStyleHintReturnMask_QtDShell *__qt_this = new QStyleHintReturnMask_QtDShell();
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void* qtd_QStyleHintReturnMask_region
(void* __this_nativeId){
    QStyleHintReturnMask_QtDShell *__qt_object = (QStyleHintReturnMask_QtDShell *) __this_nativeId;
    QRegion __tmp_region = __qt_object->region;
    void* __d_return_value = (void*) new QRegion(__tmp_region);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturnMask_setRegion_QRegion
(void* __this_nativeId,
 void* region0){
    QRegion  __qt_region0 = (QRegion ) *(QRegion *)region0;
    QStyleHintReturnMask_QtDShell *__qt_object = (QStyleHintReturnMask_QtDShell *) __this_nativeId;
    __qt_object->region = __qt_region0;
}



