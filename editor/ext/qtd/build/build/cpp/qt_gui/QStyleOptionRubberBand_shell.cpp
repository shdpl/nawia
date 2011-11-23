#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionRubberBand_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionRubberBand_delete(void* nativeId)
{
    delete (QStyleOptionRubberBand_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionRubberBand_destroy(void* nativeId)
{
    call_destructor((QStyleOptionRubberBand_QtDShell*)nativeId);
}

QStyleOptionRubberBand_QtDShell::QStyleOptionRubberBand_QtDShell()
    : QStyleOptionRubberBand()
{
}

QStyleOptionRubberBand_QtDShell::QStyleOptionRubberBand_QtDShell(const QStyleOptionRubberBand&  other0)
    : QStyleOptionRubberBand(other0)
{
}

QStyleOptionRubberBand_QtDShell::QStyleOptionRubberBand_QtDShell(int  version0)
    : QStyleOptionRubberBand(version0)
{
}

QStyleOptionRubberBand_QtDShell::~QStyleOptionRubberBand_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionRubberBand_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionRubberBand::QStyleOptionRubberBand()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionRubberBand_QStyleOptionRubberBand
()
{
    QStyleOptionRubberBand_QtDShell *__qt_this = new QStyleOptionRubberBand_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionRubberBand::QStyleOptionRubberBand(const QStyleOptionRubberBand & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionRubberBand_QStyleOptionRubberBand_QStyleOptionRubberBand
(void* other0)
{
    const QStyleOptionRubberBand&  __qt_other0 = (const QStyleOptionRubberBand& ) *(QStyleOptionRubberBand *)other0;
    QStyleOptionRubberBand_QtDShell *__qt_this = new QStyleOptionRubberBand_QtDShell((const QStyleOptionRubberBand& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionRubberBand::QStyleOptionRubberBand(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionRubberBand_QStyleOptionRubberBand_int
(int version0)
{
    QStyleOptionRubberBand_QtDShell *__qt_this = new QStyleOptionRubberBand_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionRubberBand_opaque
(void* __this_nativeId){
    QStyleOptionRubberBand_QtDShell *__qt_object = (QStyleOptionRubberBand_QtDShell *) __this_nativeId;
    bool __tmp_opaque = __qt_object->opaque;
    bool __d_return_value = __tmp_opaque;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionRubberBand_setOpaque_bool
(void* __this_nativeId,
 bool opaque0){
    QStyleOptionRubberBand_QtDShell *__qt_object = (QStyleOptionRubberBand_QtDShell *) __this_nativeId;
    __qt_object->opaque = opaque0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionRubberBand_shape
(void* __this_nativeId){
    QStyleOptionRubberBand_QtDShell *__qt_object = (QStyleOptionRubberBand_QtDShell *) __this_nativeId;
    QRubberBand::Shape __tmp_shape = __qt_object->shape;
    int __d_return_value = __tmp_shape;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionRubberBand_setShape_Shape
(void* __this_nativeId,
 int shape0){
    QRubberBand::Shape __qt_shape0 = (QRubberBand::Shape) shape0;
    QStyleOptionRubberBand_QtDShell *__qt_object = (QStyleOptionRubberBand_QtDShell *) __this_nativeId;
    __qt_object->shape = __qt_shape0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionRubberBand_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionRubberBand>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionRubberBand_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionRubberBand>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionRubberBand_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionRubberBand>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionRubberBand_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionRubberBand>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionRubberBand_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionRubberBand>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionRubberBand_placed_copy(void* orig, void* place) {
    const QStyleOptionRubberBand_QtDShell&  __qt_orig = (const QStyleOptionRubberBand_QtDShell& ) *(QStyleOptionRubberBand_QtDShell *)orig;
    QStyleOptionRubberBand *result = new (place) QStyleOptionRubberBand (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionRubberBand_native_copy(void* orig) {
    const QStyleOptionRubberBand_QtDShell&  __qt_orig = (const QStyleOptionRubberBand_QtDShell& ) *(QStyleOptionRubberBand_QtDShell *)orig;
    QStyleOptionRubberBand *result = new QStyleOptionRubberBand (__qt_orig);
    return result;
}

