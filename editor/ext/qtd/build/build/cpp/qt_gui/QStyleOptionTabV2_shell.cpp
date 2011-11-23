#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionTabV2_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabV2_delete(void* nativeId)
{
    delete (QStyleOptionTabV2_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabV2_destroy(void* nativeId)
{
    call_destructor((QStyleOptionTabV2_QtDShell*)nativeId);
}

QStyleOptionTabV2_QtDShell::QStyleOptionTabV2_QtDShell()
    : QStyleOptionTabV2()
{
}

QStyleOptionTabV2_QtDShell::QStyleOptionTabV2_QtDShell(const QStyleOptionTab&  other0)
    : QStyleOptionTabV2(other0)
{
}

QStyleOptionTabV2_QtDShell::QStyleOptionTabV2_QtDShell(const QStyleOptionTabV2&  other0)
    : QStyleOptionTabV2(other0)
{
}

QStyleOptionTabV2_QtDShell::QStyleOptionTabV2_QtDShell(int  version0)
    : QStyleOptionTabV2(version0)
{
}

QStyleOptionTabV2_QtDShell::~QStyleOptionTabV2_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabV2_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionTabV2::QStyleOptionTabV2()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabV2_QStyleOptionTabV2
()
{
    QStyleOptionTabV2_QtDShell *__qt_this = new QStyleOptionTabV2_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionTabV2::QStyleOptionTabV2(const QStyleOptionTab & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabV2_QStyleOptionTabV2_QStyleOptionTab
(void* other0)
{
    const QStyleOptionTab&  __qt_other0 = (const QStyleOptionTab& ) *(QStyleOptionTab *)other0;
    QStyleOptionTabV2_QtDShell *__qt_this = new QStyleOptionTabV2_QtDShell((const QStyleOptionTab& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionTabV2::QStyleOptionTabV2(const QStyleOptionTabV2 & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabV2_QStyleOptionTabV2_QStyleOptionTabV2
(void* other0)
{
    const QStyleOptionTabV2&  __qt_other0 = (const QStyleOptionTabV2& ) *(QStyleOptionTabV2 *)other0;
    QStyleOptionTabV2_QtDShell *__qt_this = new QStyleOptionTabV2_QtDShell((const QStyleOptionTabV2& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionTabV2::QStyleOptionTabV2(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabV2_QStyleOptionTabV2_int
(int version0)
{
    QStyleOptionTabV2_QtDShell *__qt_this = new QStyleOptionTabV2_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabV2_iconSize
(void* __this_nativeId,
 QSize * __d_return_value){
    QStyleOptionTabV2_QtDShell *__qt_object = (QStyleOptionTabV2_QtDShell *) __this_nativeId;
    QSize __tmp_iconSize = __qt_object->iconSize;
    *__d_return_value = __tmp_iconSize;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabV2_setIconSize_QSize
(void* __this_nativeId,
 QSize iconSize0){
    QStyleOptionTabV2_QtDShell *__qt_object = (QStyleOptionTabV2_QtDShell *) __this_nativeId;
    __qt_object->iconSize = iconSize0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabV2_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionTabV2>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabV2_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionTabV2>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabV2_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionTabV2>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabV2_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionTabV2>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabV2_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionTabV2>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabV2_placed_copy(void* orig, void* place) {
    const QStyleOptionTabV2_QtDShell&  __qt_orig = (const QStyleOptionTabV2_QtDShell& ) *(QStyleOptionTabV2_QtDShell *)orig;
    QStyleOptionTabV2 *result = new (place) QStyleOptionTabV2 (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabV2_native_copy(void* orig) {
    const QStyleOptionTabV2_QtDShell&  __qt_orig = (const QStyleOptionTabV2_QtDShell& ) *(QStyleOptionTabV2_QtDShell *)orig;
    QStyleOptionTabV2 *result = new QStyleOptionTabV2 (__qt_orig);
    return result;
}

