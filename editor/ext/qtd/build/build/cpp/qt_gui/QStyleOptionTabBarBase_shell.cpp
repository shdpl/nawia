#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionTabBarBase_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabBarBase_delete(void* nativeId)
{
    delete (QStyleOptionTabBarBase_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabBarBase_destroy(void* nativeId)
{
    call_destructor((QStyleOptionTabBarBase_QtDShell*)nativeId);
}

QStyleOptionTabBarBase_QtDShell::QStyleOptionTabBarBase_QtDShell()
    : QStyleOptionTabBarBase()
{
}

QStyleOptionTabBarBase_QtDShell::QStyleOptionTabBarBase_QtDShell(const QStyleOptionTabBarBase&  other0)
    : QStyleOptionTabBarBase(other0)
{
}

QStyleOptionTabBarBase_QtDShell::QStyleOptionTabBarBase_QtDShell(int  version0)
    : QStyleOptionTabBarBase(version0)
{
}

QStyleOptionTabBarBase_QtDShell::~QStyleOptionTabBarBase_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabBarBase_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionTabBarBase::QStyleOptionTabBarBase()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabBarBase_QStyleOptionTabBarBase
()
{
    QStyleOptionTabBarBase_QtDShell *__qt_this = new QStyleOptionTabBarBase_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionTabBarBase::QStyleOptionTabBarBase(const QStyleOptionTabBarBase & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabBarBase_QStyleOptionTabBarBase_QStyleOptionTabBarBase
(void* other0)
{
    const QStyleOptionTabBarBase&  __qt_other0 = (const QStyleOptionTabBarBase& ) *(QStyleOptionTabBarBase *)other0;
    QStyleOptionTabBarBase_QtDShell *__qt_this = new QStyleOptionTabBarBase_QtDShell((const QStyleOptionTabBarBase& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionTabBarBase::QStyleOptionTabBarBase(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabBarBase_QStyleOptionTabBarBase_int
(int version0)
{
    QStyleOptionTabBarBase_QtDShell *__qt_this = new QStyleOptionTabBarBase_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabBarBase_selectedTabRect
(void* __this_nativeId,
 QRect * __d_return_value){
    QStyleOptionTabBarBase_QtDShell *__qt_object = (QStyleOptionTabBarBase_QtDShell *) __this_nativeId;
    QRect __tmp_selectedTabRect = __qt_object->selectedTabRect;
    *__d_return_value = __tmp_selectedTabRect;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabBarBase_setSelectedTabRect_QRect
(void* __this_nativeId,
 QRect selectedTabRect0){
    QStyleOptionTabBarBase_QtDShell *__qt_object = (QStyleOptionTabBarBase_QtDShell *) __this_nativeId;
    __qt_object->selectedTabRect = selectedTabRect0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTabBarBase_shape
(void* __this_nativeId){
    QStyleOptionTabBarBase_QtDShell *__qt_object = (QStyleOptionTabBarBase_QtDShell *) __this_nativeId;
    QTabBar::Shape __tmp_shape = __qt_object->shape;
    int __d_return_value = __tmp_shape;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabBarBase_setShape_Shape
(void* __this_nativeId,
 int shape0){
    QTabBar::Shape __qt_shape0 = (QTabBar::Shape) shape0;
    QStyleOptionTabBarBase_QtDShell *__qt_object = (QStyleOptionTabBarBase_QtDShell *) __this_nativeId;
    __qt_object->shape = __qt_shape0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabBarBase_tabBarRect
(void* __this_nativeId,
 QRect * __d_return_value){
    QStyleOptionTabBarBase_QtDShell *__qt_object = (QStyleOptionTabBarBase_QtDShell *) __this_nativeId;
    QRect __tmp_tabBarRect = __qt_object->tabBarRect;
    *__d_return_value = __tmp_tabBarRect;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabBarBase_setTabBarRect_QRect
(void* __this_nativeId,
 QRect tabBarRect0){
    QStyleOptionTabBarBase_QtDShell *__qt_object = (QStyleOptionTabBarBase_QtDShell *) __this_nativeId;
    __qt_object->tabBarRect = tabBarRect0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabBarBase_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionTabBarBase>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabBarBase_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionTabBarBase>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabBarBase_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionTabBarBase>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabBarBase_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionTabBarBase>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabBarBase_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionTabBarBase>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabBarBase_placed_copy(void* orig, void* place) {
    const QStyleOptionTabBarBase_QtDShell&  __qt_orig = (const QStyleOptionTabBarBase_QtDShell& ) *(QStyleOptionTabBarBase_QtDShell *)orig;
    QStyleOptionTabBarBase *result = new (place) QStyleOptionTabBarBase (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabBarBase_native_copy(void* orig) {
    const QStyleOptionTabBarBase_QtDShell&  __qt_orig = (const QStyleOptionTabBarBase_QtDShell& ) *(QStyleOptionTabBarBase_QtDShell *)orig;
    QStyleOptionTabBarBase *result = new QStyleOptionTabBarBase (__qt_orig);
    return result;
}

