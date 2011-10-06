#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionSpinBox_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSpinBox_delete(void* nativeId)
{
    delete (QStyleOptionSpinBox_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSpinBox_destroy(void* nativeId)
{
    call_destructor((QStyleOptionSpinBox_QtDShell*)nativeId);
}

QStyleOptionSpinBox_QtDShell::QStyleOptionSpinBox_QtDShell()
    : QStyleOptionSpinBox()
{
}

QStyleOptionSpinBox_QtDShell::QStyleOptionSpinBox_QtDShell(const QStyleOptionSpinBox&  other0)
    : QStyleOptionSpinBox(other0)
{
}

QStyleOptionSpinBox_QtDShell::QStyleOptionSpinBox_QtDShell(int  version0)
    : QStyleOptionSpinBox(version0)
{
}

QStyleOptionSpinBox_QtDShell::~QStyleOptionSpinBox_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSpinBox_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionSpinBox::QStyleOptionSpinBox()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSpinBox_QStyleOptionSpinBox
()
{
    QStyleOptionSpinBox_QtDShell *__qt_this = new QStyleOptionSpinBox_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionSpinBox::QStyleOptionSpinBox(const QStyleOptionSpinBox & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSpinBox_QStyleOptionSpinBox_QStyleOptionSpinBox
(void* other0)
{
    const QStyleOptionSpinBox&  __qt_other0 = (const QStyleOptionSpinBox& ) *(QStyleOptionSpinBox *)other0;
    QStyleOptionSpinBox_QtDShell *__qt_this = new QStyleOptionSpinBox_QtDShell((const QStyleOptionSpinBox& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionSpinBox::QStyleOptionSpinBox(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSpinBox_QStyleOptionSpinBox_int
(int version0)
{
    QStyleOptionSpinBox_QtDShell *__qt_this = new QStyleOptionSpinBox_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSpinBox_stepEnabled
(void* __this_nativeId){
    QStyleOptionSpinBox_QtDShell *__qt_object = (QStyleOptionSpinBox_QtDShell *) __this_nativeId;
    QAbstractSpinBox::StepEnabled __tmp_stepEnabled = __qt_object->stepEnabled;
    int __d_return_value = __tmp_stepEnabled;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSpinBox_setStepEnabled_StepEnabled
(void* __this_nativeId,
 int stepEnabled0){
    QFlags<QAbstractSpinBox::StepEnabledFlag> __qt_stepEnabled0 = (QFlags<QAbstractSpinBox::StepEnabledFlag>) stepEnabled0;
    QStyleOptionSpinBox_QtDShell *__qt_object = (QStyleOptionSpinBox_QtDShell *) __this_nativeId;
    __qt_object->stepEnabled = __qt_stepEnabled0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSpinBox_buttonSymbols
(void* __this_nativeId){
    QStyleOptionSpinBox_QtDShell *__qt_object = (QStyleOptionSpinBox_QtDShell *) __this_nativeId;
    QAbstractSpinBox::ButtonSymbols __tmp_buttonSymbols = __qt_object->buttonSymbols;
    int __d_return_value = __tmp_buttonSymbols;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSpinBox_setButtonSymbols_ButtonSymbols
(void* __this_nativeId,
 int buttonSymbols0){
    QAbstractSpinBox::ButtonSymbols __qt_buttonSymbols0 = (QAbstractSpinBox::ButtonSymbols) buttonSymbols0;
    QStyleOptionSpinBox_QtDShell *__qt_object = (QStyleOptionSpinBox_QtDShell *) __this_nativeId;
    __qt_object->buttonSymbols = __qt_buttonSymbols0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSpinBox_frame
(void* __this_nativeId){
    QStyleOptionSpinBox_QtDShell *__qt_object = (QStyleOptionSpinBox_QtDShell *) __this_nativeId;
    bool __tmp_frame = __qt_object->frame;
    bool __d_return_value = __tmp_frame;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSpinBox_setFrame_bool
(void* __this_nativeId,
 bool frame0){
    QStyleOptionSpinBox_QtDShell *__qt_object = (QStyleOptionSpinBox_QtDShell *) __this_nativeId;
    __qt_object->frame = frame0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSpinBox_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionSpinBox>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSpinBox_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionSpinBox>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSpinBox_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionSpinBox>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSpinBox_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionSpinBox>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSpinBox_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionSpinBox>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSpinBox_placed_copy(void* orig, void* place) {
    const QStyleOptionSpinBox_QtDShell&  __qt_orig = (const QStyleOptionSpinBox_QtDShell& ) *(QStyleOptionSpinBox_QtDShell *)orig;
    QStyleOptionSpinBox *result = new (place) QStyleOptionSpinBox (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSpinBox_native_copy(void* orig) {
    const QStyleOptionSpinBox_QtDShell&  __qt_orig = (const QStyleOptionSpinBox_QtDShell& ) *(QStyleOptionSpinBox_QtDShell *)orig;
    QStyleOptionSpinBox *result = new QStyleOptionSpinBox (__qt_orig);
    return result;
}

