#include <QVariant>

#include "QIPv6Address_shell.h"
#include <iostream>
#include <qhostaddress.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QIPv6Address_delete(void* nativeId)
{
    delete (QIPv6Address_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QIPv6Address_destroy(void* nativeId)
{
    call_destructor((QIPv6Address_QtDShell*)nativeId);
}

QIPv6Address_QtDShell::QIPv6Address_QtDShell()
    : QIPv6Address()
{
}

QIPv6Address_QtDShell::~QIPv6Address_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QIPv6Address_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QIPv6Address::()
QTD_EXTERN QTD_EXPORT void* qtd_QIPv6Address_QIPv6Address
()
{
    QIPv6Address_QtDShell *__qt_this = new QIPv6Address_QtDShell();
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT unsigned char* qtd_QIPv6Address_c
(void* __this_nativeId){
    QIPv6Address_QtDShell *__qt_object = (QIPv6Address_QtDShell *) __this_nativeId;
    unsigned char *__tmp_c = __qt_object->c;
    unsigned char* __d_return_value = __tmp_c;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QIPv6Address_setC_ubyte_3
(void* __this_nativeId,
 unsigned char* c0){
    unsigned char  *__qt_c0 = (unsigned char *) c0;
    QIPv6Address_QtDShell *__qt_object = (QIPv6Address_QtDShell *) __this_nativeId;
    __qt_object->c[0] = __qt_c0[0];
    __qt_object->c[1] = __qt_c0[1];
    __qt_object->c[2] = __qt_c0[2];
    __qt_object->c[3] = __qt_c0[3];
    __qt_object->c[4] = __qt_c0[4];
    __qt_object->c[5] = __qt_c0[5];
    __qt_object->c[6] = __qt_c0[6];
    __qt_object->c[7] = __qt_c0[7];
    __qt_object->c[8] = __qt_c0[8];
    __qt_object->c[9] = __qt_c0[9];
    __qt_object->c[10] = __qt_c0[10];
    __qt_object->c[11] = __qt_c0[11];
    __qt_object->c[12] = __qt_c0[12];
    __qt_object->c[13] = __qt_c0[13];
    __qt_object->c[14] = __qt_c0[14];
    __qt_object->c[15] = __qt_c0[15];
}

QTD_EXTERN QTD_EXPORT bool qtd_QIPv6Address_QTypeInfo_isComplex() { return (bool) QTypeInfo<QIPv6Address>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QIPv6Address_QTypeInfo_isStatic() { return (bool) QTypeInfo<QIPv6Address>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QIPv6Address_QTypeInfo_isLarge() { return (bool) QTypeInfo<QIPv6Address>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QIPv6Address_QTypeInfo_isPointer() { return (bool) QTypeInfo<QIPv6Address>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QIPv6Address_QTypeInfo_isDummy() { return (bool) QTypeInfo<QIPv6Address>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QIPv6Address_placed_copy(void* orig, void* place) {
    const QIPv6Address_QtDShell&  __qt_orig = (const QIPv6Address_QtDShell& ) *(QIPv6Address_QtDShell *)orig;
    QIPv6Address *result = new (place) QIPv6Address (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QIPv6Address_native_copy(void* orig) {
    const QIPv6Address_QtDShell&  __qt_orig = (const QIPv6Address_QtDShell& ) *(QIPv6Address_QtDShell *)orig;
    QIPv6Address *result = new QIPv6Address (__qt_orig);
    return result;
}

