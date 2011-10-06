#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionComboBox_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_delete(void* nativeId)
{
    delete (QStyleOptionComboBox_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_destroy(void* nativeId)
{
    call_destructor((QStyleOptionComboBox_QtDShell*)nativeId);
}

QStyleOptionComboBox_QtDShell::QStyleOptionComboBox_QtDShell()
    : QStyleOptionComboBox()
{
}

QStyleOptionComboBox_QtDShell::QStyleOptionComboBox_QtDShell(const QStyleOptionComboBox&  other0)
    : QStyleOptionComboBox(other0)
{
}

QStyleOptionComboBox_QtDShell::QStyleOptionComboBox_QtDShell(int  version0)
    : QStyleOptionComboBox(version0)
{
}

QStyleOptionComboBox_QtDShell::~QStyleOptionComboBox_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionComboBox::QStyleOptionComboBox()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionComboBox_QStyleOptionComboBox
()
{
    QStyleOptionComboBox_QtDShell *__qt_this = new QStyleOptionComboBox_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionComboBox::QStyleOptionComboBox(const QStyleOptionComboBox & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionComboBox_QStyleOptionComboBox_QStyleOptionComboBox
(void* other0)
{
    const QStyleOptionComboBox&  __qt_other0 = (const QStyleOptionComboBox& ) *(QStyleOptionComboBox *)other0;
    QStyleOptionComboBox_QtDShell *__qt_this = new QStyleOptionComboBox_QtDShell((const QStyleOptionComboBox& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionComboBox::QStyleOptionComboBox(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionComboBox_QStyleOptionComboBox_int
(int version0)
{
    QStyleOptionComboBox_QtDShell *__qt_this = new QStyleOptionComboBox_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_currentText
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    QString __tmp_currentText = __qt_object->currentText;
    qtd_toUtf8(__tmp_currentText.utf16(), __tmp_currentText.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_setCurrentText_string
(void* __this_nativeId,
 DArray currentText0){
    QString __qt_currentText0 = QString::fromUtf8((const char *)currentText0.ptr, currentText0.length);
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    __qt_object->currentText = __qt_currentText0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_iconSize
(void* __this_nativeId,
 QSize * __d_return_value){
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    QSize __tmp_iconSize = __qt_object->iconSize;
    *__d_return_value = __tmp_iconSize;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_setIconSize_QSize
(void* __this_nativeId,
 QSize iconSize0){
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    __qt_object->iconSize = iconSize0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComboBox_editable
(void* __this_nativeId){
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    bool __tmp_editable = __qt_object->editable;
    bool __d_return_value = __tmp_editable;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_setEditable_bool
(void* __this_nativeId,
 bool editable0){
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    __qt_object->editable = editable0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComboBox_frame
(void* __this_nativeId){
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    bool __tmp_frame = __qt_object->frame;
    bool __d_return_value = __tmp_frame;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_setFrame_bool
(void* __this_nativeId,
 bool frame0){
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    __qt_object->frame = frame0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_popupRect
(void* __this_nativeId,
 QRect * __d_return_value){
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    QRect __tmp_popupRect = __qt_object->popupRect;
    *__d_return_value = __tmp_popupRect;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_setPopupRect_QRect
(void* __this_nativeId,
 QRect popupRect0){
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    __qt_object->popupRect = popupRect0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionComboBox_currentIcon
(void* __this_nativeId){
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    QIcon __tmp_currentIcon = __qt_object->currentIcon;
    void* __d_return_value = (void*) new QIcon(__tmp_currentIcon);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_setCurrentIcon_QIcon
(void* __this_nativeId,
 void* currentIcon0){
    QIcon  __qt_currentIcon0 = (QIcon ) *(QIcon *)currentIcon0;
    QStyleOptionComboBox_QtDShell *__qt_object = (QStyleOptionComboBox_QtDShell *) __this_nativeId;
    __qt_object->currentIcon = __qt_currentIcon0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComboBox_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionComboBox>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComboBox_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionComboBox>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComboBox_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionComboBox>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComboBox_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionComboBox>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionComboBox_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionComboBox>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionComboBox_placed_copy(void* orig, void* place) {
    const QStyleOptionComboBox_QtDShell&  __qt_orig = (const QStyleOptionComboBox_QtDShell& ) *(QStyleOptionComboBox_QtDShell *)orig;
    QStyleOptionComboBox *result = new (place) QStyleOptionComboBox (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionComboBox_native_copy(void* orig) {
    const QStyleOptionComboBox_QtDShell&  __qt_orig = (const QStyleOptionComboBox_QtDShell& ) *(QStyleOptionComboBox_QtDShell *)orig;
    QStyleOptionComboBox *result = new QStyleOptionComboBox (__qt_orig);
    return result;
}

