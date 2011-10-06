#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionTabWidgetFrame_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_delete(void* nativeId)
{
    delete (QStyleOptionTabWidgetFrame_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_destroy(void* nativeId)
{
    call_destructor((QStyleOptionTabWidgetFrame_QtDShell*)nativeId);
}

QStyleOptionTabWidgetFrame_QtDShell::QStyleOptionTabWidgetFrame_QtDShell()
    : QStyleOptionTabWidgetFrame()
{
}

QStyleOptionTabWidgetFrame_QtDShell::QStyleOptionTabWidgetFrame_QtDShell(const QStyleOptionTabWidgetFrame&  other0)
    : QStyleOptionTabWidgetFrame(other0)
{
}

QStyleOptionTabWidgetFrame_QtDShell::QStyleOptionTabWidgetFrame_QtDShell(int  version0)
    : QStyleOptionTabWidgetFrame(version0)
{
}

QStyleOptionTabWidgetFrame_QtDShell::~QStyleOptionTabWidgetFrame_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionTabWidgetFrame::QStyleOptionTabWidgetFrame()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame
()
{
    QStyleOptionTabWidgetFrame_QtDShell *__qt_this = new QStyleOptionTabWidgetFrame_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionTabWidgetFrame::QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame
(void* other0)
{
    const QStyleOptionTabWidgetFrame&  __qt_other0 = (const QStyleOptionTabWidgetFrame& ) *(QStyleOptionTabWidgetFrame *)other0;
    QStyleOptionTabWidgetFrame_QtDShell *__qt_this = new QStyleOptionTabWidgetFrame_QtDShell((const QStyleOptionTabWidgetFrame& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionTabWidgetFrame::QStyleOptionTabWidgetFrame(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame_int
(int version0)
{
    QStyleOptionTabWidgetFrame_QtDShell *__qt_this = new QStyleOptionTabWidgetFrame_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTabWidgetFrame_lineWidth
(void* __this_nativeId){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    int __tmp_lineWidth = __qt_object->lineWidth;
    int __d_return_value = __tmp_lineWidth;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_setLineWidth_int
(void* __this_nativeId,
 int lineWidth0){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    __qt_object->lineWidth = lineWidth0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_rightCornerWidgetSize
(void* __this_nativeId,
 QSize * __d_return_value){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    QSize __tmp_rightCornerWidgetSize = __qt_object->rightCornerWidgetSize;
    *__d_return_value = __tmp_rightCornerWidgetSize;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_setRightCornerWidgetSize_QSize
(void* __this_nativeId,
 QSize rightCornerWidgetSize0){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    __qt_object->rightCornerWidgetSize = rightCornerWidgetSize0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_tabBarSize
(void* __this_nativeId,
 QSize * __d_return_value){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    QSize __tmp_tabBarSize = __qt_object->tabBarSize;
    *__d_return_value = __tmp_tabBarSize;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_setTabBarSize_QSize
(void* __this_nativeId,
 QSize tabBarSize0){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    __qt_object->tabBarSize = tabBarSize0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTabWidgetFrame_shape
(void* __this_nativeId){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    QTabBar::Shape __tmp_shape = __qt_object->shape;
    int __d_return_value = __tmp_shape;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_setShape_Shape
(void* __this_nativeId,
 int shape0){
    QTabBar::Shape __qt_shape0 = (QTabBar::Shape) shape0;
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    __qt_object->shape = __qt_shape0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionTabWidgetFrame_midLineWidth
(void* __this_nativeId){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    int __tmp_midLineWidth = __qt_object->midLineWidth;
    int __d_return_value = __tmp_midLineWidth;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_setMidLineWidth_int
(void* __this_nativeId,
 int midLineWidth0){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    __qt_object->midLineWidth = midLineWidth0;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_leftCornerWidgetSize
(void* __this_nativeId,
 QSize * __d_return_value){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    QSize __tmp_leftCornerWidgetSize = __qt_object->leftCornerWidgetSize;
    *__d_return_value = __tmp_leftCornerWidgetSize;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_setLeftCornerWidgetSize_QSize
(void* __this_nativeId,
 QSize leftCornerWidgetSize0){
    QStyleOptionTabWidgetFrame_QtDShell *__qt_object = (QStyleOptionTabWidgetFrame_QtDShell *) __this_nativeId;
    __qt_object->leftCornerWidgetSize = leftCornerWidgetSize0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionTabWidgetFrame>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionTabWidgetFrame>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionTabWidgetFrame>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionTabWidgetFrame>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionTabWidgetFrame>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionTabWidgetFrame_placed_copy(void* orig, void* place) {
    const QStyleOptionTabWidgetFrame_QtDShell&  __qt_orig = (const QStyleOptionTabWidgetFrame_QtDShell& ) *(QStyleOptionTabWidgetFrame_QtDShell *)orig;
    QStyleOptionTabWidgetFrame *result = new (place) QStyleOptionTabWidgetFrame (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionTabWidgetFrame_native_copy(void* orig) {
    const QStyleOptionTabWidgetFrame_QtDShell&  __qt_orig = (const QStyleOptionTabWidgetFrame_QtDShell& ) *(QStyleOptionTabWidgetFrame_QtDShell *)orig;
    QStyleOptionTabWidgetFrame *result = new QStyleOptionTabWidgetFrame (__qt_orig);
    return result;
}

