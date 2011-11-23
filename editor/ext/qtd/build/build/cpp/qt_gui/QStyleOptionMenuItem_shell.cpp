#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionMenuItem_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_delete(void* nativeId)
{
    delete (QStyleOptionMenuItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_destroy(void* nativeId)
{
    call_destructor((QStyleOptionMenuItem_QtDShell*)nativeId);
}

QStyleOptionMenuItem_QtDShell::QStyleOptionMenuItem_QtDShell()
    : QStyleOptionMenuItem()
{
}

QStyleOptionMenuItem_QtDShell::QStyleOptionMenuItem_QtDShell(const QStyleOptionMenuItem&  other0)
    : QStyleOptionMenuItem(other0)
{
}

QStyleOptionMenuItem_QtDShell::QStyleOptionMenuItem_QtDShell(int  version0)
    : QStyleOptionMenuItem(version0)
{
}

QStyleOptionMenuItem_QtDShell::~QStyleOptionMenuItem_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionMenuItem::QStyleOptionMenuItem()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionMenuItem_QStyleOptionMenuItem
()
{
    QStyleOptionMenuItem_QtDShell *__qt_this = new QStyleOptionMenuItem_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionMenuItem::QStyleOptionMenuItem(const QStyleOptionMenuItem & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionMenuItem_QStyleOptionMenuItem_QStyleOptionMenuItem
(void* other0)
{
    const QStyleOptionMenuItem&  __qt_other0 = (const QStyleOptionMenuItem& ) *(QStyleOptionMenuItem *)other0;
    QStyleOptionMenuItem_QtDShell *__qt_this = new QStyleOptionMenuItem_QtDShell((const QStyleOptionMenuItem& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionMenuItem::QStyleOptionMenuItem(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionMenuItem_QStyleOptionMenuItem_int
(int version0)
{
    QStyleOptionMenuItem_QtDShell *__qt_this = new QStyleOptionMenuItem_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionMenuItem_menuHasCheckableItems
(void* __this_nativeId){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    bool __tmp_menuHasCheckableItems = __qt_object->menuHasCheckableItems;
    bool __d_return_value = __tmp_menuHasCheckableItems;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_setMenuHasCheckableItems_bool
(void* __this_nativeId,
 bool menuHasCheckableItems0){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    __qt_object->menuHasCheckableItems = menuHasCheckableItems0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_menuRect
(void* __this_nativeId,
 QRect * __d_return_value){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    QRect __tmp_menuRect = __qt_object->menuRect;
    *__d_return_value = __tmp_menuRect;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_setMenuRect_QRect
(void* __this_nativeId,
 QRect menuRect0){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    __qt_object->menuRect = menuRect0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionMenuItem_checkType
(void* __this_nativeId){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    QStyleOptionMenuItem::CheckType __tmp_checkType = __qt_object->checkType;
    int __d_return_value = __tmp_checkType;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_setCheckType_CheckType
(void* __this_nativeId,
 int checkType0){
    QStyleOptionMenuItem::CheckType __qt_checkType0 = (QStyleOptionMenuItem::CheckType) checkType0;
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    __qt_object->checkType = __qt_checkType0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionMenuItem_icon
(void* __this_nativeId){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    QIcon __tmp_icon = __qt_object->icon;
    void* __d_return_value = (void*) new QIcon(__tmp_icon);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_setIcon_QIcon
(void* __this_nativeId,
 void* icon0){
    QIcon  __qt_icon0 = (QIcon ) *(QIcon *)icon0;
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    __qt_object->icon = __qt_icon0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionMenuItem_checked
(void* __this_nativeId){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    bool __tmp_checked = __qt_object->checked;
    bool __d_return_value = __tmp_checked;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_setChecked_bool
(void* __this_nativeId,
 bool checked0){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    __qt_object->checked = checked0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionMenuItem_maxIconWidth
(void* __this_nativeId){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    int __tmp_maxIconWidth = __qt_object->maxIconWidth;
    int __d_return_value = __tmp_maxIconWidth;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_setMaxIconWidth_int
(void* __this_nativeId,
 int maxIconWidth0){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    __qt_object->maxIconWidth = maxIconWidth0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionMenuItem_tabWidth
(void* __this_nativeId){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    int __tmp_tabWidth = __qt_object->tabWidth;
    int __d_return_value = __tmp_tabWidth;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_setTabWidth_int
(void* __this_nativeId,
 int tabWidth0){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    __qt_object->tabWidth = tabWidth0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_text
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    QString __tmp_text = __qt_object->text;
    qtd_toUtf8(__tmp_text.utf16(), __tmp_text.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_setText_string
(void* __this_nativeId,
 DArray text0){
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    __qt_object->text = __qt_text0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionMenuItem_font
(void* __this_nativeId){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    QFont __tmp_font = __qt_object->font;
    void* __d_return_value = (void*) new QFont(__tmp_font);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_setFont_QFont
(void* __this_nativeId,
 void* font0){
    QFont  __qt_font0 = (QFont ) *(QFont *)font0;
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    __qt_object->font = __qt_font0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionMenuItem_menuItemType
(void* __this_nativeId){
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    QStyleOptionMenuItem::MenuItemType __tmp_menuItemType = __qt_object->menuItemType;
    int __d_return_value = __tmp_menuItemType;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_setMenuItemType_MenuItemType
(void* __this_nativeId,
 int menuItemType0){
    QStyleOptionMenuItem::MenuItemType __qt_menuItemType0 = (QStyleOptionMenuItem::MenuItemType) menuItemType0;
    QStyleOptionMenuItem_QtDShell *__qt_object = (QStyleOptionMenuItem_QtDShell *) __this_nativeId;
    __qt_object->menuItemType = __qt_menuItemType0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionMenuItem_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionMenuItem>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionMenuItem_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionMenuItem>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionMenuItem_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionMenuItem>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionMenuItem_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionMenuItem>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionMenuItem_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionMenuItem>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionMenuItem_placed_copy(void* orig, void* place) {
    const QStyleOptionMenuItem_QtDShell&  __qt_orig = (const QStyleOptionMenuItem_QtDShell& ) *(QStyleOptionMenuItem_QtDShell *)orig;
    QStyleOptionMenuItem *result = new (place) QStyleOptionMenuItem (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionMenuItem_native_copy(void* orig) {
    const QStyleOptionMenuItem_QtDShell&  __qt_orig = (const QStyleOptionMenuItem_QtDShell& ) *(QStyleOptionMenuItem_QtDShell *)orig;
    QStyleOptionMenuItem *result = new QStyleOptionMenuItem (__qt_orig);
    return result;
}

