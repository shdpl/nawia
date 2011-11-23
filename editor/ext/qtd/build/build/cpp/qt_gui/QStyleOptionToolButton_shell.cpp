#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionToolButton_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_delete(void* nativeId)
{
    delete (QStyleOptionToolButton_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_destroy(void* nativeId)
{
    call_destructor((QStyleOptionToolButton_QtDShell*)nativeId);
}

QStyleOptionToolButton_QtDShell::QStyleOptionToolButton_QtDShell()
    : QStyleOptionToolButton()
{
}

QStyleOptionToolButton_QtDShell::QStyleOptionToolButton_QtDShell(const QStyleOptionToolButton&  other0)
    : QStyleOptionToolButton(other0)
{
}

QStyleOptionToolButton_QtDShell::QStyleOptionToolButton_QtDShell(int  version0)
    : QStyleOptionToolButton(version0)
{
}

QStyleOptionToolButton_QtDShell::~QStyleOptionToolButton_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionToolButton::QStyleOptionToolButton()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolButton_QStyleOptionToolButton
()
{
    QStyleOptionToolButton_QtDShell *__qt_this = new QStyleOptionToolButton_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionToolButton::QStyleOptionToolButton(const QStyleOptionToolButton & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolButton_QStyleOptionToolButton_QStyleOptionToolButton
(void* other0)
{
    const QStyleOptionToolButton&  __qt_other0 = (const QStyleOptionToolButton& ) *(QStyleOptionToolButton *)other0;
    QStyleOptionToolButton_QtDShell *__qt_this = new QStyleOptionToolButton_QtDShell((const QStyleOptionToolButton& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionToolButton::QStyleOptionToolButton(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolButton_QStyleOptionToolButton_int
(int version0)
{
    QStyleOptionToolButton_QtDShell *__qt_this = new QStyleOptionToolButton_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_iconSize
(void* __this_nativeId,
 QSize * __d_return_value){
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    QSize __tmp_iconSize = __qt_object->iconSize;
    *__d_return_value = __tmp_iconSize;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_setIconSize_QSize
(void* __this_nativeId,
 QSize iconSize0){
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    __qt_object->iconSize = iconSize0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolButton_toolButtonStyle
(void* __this_nativeId){
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    Qt::ToolButtonStyle __tmp_toolButtonStyle = __qt_object->toolButtonStyle;
    int __d_return_value = __tmp_toolButtonStyle;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_setToolButtonStyle_ToolButtonStyle
(void* __this_nativeId,
 int toolButtonStyle0){
    Qt::ToolButtonStyle __qt_toolButtonStyle0 = (Qt::ToolButtonStyle) toolButtonStyle0;
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    __qt_object->toolButtonStyle = __qt_toolButtonStyle0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolButton_features
(void* __this_nativeId){
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    QStyleOptionToolButton::ToolButtonFeatures __tmp_features = __qt_object->features;
    int __d_return_value = __tmp_features;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_setFeatures_ToolButtonFeatures
(void* __this_nativeId,
 int features0){
    QFlags<QStyleOptionToolButton::ToolButtonFeature> __qt_features0 = (QFlags<QStyleOptionToolButton::ToolButtonFeature>) features0;
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    __qt_object->features = __qt_features0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolButton_arrowType
(void* __this_nativeId){
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    Qt::ArrowType __tmp_arrowType = __qt_object->arrowType;
    int __d_return_value = __tmp_arrowType;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_setArrowType_ArrowType
(void* __this_nativeId,
 int arrowType0){
    Qt::ArrowType __qt_arrowType0 = (Qt::ArrowType) arrowType0;
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    __qt_object->arrowType = __qt_arrowType0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolButton_icon
(void* __this_nativeId){
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    QIcon __tmp_icon = __qt_object->icon;
    void* __d_return_value = (void*) new QIcon(__tmp_icon);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_setIcon_QIcon
(void* __this_nativeId,
 void* icon0){
    QIcon  __qt_icon0 = (QIcon ) *(QIcon *)icon0;
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    __qt_object->icon = __qt_icon0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_pos
(void* __this_nativeId,
 QPoint * __d_return_value){
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    QPoint __tmp_pos = __qt_object->pos;
    *__d_return_value = __tmp_pos;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_setPos_QPoint
(void* __this_nativeId,
 QPoint pos0){
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    __qt_object->pos = pos0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_text
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    QString __tmp_text = __qt_object->text;
    qtd_toUtf8(__tmp_text.utf16(), __tmp_text.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_setText_string
(void* __this_nativeId,
 DArray text0){
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    __qt_object->text = __qt_text0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolButton_font
(void* __this_nativeId){
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    QFont __tmp_font = __qt_object->font;
    void* __d_return_value = (void*) new QFont(__tmp_font);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_setFont_QFont
(void* __this_nativeId,
 void* font0){
    QFont  __qt_font0 = (QFont ) *(QFont *)font0;
    QStyleOptionToolButton_QtDShell *__qt_object = (QStyleOptionToolButton_QtDShell *) __this_nativeId;
    __qt_object->font = __qt_font0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolButton_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionToolButton>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolButton_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionToolButton>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolButton_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionToolButton>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolButton_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionToolButton>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolButton_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionToolButton>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolButton_placed_copy(void* orig, void* place) {
    const QStyleOptionToolButton_QtDShell&  __qt_orig = (const QStyleOptionToolButton_QtDShell& ) *(QStyleOptionToolButton_QtDShell *)orig;
    QStyleOptionToolButton *result = new (place) QStyleOptionToolButton (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolButton_native_copy(void* orig) {
    const QStyleOptionToolButton_QtDShell&  __qt_orig = (const QStyleOptionToolButton_QtDShell& ) *(QStyleOptionToolButton_QtDShell *)orig;
    QStyleOptionToolButton *result = new QStyleOptionToolButton (__qt_orig);
    return result;
}

