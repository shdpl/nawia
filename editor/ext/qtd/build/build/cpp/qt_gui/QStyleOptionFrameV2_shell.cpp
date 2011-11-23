#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionFrameV2_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrameV2_delete(void* nativeId)
{
    delete (QStyleOptionFrameV2_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrameV2_destroy(void* nativeId)
{
    call_destructor((QStyleOptionFrameV2_QtDShell*)nativeId);
}

QStyleOptionFrameV2_QtDShell::QStyleOptionFrameV2_QtDShell()
    : QStyleOptionFrameV2()
{
}

QStyleOptionFrameV2_QtDShell::QStyleOptionFrameV2_QtDShell(const QStyleOptionFrame&  other0)
    : QStyleOptionFrameV2(other0)
{
}

QStyleOptionFrameV2_QtDShell::QStyleOptionFrameV2_QtDShell(const QStyleOptionFrameV2&  other0)
    : QStyleOptionFrameV2(other0)
{
}

QStyleOptionFrameV2_QtDShell::QStyleOptionFrameV2_QtDShell(int  version0)
    : QStyleOptionFrameV2(version0)
{
}

QStyleOptionFrameV2_QtDShell::~QStyleOptionFrameV2_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrameV2_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionFrameV2::QStyleOptionFrameV2()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFrameV2_QStyleOptionFrameV2
()
{
    QStyleOptionFrameV2_QtDShell *__qt_this = new QStyleOptionFrameV2_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionFrameV2::QStyleOptionFrameV2(const QStyleOptionFrame & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFrameV2_QStyleOptionFrameV2_QStyleOptionFrame
(void* other0)
{
    const QStyleOptionFrame&  __qt_other0 = (const QStyleOptionFrame& ) *(QStyleOptionFrame *)other0;
    QStyleOptionFrameV2_QtDShell *__qt_this = new QStyleOptionFrameV2_QtDShell((const QStyleOptionFrame& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionFrameV2::QStyleOptionFrameV2(const QStyleOptionFrameV2 & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFrameV2_QStyleOptionFrameV2_QStyleOptionFrameV2
(void* other0)
{
    const QStyleOptionFrameV2&  __qt_other0 = (const QStyleOptionFrameV2& ) *(QStyleOptionFrameV2 *)other0;
    QStyleOptionFrameV2_QtDShell *__qt_this = new QStyleOptionFrameV2_QtDShell((const QStyleOptionFrameV2& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionFrameV2::QStyleOptionFrameV2(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFrameV2_QStyleOptionFrameV2_int
(int version0)
{
    QStyleOptionFrameV2_QtDShell *__qt_this = new QStyleOptionFrameV2_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionFrameV2_features
(void* __this_nativeId){
    QStyleOptionFrameV2_QtDShell *__qt_object = (QStyleOptionFrameV2_QtDShell *) __this_nativeId;
    QStyleOptionFrameV2::FrameFeatures __tmp_features = __qt_object->features;
    int __d_return_value = __tmp_features;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrameV2_setFeatures_FrameFeatures
(void* __this_nativeId,
 int features0){
    QFlags<QStyleOptionFrameV2::FrameFeature> __qt_features0 = (QFlags<QStyleOptionFrameV2::FrameFeature>) features0;
    QStyleOptionFrameV2_QtDShell *__qt_object = (QStyleOptionFrameV2_QtDShell *) __this_nativeId;
    __qt_object->features = __qt_features0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFrameV2_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionFrameV2>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFrameV2_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionFrameV2>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFrameV2_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionFrameV2>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFrameV2_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionFrameV2>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFrameV2_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionFrameV2>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrameV2_placed_copy(void* orig, void* place) {
    const QStyleOptionFrameV2_QtDShell&  __qt_orig = (const QStyleOptionFrameV2_QtDShell& ) *(QStyleOptionFrameV2_QtDShell *)orig;
    QStyleOptionFrameV2 *result = new (place) QStyleOptionFrameV2 (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFrameV2_native_copy(void* orig) {
    const QStyleOptionFrameV2_QtDShell&  __qt_orig = (const QStyleOptionFrameV2_QtDShell& ) *(QStyleOptionFrameV2_QtDShell *)orig;
    QStyleOptionFrameV2 *result = new QStyleOptionFrameV2 (__qt_orig);
    return result;
}

