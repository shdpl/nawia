#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOption_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_delete(void* nativeId)
{
    delete (QStyleOption_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_destroy(void* nativeId)
{
    call_destructor((QStyleOption_QtDShell*)nativeId);
}

QStyleOption_QtDShell::QStyleOption_QtDShell(const QStyleOption&  other0)
    : QStyleOption(other0)
{
}

QStyleOption_QtDShell::QStyleOption_QtDShell(int  version0, int  type1)
    : QStyleOption(version0, type1)
{
}

QStyleOption_QtDShell::~QStyleOption_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOption::QStyleOption(const QStyleOption & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOption_QStyleOption_QStyleOption
(void* other0)
{
    const QStyleOption&  __qt_other0 = (const QStyleOption& ) *(QStyleOption *)other0;
    QStyleOption_QtDShell *__qt_this = new QStyleOption_QtDShell((const QStyleOption& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOption::QStyleOption(int version_, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOption_QStyleOption_int_int
(int version0,
 int type1)
{
    QStyleOption_QtDShell *__qt_this = new QStyleOption_QtDShell((int )version0, (int )type1);
    return (void *) __qt_this;

}

// QStyleOption::initFrom(const QWidget * w)
QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_initFrom_QWidget
(void* __this_nativeId,
 void* w0)
{
    const QWidget*  __qt_w0 = (const QWidget* ) w0;
    QStyleOption_QtDShell *__qt_this = (QStyleOption_QtDShell *) __this_nativeId;
    __qt_this->initFrom((const QWidget* )__qt_w0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOption_palette
(void* __this_nativeId){
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    QPalette __tmp_palette = __qt_object->palette;
    void* __d_return_value = (void*) new QPalette(__tmp_palette);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_setPalette_QPalette
(void* __this_nativeId,
 void* palette0){
    QPalette  __qt_palette0 = (QPalette ) *(QPalette *)palette0;
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    __qt_object->palette = __qt_palette0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOption_version_
(void* __this_nativeId){
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    int __tmp_version_ = __qt_object->version;
    int __d_return_value = __tmp_version_;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_version__int
(void* __this_nativeId,
 int version0){
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    __qt_object->version = version0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOption_direction
(void* __this_nativeId){
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    Qt::LayoutDirection __tmp_direction = __qt_object->direction;
    int __d_return_value = __tmp_direction;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_setDirection_LayoutDirection
(void* __this_nativeId,
 int direction0){
    Qt::LayoutDirection __qt_direction0 = (Qt::LayoutDirection) direction0;
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    __qt_object->direction = __qt_direction0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_rect
(void* __this_nativeId,
 QRect * __d_return_value){
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    QRect __tmp_rect = __qt_object->rect;
    *__d_return_value = __tmp_rect;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_setRect_QRect
(void* __this_nativeId,
 QRect rect0){
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    __qt_object->rect = rect0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOption_type
(void* __this_nativeId){
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    int __tmp_type = __qt_object->type;
    int __d_return_value = __tmp_type;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_setType_int
(void* __this_nativeId,
 int type0){
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    __qt_object->type = type0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOption_state
(void* __this_nativeId){
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    QStyle::State __tmp_state = __qt_object->state;
    int __d_return_value = __tmp_state;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_setState_State
(void* __this_nativeId,
 int state0){
    QFlags<QStyle::StateFlag> __qt_state0 = (QFlags<QStyle::StateFlag>) state0;
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    __qt_object->state = __qt_state0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOption_fontMetrics
(void* __this_nativeId){
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    QFontMetrics __tmp_fontMetrics = __qt_object->fontMetrics;
    void* __d_return_value = (void*) new QFontMetrics(__tmp_fontMetrics);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_setFontMetrics_QFontMetrics
(void* __this_nativeId,
 void* fontMetrics0){
    QFontMetrics  __qt_fontMetrics0 = (QFontMetrics ) *(QFontMetrics *)fontMetrics0;
    QStyleOption_QtDShell *__qt_object = (QStyleOption_QtDShell *) __this_nativeId;
    __qt_object->fontMetrics = __qt_fontMetrics0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOption_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOption>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOption_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOption>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOption_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOption>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOption_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOption>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOption_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOption>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOption_placed_copy(void* orig, void* place) {
    const QStyleOption_QtDShell&  __qt_orig = (const QStyleOption_QtDShell& ) *(QStyleOption_QtDShell *)orig;
    QStyleOption *result = new (place) QStyleOption (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOption_native_copy(void* orig) {
    const QStyleOption_QtDShell&  __qt_orig = (const QStyleOption_QtDShell& ) *(QStyleOption_QtDShell *)orig;
    QStyleOption *result = new QStyleOption (__qt_orig);
    return result;
}

