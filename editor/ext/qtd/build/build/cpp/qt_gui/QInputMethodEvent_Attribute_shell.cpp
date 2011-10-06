#include <QVariant>
#include <qvariant.h>

#include "QInputMethodEvent_Attribute_shell.h"
#include <iostream>
#include <QInputMethodEvent>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_Attribute_delete(void* nativeId)
{
    delete (QInputMethodEvent_Attribute_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_Attribute_destroy(void* nativeId)
{
    call_destructor((QInputMethodEvent_Attribute_QtDShell*)nativeId);
}

QInputMethodEvent_Attribute_QtDShell::QInputMethodEvent_Attribute_QtDShell(QInputMethodEvent::AttributeType  t0, int  s1, int  l2, QVariant  val3)
    : QInputMethodEvent::Attribute(t0, s1, l2, val3)
{
}

QInputMethodEvent_Attribute_QtDShell::~QInputMethodEvent_Attribute_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_Attribute_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QInputMethodEvent_Attribute::Attribute(QInputMethodEvent::AttributeType t, int s, int l, QVariant val)
QTD_EXTERN QTD_EXPORT void* qtd_QInputMethodEvent_Attribute_QInputMethodEvent_Attribute_AttributeType_int_int_QVariant
(int t0,
 int s1,
 int l2,
 QVariant* val3)
{
    QInputMethodEvent::AttributeType __qt_t0 = (QInputMethodEvent::AttributeType) t0;
    QVariant __qt_val3 = val3 == NULL ? QVariant() : QVariant(*val3);
    QInputMethodEvent_Attribute_QtDShell *__qt_this = new QInputMethodEvent_Attribute_QtDShell((QInputMethodEvent::AttributeType )__qt_t0, (int )s1, (int )l2, (QVariant )__qt_val3);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QInputMethodEvent_Attribute_length
(void* __this_nativeId){
    QInputMethodEvent_Attribute_QtDShell *__qt_object = (QInputMethodEvent_Attribute_QtDShell *) __this_nativeId;
    int __tmp_length = __qt_object->length;
    int __d_return_value = __tmp_length;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_Attribute_setLength_int
(void* __this_nativeId,
 int length0){
    QInputMethodEvent_Attribute_QtDShell *__qt_object = (QInputMethodEvent_Attribute_QtDShell *) __this_nativeId;
    __qt_object->length = length0;
}

QTD_EXTERN QTD_EXPORT int qtd_QInputMethodEvent_Attribute_type
(void* __this_nativeId){
    QInputMethodEvent_Attribute_QtDShell *__qt_object = (QInputMethodEvent_Attribute_QtDShell *) __this_nativeId;
    QInputMethodEvent::AttributeType __tmp_type = __qt_object->type;
    int __d_return_value = __tmp_type;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_Attribute_setType_AttributeType
(void* __this_nativeId,
 int type0){
    QInputMethodEvent::AttributeType __qt_type0 = (QInputMethodEvent::AttributeType) type0;
    QInputMethodEvent_Attribute_QtDShell *__qt_object = (QInputMethodEvent_Attribute_QtDShell *) __this_nativeId;
    __qt_object->type = __qt_type0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QInputMethodEvent_Attribute_value
(void* __this_nativeId){
    QInputMethodEvent_Attribute_QtDShell *__qt_object = (QInputMethodEvent_Attribute_QtDShell *) __this_nativeId;
    QVariant __tmp_value = __qt_object->value;
    QVariant *__d_return_value = new QVariant(__tmp_value);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_Attribute_setValue_QVariant
(void* __this_nativeId,
 QVariant* value0){
    QVariant __qt_value0 = value0 == NULL ? QVariant() : QVariant(*value0);
    QInputMethodEvent_Attribute_QtDShell *__qt_object = (QInputMethodEvent_Attribute_QtDShell *) __this_nativeId;
    __qt_object->value = __qt_value0;
}

QTD_EXTERN QTD_EXPORT int qtd_QInputMethodEvent_Attribute_start
(void* __this_nativeId){
    QInputMethodEvent_Attribute_QtDShell *__qt_object = (QInputMethodEvent_Attribute_QtDShell *) __this_nativeId;
    int __tmp_start = __qt_object->start;
    int __d_return_value = __tmp_start;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_Attribute_setStart_int
(void* __this_nativeId,
 int start0){
    QInputMethodEvent_Attribute_QtDShell *__qt_object = (QInputMethodEvent_Attribute_QtDShell *) __this_nativeId;
    __qt_object->start = start0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QInputMethodEvent_Attribute_QTypeInfo_isComplex() { return (bool) QTypeInfo<QInputMethodEvent::Attribute>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QInputMethodEvent_Attribute_QTypeInfo_isStatic() { return (bool) QTypeInfo<QInputMethodEvent::Attribute>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QInputMethodEvent_Attribute_QTypeInfo_isLarge() { return (bool) QTypeInfo<QInputMethodEvent::Attribute>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QInputMethodEvent_Attribute_QTypeInfo_isPointer() { return (bool) QTypeInfo<QInputMethodEvent::Attribute>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QInputMethodEvent_Attribute_QTypeInfo_isDummy() { return (bool) QTypeInfo<QInputMethodEvent::Attribute>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_Attribute_placed_copy(void* orig, void* place) {
    const QInputMethodEvent_Attribute_QtDShell&  __qt_orig = (const QInputMethodEvent_Attribute_QtDShell& ) *(QInputMethodEvent_Attribute_QtDShell *)orig;
    QInputMethodEvent::Attribute *result = new (place) QInputMethodEvent::Attribute (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QInputMethodEvent_Attribute_native_copy(void* orig) {
    const QInputMethodEvent_Attribute_QtDShell&  __qt_orig = (const QInputMethodEvent_Attribute_QtDShell& ) *(QInputMethodEvent_Attribute_QtDShell *)orig;
    QInputMethodEvent::Attribute *result = new QInputMethodEvent::Attribute (__qt_orig);
    return result;
}

