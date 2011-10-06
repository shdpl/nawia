#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionDockWidget_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidget_delete(void* nativeId)
{
    delete (QStyleOptionDockWidget_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidget_destroy(void* nativeId)
{
    call_destructor((QStyleOptionDockWidget_QtDShell*)nativeId);
}

QStyleOptionDockWidget_QtDShell::QStyleOptionDockWidget_QtDShell()
    : QStyleOptionDockWidget()
{
}

QStyleOptionDockWidget_QtDShell::QStyleOptionDockWidget_QtDShell(const QStyleOptionDockWidget&  other0)
    : QStyleOptionDockWidget(other0)
{
}

QStyleOptionDockWidget_QtDShell::QStyleOptionDockWidget_QtDShell(int  version0)
    : QStyleOptionDockWidget(version0)
{
}

QStyleOptionDockWidget_QtDShell::~QStyleOptionDockWidget_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidget_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionDockWidget::QStyleOptionDockWidget()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionDockWidget_QStyleOptionDockWidget
()
{
    QStyleOptionDockWidget_QtDShell *__qt_this = new QStyleOptionDockWidget_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionDockWidget::QStyleOptionDockWidget(const QStyleOptionDockWidget & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionDockWidget_QStyleOptionDockWidget_QStyleOptionDockWidget
(void* other0)
{
    const QStyleOptionDockWidget&  __qt_other0 = (const QStyleOptionDockWidget& ) *(QStyleOptionDockWidget *)other0;
    QStyleOptionDockWidget_QtDShell *__qt_this = new QStyleOptionDockWidget_QtDShell((const QStyleOptionDockWidget& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionDockWidget::QStyleOptionDockWidget(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionDockWidget_QStyleOptionDockWidget_int
(int version0)
{
    QStyleOptionDockWidget_QtDShell *__qt_this = new QStyleOptionDockWidget_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidget_title
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionDockWidget_QtDShell *__qt_object = (QStyleOptionDockWidget_QtDShell *) __this_nativeId;
    QString __tmp_title = __qt_object->title;
    qtd_toUtf8(__tmp_title.utf16(), __tmp_title.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidget_setTitle_string
(void* __this_nativeId,
 DArray title0){
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QStyleOptionDockWidget_QtDShell *__qt_object = (QStyleOptionDockWidget_QtDShell *) __this_nativeId;
    __qt_object->title = __qt_title0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidget_floatable
(void* __this_nativeId){
    QStyleOptionDockWidget_QtDShell *__qt_object = (QStyleOptionDockWidget_QtDShell *) __this_nativeId;
    bool __tmp_floatable = __qt_object->floatable;
    bool __d_return_value = __tmp_floatable;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidget_setFloatable_bool
(void* __this_nativeId,
 bool floatable0){
    QStyleOptionDockWidget_QtDShell *__qt_object = (QStyleOptionDockWidget_QtDShell *) __this_nativeId;
    __qt_object->floatable = floatable0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidget_closable
(void* __this_nativeId){
    QStyleOptionDockWidget_QtDShell *__qt_object = (QStyleOptionDockWidget_QtDShell *) __this_nativeId;
    bool __tmp_closable = __qt_object->closable;
    bool __d_return_value = __tmp_closable;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidget_setClosable_bool
(void* __this_nativeId,
 bool closable0){
    QStyleOptionDockWidget_QtDShell *__qt_object = (QStyleOptionDockWidget_QtDShell *) __this_nativeId;
    __qt_object->closable = closable0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidget_movable
(void* __this_nativeId){
    QStyleOptionDockWidget_QtDShell *__qt_object = (QStyleOptionDockWidget_QtDShell *) __this_nativeId;
    bool __tmp_movable = __qt_object->movable;
    bool __d_return_value = __tmp_movable;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidget_setMovable_bool
(void* __this_nativeId,
 bool movable0){
    QStyleOptionDockWidget_QtDShell *__qt_object = (QStyleOptionDockWidget_QtDShell *) __this_nativeId;
    __qt_object->movable = movable0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidget_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionDockWidget>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidget_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionDockWidget>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidget_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionDockWidget>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidget_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionDockWidget>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionDockWidget_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionDockWidget>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionDockWidget_placed_copy(void* orig, void* place) {
    const QStyleOptionDockWidget_QtDShell&  __qt_orig = (const QStyleOptionDockWidget_QtDShell& ) *(QStyleOptionDockWidget_QtDShell *)orig;
    QStyleOptionDockWidget *result = new (place) QStyleOptionDockWidget (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionDockWidget_native_copy(void* orig) {
    const QStyleOptionDockWidget_QtDShell&  __qt_orig = (const QStyleOptionDockWidget_QtDShell& ) *(QStyleOptionDockWidget_QtDShell *)orig;
    QStyleOptionDockWidget *result = new QStyleOptionDockWidget (__qt_orig);
    return result;
}

