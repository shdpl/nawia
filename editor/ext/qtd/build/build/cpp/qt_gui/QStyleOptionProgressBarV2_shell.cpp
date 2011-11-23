#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionProgressBarV2_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBarV2_delete(void* nativeId)
{
    delete (QStyleOptionProgressBarV2_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBarV2_destroy(void* nativeId)
{
    call_destructor((QStyleOptionProgressBarV2_QtDShell*)nativeId);
}

QStyleOptionProgressBarV2_QtDShell::QStyleOptionProgressBarV2_QtDShell()
    : QStyleOptionProgressBarV2()
{
}

QStyleOptionProgressBarV2_QtDShell::QStyleOptionProgressBarV2_QtDShell(const QStyleOptionProgressBar&  other0)
    : QStyleOptionProgressBarV2(other0)
{
}

QStyleOptionProgressBarV2_QtDShell::QStyleOptionProgressBarV2_QtDShell(const QStyleOptionProgressBarV2&  other0)
    : QStyleOptionProgressBarV2(other0)
{
}

QStyleOptionProgressBarV2_QtDShell::QStyleOptionProgressBarV2_QtDShell(int  version0)
    : QStyleOptionProgressBarV2(version0)
{
}

QStyleOptionProgressBarV2_QtDShell::~QStyleOptionProgressBarV2_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBarV2_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionProgressBarV2::QStyleOptionProgressBarV2()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2
()
{
    QStyleOptionProgressBarV2_QtDShell *__qt_this = new QStyleOptionProgressBarV2_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionProgressBarV2::QStyleOptionProgressBarV2(const QStyleOptionProgressBar & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2_QStyleOptionProgressBar
(void* other0)
{
    const QStyleOptionProgressBar&  __qt_other0 = (const QStyleOptionProgressBar& ) *(QStyleOptionProgressBar *)other0;
    QStyleOptionProgressBarV2_QtDShell *__qt_this = new QStyleOptionProgressBarV2_QtDShell((const QStyleOptionProgressBar& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionProgressBarV2::QStyleOptionProgressBarV2(const QStyleOptionProgressBarV2 & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2
(void* other0)
{
    const QStyleOptionProgressBarV2&  __qt_other0 = (const QStyleOptionProgressBarV2& ) *(QStyleOptionProgressBarV2 *)other0;
    QStyleOptionProgressBarV2_QtDShell *__qt_this = new QStyleOptionProgressBarV2_QtDShell((const QStyleOptionProgressBarV2& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionProgressBarV2::QStyleOptionProgressBarV2(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2_int
(int version0)
{
    QStyleOptionProgressBarV2_QtDShell *__qt_this = new QStyleOptionProgressBarV2_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBarV2_bottomToTop
(void* __this_nativeId){
    QStyleOptionProgressBarV2_QtDShell *__qt_object = (QStyleOptionProgressBarV2_QtDShell *) __this_nativeId;
    bool __tmp_bottomToTop = __qt_object->bottomToTop;
    bool __d_return_value = __tmp_bottomToTop;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBarV2_setBottomToTop_bool
(void* __this_nativeId,
 bool bottomToTop0){
    QStyleOptionProgressBarV2_QtDShell *__qt_object = (QStyleOptionProgressBarV2_QtDShell *) __this_nativeId;
    __qt_object->bottomToTop = bottomToTop0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBarV2_invertedAppearance
(void* __this_nativeId){
    QStyleOptionProgressBarV2_QtDShell *__qt_object = (QStyleOptionProgressBarV2_QtDShell *) __this_nativeId;
    bool __tmp_invertedAppearance = __qt_object->invertedAppearance;
    bool __d_return_value = __tmp_invertedAppearance;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBarV2_setInvertedAppearance_bool
(void* __this_nativeId,
 bool invertedAppearance0){
    QStyleOptionProgressBarV2_QtDShell *__qt_object = (QStyleOptionProgressBarV2_QtDShell *) __this_nativeId;
    __qt_object->invertedAppearance = invertedAppearance0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionProgressBarV2_orientation
(void* __this_nativeId){
    QStyleOptionProgressBarV2_QtDShell *__qt_object = (QStyleOptionProgressBarV2_QtDShell *) __this_nativeId;
    Qt::Orientation __tmp_orientation = __qt_object->orientation;
    int __d_return_value = __tmp_orientation;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBarV2_setOrientation_Orientation
(void* __this_nativeId,
 int orientation0){
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QStyleOptionProgressBarV2_QtDShell *__qt_object = (QStyleOptionProgressBarV2_QtDShell *) __this_nativeId;
    __qt_object->orientation = __qt_orientation0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBarV2_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionProgressBarV2>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBarV2_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionProgressBarV2>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBarV2_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionProgressBarV2>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBarV2_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionProgressBarV2>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBarV2_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionProgressBarV2>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBarV2_placed_copy(void* orig, void* place) {
    const QStyleOptionProgressBarV2_QtDShell&  __qt_orig = (const QStyleOptionProgressBarV2_QtDShell& ) *(QStyleOptionProgressBarV2_QtDShell *)orig;
    QStyleOptionProgressBarV2 *result = new (place) QStyleOptionProgressBarV2 (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionProgressBarV2_native_copy(void* orig) {
    const QStyleOptionProgressBarV2_QtDShell&  __qt_orig = (const QStyleOptionProgressBarV2_QtDShell& ) *(QStyleOptionProgressBarV2_QtDShell *)orig;
    QStyleOptionProgressBarV2 *result = new QStyleOptionProgressBarV2 (__qt_orig);
    return result;
}

