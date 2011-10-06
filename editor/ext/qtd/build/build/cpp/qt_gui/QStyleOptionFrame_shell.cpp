#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionFrame_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrame_delete(void* nativeId)
{
    delete (QStyleOptionFrame_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrame_destroy(void* nativeId)
{
    call_destructor((QStyleOptionFrame_QtDShell*)nativeId);
}

QStyleOptionFrame_QtDShell::QStyleOptionFrame_QtDShell()
    : QStyleOptionFrame()
{
}

QStyleOptionFrame_QtDShell::QStyleOptionFrame_QtDShell(const QStyleOptionFrame&  other0)
    : QStyleOptionFrame(other0)
{
}

QStyleOptionFrame_QtDShell::QStyleOptionFrame_QtDShell(int  version0)
    : QStyleOptionFrame(version0)
{
}

QStyleOptionFrame_QtDShell::~QStyleOptionFrame_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrame_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionFrame::QStyleOptionFrame()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFrame_QStyleOptionFrame
()
{
    QStyleOptionFrame_QtDShell *__qt_this = new QStyleOptionFrame_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionFrame::QStyleOptionFrame(const QStyleOptionFrame & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFrame_QStyleOptionFrame_QStyleOptionFrame
(void* other0)
{
    const QStyleOptionFrame&  __qt_other0 = (const QStyleOptionFrame& ) *(QStyleOptionFrame *)other0;
    QStyleOptionFrame_QtDShell *__qt_this = new QStyleOptionFrame_QtDShell((const QStyleOptionFrame& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionFrame::QStyleOptionFrame(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFrame_QStyleOptionFrame_int
(int version0)
{
    QStyleOptionFrame_QtDShell *__qt_this = new QStyleOptionFrame_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionFrame_lineWidth
(void* __this_nativeId){
    QStyleOptionFrame_QtDShell *__qt_object = (QStyleOptionFrame_QtDShell *) __this_nativeId;
    int __tmp_lineWidth = __qt_object->lineWidth;
    int __d_return_value = __tmp_lineWidth;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrame_setLineWidth_int
(void* __this_nativeId,
 int lineWidth0){
    QStyleOptionFrame_QtDShell *__qt_object = (QStyleOptionFrame_QtDShell *) __this_nativeId;
    __qt_object->lineWidth = lineWidth0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionFrame_midLineWidth
(void* __this_nativeId){
    QStyleOptionFrame_QtDShell *__qt_object = (QStyleOptionFrame_QtDShell *) __this_nativeId;
    int __tmp_midLineWidth = __qt_object->midLineWidth;
    int __d_return_value = __tmp_midLineWidth;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrame_setMidLineWidth_int
(void* __this_nativeId,
 int midLineWidth0){
    QStyleOptionFrame_QtDShell *__qt_object = (QStyleOptionFrame_QtDShell *) __this_nativeId;
    __qt_object->midLineWidth = midLineWidth0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFrame_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionFrame>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFrame_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionFrame>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFrame_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionFrame>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFrame_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionFrame>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFrame_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionFrame>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFrame_placed_copy(void* orig, void* place) {
    const QStyleOptionFrame_QtDShell&  __qt_orig = (const QStyleOptionFrame_QtDShell& ) *(QStyleOptionFrame_QtDShell *)orig;
    QStyleOptionFrame *result = new (place) QStyleOptionFrame (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFrame_native_copy(void* orig) {
    const QStyleOptionFrame_QtDShell&  __qt_orig = (const QStyleOptionFrame_QtDShell& ) *(QStyleOptionFrame_QtDShell *)orig;
    QStyleOptionFrame *result = new QStyleOptionFrame (__qt_orig);
    return result;
}

