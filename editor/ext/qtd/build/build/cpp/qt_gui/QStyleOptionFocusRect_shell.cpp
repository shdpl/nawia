#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionFocusRect_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFocusRect_delete(void* nativeId)
{
    delete (QStyleOptionFocusRect_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFocusRect_destroy(void* nativeId)
{
    call_destructor((QStyleOptionFocusRect_QtDShell*)nativeId);
}

QStyleOptionFocusRect_QtDShell::QStyleOptionFocusRect_QtDShell()
    : QStyleOptionFocusRect()
{
}

QStyleOptionFocusRect_QtDShell::QStyleOptionFocusRect_QtDShell(const QStyleOptionFocusRect&  other0)
    : QStyleOptionFocusRect(other0)
{
}

QStyleOptionFocusRect_QtDShell::QStyleOptionFocusRect_QtDShell(int  version0)
    : QStyleOptionFocusRect(version0)
{
}

QStyleOptionFocusRect_QtDShell::~QStyleOptionFocusRect_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFocusRect_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionFocusRect::QStyleOptionFocusRect()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFocusRect_QStyleOptionFocusRect
()
{
    QStyleOptionFocusRect_QtDShell *__qt_this = new QStyleOptionFocusRect_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionFocusRect::QStyleOptionFocusRect(const QStyleOptionFocusRect & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFocusRect_QStyleOptionFocusRect_QStyleOptionFocusRect
(void* other0)
{
    const QStyleOptionFocusRect&  __qt_other0 = (const QStyleOptionFocusRect& ) *(QStyleOptionFocusRect *)other0;
    QStyleOptionFocusRect_QtDShell *__qt_this = new QStyleOptionFocusRect_QtDShell((const QStyleOptionFocusRect& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionFocusRect::QStyleOptionFocusRect(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFocusRect_QStyleOptionFocusRect_int
(int version0)
{
    QStyleOptionFocusRect_QtDShell *__qt_this = new QStyleOptionFocusRect_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFocusRect_backgroundColor
(void* __this_nativeId){
    QStyleOptionFocusRect_QtDShell *__qt_object = (QStyleOptionFocusRect_QtDShell *) __this_nativeId;
    QColor __tmp_backgroundColor = __qt_object->backgroundColor;
    void* __d_return_value = (void*) new QColor(__tmp_backgroundColor);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFocusRect_setBackgroundColor_QColor
(void* __this_nativeId,
 void* backgroundColor0){
    QColor  __qt_backgroundColor0 = (QColor ) *(QColor *)backgroundColor0;
    QStyleOptionFocusRect_QtDShell *__qt_object = (QStyleOptionFocusRect_QtDShell *) __this_nativeId;
    __qt_object->backgroundColor = __qt_backgroundColor0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFocusRect_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionFocusRect>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFocusRect_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionFocusRect>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFocusRect_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionFocusRect>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFocusRect_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionFocusRect>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionFocusRect_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionFocusRect>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionFocusRect_placed_copy(void* orig, void* place) {
    const QStyleOptionFocusRect_QtDShell&  __qt_orig = (const QStyleOptionFocusRect_QtDShell& ) *(QStyleOptionFocusRect_QtDShell *)orig;
    QStyleOptionFocusRect *result = new (place) QStyleOptionFocusRect (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionFocusRect_native_copy(void* orig) {
    const QStyleOptionFocusRect_QtDShell&  __qt_orig = (const QStyleOptionFocusRect_QtDShell& ) *(QStyleOptionFocusRect_QtDShell *)orig;
    QStyleOptionFocusRect *result = new QStyleOptionFocusRect (__qt_orig);
    return result;
}

