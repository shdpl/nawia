#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionDockWidgetV2_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidgetV2_delete(void* nativeId)
{
    delete (QStyleOptionDockWidgetV2_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidgetV2_destroy(void* nativeId)
{
    call_destructor((QStyleOptionDockWidgetV2_QtDShell*)nativeId);
}

QStyleOptionDockWidgetV2_QtDShell::QStyleOptionDockWidgetV2_QtDShell()
    : QStyleOptionDockWidgetV2()
{
}

QStyleOptionDockWidgetV2_QtDShell::QStyleOptionDockWidgetV2_QtDShell(const QStyleOptionDockWidget&  other0)
    : QStyleOptionDockWidgetV2(other0)
{
}

QStyleOptionDockWidgetV2_QtDShell::QStyleOptionDockWidgetV2_QtDShell(const QStyleOptionDockWidgetV2&  other0)
    : QStyleOptionDockWidgetV2(other0)
{
}

QStyleOptionDockWidgetV2_QtDShell::QStyleOptionDockWidgetV2_QtDShell(int  version0)
    : QStyleOptionDockWidgetV2(version0)
{
}

QStyleOptionDockWidgetV2_QtDShell::~QStyleOptionDockWidgetV2_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidgetV2_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionDockWidgetV2::QStyleOptionDockWidgetV2()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2
()
{
    QStyleOptionDockWidgetV2_QtDShell *__qt_this = new QStyleOptionDockWidgetV2_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionDockWidgetV2::QStyleOptionDockWidgetV2(const QStyleOptionDockWidget & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2_QStyleOptionDockWidget
(void* other0)
{
    const QStyleOptionDockWidget&  __qt_other0 = (const QStyleOptionDockWidget& ) *(QStyleOptionDockWidget *)other0;
    QStyleOptionDockWidgetV2_QtDShell *__qt_this = new QStyleOptionDockWidgetV2_QtDShell((const QStyleOptionDockWidget& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionDockWidgetV2::QStyleOptionDockWidgetV2(const QStyleOptionDockWidgetV2 & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2
(void* other0)
{
    const QStyleOptionDockWidgetV2&  __qt_other0 = (const QStyleOptionDockWidgetV2& ) *(QStyleOptionDockWidgetV2 *)other0;
    QStyleOptionDockWidgetV2_QtDShell *__qt_this = new QStyleOptionDockWidgetV2_QtDShell((const QStyleOptionDockWidgetV2& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionDockWidgetV2::QStyleOptionDockWidgetV2(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2_int
(int version0)
{
    QStyleOptionDockWidgetV2_QtDShell *__qt_this = new QStyleOptionDockWidgetV2_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidgetV2_verticalTitleBar
(void* __this_nativeId){
    QStyleOptionDockWidgetV2_QtDShell *__qt_object = (QStyleOptionDockWidgetV2_QtDShell *) __this_nativeId;
    bool __tmp_verticalTitleBar = __qt_object->verticalTitleBar;
    bool __d_return_value = __tmp_verticalTitleBar;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidgetV2_setVerticalTitleBar_bool
(void* __this_nativeId,
 bool verticalTitleBar0){
    QStyleOptionDockWidgetV2_QtDShell *__qt_object = (QStyleOptionDockWidgetV2_QtDShell *) __this_nativeId;
    __qt_object->verticalTitleBar = verticalTitleBar0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidgetV2_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionDockWidgetV2>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidgetV2_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionDockWidgetV2>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidgetV2_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionDockWidgetV2>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidgetV2_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionDockWidgetV2>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidgetV2_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionDockWidgetV2>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidgetV2_placed_copy(void* orig, void* place) {
    const QStyleOptionDockWidgetV2_QtDShell&  __qt_orig = (const QStyleOptionDockWidgetV2_QtDShell& ) *(QStyleOptionDockWidgetV2_QtDShell *)orig;
    QStyleOptionDockWidgetV2 *result = new (place) QStyleOptionDockWidgetV2 (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionDockWidgetV2_native_copy(void* orig) {
    const QStyleOptionDockWidgetV2_QtDShell&  __qt_orig = (const QStyleOptionDockWidgetV2_QtDShell& ) *(QStyleOptionDockWidgetV2_QtDShell *)orig;
    QStyleOptionDockWidgetV2 *result = new QStyleOptionDockWidgetV2 (__qt_orig);
    return result;
}

