#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionButton_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionButton_delete(void* nativeId)
{
    delete (QStyleOptionButton_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionButton_destroy(void* nativeId)
{
    call_destructor((QStyleOptionButton_QtDShell*)nativeId);
}

QStyleOptionButton_QtDShell::QStyleOptionButton_QtDShell()
    : QStyleOptionButton()
{
}

QStyleOptionButton_QtDShell::QStyleOptionButton_QtDShell(const QStyleOptionButton&  other0)
    : QStyleOptionButton(other0)
{
}

QStyleOptionButton_QtDShell::QStyleOptionButton_QtDShell(int  version0)
    : QStyleOptionButton(version0)
{
}

QStyleOptionButton_QtDShell::~QStyleOptionButton_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionButton_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionButton::QStyleOptionButton()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionButton_QStyleOptionButton
()
{
    QStyleOptionButton_QtDShell *__qt_this = new QStyleOptionButton_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionButton::QStyleOptionButton(const QStyleOptionButton & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionButton_QStyleOptionButton_QStyleOptionButton
(void* other0)
{
    const QStyleOptionButton&  __qt_other0 = (const QStyleOptionButton& ) *(QStyleOptionButton *)other0;
    QStyleOptionButton_QtDShell *__qt_this = new QStyleOptionButton_QtDShell((const QStyleOptionButton& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionButton::QStyleOptionButton(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionButton_QStyleOptionButton_int
(int version0)
{
    QStyleOptionButton_QtDShell *__qt_this = new QStyleOptionButton_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionButton_iconSize
(void* __this_nativeId,
 QSize * __d_return_value){
    QStyleOptionButton_QtDShell *__qt_object = (QStyleOptionButton_QtDShell *) __this_nativeId;
    QSize __tmp_iconSize = __qt_object->iconSize;
    *__d_return_value = __tmp_iconSize;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionButton_setIconSize_QSize
(void* __this_nativeId,
 QSize iconSize0){
    QStyleOptionButton_QtDShell *__qt_object = (QStyleOptionButton_QtDShell *) __this_nativeId;
    __qt_object->iconSize = iconSize0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionButton_features
(void* __this_nativeId){
    QStyleOptionButton_QtDShell *__qt_object = (QStyleOptionButton_QtDShell *) __this_nativeId;
    QStyleOptionButton::ButtonFeatures __tmp_features = __qt_object->features;
    int __d_return_value = __tmp_features;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionButton_setFeatures_ButtonFeatures
(void* __this_nativeId,
 int features0){
    QFlags<QStyleOptionButton::ButtonFeature> __qt_features0 = (QFlags<QStyleOptionButton::ButtonFeature>) features0;
    QStyleOptionButton_QtDShell *__qt_object = (QStyleOptionButton_QtDShell *) __this_nativeId;
    __qt_object->features = __qt_features0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionButton_icon
(void* __this_nativeId){
    QStyleOptionButton_QtDShell *__qt_object = (QStyleOptionButton_QtDShell *) __this_nativeId;
    QIcon __tmp_icon = __qt_object->icon;
    void* __d_return_value = (void*) new QIcon(__tmp_icon);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionButton_setIcon_QIcon
(void* __this_nativeId,
 void* icon0){
    QIcon  __qt_icon0 = (QIcon ) *(QIcon *)icon0;
    QStyleOptionButton_QtDShell *__qt_object = (QStyleOptionButton_QtDShell *) __this_nativeId;
    __qt_object->icon = __qt_icon0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionButton_text
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionButton_QtDShell *__qt_object = (QStyleOptionButton_QtDShell *) __this_nativeId;
    QString __tmp_text = __qt_object->text;
    qtd_toUtf8(__tmp_text.utf16(), __tmp_text.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionButton_setText_string
(void* __this_nativeId,
 DArray text0){
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStyleOptionButton_QtDShell *__qt_object = (QStyleOptionButton_QtDShell *) __this_nativeId;
    __qt_object->text = __qt_text0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionButton_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionButton>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionButton_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionButton>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionButton_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionButton>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionButton_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionButton>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionButton_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionButton>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionButton_placed_copy(void* orig, void* place) {
    const QStyleOptionButton_QtDShell&  __qt_orig = (const QStyleOptionButton_QtDShell& ) *(QStyleOptionButton_QtDShell *)orig;
    QStyleOptionButton *result = new (place) QStyleOptionButton (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionButton_native_copy(void* orig) {
    const QStyleOptionButton_QtDShell&  __qt_orig = (const QStyleOptionButton_QtDShell& ) *(QStyleOptionButton_QtDShell *)orig;
    QStyleOptionButton *result = new QStyleOptionButton (__qt_orig);
    return result;
}

