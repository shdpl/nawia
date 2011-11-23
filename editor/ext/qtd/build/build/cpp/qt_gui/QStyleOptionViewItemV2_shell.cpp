#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionViewItemV2_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV2_delete(void* nativeId)
{
    delete (QStyleOptionViewItemV2_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV2_destroy(void* nativeId)
{
    call_destructor((QStyleOptionViewItemV2_QtDShell*)nativeId);
}

QStyleOptionViewItemV2_QtDShell::QStyleOptionViewItemV2_QtDShell()
    : QStyleOptionViewItemV2()
{
}

QStyleOptionViewItemV2_QtDShell::QStyleOptionViewItemV2_QtDShell(const QStyleOptionViewItem&  other0)
    : QStyleOptionViewItemV2(other0)
{
}

QStyleOptionViewItemV2_QtDShell::QStyleOptionViewItemV2_QtDShell(const QStyleOptionViewItemV2&  other0)
    : QStyleOptionViewItemV2(other0)
{
}

QStyleOptionViewItemV2_QtDShell::QStyleOptionViewItemV2_QtDShell(int  version0)
    : QStyleOptionViewItemV2(version0)
{
}

QStyleOptionViewItemV2_QtDShell::~QStyleOptionViewItemV2_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV2_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionViewItemV2::QStyleOptionViewItemV2()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2
()
{
    QStyleOptionViewItemV2_QtDShell *__qt_this = new QStyleOptionViewItemV2_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionViewItemV2::QStyleOptionViewItemV2(const QStyleOptionViewItem & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2_QStyleOptionViewItem
(void* other0)
{
    const QStyleOptionViewItem&  __qt_other0 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)other0;
    QStyleOptionViewItemV2_QtDShell *__qt_this = new QStyleOptionViewItemV2_QtDShell((const QStyleOptionViewItem& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionViewItemV2::QStyleOptionViewItemV2(const QStyleOptionViewItemV2 & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2_QStyleOptionViewItemV2
(void* other0)
{
    const QStyleOptionViewItemV2&  __qt_other0 = (const QStyleOptionViewItemV2& ) *(QStyleOptionViewItemV2 *)other0;
    QStyleOptionViewItemV2_QtDShell *__qt_this = new QStyleOptionViewItemV2_QtDShell((const QStyleOptionViewItemV2& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionViewItemV2::QStyleOptionViewItemV2(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2_int
(int version0)
{
    QStyleOptionViewItemV2_QtDShell *__qt_this = new QStyleOptionViewItemV2_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionViewItemV2_features
(void* __this_nativeId){
    QStyleOptionViewItemV2_QtDShell *__qt_object = (QStyleOptionViewItemV2_QtDShell *) __this_nativeId;
    QStyleOptionViewItemV2::ViewItemFeatures __tmp_features = __qt_object->features;
    int __d_return_value = __tmp_features;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV2_setFeatures_ViewItemFeatures
(void* __this_nativeId,
 int features0){
    QFlags<QStyleOptionViewItemV2::ViewItemFeature> __qt_features0 = (QFlags<QStyleOptionViewItemV2::ViewItemFeature>) features0;
    QStyleOptionViewItemV2_QtDShell *__qt_object = (QStyleOptionViewItemV2_QtDShell *) __this_nativeId;
    __qt_object->features = __qt_features0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV2_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionViewItemV2>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV2_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionViewItemV2>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV2_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionViewItemV2>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV2_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionViewItemV2>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV2_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionViewItemV2>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV2_placed_copy(void* orig, void* place) {
    const QStyleOptionViewItemV2_QtDShell&  __qt_orig = (const QStyleOptionViewItemV2_QtDShell& ) *(QStyleOptionViewItemV2_QtDShell *)orig;
    QStyleOptionViewItemV2 *result = new (place) QStyleOptionViewItemV2 (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV2_native_copy(void* orig) {
    const QStyleOptionViewItemV2_QtDShell&  __qt_orig = (const QStyleOptionViewItemV2_QtDShell& ) *(QStyleOptionViewItemV2_QtDShell *)orig;
    QStyleOptionViewItemV2 *result = new QStyleOptionViewItemV2 (__qt_orig);
    return result;
}

