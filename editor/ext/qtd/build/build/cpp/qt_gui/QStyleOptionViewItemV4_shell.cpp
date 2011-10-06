#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionViewItemV4_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_delete(void* nativeId)
{
    delete (QStyleOptionViewItemV4_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_destroy(void* nativeId)
{
    call_destructor((QStyleOptionViewItemV4_QtDShell*)nativeId);
}

QStyleOptionViewItemV4_QtDShell::QStyleOptionViewItemV4_QtDShell()
    : QStyleOptionViewItemV4()
{
}

QStyleOptionViewItemV4_QtDShell::QStyleOptionViewItemV4_QtDShell(const QStyleOptionViewItem&  other0)
    : QStyleOptionViewItemV4(other0)
{
}

QStyleOptionViewItemV4_QtDShell::QStyleOptionViewItemV4_QtDShell(const QStyleOptionViewItemV4&  other0)
    : QStyleOptionViewItemV4(other0)
{
}

QStyleOptionViewItemV4_QtDShell::QStyleOptionViewItemV4_QtDShell(int  version0)
    : QStyleOptionViewItemV4(version0)
{
}

QStyleOptionViewItemV4_QtDShell::~QStyleOptionViewItemV4_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionViewItemV4::QStyleOptionViewItemV4()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4
()
{
    QStyleOptionViewItemV4_QtDShell *__qt_this = new QStyleOptionViewItemV4_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionViewItemV4::QStyleOptionViewItemV4(const QStyleOptionViewItem & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4_QStyleOptionViewItem
(void* other0)
{
    const QStyleOptionViewItem&  __qt_other0 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)other0;
    QStyleOptionViewItemV4_QtDShell *__qt_this = new QStyleOptionViewItemV4_QtDShell((const QStyleOptionViewItem& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionViewItemV4::QStyleOptionViewItemV4(const QStyleOptionViewItemV4 & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4_QStyleOptionViewItemV4
(void* other0)
{
    const QStyleOptionViewItemV4&  __qt_other0 = (const QStyleOptionViewItemV4& ) *(QStyleOptionViewItemV4 *)other0;
    QStyleOptionViewItemV4_QtDShell *__qt_this = new QStyleOptionViewItemV4_QtDShell((const QStyleOptionViewItemV4& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionViewItemV4::QStyleOptionViewItemV4(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4_int
(int version0)
{
    QStyleOptionViewItemV4_QtDShell *__qt_this = new QStyleOptionViewItemV4_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionViewItemV4_checkState
(void* __this_nativeId){
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    Qt::CheckState __tmp_checkState = __qt_object->checkState;
    int __d_return_value = __tmp_checkState;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_setCheckState_CheckState
(void* __this_nativeId,
 int checkState0){
    Qt::CheckState __qt_checkState0 = (Qt::CheckState) checkState0;
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    __qt_object->checkState = __qt_checkState0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionViewItemV4_viewItemPosition
(void* __this_nativeId){
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    QStyleOptionViewItemV4::ViewItemPosition __tmp_viewItemPosition = __qt_object->viewItemPosition;
    int __d_return_value = __tmp_viewItemPosition;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_setViewItemPosition_ViewItemPosition
(void* __this_nativeId,
 int viewItemPosition0){
    QStyleOptionViewItemV4::ViewItemPosition __qt_viewItemPosition0 = (QStyleOptionViewItemV4::ViewItemPosition) viewItemPosition0;
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    __qt_object->viewItemPosition = __qt_viewItemPosition0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV4_icon
(void* __this_nativeId){
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    QIcon __tmp_icon = __qt_object->icon;
    void* __d_return_value = (void*) new QIcon(__tmp_icon);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_setIcon_QIcon
(void* __this_nativeId,
 void* icon0){
    QIcon  __qt_icon0 = (QIcon ) *(QIcon *)icon0;
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    __qt_object->icon = __qt_icon0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV4_backgroundBrush
(void* __this_nativeId){
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    QBrush __tmp_backgroundBrush = __qt_object->backgroundBrush;
    void* __d_return_value = (void*) new QBrush(__tmp_backgroundBrush);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_setBackgroundBrush_QBrush
(void* __this_nativeId,
 void* backgroundBrush0){
    QBrush  __qt_backgroundBrush0 = (QBrush ) *(QBrush *)backgroundBrush0;
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    __qt_object->backgroundBrush = __qt_backgroundBrush0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_index
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value){
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    QModelIndex __tmp_index = __qt_object->index;
    *__d_return_value = qtd_from_QModelIndex(__tmp_index);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_setIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0){
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    __qt_object->index = qtd_to_QModelIndex(index0);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_text
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    QString __tmp_text = __qt_object->text;
    qtd_toUtf8(__tmp_text.utf16(), __tmp_text.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_setText_string
(void* __this_nativeId,
 DArray text0){
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStyleOptionViewItemV4_QtDShell *__qt_object = (QStyleOptionViewItemV4_QtDShell *) __this_nativeId;
    __qt_object->text = __qt_text0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV4_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionViewItemV4>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV4_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionViewItemV4>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV4_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionViewItemV4>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV4_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionViewItemV4>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItemV4_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionViewItemV4>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItemV4_placed_copy(void* orig, void* place) {
    const QStyleOptionViewItemV4_QtDShell&  __qt_orig = (const QStyleOptionViewItemV4_QtDShell& ) *(QStyleOptionViewItemV4_QtDShell *)orig;
    QStyleOptionViewItemV4 *result = new (place) QStyleOptionViewItemV4 (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItemV4_native_copy(void* orig) {
    const QStyleOptionViewItemV4_QtDShell&  __qt_orig = (const QStyleOptionViewItemV4_QtDShell& ) *(QStyleOptionViewItemV4_QtDShell *)orig;
    QStyleOptionViewItemV4 *result = new QStyleOptionViewItemV4 (__qt_orig);
    return result;
}

