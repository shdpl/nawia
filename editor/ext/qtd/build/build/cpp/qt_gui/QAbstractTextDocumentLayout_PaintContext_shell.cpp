#include <QVariant>

#include "QAbstractTextDocumentLayout_PaintContext_shell.h"
#include <iostream>
#include <QAbstractTextDocumentLayout>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_PaintContext_delete(void* nativeId)
{
    delete (QAbstractTextDocumentLayout_PaintContext_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_PaintContext_destroy(void* nativeId)
{
    call_destructor((QAbstractTextDocumentLayout_PaintContext_QtDShell*)nativeId);
}

QAbstractTextDocumentLayout_PaintContext_QtDShell::QAbstractTextDocumentLayout_PaintContext_QtDShell()
    : QAbstractTextDocumentLayout::PaintContext()
{
}

QAbstractTextDocumentLayout_PaintContext_QtDShell::~QAbstractTextDocumentLayout_PaintContext_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_PaintContext_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QAbstractTextDocumentLayout_PaintContext::PaintContext()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_PaintContext_QAbstractTextDocumentLayout_PaintContext
()
{
    QAbstractTextDocumentLayout_PaintContext_QtDShell *__qt_this = new QAbstractTextDocumentLayout_PaintContext_QtDShell();
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_PaintContext_palette
(void* __this_nativeId){
    QAbstractTextDocumentLayout_PaintContext_QtDShell *__qt_object = (QAbstractTextDocumentLayout_PaintContext_QtDShell *) __this_nativeId;
    QPalette __tmp_palette = __qt_object->palette;
    void* __d_return_value = (void*) new QPalette(__tmp_palette);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_PaintContext_setPalette_QPalette
(void* __this_nativeId,
 void* palette0){
    QPalette  __qt_palette0 = (QPalette ) *(QPalette *)palette0;
    QAbstractTextDocumentLayout_PaintContext_QtDShell *__qt_object = (QAbstractTextDocumentLayout_PaintContext_QtDShell *) __this_nativeId;
    __qt_object->palette = __qt_palette0;
}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractTextDocumentLayout_PaintContext_cursorPosition
(void* __this_nativeId){
    QAbstractTextDocumentLayout_PaintContext_QtDShell *__qt_object = (QAbstractTextDocumentLayout_PaintContext_QtDShell *) __this_nativeId;
    int __tmp_cursorPosition = __qt_object->cursorPosition;
    int __d_return_value = __tmp_cursorPosition;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_PaintContext_setCursorPosition_int
(void* __this_nativeId,
 int cursorPosition0){
    QAbstractTextDocumentLayout_PaintContext_QtDShell *__qt_object = (QAbstractTextDocumentLayout_PaintContext_QtDShell *) __this_nativeId;
    __qt_object->cursorPosition = cursorPosition0;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_PaintContext_clip
(void* __this_nativeId,
 QRectF * __d_return_value){
    QAbstractTextDocumentLayout_PaintContext_QtDShell *__qt_object = (QAbstractTextDocumentLayout_PaintContext_QtDShell *) __this_nativeId;
    QRectF __tmp_clip = __qt_object->clip;
    *__d_return_value = __tmp_clip;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_PaintContext_setClip_QRectF
(void* __this_nativeId,
 QRectF clip0){
    QAbstractTextDocumentLayout_PaintContext_QtDShell *__qt_object = (QAbstractTextDocumentLayout_PaintContext_QtDShell *) __this_nativeId;
    __qt_object->clip = clip0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isComplex() { return (bool) QTypeInfo<QAbstractTextDocumentLayout::PaintContext>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isStatic() { return (bool) QTypeInfo<QAbstractTextDocumentLayout::PaintContext>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isLarge() { return (bool) QTypeInfo<QAbstractTextDocumentLayout::PaintContext>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isPointer() { return (bool) QTypeInfo<QAbstractTextDocumentLayout::PaintContext>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isDummy() { return (bool) QTypeInfo<QAbstractTextDocumentLayout::PaintContext>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_PaintContext_placed_copy(void* orig, void* place) {
    const QAbstractTextDocumentLayout_PaintContext_QtDShell&  __qt_orig = (const QAbstractTextDocumentLayout_PaintContext_QtDShell& ) *(QAbstractTextDocumentLayout_PaintContext_QtDShell *)orig;
    QAbstractTextDocumentLayout::PaintContext *result = new (place) QAbstractTextDocumentLayout::PaintContext (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_PaintContext_native_copy(void* orig) {
    const QAbstractTextDocumentLayout_PaintContext_QtDShell&  __qt_orig = (const QAbstractTextDocumentLayout_PaintContext_QtDShell& ) *(QAbstractTextDocumentLayout_PaintContext_QtDShell *)orig;
    QAbstractTextDocumentLayout::PaintContext *result = new QAbstractTextDocumentLayout::PaintContext (__qt_orig);
    return result;
}

