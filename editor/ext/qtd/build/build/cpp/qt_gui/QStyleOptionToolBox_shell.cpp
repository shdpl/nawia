#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionToolBox_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBox_delete(void* nativeId)
{
    delete (QStyleOptionToolBox_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBox_destroy(void* nativeId)
{
    call_destructor((QStyleOptionToolBox_QtDShell*)nativeId);
}

QStyleOptionToolBox_QtDShell::QStyleOptionToolBox_QtDShell()
    : QStyleOptionToolBox()
{
}

QStyleOptionToolBox_QtDShell::QStyleOptionToolBox_QtDShell(const QStyleOptionToolBox&  other0)
    : QStyleOptionToolBox(other0)
{
}

QStyleOptionToolBox_QtDShell::QStyleOptionToolBox_QtDShell(int  version0)
    : QStyleOptionToolBox(version0)
{
}

QStyleOptionToolBox_QtDShell::~QStyleOptionToolBox_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBox_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionToolBox::QStyleOptionToolBox()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBox_QStyleOptionToolBox
()
{
    QStyleOptionToolBox_QtDShell *__qt_this = new QStyleOptionToolBox_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionToolBox::QStyleOptionToolBox(const QStyleOptionToolBox & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBox_QStyleOptionToolBox_QStyleOptionToolBox
(void* other0)
{
    const QStyleOptionToolBox&  __qt_other0 = (const QStyleOptionToolBox& ) *(QStyleOptionToolBox *)other0;
    QStyleOptionToolBox_QtDShell *__qt_this = new QStyleOptionToolBox_QtDShell((const QStyleOptionToolBox& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionToolBox::QStyleOptionToolBox(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBox_QStyleOptionToolBox_int
(int version0)
{
    QStyleOptionToolBox_QtDShell *__qt_this = new QStyleOptionToolBox_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBox_icon
(void* __this_nativeId){
    QStyleOptionToolBox_QtDShell *__qt_object = (QStyleOptionToolBox_QtDShell *) __this_nativeId;
    QIcon __tmp_icon = __qt_object->icon;
    void* __d_return_value = (void*) new QIcon(__tmp_icon);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBox_setIcon_QIcon
(void* __this_nativeId,
 void* icon0){
    QIcon  __qt_icon0 = (QIcon ) *(QIcon *)icon0;
    QStyleOptionToolBox_QtDShell *__qt_object = (QStyleOptionToolBox_QtDShell *) __this_nativeId;
    __qt_object->icon = __qt_icon0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBox_text
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionToolBox_QtDShell *__qt_object = (QStyleOptionToolBox_QtDShell *) __this_nativeId;
    QString __tmp_text = __qt_object->text;
    qtd_toUtf8(__tmp_text.utf16(), __tmp_text.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBox_setText_string
(void* __this_nativeId,
 DArray text0){
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStyleOptionToolBox_QtDShell *__qt_object = (QStyleOptionToolBox_QtDShell *) __this_nativeId;
    __qt_object->text = __qt_text0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBox_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionToolBox>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBox_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionToolBox>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBox_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionToolBox>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBox_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionToolBox>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBox_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionToolBox>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBox_placed_copy(void* orig, void* place) {
    const QStyleOptionToolBox_QtDShell&  __qt_orig = (const QStyleOptionToolBox_QtDShell& ) *(QStyleOptionToolBox_QtDShell *)orig;
    QStyleOptionToolBox *result = new (place) QStyleOptionToolBox (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBox_native_copy(void* orig) {
    const QStyleOptionToolBox_QtDShell&  __qt_orig = (const QStyleOptionToolBox_QtDShell& ) *(QStyleOptionToolBox_QtDShell *)orig;
    QStyleOptionToolBox *result = new QStyleOptionToolBox (__qt_orig);
    return result;
}

