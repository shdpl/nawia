#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionTab_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_delete(void* nativeId)
{
    delete (QStyleOptionTab_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_destroy(void* nativeId)
{
    call_destructor((QStyleOptionTab_QtDShell*)nativeId);
}

QStyleOptionTab_QtDShell::QStyleOptionTab_QtDShell()
    : QStyleOptionTab()
{
}

QStyleOptionTab_QtDShell::QStyleOptionTab_QtDShell(const QStyleOptionTab&  other0)
    : QStyleOptionTab(other0)
{
}

QStyleOptionTab_QtDShell::QStyleOptionTab_QtDShell(int  version0)
    : QStyleOptionTab(version0)
{
}

QStyleOptionTab_QtDShell::~QStyleOptionTab_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionTab::QStyleOptionTab()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTab_QStyleOptionTab
()
{
    QStyleOptionTab_QtDShell *__qt_this = new QStyleOptionTab_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionTab::QStyleOptionTab(const QStyleOptionTab & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTab_QStyleOptionTab_QStyleOptionTab
(void* other0)
{
    const QStyleOptionTab&  __qt_other0 = (const QStyleOptionTab& ) *(QStyleOptionTab *)other0;
    QStyleOptionTab_QtDShell *__qt_this = new QStyleOptionTab_QtDShell((const QStyleOptionTab& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionTab::QStyleOptionTab(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTab_QStyleOptionTab_int
(int version0)
{
    QStyleOptionTab_QtDShell *__qt_this = new QStyleOptionTab_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTab_row
(void* __this_nativeId){
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    int __tmp_row = __qt_object->row;
    int __d_return_value = __tmp_row;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_setRow_int
(void* __this_nativeId,
 int row0){
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    __qt_object->row = row0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTab_cornerWidgets
(void* __this_nativeId){
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    QStyleOptionTab::CornerWidgets __tmp_cornerWidgets = __qt_object->cornerWidgets;
    int __d_return_value = __tmp_cornerWidgets;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_setCornerWidgets_CornerWidgets
(void* __this_nativeId,
 int cornerWidgets0){
    QFlags<QStyleOptionTab::CornerWidget> __qt_cornerWidgets0 = (QFlags<QStyleOptionTab::CornerWidget>) cornerWidgets0;
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    __qt_object->cornerWidgets = __qt_cornerWidgets0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTab_position
(void* __this_nativeId){
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    QStyleOptionTab::TabPosition __tmp_position = __qt_object->position;
    int __d_return_value = __tmp_position;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_setPosition_TabPosition
(void* __this_nativeId,
 int position0){
    QStyleOptionTab::TabPosition __qt_position0 = (QStyleOptionTab::TabPosition) position0;
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    __qt_object->position = __qt_position0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTab_icon
(void* __this_nativeId){
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    QIcon __tmp_icon = __qt_object->icon;
    void* __d_return_value = (void*) new QIcon(__tmp_icon);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_setIcon_QIcon
(void* __this_nativeId,
 void* icon0){
    QIcon  __qt_icon0 = (QIcon ) *(QIcon *)icon0;
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    __qt_object->icon = __qt_icon0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTab_shape
(void* __this_nativeId){
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    QTabBar::Shape __tmp_shape = __qt_object->shape;
    int __d_return_value = __tmp_shape;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_setShape_Shape
(void* __this_nativeId,
 int shape0){
    QTabBar::Shape __qt_shape0 = (QTabBar::Shape) shape0;
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    __qt_object->shape = __qt_shape0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_text
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    QString __tmp_text = __qt_object->text;
    qtd_toUtf8(__tmp_text.utf16(), __tmp_text.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_setText_string
(void* __this_nativeId,
 DArray text0){
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    __qt_object->text = __qt_text0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTab_selectedPosition
(void* __this_nativeId){
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    QStyleOptionTab::SelectedPosition __tmp_selectedPosition = __qt_object->selectedPosition;
    int __d_return_value = __tmp_selectedPosition;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_setSelectedPosition_SelectedPosition
(void* __this_nativeId,
 int selectedPosition0){
    QStyleOptionTab::SelectedPosition __qt_selectedPosition0 = (QStyleOptionTab::SelectedPosition) selectedPosition0;
    QStyleOptionTab_QtDShell *__qt_object = (QStyleOptionTab_QtDShell *) __this_nativeId;
    __qt_object->selectedPosition = __qt_selectedPosition0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTab_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionTab>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTab_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionTab>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTab_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionTab>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTab_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionTab>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTab_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionTab>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTab_placed_copy(void* orig, void* place) {
    const QStyleOptionTab_QtDShell&  __qt_orig = (const QStyleOptionTab_QtDShell& ) *(QStyleOptionTab_QtDShell *)orig;
    QStyleOptionTab *result = new (place) QStyleOptionTab (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTab_native_copy(void* orig) {
    const QStyleOptionTab_QtDShell&  __qt_orig = (const QStyleOptionTab_QtDShell& ) *(QStyleOptionTab_QtDShell *)orig;
    QStyleOptionTab *result = new QStyleOptionTab (__qt_orig);
    return result;
}

