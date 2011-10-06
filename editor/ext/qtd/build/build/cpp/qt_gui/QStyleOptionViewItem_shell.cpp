#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionViewItem_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_delete(void* nativeId)
{
    delete (QStyleOptionViewItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_destroy(void* nativeId)
{
    call_destructor((QStyleOptionViewItem_QtDShell*)nativeId);
}

QStyleOptionViewItem_QtDShell::QStyleOptionViewItem_QtDShell()
    : QStyleOptionViewItem()
{
}

QStyleOptionViewItem_QtDShell::QStyleOptionViewItem_QtDShell(const QStyleOptionViewItem&  other0)
    : QStyleOptionViewItem(other0)
{
}

QStyleOptionViewItem_QtDShell::QStyleOptionViewItem_QtDShell(int  version0)
    : QStyleOptionViewItem(version0)
{
}

QStyleOptionViewItem_QtDShell::~QStyleOptionViewItem_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionViewItem::QStyleOptionViewItem()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItem_QStyleOptionViewItem
()
{
    QStyleOptionViewItem_QtDShell *__qt_this = new QStyleOptionViewItem_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionViewItem::QStyleOptionViewItem(const QStyleOptionViewItem & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItem_QStyleOptionViewItem_QStyleOptionViewItem
(void* other0)
{
    const QStyleOptionViewItem&  __qt_other0 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)other0;
    QStyleOptionViewItem_QtDShell *__qt_this = new QStyleOptionViewItem_QtDShell((const QStyleOptionViewItem& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionViewItem::QStyleOptionViewItem(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItem_QStyleOptionViewItem_int
(int version0)
{
    QStyleOptionViewItem_QtDShell *__qt_this = new QStyleOptionViewItem_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItem_showDecorationSelected
(void* __this_nativeId){
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    bool __tmp_showDecorationSelected = __qt_object->showDecorationSelected;
    bool __d_return_value = __tmp_showDecorationSelected;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_setShowDecorationSelected_bool
(void* __this_nativeId,
 bool showDecorationSelected0){
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    __qt_object->showDecorationSelected = showDecorationSelected0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionViewItem_decorationPosition
(void* __this_nativeId){
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    QStyleOptionViewItem::Position __tmp_decorationPosition = __qt_object->decorationPosition;
    int __d_return_value = __tmp_decorationPosition;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_setDecorationPosition_Position
(void* __this_nativeId,
 int decorationPosition0){
    QStyleOptionViewItem::Position __qt_decorationPosition0 = (QStyleOptionViewItem::Position) decorationPosition0;
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    __qt_object->decorationPosition = __qt_decorationPosition0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionViewItem_decorationAlignment
(void* __this_nativeId){
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    Qt::Alignment __tmp_decorationAlignment = __qt_object->decorationAlignment;
    int __d_return_value = __tmp_decorationAlignment;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_setDecorationAlignment_Alignment
(void* __this_nativeId,
 int decorationAlignment0){
    QFlags<Qt::AlignmentFlag> __qt_decorationAlignment0 = (QFlags<Qt::AlignmentFlag>) decorationAlignment0;
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    __qt_object->decorationAlignment = __qt_decorationAlignment0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionViewItem_displayAlignment
(void* __this_nativeId){
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    Qt::Alignment __tmp_displayAlignment = __qt_object->displayAlignment;
    int __d_return_value = __tmp_displayAlignment;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_setDisplayAlignment_Alignment
(void* __this_nativeId,
 int displayAlignment0){
    QFlags<Qt::AlignmentFlag> __qt_displayAlignment0 = (QFlags<Qt::AlignmentFlag>) displayAlignment0;
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    __qt_object->displayAlignment = __qt_displayAlignment0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionViewItem_textElideMode
(void* __this_nativeId){
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    Qt::TextElideMode __tmp_textElideMode = __qt_object->textElideMode;
    int __d_return_value = __tmp_textElideMode;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_setTextElideMode_TextElideMode
(void* __this_nativeId,
 int textElideMode0){
    Qt::TextElideMode __qt_textElideMode0 = (Qt::TextElideMode) textElideMode0;
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    __qt_object->textElideMode = __qt_textElideMode0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_decorationSize
(void* __this_nativeId,
 QSize * __d_return_value){
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    QSize __tmp_decorationSize = __qt_object->decorationSize;
    *__d_return_value = __tmp_decorationSize;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_setDecorationSize_QSize
(void* __this_nativeId,
 QSize decorationSize0){
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    __qt_object->decorationSize = decorationSize0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItem_font
(void* __this_nativeId){
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    QFont __tmp_font = __qt_object->font;
    void* __d_return_value = (void*) new QFont(__tmp_font);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_setFont_QFont
(void* __this_nativeId,
 void* font0){
    QFont  __qt_font0 = (QFont ) *(QFont *)font0;
    QStyleOptionViewItem_QtDShell *__qt_object = (QStyleOptionViewItem_QtDShell *) __this_nativeId;
    __qt_object->font = __qt_font0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItem_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionViewItem>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItem_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionViewItem>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItem_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionViewItem>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItem_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionViewItem>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionViewItem_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionViewItem>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionViewItem_placed_copy(void* orig, void* place) {
    const QStyleOptionViewItem_QtDShell&  __qt_orig = (const QStyleOptionViewItem_QtDShell& ) *(QStyleOptionViewItem_QtDShell *)orig;
    QStyleOptionViewItem *result = new (place) QStyleOptionViewItem (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionViewItem_native_copy(void* orig) {
    const QStyleOptionViewItem_QtDShell&  __qt_orig = (const QStyleOptionViewItem_QtDShell& ) *(QStyleOptionViewItem_QtDShell *)orig;
    QStyleOptionViewItem *result = new QStyleOptionViewItem (__qt_orig);
    return result;
}

