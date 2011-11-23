#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionProgressBar_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_delete(void* nativeId)
{
    delete (QStyleOptionProgressBar_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_destroy(void* nativeId)
{
    call_destructor((QStyleOptionProgressBar_QtDShell*)nativeId);
}

QStyleOptionProgressBar_QtDShell::QStyleOptionProgressBar_QtDShell()
    : QStyleOptionProgressBar()
{
}

QStyleOptionProgressBar_QtDShell::QStyleOptionProgressBar_QtDShell(const QStyleOptionProgressBar&  other0)
    : QStyleOptionProgressBar(other0)
{
}

QStyleOptionProgressBar_QtDShell::QStyleOptionProgressBar_QtDShell(int  version0)
    : QStyleOptionProgressBar(version0)
{
}

QStyleOptionProgressBar_QtDShell::~QStyleOptionProgressBar_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionProgressBar::QStyleOptionProgressBar()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionProgressBar_QStyleOptionProgressBar
()
{
    QStyleOptionProgressBar_QtDShell *__qt_this = new QStyleOptionProgressBar_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionProgressBar::QStyleOptionProgressBar(const QStyleOptionProgressBar & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionProgressBar_QStyleOptionProgressBar_QStyleOptionProgressBar
(void* other0)
{
    const QStyleOptionProgressBar&  __qt_other0 = (const QStyleOptionProgressBar& ) *(QStyleOptionProgressBar *)other0;
    QStyleOptionProgressBar_QtDShell *__qt_this = new QStyleOptionProgressBar_QtDShell((const QStyleOptionProgressBar& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionProgressBar::QStyleOptionProgressBar(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionProgressBar_QStyleOptionProgressBar_int
(int version0)
{
    QStyleOptionProgressBar_QtDShell *__qt_this = new QStyleOptionProgressBar_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionProgressBar_minimum
(void* __this_nativeId){
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    int __tmp_minimum = __qt_object->minimum;
    int __d_return_value = __tmp_minimum;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_setMinimum_int
(void* __this_nativeId,
 int minimum0){
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    __qt_object->minimum = minimum0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionProgressBar_maximum
(void* __this_nativeId){
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    int __tmp_maximum = __qt_object->maximum;
    int __d_return_value = __tmp_maximum;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_setMaximum_int
(void* __this_nativeId,
 int maximum0){
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    __qt_object->maximum = maximum0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionProgressBar_progress
(void* __this_nativeId){
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    int __tmp_progress = __qt_object->progress;
    int __d_return_value = __tmp_progress;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_setProgress_int
(void* __this_nativeId,
 int progress0){
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    __qt_object->progress = progress0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionProgressBar_textAlignment
(void* __this_nativeId){
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    Qt::Alignment __tmp_textAlignment = __qt_object->textAlignment;
    int __d_return_value = __tmp_textAlignment;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_setTextAlignment_Alignment
(void* __this_nativeId,
 int textAlignment0){
    QFlags<Qt::AlignmentFlag> __qt_textAlignment0 = (QFlags<Qt::AlignmentFlag>) textAlignment0;
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    __qt_object->textAlignment = __qt_textAlignment0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_text
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    QString __tmp_text = __qt_object->text;
    qtd_toUtf8(__tmp_text.utf16(), __tmp_text.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_setText_string
(void* __this_nativeId,
 DArray text0){
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    __qt_object->text = __qt_text0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBar_textVisible
(void* __this_nativeId){
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    bool __tmp_textVisible = __qt_object->textVisible;
    bool __d_return_value = __tmp_textVisible;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_setTextVisible_bool
(void* __this_nativeId,
 bool textVisible0){
    QStyleOptionProgressBar_QtDShell *__qt_object = (QStyleOptionProgressBar_QtDShell *) __this_nativeId;
    __qt_object->textVisible = textVisible0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBar_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionProgressBar>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBar_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionProgressBar>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBar_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionProgressBar>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBar_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionProgressBar>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionProgressBar_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionProgressBar>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionProgressBar_placed_copy(void* orig, void* place) {
    const QStyleOptionProgressBar_QtDShell&  __qt_orig = (const QStyleOptionProgressBar_QtDShell& ) *(QStyleOptionProgressBar_QtDShell *)orig;
    QStyleOptionProgressBar *result = new (place) QStyleOptionProgressBar (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionProgressBar_native_copy(void* orig) {
    const QStyleOptionProgressBar_QtDShell&  __qt_orig = (const QStyleOptionProgressBar_QtDShell& ) *(QStyleOptionProgressBar_QtDShell *)orig;
    QStyleOptionProgressBar *result = new QStyleOptionProgressBar (__qt_orig);
    return result;
}

