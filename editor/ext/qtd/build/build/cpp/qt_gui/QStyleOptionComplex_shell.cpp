#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionComplex_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComplex_delete(void* nativeId)
{
    delete (QStyleOptionComplex_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComplex_destroy(void* nativeId)
{
    call_destructor((QStyleOptionComplex_QtDShell*)nativeId);
}

QStyleOptionComplex_QtDShell::QStyleOptionComplex_QtDShell(const QStyleOptionComplex&  other0)
    : QStyleOptionComplex(other0)
{
}

QStyleOptionComplex_QtDShell::QStyleOptionComplex_QtDShell(int  version0, int  type1)
    : QStyleOptionComplex(version0, type1)
{
}

QStyleOptionComplex_QtDShell::~QStyleOptionComplex_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComplex_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionComplex::QStyleOptionComplex(const QStyleOptionComplex & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionComplex_QStyleOptionComplex_QStyleOptionComplex
(void* other0)
{
    const QStyleOptionComplex&  __qt_other0 = (const QStyleOptionComplex& ) *(QStyleOptionComplex *)other0;
    QStyleOptionComplex_QtDShell *__qt_this = new QStyleOptionComplex_QtDShell((const QStyleOptionComplex& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionComplex::QStyleOptionComplex(int version_, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionComplex_QStyleOptionComplex_int_int
(int version0,
 int type1)
{
    QStyleOptionComplex_QtDShell *__qt_this = new QStyleOptionComplex_QtDShell((int )version0, (int )type1);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionComplex_subControls
(void* __this_nativeId){
    QStyleOptionComplex_QtDShell *__qt_object = (QStyleOptionComplex_QtDShell *) __this_nativeId;
    QStyle::SubControls __tmp_subControls = __qt_object->subControls;
    int __d_return_value = __tmp_subControls;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComplex_setSubControls_int
(void* __this_nativeId,
 int subControls0){
    QFlags<QStyle::SubControl> __qt_subControls0 = (QFlags<QStyle::SubControl>) subControls0;
    QStyleOptionComplex_QtDShell *__qt_object = (QStyleOptionComplex_QtDShell *) __this_nativeId;
    __qt_object->subControls = __qt_subControls0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionComplex_activeSubControls
(void* __this_nativeId){
    QStyleOptionComplex_QtDShell *__qt_object = (QStyleOptionComplex_QtDShell *) __this_nativeId;
    QStyle::SubControls __tmp_activeSubControls = __qt_object->activeSubControls;
    int __d_return_value = __tmp_activeSubControls;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComplex_setActiveSubControls_int
(void* __this_nativeId,
 int activeSubControls0){
    QFlags<QStyle::SubControl> __qt_activeSubControls0 = (QFlags<QStyle::SubControl>) activeSubControls0;
    QStyleOptionComplex_QtDShell *__qt_object = (QStyleOptionComplex_QtDShell *) __this_nativeId;
    __qt_object->activeSubControls = __qt_activeSubControls0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComplex_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionComplex>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComplex_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionComplex>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComplex_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionComplex>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComplex_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionComplex>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComplex_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionComplex>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComplex_placed_copy(void* orig, void* place) {
    const QStyleOptionComplex_QtDShell&  __qt_orig = (const QStyleOptionComplex_QtDShell& ) *(QStyleOptionComplex_QtDShell *)orig;
    QStyleOptionComplex *result = new (place) QStyleOptionComplex (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionComplex_native_copy(void* orig) {
    const QStyleOptionComplex_QtDShell&  __qt_orig = (const QStyleOptionComplex_QtDShell& ) *(QStyleOptionComplex_QtDShell *)orig;
    QStyleOptionComplex *result = new QStyleOptionComplex (__qt_orig);
    return result;
}

