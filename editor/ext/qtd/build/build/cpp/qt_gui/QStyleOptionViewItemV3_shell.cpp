#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionViewItemV3_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV3_delete(void* nativeId)
{
    delete (QStyleOptionViewItemV3_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV3_destroy(void* nativeId)
{
    call_destructor((QStyleOptionViewItemV3_QtDShell*)nativeId);
}

QStyleOptionViewItemV3_QtDShell::QStyleOptionViewItemV3_QtDShell()
    : QStyleOptionViewItemV3()
{
}

QStyleOptionViewItemV3_QtDShell::QStyleOptionViewItemV3_QtDShell(const QStyleOptionViewItem&  other0)
    : QStyleOptionViewItemV3(other0)
{
}

QStyleOptionViewItemV3_QtDShell::QStyleOptionViewItemV3_QtDShell(const QStyleOptionViewItemV3&  other0)
    : QStyleOptionViewItemV3(other0)
{
}

QStyleOptionViewItemV3_QtDShell::QStyleOptionViewItemV3_QtDShell(int  version0)
    : QStyleOptionViewItemV3(version0)
{
}

QStyleOptionViewItemV3_QtDShell::~QStyleOptionViewItemV3_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV3_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionViewItemV3::QStyleOptionViewItemV3()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3
()
{
    QStyleOptionViewItemV3_QtDShell *__qt_this = new QStyleOptionViewItemV3_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionViewItemV3::QStyleOptionViewItemV3(const QStyleOptionViewItem & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3_QStyleOptionViewItem
(void* other0)
{
    const QStyleOptionViewItem&  __qt_other0 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)other0;
    QStyleOptionViewItemV3_QtDShell *__qt_this = new QStyleOptionViewItemV3_QtDShell((const QStyleOptionViewItem& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionViewItemV3::QStyleOptionViewItemV3(const QStyleOptionViewItemV3 & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3_QStyleOptionViewItemV3
(void* other0)
{
    const QStyleOptionViewItemV3&  __qt_other0 = (const QStyleOptionViewItemV3& ) *(QStyleOptionViewItemV3 *)other0;
    QStyleOptionViewItemV3_QtDShell *__qt_this = new QStyleOptionViewItemV3_QtDShell((const QStyleOptionViewItemV3& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionViewItemV3::QStyleOptionViewItemV3(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3_int
(int version0)
{
    QStyleOptionViewItemV3_QtDShell *__qt_this = new QStyleOptionViewItemV3_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV3_widget
(void* __this_nativeId){
    QStyleOptionViewItemV3_QtDShell *__qt_object = (QStyleOptionViewItemV3_QtDShell *) __this_nativeId;
    const QWidget* __tmp_widget = __qt_object->widget;
    void* __d_return_value = (void*) __tmp_widget;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV3_locale
(void* __this_nativeId){
    QStyleOptionViewItemV3_QtDShell *__qt_object = (QStyleOptionViewItemV3_QtDShell *) __this_nativeId;
    QLocale __tmp_locale = __qt_object->locale;
    void* __d_return_value = (void*) new QLocale(__tmp_locale);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV3_setLocale_QLocale
(void* __this_nativeId,
 void* locale0){
    QLocale  __qt_locale0 = (QLocale ) *(QLocale *)locale0;
    QStyleOptionViewItemV3_QtDShell *__qt_object = (QStyleOptionViewItemV3_QtDShell *) __this_nativeId;
    __qt_object->locale = __qt_locale0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV3_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionViewItemV3>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV3_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionViewItemV3>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV3_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionViewItemV3>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV3_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionViewItemV3>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV3_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionViewItemV3>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV3_placed_copy(void* orig, void* place) {
    const QStyleOptionViewItemV3_QtDShell&  __qt_orig = (const QStyleOptionViewItemV3_QtDShell& ) *(QStyleOptionViewItemV3_QtDShell *)orig;
    QStyleOptionViewItemV3 *result = new (place) QStyleOptionViewItemV3 (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV3_native_copy(void* orig) {
    const QStyleOptionViewItemV3_QtDShell&  __qt_orig = (const QStyleOptionViewItemV3_QtDShell& ) *(QStyleOptionViewItemV3_QtDShell *)orig;
    QStyleOptionViewItemV3 *result = new QStyleOptionViewItemV3 (__qt_orig);
    return result;
}

