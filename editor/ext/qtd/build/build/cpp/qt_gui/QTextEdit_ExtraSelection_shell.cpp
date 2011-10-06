#include <QVariant>

#include "QTextEdit_ExtraSelection_shell.h"
#include <iostream>
#include <QTextEdit>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_ExtraSelection_delete(void* nativeId)
{
    delete (QTextEdit_ExtraSelection_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_ExtraSelection_destroy(void* nativeId)
{
    call_destructor((QTextEdit_ExtraSelection_QtDShell*)nativeId);
}

QTextEdit_ExtraSelection_QtDShell::QTextEdit_ExtraSelection_QtDShell()
    : QTextEdit::ExtraSelection()
{
}

QTextEdit_ExtraSelection_QtDShell::~QTextEdit_ExtraSelection_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_ExtraSelection_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextEdit_ExtraSelection::()
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_ExtraSelection_QTextEdit_ExtraSelection
()
{
    QTextEdit_ExtraSelection_QtDShell *__qt_this = new QTextEdit_ExtraSelection_QtDShell();
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_ExtraSelection_cursor
(void* __this_nativeId){
    QTextEdit_ExtraSelection_QtDShell *__qt_object = (QTextEdit_ExtraSelection_QtDShell *) __this_nativeId;
    QTextCursor __tmp_cursor = __qt_object->cursor;
    void* __d_return_value = (void*) new QTextCursor(__tmp_cursor);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_ExtraSelection_setCursor_QTextCursor
(void* __this_nativeId,
 void* cursor0){
    QTextCursor  __qt_cursor0 = (QTextCursor ) *(QTextCursor *)cursor0;
    QTextEdit_ExtraSelection_QtDShell *__qt_object = (QTextEdit_ExtraSelection_QtDShell *) __this_nativeId;
    __qt_object->cursor = __qt_cursor0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_ExtraSelection_format
(void* __this_nativeId){
    QTextEdit_ExtraSelection_QtDShell *__qt_object = (QTextEdit_ExtraSelection_QtDShell *) __this_nativeId;
    QTextCharFormat __tmp_format = __qt_object->format;
    void* __d_return_value = (void*) new QTextCharFormat(__tmp_format);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_ExtraSelection_setFormat_QTextCharFormat
(void* __this_nativeId,
 void* format0){
    QTextCharFormat  __qt_format0 = (QTextCharFormat ) *(QTextCharFormat *)format0;
    QTextEdit_ExtraSelection_QtDShell *__qt_object = (QTextEdit_ExtraSelection_QtDShell *) __this_nativeId;
    __qt_object->format = __qt_format0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_ExtraSelection_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextEdit::ExtraSelection>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_ExtraSelection_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextEdit::ExtraSelection>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_ExtraSelection_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextEdit::ExtraSelection>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_ExtraSelection_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextEdit::ExtraSelection>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_ExtraSelection_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextEdit::ExtraSelection>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_ExtraSelection_placed_copy(void* orig, void* place) {
    const QTextEdit_ExtraSelection_QtDShell&  __qt_orig = (const QTextEdit_ExtraSelection_QtDShell& ) *(QTextEdit_ExtraSelection_QtDShell *)orig;
    QTextEdit::ExtraSelection *result = new (place) QTextEdit::ExtraSelection (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_ExtraSelection_native_copy(void* orig) {
    const QTextEdit_ExtraSelection_QtDShell&  __qt_orig = (const QTextEdit_ExtraSelection_QtDShell& ) *(QTextEdit_ExtraSelection_QtDShell *)orig;
    QTextEdit::ExtraSelection *result = new QTextEdit::ExtraSelection (__qt_orig);
    return result;
}

