#include <QVariant>

#include "QStyleHintReturnVariant_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturnVariant_delete(void* nativeId)
{
    delete (QStyleHintReturnVariant_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturnVariant_destroy(void* nativeId)
{
    call_destructor((QStyleHintReturnVariant_QtDShell*)nativeId);
}

QStyleHintReturnVariant_QtDShell::QStyleHintReturnVariant_QtDShell()
    : QStyleHintReturnVariant()
{
}

QStyleHintReturnVariant_QtDShell::~QStyleHintReturnVariant_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturnVariant_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleHintReturnVariant::QStyleHintReturnVariant()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleHintReturnVariant_QStyleHintReturnVariant
(void *d_ptr)
{
    QStyleHintReturnVariant_QtDShell *__qt_this = new QStyleHintReturnVariant_QtDShell();
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void* qtd_QStyleHintReturnVariant_variant
(void* __this_nativeId){
    QStyleHintReturnVariant_QtDShell *__qt_object = (QStyleHintReturnVariant_QtDShell *) __this_nativeId;
    QVariant __tmp_variant = __qt_object->variant;
    QVariant *__d_return_value = new QVariant(__tmp_variant);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleHintReturnVariant_setVariant_QVariant
(void* __this_nativeId,
 QVariant* variant0){
    QVariant __qt_variant0 = variant0 == NULL ? QVariant() : QVariant(*variant0);
    QStyleHintReturnVariant_QtDShell *__qt_object = (QStyleHintReturnVariant_QtDShell *) __this_nativeId;
    __qt_object->variant = __qt_variant0;
}



