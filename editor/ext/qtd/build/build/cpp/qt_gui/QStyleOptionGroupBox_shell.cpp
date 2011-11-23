#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionGroupBox_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_delete(void* nativeId)
{
    delete (QStyleOptionGroupBox_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_destroy(void* nativeId)
{
    call_destructor((QStyleOptionGroupBox_QtDShell*)nativeId);
}

QStyleOptionGroupBox_QtDShell::QStyleOptionGroupBox_QtDShell()
    : QStyleOptionGroupBox()
{
}

QStyleOptionGroupBox_QtDShell::QStyleOptionGroupBox_QtDShell(const QStyleOptionGroupBox&  other0)
    : QStyleOptionGroupBox(other0)
{
}

QStyleOptionGroupBox_QtDShell::QStyleOptionGroupBox_QtDShell(int  version0)
    : QStyleOptionGroupBox(version0)
{
}

QStyleOptionGroupBox_QtDShell::~QStyleOptionGroupBox_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionGroupBox::QStyleOptionGroupBox()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionGroupBox_QStyleOptionGroupBox
()
{
    QStyleOptionGroupBox_QtDShell *__qt_this = new QStyleOptionGroupBox_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionGroupBox::QStyleOptionGroupBox(const QStyleOptionGroupBox & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionGroupBox_QStyleOptionGroupBox_QStyleOptionGroupBox
(void* other0)
{
    const QStyleOptionGroupBox&  __qt_other0 = (const QStyleOptionGroupBox& ) *(QStyleOptionGroupBox *)other0;
    QStyleOptionGroupBox_QtDShell *__qt_this = new QStyleOptionGroupBox_QtDShell((const QStyleOptionGroupBox& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionGroupBox::QStyleOptionGroupBox(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionGroupBox_QStyleOptionGroupBox_int
(int version0)
{
    QStyleOptionGroupBox_QtDShell *__qt_this = new QStyleOptionGroupBox_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionGroupBox_lineWidth
(void* __this_nativeId){
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    int __tmp_lineWidth = __qt_object->lineWidth;
    int __d_return_value = __tmp_lineWidth;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_setLineWidth_int
(void* __this_nativeId,
 int lineWidth0){
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    __qt_object->lineWidth = lineWidth0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionGroupBox_features
(void* __this_nativeId){
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    QStyleOptionFrameV2::FrameFeatures __tmp_features = __qt_object->features;
    int __d_return_value = __tmp_features;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_setFeatures_FrameFeatures
(void* __this_nativeId,
 int features0){
    QFlags<QStyleOptionFrameV2::FrameFeature> __qt_features0 = (QFlags<QStyleOptionFrameV2::FrameFeature>) features0;
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    __qt_object->features = __qt_features0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionGroupBox_textAlignment
(void* __this_nativeId){
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    Qt::Alignment __tmp_textAlignment = __qt_object->textAlignment;
    int __d_return_value = __tmp_textAlignment;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_setTextAlignment_Alignment
(void* __this_nativeId,
 int textAlignment0){
    QFlags<Qt::AlignmentFlag> __qt_textAlignment0 = (QFlags<Qt::AlignmentFlag>) textAlignment0;
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    __qt_object->textAlignment = __qt_textAlignment0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionGroupBox_midLineWidth
(void* __this_nativeId){
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    int __tmp_midLineWidth = __qt_object->midLineWidth;
    int __d_return_value = __tmp_midLineWidth;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_setMidLineWidth_int
(void* __this_nativeId,
 int midLineWidth0){
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    __qt_object->midLineWidth = midLineWidth0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_text
(void* __this_nativeId,
 void* __d_return_value){
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    QString __tmp_text = __qt_object->text;
    qtd_toUtf8(__tmp_text.utf16(), __tmp_text.size(), __d_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_setText_string
(void* __this_nativeId,
 DArray text0){
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    __qt_object->text = __qt_text0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionGroupBox_textColor
(void* __this_nativeId){
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    QColor __tmp_textColor = __qt_object->textColor;
    void* __d_return_value = (void*) new QColor(__tmp_textColor);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_setTextColor_QColor
(void* __this_nativeId,
 void* textColor0){
    QColor  __qt_textColor0 = (QColor ) *(QColor *)textColor0;
    QStyleOptionGroupBox_QtDShell *__qt_object = (QStyleOptionGroupBox_QtDShell *) __this_nativeId;
    __qt_object->textColor = __qt_textColor0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionGroupBox_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionGroupBox>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionGroupBox_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionGroupBox>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionGroupBox_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionGroupBox>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionGroupBox_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionGroupBox>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionGroupBox_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionGroupBox>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGroupBox_placed_copy(void* orig, void* place) {
    const QStyleOptionGroupBox_QtDShell&  __qt_orig = (const QStyleOptionGroupBox_QtDShell& ) *(QStyleOptionGroupBox_QtDShell *)orig;
    QStyleOptionGroupBox *result = new (place) QStyleOptionGroupBox (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionGroupBox_native_copy(void* orig) {
    const QStyleOptionGroupBox_QtDShell&  __qt_orig = (const QStyleOptionGroupBox_QtDShell& ) *(QStyleOptionGroupBox_QtDShell *)orig;
    QStyleOptionGroupBox *result = new QStyleOptionGroupBox (__qt_orig);
    return result;
}

