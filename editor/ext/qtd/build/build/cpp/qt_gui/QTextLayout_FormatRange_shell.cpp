#include <QVariant>

#include "QTextLayout_FormatRange_shell.h"
#include <iostream>
#include <QTextLayout>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_FormatRange_delete(void* nativeId)
{
    delete (QTextLayout_FormatRange_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_FormatRange_destroy(void* nativeId)
{
    call_destructor((QTextLayout_FormatRange_QtDShell*)nativeId);
}

QTextLayout_FormatRange_QtDShell::QTextLayout_FormatRange_QtDShell()
    : QTextLayout::FormatRange()
{
}

QTextLayout_FormatRange_QtDShell::~QTextLayout_FormatRange_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_FormatRange_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextLayout_FormatRange::()
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_FormatRange_QTextLayout_FormatRange
()
{
    QTextLayout_FormatRange_QtDShell *__qt_this = new QTextLayout_FormatRange_QtDShell();
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_FormatRange_format
(void* __this_nativeId){
    QTextLayout_FormatRange_QtDShell *__qt_object = (QTextLayout_FormatRange_QtDShell *) __this_nativeId;
    QTextCharFormat __tmp_format = __qt_object->format;
    void* __d_return_value = (void*) new QTextCharFormat(__tmp_format);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_FormatRange_setFormat_QTextCharFormat
(void* __this_nativeId,
 void* format0){
    QTextCharFormat  __qt_format0 = (QTextCharFormat ) *(QTextCharFormat *)format0;
    QTextLayout_FormatRange_QtDShell *__qt_object = (QTextLayout_FormatRange_QtDShell *) __this_nativeId;
    __qt_object->format = __qt_format0;
}

QTD_EXTERN QTD_EXPORT int qtd_QTextLayout_FormatRange_length
(void* __this_nativeId){
    QTextLayout_FormatRange_QtDShell *__qt_object = (QTextLayout_FormatRange_QtDShell *) __this_nativeId;
    int __tmp_length = __qt_object->length;
    int __d_return_value = __tmp_length;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_FormatRange_setLength_int
(void* __this_nativeId,
 int length0){
    QTextLayout_FormatRange_QtDShell *__qt_object = (QTextLayout_FormatRange_QtDShell *) __this_nativeId;
    __qt_object->length = length0;
}

QTD_EXTERN QTD_EXPORT int qtd_QTextLayout_FormatRange_start
(void* __this_nativeId){
    QTextLayout_FormatRange_QtDShell *__qt_object = (QTextLayout_FormatRange_QtDShell *) __this_nativeId;
    int __tmp_start = __qt_object->start;
    int __d_return_value = __tmp_start;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_FormatRange_setStart_int
(void* __this_nativeId,
 int start0){
    QTextLayout_FormatRange_QtDShell *__qt_object = (QTextLayout_FormatRange_QtDShell *) __this_nativeId;
    __qt_object->start = start0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QTextLayout_FormatRange_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextLayout::FormatRange>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLayout_FormatRange_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextLayout::FormatRange>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLayout_FormatRange_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextLayout::FormatRange>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLayout_FormatRange_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextLayout::FormatRange>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLayout_FormatRange_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextLayout::FormatRange>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_FormatRange_placed_copy(void* orig, void* place) {
    const QTextLayout_FormatRange_QtDShell&  __qt_orig = (const QTextLayout_FormatRange_QtDShell& ) *(QTextLayout_FormatRange_QtDShell *)orig;
    QTextLayout::FormatRange *result = new (place) QTextLayout::FormatRange (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_FormatRange_native_copy(void* orig) {
    const QTextLayout_FormatRange_QtDShell&  __qt_orig = (const QTextLayout_FormatRange_QtDShell& ) *(QTextLayout_FormatRange_QtDShell *)orig;
    QTextLayout::FormatRange *result = new QTextLayout::FormatRange (__qt_orig);
    return result;
}

