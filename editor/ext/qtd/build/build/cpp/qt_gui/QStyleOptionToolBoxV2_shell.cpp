#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionToolBoxV2_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBoxV2_delete(void* nativeId)
{
    delete (QStyleOptionToolBoxV2_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBoxV2_destroy(void* nativeId)
{
    call_destructor((QStyleOptionToolBoxV2_QtDShell*)nativeId);
}

QStyleOptionToolBoxV2_QtDShell::QStyleOptionToolBoxV2_QtDShell()
    : QStyleOptionToolBoxV2()
{
}

QStyleOptionToolBoxV2_QtDShell::QStyleOptionToolBoxV2_QtDShell(const QStyleOptionToolBox&  other0)
    : QStyleOptionToolBoxV2(other0)
{
}

QStyleOptionToolBoxV2_QtDShell::QStyleOptionToolBoxV2_QtDShell(const QStyleOptionToolBoxV2&  other0)
    : QStyleOptionToolBoxV2(other0)
{
}

QStyleOptionToolBoxV2_QtDShell::QStyleOptionToolBoxV2_QtDShell(int  version0)
    : QStyleOptionToolBoxV2(version0)
{
}

QStyleOptionToolBoxV2_QtDShell::~QStyleOptionToolBoxV2_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBoxV2_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionToolBoxV2::QStyleOptionToolBoxV2()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2
()
{
    QStyleOptionToolBoxV2_QtDShell *__qt_this = new QStyleOptionToolBoxV2_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionToolBoxV2::QStyleOptionToolBoxV2(const QStyleOptionToolBox & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2_QStyleOptionToolBox
(void* other0)
{
    const QStyleOptionToolBox&  __qt_other0 = (const QStyleOptionToolBox& ) *(QStyleOptionToolBox *)other0;
    QStyleOptionToolBoxV2_QtDShell *__qt_this = new QStyleOptionToolBoxV2_QtDShell((const QStyleOptionToolBox& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionToolBoxV2::QStyleOptionToolBoxV2(const QStyleOptionToolBoxV2 & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2
(void* other0)
{
    const QStyleOptionToolBoxV2&  __qt_other0 = (const QStyleOptionToolBoxV2& ) *(QStyleOptionToolBoxV2 *)other0;
    QStyleOptionToolBoxV2_QtDShell *__qt_this = new QStyleOptionToolBoxV2_QtDShell((const QStyleOptionToolBoxV2& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionToolBoxV2::QStyleOptionToolBoxV2(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2_int
(int version0)
{
    QStyleOptionToolBoxV2_QtDShell *__qt_this = new QStyleOptionToolBoxV2_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolBoxV2_position
(void* __this_nativeId){
    QStyleOptionToolBoxV2_QtDShell *__qt_object = (QStyleOptionToolBoxV2_QtDShell *) __this_nativeId;
    QStyleOptionToolBoxV2::TabPosition __tmp_position = __qt_object->position;
    int __d_return_value = __tmp_position;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBoxV2_setPosition_TabPosition
(void* __this_nativeId,
 int position0){
    QStyleOptionToolBoxV2::TabPosition __qt_position0 = (QStyleOptionToolBoxV2::TabPosition) position0;
    QStyleOptionToolBoxV2_QtDShell *__qt_object = (QStyleOptionToolBoxV2_QtDShell *) __this_nativeId;
    __qt_object->position = __qt_position0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolBoxV2_selectedPosition
(void* __this_nativeId){
    QStyleOptionToolBoxV2_QtDShell *__qt_object = (QStyleOptionToolBoxV2_QtDShell *) __this_nativeId;
    QStyleOptionToolBoxV2::SelectedPosition __tmp_selectedPosition = __qt_object->selectedPosition;
    int __d_return_value = __tmp_selectedPosition;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBoxV2_setSelectedPosition_SelectedPosition
(void* __this_nativeId,
 int selectedPosition0){
    QStyleOptionToolBoxV2::SelectedPosition __qt_selectedPosition0 = (QStyleOptionToolBoxV2::SelectedPosition) selectedPosition0;
    QStyleOptionToolBoxV2_QtDShell *__qt_object = (QStyleOptionToolBoxV2_QtDShell *) __this_nativeId;
    __qt_object->selectedPosition = __qt_selectedPosition0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBoxV2_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionToolBoxV2>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBoxV2_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionToolBoxV2>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBoxV2_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionToolBoxV2>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBoxV2_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionToolBoxV2>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBoxV2_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionToolBoxV2>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBoxV2_placed_copy(void* orig, void* place) {
    const QStyleOptionToolBoxV2_QtDShell&  __qt_orig = (const QStyleOptionToolBoxV2_QtDShell& ) *(QStyleOptionToolBoxV2_QtDShell *)orig;
    QStyleOptionToolBoxV2 *result = new (place) QStyleOptionToolBoxV2 (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBoxV2_native_copy(void* orig) {
    const QStyleOptionToolBoxV2_QtDShell&  __qt_orig = (const QStyleOptionToolBoxV2_QtDShell& ) *(QStyleOptionToolBoxV2_QtDShell *)orig;
    QStyleOptionToolBoxV2 *result = new QStyleOptionToolBoxV2 (__qt_orig);
    return result;
}

