#include <QVariant>

#include "QAbstractTextDocumentLayout_Selection_shell.h"
#include <iostream>
#include <qabstracttextdocumentlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_Selection_delete(void* nativeId)
{
    delete (QAbstractTextDocumentLayout_Selection_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_Selection_destroy(void* nativeId)
{
    call_destructor((QAbstractTextDocumentLayout_Selection_QtDShell*)nativeId);
}

QAbstractTextDocumentLayout_Selection_QtDShell::QAbstractTextDocumentLayout_Selection_QtDShell()
    : QAbstractTextDocumentLayout::Selection()
{
}

QAbstractTextDocumentLayout_Selection_QtDShell::~QAbstractTextDocumentLayout_Selection_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_Selection_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QAbstractTextDocumentLayout_Selection::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_Selection_QAbstractTextDocumentLayout_Selection
()
{
    QAbstractTextDocumentLayout_Selection_QtDShell *__qt_this = new QAbstractTextDocumentLayout_Selection_QtDShell();
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_Selection_cursor
(void* __this_nativeId){
    QAbstractTextDocumentLayout_Selection_QtDShell *__qt_object = (QAbstractTextDocumentLayout_Selection_QtDShell *) __this_nativeId;
    QTextCursor __tmp_cursor = __qt_object->cursor;
    void* __d_return_value = (void*) new QTextCursor(__tmp_cursor);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_Selection_setCursor_QTextCursor
(void* __this_nativeId,
 void* cursor0){
    QTextCursor  __qt_cursor0 = (QTextCursor ) *(QTextCursor *)cursor0;
    QAbstractTextDocumentLayout_Selection_QtDShell *__qt_object = (QAbstractTextDocumentLayout_Selection_QtDShell *) __this_nativeId;
    __qt_object->cursor = __qt_cursor0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_Selection_format
(void* __this_nativeId){
    QAbstractTextDocumentLayout_Selection_QtDShell *__qt_object = (QAbstractTextDocumentLayout_Selection_QtDShell *) __this_nativeId;
    QTextCharFormat __tmp_format = __qt_object->format;
    void* __d_return_value = (void*) new QTextCharFormat(__tmp_format);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_Selection_setFormat_QTextCharFormat
(void* __this_nativeId,
 void* format0){
    QTextCharFormat  __qt_format0 = (QTextCharFormat ) *(QTextCharFormat *)format0;
    QAbstractTextDocumentLayout_Selection_QtDShell *__qt_object = (QAbstractTextDocumentLayout_Selection_QtDShell *) __this_nativeId;
    __qt_object->format = __qt_format0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QAbstractTextDocumentLayout_Selection_QTypeInfo_isComplex() { return (bool) QTypeInfo<QAbstractTextDocumentLayout::Selection>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractTextDocumentLayout_Selection_QTypeInfo_isStatic() { return (bool) QTypeInfo<QAbstractTextDocumentLayout::Selection>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractTextDocumentLayout_Selection_QTypeInfo_isLarge() { return (bool) QTypeInfo<QAbstractTextDocumentLayout::Selection>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractTextDocumentLayout_Selection_QTypeInfo_isPointer() { return (bool) QTypeInfo<QAbstractTextDocumentLayout::Selection>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractTextDocumentLayout_Selection_QTypeInfo_isDummy() { return (bool) QTypeInfo<QAbstractTextDocumentLayout::Selection>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_Selection_placed_copy(void* orig, void* place) {
    const QAbstractTextDocumentLayout_Selection_QtDShell&  __qt_orig = (const QAbstractTextDocumentLayout_Selection_QtDShell& ) *(QAbstractTextDocumentLayout_Selection_QtDShell *)orig;
    QAbstractTextDocumentLayout::Selection *result = new (place) QAbstractTextDocumentLayout::Selection (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_Selection_native_copy(void* orig) {
    const QAbstractTextDocumentLayout_Selection_QtDShell&  __qt_orig = (const QAbstractTextDocumentLayout_Selection_QtDShell& ) *(QAbstractTextDocumentLayout_Selection_QtDShell *)orig;
    QAbstractTextDocumentLayout::Selection *result = new QAbstractTextDocumentLayout::Selection (__qt_orig);
    return result;
}

