#include <QPainterPath>
#include <QVariant>

#include "QPainterPath_Element_shell.h"
#include <iostream>
#include <QPainterPath>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_Element_delete(void* nativeId)
{
    delete (QPainterPath_Element_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_Element_destroy(void* nativeId)
{
    call_destructor((QPainterPath_Element_QtDShell*)nativeId);
}

QPainterPath_Element_QtDShell::QPainterPath_Element_QtDShell()
    : QPainterPath::Element()
{
}

QPainterPath_Element_QtDShell::~QPainterPath_Element_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_Element_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QPainterPath_Element::()
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_Element_QPainterPath_Element
()
{
    QPainterPath_Element_QtDShell *__qt_this = new QPainterPath_Element_QtDShell();
    return (void *) __qt_this;

}

// QPainterPath_Element::isCurveTo() const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_Element_isCurveTo_const
(void* __this_nativeId)
{
    QPainterPath_Element_QtDShell *__qt_this = (QPainterPath_Element_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCurveTo();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath_Element::isLineTo() const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_Element_isLineTo_const
(void* __this_nativeId)
{
    QPainterPath_Element_QtDShell *__qt_this = (QPainterPath_Element_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isLineTo();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath_Element::isMoveTo() const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_Element_isMoveTo_const
(void* __this_nativeId)
{
    QPainterPath_Element_QtDShell *__qt_this = (QPainterPath_Element_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isMoveTo();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath_Element::operator==(const QPainterPath::Element & e) const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_Element_operator_equal_QPainterPath_Element_const
(void* __this_nativeId,
 void* e0)
{
    const QPainterPath::Element&  __qt_e0 = (const QPainterPath::Element& ) *(QPainterPath::Element *)e0;
    QPainterPath_Element_QtDShell *__qt_this = (QPainterPath_Element_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QPainterPath::Element& )__qt_e0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT double qtd_QPainterPath_Element_x
(void* __this_nativeId){
    QPainterPath_Element_QtDShell *__qt_object = (QPainterPath_Element_QtDShell *) __this_nativeId;
    double __tmp_x = __qt_object->x;
    double __d_return_value = __tmp_x;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT double qtd_QPainterPath_Element_y
(void* __this_nativeId){
    QPainterPath_Element_QtDShell *__qt_object = (QPainterPath_Element_QtDShell *) __this_nativeId;
    double __tmp_y = __qt_object->y;
    double __d_return_value = __tmp_y;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT int qtd_QPainterPath_Element_type
(void* __this_nativeId){
    QPainterPath_Element_QtDShell *__qt_object = (QPainterPath_Element_QtDShell *) __this_nativeId;
    QPainterPath::ElementType __tmp_type = __qt_object->type;
    int __d_return_value = __tmp_type;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_Element_QTypeInfo_isComplex() { return (bool) QTypeInfo<QPainterPath::Element>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_Element_QTypeInfo_isStatic() { return (bool) QTypeInfo<QPainterPath::Element>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_Element_QTypeInfo_isLarge() { return (bool) QTypeInfo<QPainterPath::Element>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_Element_QTypeInfo_isPointer() { return (bool) QTypeInfo<QPainterPath::Element>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_Element_QTypeInfo_isDummy() { return (bool) QTypeInfo<QPainterPath::Element>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_Element_placed_copy(void* orig, void* place) {
    const QPainterPath_Element_QtDShell&  __qt_orig = (const QPainterPath_Element_QtDShell& ) *(QPainterPath_Element_QtDShell *)orig;
    QPainterPath::Element *result = new (place) QPainterPath::Element (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_Element_native_copy(void* orig) {
    const QPainterPath_Element_QtDShell&  __qt_orig = (const QPainterPath_Element_QtDShell& ) *(QPainterPath_Element_QtDShell *)orig;
    QPainterPath::Element *result = new QPainterPath::Element (__qt_orig);
    return result;
}

