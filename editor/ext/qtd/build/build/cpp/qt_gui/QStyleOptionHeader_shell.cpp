#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionHeader_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_delete(void* nativeId)
{
    delete (QStyleOptionHeader_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_destroy(void* nativeId)
{
    call_destructor((QStyleOptionHeader_QtDShell*)nativeId);
}

QStyleOptionHeader_QtDShell::QStyleOptionHeader_QtDShell()
    : QStyleOptionHeader()
{
}

QStyleOptionHeader_QtDShell::QStyleOptionHeader_QtDShell(const QStyleOptionHeader&  other0)
    : QStyleOptionHeader(other0)
{
}

QStyleOptionHeader_QtDShell::QStyleOptionHeader_QtDShell(int  version0)
    : QStyleOptionHeader(version0)
{
}

QStyleOptionHeader_QtDShell::~QStyleOptionHeader_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionHeader::QStyleOptionHeader()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionHeader_QStyleOptionHeader
()
{
    QStyleOptionHeader_QtDShell *__qt_this = new QStyleOptionHeader_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionHeader::QStyleOptionHeader(const QStyleOptionHeader & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionHeader_QStyleOptionHeader_QStyleOptionHeader
(void* other0)
{
    const QStyleOptionHeader&  __qt_other0 = (const QStyleOptionHeader& ) *(QStyleOptionHeader *)other0;
    QStyleOptionHeader_QtDShell *__qt_this = new QStyleOptionHeader_QtDShell((const QStyleOptionHeader& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionHeader::QStyleOptionHeader(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionHeader_QStyleOptionHeader_int
(int version0)
{
    QStyleOptionHeader_QtDShell *__qt_this = new QStyleOptionHeader_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionHeader_section
(void* __this_nativeId){
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    int __tmp_section = __qt_object->section;
    int __d_return_value = __tmp_section;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_setSection_int
(void* __this_nativeId,
 int section0){
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    __qt_object->section = section0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionHeader_sortIndicator
(void* __this_nativeId){
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    QStyleOptionHeader::SortIndicator __tmp_sortIndicator = __qt_object->sortIndicator;
    int __d_return_value = __tmp_sortIndicator;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_setSortIndicator_SortIndicator
(void* __this_nativeId,
 int sortIndicator0){
    QStyleOptionHeader::SortIndicator __qt_sortIndicator0 = (QStyleOptionHeader::SortIndicator) sortIndicator0;
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    __qt_object->sortIndicator = __qt_sortIndicator0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionHeader_position
(void* __this_nativeId){
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    QStyleOptionHeader::SectionPosition __tmp_position = __qt_object->position;
    int __d_return_value = __tmp_position;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_setPosition_SectionPosition
(void* __this_nativeId,
 int position0){
    QStyleOptionHeader::SectionPosition __qt_position0 = (QStyleOptionHeader::SectionPosition) position0;
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    __qt_object->position = __qt_position0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionHeader_icon
(void* __this_nativeId){
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    QIcon __tmp_icon = __qt_object->icon;
    void* __d_return_value = (void*) new QIcon(__tmp_icon);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_setIcon_QIcon
(void* __this_nativeId,
 void* icon0){
    QIcon  __qt_icon0 = (QIcon ) *(QIcon *)icon0;
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    __qt_object->icon = __qt_icon0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionHeader_textAlignment
(void* __this_nativeId){
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    Qt::Alignment __tmp_textAlignment = __qt_object->textAlignment;
    int __d_return_value = __tmp_textAlignment;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_setTextAlignment_Alignment
(void* __this_nativeId,
 int textAlignment0){
    QFlags<Qt::AlignmentFlag> __qt_textAlignment0 = (QFlags<Qt::AlignmentFlag>) textAlignment0;
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    __qt_object->textAlignment = __qt_textAlignment0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_text
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    QString __tmp_text = __qt_object->text;
    qtd_toUtf8(__tmp_text.utf16(), __tmp_text.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_setText_string
(void* __this_nativeId,
 DArray text0){
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    __qt_object->text = __qt_text0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionHeader_selectedPosition
(void* __this_nativeId){
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    QStyleOptionHeader::SelectedPosition __tmp_selectedPosition = __qt_object->selectedPosition;
    int __d_return_value = __tmp_selectedPosition;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_setSelectedPosition_SelectedPosition
(void* __this_nativeId,
 int selectedPosition0){
    QStyleOptionHeader::SelectedPosition __qt_selectedPosition0 = (QStyleOptionHeader::SelectedPosition) selectedPosition0;
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    __qt_object->selectedPosition = __qt_selectedPosition0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionHeader_iconAlignment
(void* __this_nativeId){
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    Qt::Alignment __tmp_iconAlignment = __qt_object->iconAlignment;
    int __d_return_value = __tmp_iconAlignment;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_setIconAlignment_Alignment
(void* __this_nativeId,
 int iconAlignment0){
    QFlags<Qt::AlignmentFlag> __qt_iconAlignment0 = (QFlags<Qt::AlignmentFlag>) iconAlignment0;
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    __qt_object->iconAlignment = __qt_iconAlignment0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionHeader_orientation
(void* __this_nativeId){
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    Qt::Orientation __tmp_orientation = __qt_object->orientation;
    int __d_return_value = __tmp_orientation;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_setOrientation_Orientation
(void* __this_nativeId,
 int orientation0){
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QStyleOptionHeader_QtDShell *__qt_object = (QStyleOptionHeader_QtDShell *) __this_nativeId;
    __qt_object->orientation = __qt_orientation0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionHeader_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionHeader>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionHeader_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionHeader>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionHeader_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionHeader>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionHeader_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionHeader>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionHeader_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionHeader>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionHeader_placed_copy(void* orig, void* place) {
    const QStyleOptionHeader_QtDShell&  __qt_orig = (const QStyleOptionHeader_QtDShell& ) *(QStyleOptionHeader_QtDShell *)orig;
    QStyleOptionHeader *result = new (place) QStyleOptionHeader (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionHeader_native_copy(void* orig) {
    const QStyleOptionHeader_QtDShell&  __qt_orig = (const QStyleOptionHeader_QtDShell& ) *(QStyleOptionHeader_QtDShell *)orig;
    QStyleOptionHeader *result = new QStyleOptionHeader (__qt_orig);
    return result;
}

