#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionSlider_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_delete(void* nativeId)
{
    delete (QStyleOptionSlider_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_destroy(void* nativeId)
{
    call_destructor((QStyleOptionSlider_QtDShell*)nativeId);
}

QStyleOptionSlider_QtDShell::QStyleOptionSlider_QtDShell()
    : QStyleOptionSlider()
{
}

QStyleOptionSlider_QtDShell::QStyleOptionSlider_QtDShell(const QStyleOptionSlider&  other0)
    : QStyleOptionSlider(other0)
{
}

QStyleOptionSlider_QtDShell::QStyleOptionSlider_QtDShell(int  version0)
    : QStyleOptionSlider(version0)
{
}

QStyleOptionSlider_QtDShell::~QStyleOptionSlider_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionSlider::QStyleOptionSlider()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSlider_QStyleOptionSlider
()
{
    QStyleOptionSlider_QtDShell *__qt_this = new QStyleOptionSlider_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionSlider::QStyleOptionSlider(const QStyleOptionSlider & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSlider_QStyleOptionSlider_QStyleOptionSlider
(void* other0)
{
    const QStyleOptionSlider&  __qt_other0 = (const QStyleOptionSlider& ) *(QStyleOptionSlider *)other0;
    QStyleOptionSlider_QtDShell *__qt_this = new QStyleOptionSlider_QtDShell((const QStyleOptionSlider& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionSlider::QStyleOptionSlider(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSlider_QStyleOptionSlider_int
(int version0)
{
    QStyleOptionSlider_QtDShell *__qt_this = new QStyleOptionSlider_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSlider_tickInterval
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    int __tmp_tickInterval = __qt_object->tickInterval;
    int __d_return_value = __tmp_tickInterval;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setTickInterval_int
(void* __this_nativeId,
 int tickInterval0){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->tickInterval = tickInterval0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSlider_minimum
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    int __tmp_minimum = __qt_object->minimum;
    int __d_return_value = __tmp_minimum;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setMinimum_int
(void* __this_nativeId,
 int minimum0){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->minimum = minimum0;
}

QTD_EXTERN QTD_EXPORT double qtd_QStyleOptionSlider_notchTarget
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    double __tmp_notchTarget = __qt_object->notchTarget;
    double __d_return_value = __tmp_notchTarget;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setNotchTarget_double
(void* __this_nativeId,
 double notchTarget0){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->notchTarget = notchTarget0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSlider_maximum
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    int __tmp_maximum = __qt_object->maximum;
    int __d_return_value = __tmp_maximum;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setMaximum_int
(void* __this_nativeId,
 int maximum0){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->maximum = maximum0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSlider_sliderPosition
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    int __tmp_sliderPosition = __qt_object->sliderPosition;
    int __d_return_value = __tmp_sliderPosition;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setSliderPosition_int
(void* __this_nativeId,
 int sliderPosition0){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->sliderPosition = sliderPosition0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSlider_dialWrapping
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    bool __tmp_dialWrapping = __qt_object->dialWrapping;
    bool __d_return_value = __tmp_dialWrapping;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setDialWrapping_bool
(void* __this_nativeId,
 bool dialWrapping0){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->dialWrapping = dialWrapping0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSlider_sliderValue
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    int __tmp_sliderValue = __qt_object->sliderValue;
    int __d_return_value = __tmp_sliderValue;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setSliderValue_int
(void* __this_nativeId,
 int sliderValue0){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->sliderValue = sliderValue0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSlider_singleStep
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    int __tmp_singleStep = __qt_object->singleStep;
    int __d_return_value = __tmp_singleStep;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setSingleStep_int
(void* __this_nativeId,
 int singleStep0){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->singleStep = singleStep0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSlider_tickPosition
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    QSlider::TickPosition __tmp_tickPosition = __qt_object->tickPosition;
    int __d_return_value = __tmp_tickPosition;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setTickPosition_TickPosition
(void* __this_nativeId,
 int tickPosition0){
    QSlider::TickPosition __qt_tickPosition0 = (QSlider::TickPosition) tickPosition0;
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->tickPosition = __qt_tickPosition0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSlider_pageStep
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    int __tmp_pageStep = __qt_object->pageStep;
    int __d_return_value = __tmp_pageStep;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setPageStep_int
(void* __this_nativeId,
 int pageStep0){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->pageStep = pageStep0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionSlider_orientation
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    Qt::Orientation __tmp_orientation = __qt_object->orientation;
    int __d_return_value = __tmp_orientation;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setOrientation_Orientation
(void* __this_nativeId,
 int orientation0){
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->orientation = __qt_orientation0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSlider_upsideDown
(void* __this_nativeId){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    bool __tmp_upsideDown = __qt_object->upsideDown;
    bool __d_return_value = __tmp_upsideDown;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_setUpsideDown_bool
(void* __this_nativeId,
 bool upsideDown0){
    QStyleOptionSlider_QtDShell *__qt_object = (QStyleOptionSlider_QtDShell *) __this_nativeId;
    __qt_object->upsideDown = upsideDown0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSlider_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionSlider>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSlider_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionSlider>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSlider_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionSlider>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSlider_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionSlider>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionSlider_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionSlider>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionSlider_placed_copy(void* orig, void* place) {
    const QStyleOptionSlider_QtDShell&  __qt_orig = (const QStyleOptionSlider_QtDShell& ) *(QStyleOptionSlider_QtDShell *)orig;
    QStyleOptionSlider *result = new (place) QStyleOptionSlider (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionSlider_native_copy(void* orig) {
    const QStyleOptionSlider_QtDShell&  __qt_orig = (const QStyleOptionSlider_QtDShell& ) *(QStyleOptionSlider_QtDShell *)orig;
    QStyleOptionSlider *result = new QStyleOptionSlider (__qt_orig);
    return result;
}

