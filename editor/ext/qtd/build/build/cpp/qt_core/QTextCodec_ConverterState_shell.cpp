#include <QTextCodec>
#include <QVariant>

#include "QTextCodec_ConverterState_shell.h"
#include <iostream>
#include <QTextCodec>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_ConverterState_delete(void* nativeId)
{
    delete (QTextCodec_ConverterState_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_ConverterState_destroy(void* nativeId)
{
    call_destructor((QTextCodec_ConverterState_QtDShell*)nativeId);
}

QTextCodec_ConverterState_QtDShell::QTextCodec_ConverterState_QtDShell(QTextCodec::ConversionFlags  f0)
    : QTextCodec::ConverterState(f0)
{
}

QTextCodec_ConverterState_QtDShell::~QTextCodec_ConverterState_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_ConverterState_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextCodec_ConverterState::ConverterState(QFlags<QTextCodec::ConversionFlag> f)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_ConverterState_QTextCodec_ConverterState_ConversionFlags
(void *d_ptr,
 int f0)
{
    QFlags<QTextCodec::ConversionFlag> __qt_f0 = (QFlags<QTextCodec::ConversionFlag>) f0;
    QTextCodec_ConverterState_QtDShell *__qt_this = new QTextCodec_ConverterState_QtDShell((QTextCodec::ConversionFlags )__qt_f0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QTextCodec_ConverterState_flags
(void* __this_nativeId){
    QTextCodec_ConverterState_QtDShell *__qt_object = (QTextCodec_ConverterState_QtDShell *) __this_nativeId;
    QTextCodec::ConversionFlags __tmp_flags = __qt_object->flags;
    int __d_return_value = __tmp_flags;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_ConverterState_setFlags_ConversionFlags
(void* __this_nativeId,
 int flags0){
    QFlags<QTextCodec::ConversionFlag> __qt_flags0 = (QFlags<QTextCodec::ConversionFlag>) flags0;
    QTextCodec_ConverterState_QtDShell *__qt_object = (QTextCodec_ConverterState_QtDShell *) __this_nativeId;
    __qt_object->flags = __qt_flags0;
}

QTD_EXTERN QTD_EXPORT int qtd_QTextCodec_ConverterState_remainingChars
(void* __this_nativeId){
    QTextCodec_ConverterState_QtDShell *__qt_object = (QTextCodec_ConverterState_QtDShell *) __this_nativeId;
    int __tmp_remainingChars = __qt_object->remainingChars;
    int __d_return_value = __tmp_remainingChars;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_ConverterState_setRemainingChars_int
(void* __this_nativeId,
 int remainingChars0){
    QTextCodec_ConverterState_QtDShell *__qt_object = (QTextCodec_ConverterState_QtDShell *) __this_nativeId;
    __qt_object->remainingChars = remainingChars0;
}

QTD_EXTERN QTD_EXPORT int qtd_QTextCodec_ConverterState_invalidChars
(void* __this_nativeId){
    QTextCodec_ConverterState_QtDShell *__qt_object = (QTextCodec_ConverterState_QtDShell *) __this_nativeId;
    int __tmp_invalidChars = __qt_object->invalidChars;
    int __d_return_value = __tmp_invalidChars;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_ConverterState_setInvalidChars_int
(void* __this_nativeId,
 int invalidChars0){
    QTextCodec_ConverterState_QtDShell *__qt_object = (QTextCodec_ConverterState_QtDShell *) __this_nativeId;
    __qt_object->invalidChars = invalidChars0;
}

QTD_EXTERN QTD_EXPORT uint* qtd_QTextCodec_ConverterState_state_data
(void* __this_nativeId){
    QTextCodec_ConverterState_QtDShell *__qt_object = (QTextCodec_ConverterState_QtDShell *) __this_nativeId;
    uint *__tmp_state_data = __qt_object->state_data;
    uint* __d_return_value = __tmp_state_data;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_ConverterState_setState_data_uint_3
(void* __this_nativeId,
 uint* state_data0){
    uint  *__qt_state_data0 = (uint *) state_data0;
    QTextCodec_ConverterState_QtDShell *__qt_object = (QTextCodec_ConverterState_QtDShell *) __this_nativeId;
    __qt_object->state_data[0] = __qt_state_data0[0];
    __qt_object->state_data[1] = __qt_state_data0[1];
    __qt_object->state_data[2] = __qt_state_data0[2];
}



