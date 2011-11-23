#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionTitleBar_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTitleBar_delete(void* nativeId)
{
    delete (QStyleOptionTitleBar_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTitleBar_destroy(void* nativeId)
{
    call_destructor((QStyleOptionTitleBar_QtDShell*)nativeId);
}

QStyleOptionTitleBar_QtDShell::QStyleOptionTitleBar_QtDShell()
    : QStyleOptionTitleBar()
{
}

QStyleOptionTitleBar_QtDShell::QStyleOptionTitleBar_QtDShell(const QStyleOptionTitleBar&  other0)
    : QStyleOptionTitleBar(other0)
{
}

QStyleOptionTitleBar_QtDShell::QStyleOptionTitleBar_QtDShell(int  version0)
    : QStyleOptionTitleBar(version0)
{
}

QStyleOptionTitleBar_QtDShell::~QStyleOptionTitleBar_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTitleBar_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionTitleBar::QStyleOptionTitleBar()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTitleBar_QStyleOptionTitleBar
()
{
    QStyleOptionTitleBar_QtDShell *__qt_this = new QStyleOptionTitleBar_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionTitleBar::QStyleOptionTitleBar(const QStyleOptionTitleBar & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTitleBar_QStyleOptionTitleBar_QStyleOptionTitleBar
(void* other0)
{
    const QStyleOptionTitleBar&  __qt_other0 = (const QStyleOptionTitleBar& ) *(QStyleOptionTitleBar *)other0;
    QStyleOptionTitleBar_QtDShell *__qt_this = new QStyleOptionTitleBar_QtDShell((const QStyleOptionTitleBar& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionTitleBar::QStyleOptionTitleBar(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTitleBar_QStyleOptionTitleBar_int
(int version0)
{
    QStyleOptionTitleBar_QtDShell *__qt_this = new QStyleOptionTitleBar_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTitleBar_titleBarFlags
(void* __this_nativeId){
    QStyleOptionTitleBar_QtDShell *__qt_object = (QStyleOptionTitleBar_QtDShell *) __this_nativeId;
    Qt::WindowFlags __tmp_titleBarFlags = __qt_object->titleBarFlags;
    int __d_return_value = __tmp_titleBarFlags;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTitleBar_setTitleBarFlags_WindowFlags
(void* __this_nativeId,
 int titleBarFlags0){
    QFlags<Qt::WindowType> __qt_titleBarFlags0 = (QFlags<Qt::WindowType>) titleBarFlags0;
    QStyleOptionTitleBar_QtDShell *__qt_object = (QStyleOptionTitleBar_QtDShell *) __this_nativeId;
    __qt_object->titleBarFlags = __qt_titleBarFlags0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTitleBar_icon
(void* __this_nativeId){
    QStyleOptionTitleBar_QtDShell *__qt_object = (QStyleOptionTitleBar_QtDShell *) __this_nativeId;
    QIcon __tmp_icon = __qt_object->icon;
    void* __d_return_value = (void*) new QIcon(__tmp_icon);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTitleBar_setIcon_QIcon
(void* __this_nativeId,
 void* icon0){
    QIcon  __qt_icon0 = (QIcon ) *(QIcon *)icon0;
    QStyleOptionTitleBar_QtDShell *__qt_object = (QStyleOptionTitleBar_QtDShell *) __this_nativeId;
    __qt_object->icon = __qt_icon0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTitleBar_text
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionTitleBar_QtDShell *__qt_object = (QStyleOptionTitleBar_QtDShell *) __this_nativeId;
    QString __tmp_text = __qt_object->text;
    qtd_toUtf8(__tmp_text.utf16(), __tmp_text.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTitleBar_setText_string
(void* __this_nativeId,
 DArray text0){
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStyleOptionTitleBar_QtDShell *__qt_object = (QStyleOptionTitleBar_QtDShell *) __this_nativeId;
    __qt_object->text = __qt_text0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTitleBar_titleBarState
(void* __this_nativeId){
    QStyleOptionTitleBar_QtDShell *__qt_object = (QStyleOptionTitleBar_QtDShell *) __this_nativeId;
    int __tmp_titleBarState = __qt_object->titleBarState;
    int __d_return_value = __tmp_titleBarState;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTitleBar_setTitleBarState_int
(void* __this_nativeId,
 int titleBarState0){
    QStyleOptionTitleBar_QtDShell *__qt_object = (QStyleOptionTitleBar_QtDShell *) __this_nativeId;
    __qt_object->titleBarState = titleBarState0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTitleBar_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionTitleBar>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTitleBar_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionTitleBar>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTitleBar_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionTitleBar>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTitleBar_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionTitleBar>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTitleBar_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionTitleBar>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTitleBar_placed_copy(void* orig, void* place) {
    const QStyleOptionTitleBar_QtDShell&  __qt_orig = (const QStyleOptionTitleBar_QtDShell& ) *(QStyleOptionTitleBar_QtDShell *)orig;
    QStyleOptionTitleBar *result = new (place) QStyleOptionTitleBar (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTitleBar_native_copy(void* orig) {
    const QStyleOptionTitleBar_QtDShell&  __qt_orig = (const QStyleOptionTitleBar_QtDShell& ) *(QStyleOptionTitleBar_QtDShell *)orig;
    QStyleOptionTitleBar *result = new QStyleOptionTitleBar (__qt_orig);
    return result;
}

