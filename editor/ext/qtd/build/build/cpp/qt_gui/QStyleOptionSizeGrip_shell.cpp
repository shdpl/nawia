#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionSizeGrip_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSizeGrip_delete(void* nativeId)
{
    delete (QStyleOptionSizeGrip_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSizeGrip_destroy(void* nativeId)
{
    call_destructor((QStyleOptionSizeGrip_QtDShell*)nativeId);
}

QStyleOptionSizeGrip_QtDShell::QStyleOptionSizeGrip_QtDShell()
    : QStyleOptionSizeGrip()
{
}

QStyleOptionSizeGrip_QtDShell::QStyleOptionSizeGrip_QtDShell(const QStyleOptionSizeGrip&  other0)
    : QStyleOptionSizeGrip(other0)
{
}

QStyleOptionSizeGrip_QtDShell::QStyleOptionSizeGrip_QtDShell(int  version0)
    : QStyleOptionSizeGrip(version0)
{
}

QStyleOptionSizeGrip_QtDShell::~QStyleOptionSizeGrip_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSizeGrip_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionSizeGrip::QStyleOptionSizeGrip()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSizeGrip_QStyleOptionSizeGrip
()
{
    QStyleOptionSizeGrip_QtDShell *__qt_this = new QStyleOptionSizeGrip_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionSizeGrip::QStyleOptionSizeGrip(const QStyleOptionSizeGrip & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSizeGrip_QStyleOptionSizeGrip_QStyleOptionSizeGrip
(void* other0)
{
    const QStyleOptionSizeGrip&  __qt_other0 = (const QStyleOptionSizeGrip& ) *(QStyleOptionSizeGrip *)other0;
    QStyleOptionSizeGrip_QtDShell *__qt_this = new QStyleOptionSizeGrip_QtDShell((const QStyleOptionSizeGrip& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionSizeGrip::QStyleOptionSizeGrip(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSizeGrip_QStyleOptionSizeGrip_int
(int version0)
{
    QStyleOptionSizeGrip_QtDShell *__qt_this = new QStyleOptionSizeGrip_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSizeGrip_corner
(void* __this_nativeId){
    QStyleOptionSizeGrip_QtDShell *__qt_object = (QStyleOptionSizeGrip_QtDShell *) __this_nativeId;
    Qt::Corner __tmp_corner = __qt_object->corner;
    int __d_return_value = __tmp_corner;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSizeGrip_setCorner_Corner
(void* __this_nativeId,
 int corner0){
    Qt::Corner __qt_corner0 = (Qt::Corner) corner0;
    QStyleOptionSizeGrip_QtDShell *__qt_object = (QStyleOptionSizeGrip_QtDShell *) __this_nativeId;
    __qt_object->corner = __qt_corner0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSizeGrip_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionSizeGrip>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSizeGrip_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionSizeGrip>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSizeGrip_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionSizeGrip>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSizeGrip_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionSizeGrip>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSizeGrip_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionSizeGrip>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSizeGrip_placed_copy(void* orig, void* place) {
    const QStyleOptionSizeGrip_QtDShell&  __qt_orig = (const QStyleOptionSizeGrip_QtDShell& ) *(QStyleOptionSizeGrip_QtDShell *)orig;
    QStyleOptionSizeGrip *result = new (place) QStyleOptionSizeGrip (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSizeGrip_native_copy(void* orig) {
    const QStyleOptionSizeGrip_QtDShell&  __qt_orig = (const QStyleOptionSizeGrip_QtDShell& ) *(QStyleOptionSizeGrip_QtDShell *)orig;
    QStyleOptionSizeGrip *result = new QStyleOptionSizeGrip (__qt_orig);
    return result;
}

