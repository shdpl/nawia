#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "QStyleOptionToolBar_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBar_delete(void* nativeId)
{
    delete (QStyleOptionToolBar_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBar_destroy(void* nativeId)
{
    call_destructor((QStyleOptionToolBar_QtDShell*)nativeId);
}

QStyleOptionToolBar_QtDShell::QStyleOptionToolBar_QtDShell()
    : QStyleOptionToolBar()
{
}

QStyleOptionToolBar_QtDShell::QStyleOptionToolBar_QtDShell(const QStyleOptionToolBar&  other0)
    : QStyleOptionToolBar(other0)
{
}

QStyleOptionToolBar_QtDShell::QStyleOptionToolBar_QtDShell(int  version0)
    : QStyleOptionToolBar(version0)
{
}

QStyleOptionToolBar_QtDShell::~QStyleOptionToolBar_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBar_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionToolBar::QStyleOptionToolBar()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBar_QStyleOptionToolBar
()
{
    QStyleOptionToolBar_QtDShell *__qt_this = new QStyleOptionToolBar_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionToolBar::QStyleOptionToolBar(const QStyleOptionToolBar & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBar_QStyleOptionToolBar_QStyleOptionToolBar
(void* other0)
{
    const QStyleOptionToolBar&  __qt_other0 = (const QStyleOptionToolBar& ) *(QStyleOptionToolBar *)other0;
    QStyleOptionToolBar_QtDShell *__qt_this = new QStyleOptionToolBar_QtDShell((const QStyleOptionToolBar& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionToolBar::QStyleOptionToolBar(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBar_QStyleOptionToolBar_int
(int version0)
{
    QStyleOptionToolBar_QtDShell *__qt_this = new QStyleOptionToolBar_QtDShell((int )version0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolBar_lineWidth
(void* __this_nativeId){
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    int __tmp_lineWidth = __qt_object->lineWidth;
    int __d_return_value = __tmp_lineWidth;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBar_setLineWidth_int
(void* __this_nativeId,
 int lineWidth0){
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    __qt_object->lineWidth = lineWidth0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolBar_positionWithinLine
(void* __this_nativeId){
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    QStyleOptionToolBar::ToolBarPosition __tmp_positionWithinLine = __qt_object->positionWithinLine;
    int __d_return_value = __tmp_positionWithinLine;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBar_setPositionWithinLine_ToolBarPosition
(void* __this_nativeId,
 int positionWithinLine0){
    QStyleOptionToolBar::ToolBarPosition __qt_positionWithinLine0 = (QStyleOptionToolBar::ToolBarPosition) positionWithinLine0;
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    __qt_object->positionWithinLine = __qt_positionWithinLine0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolBar_positionOfLine
(void* __this_nativeId){
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    QStyleOptionToolBar::ToolBarPosition __tmp_positionOfLine = __qt_object->positionOfLine;
    int __d_return_value = __tmp_positionOfLine;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBar_setPositionOfLine_ToolBarPosition
(void* __this_nativeId,
 int positionOfLine0){
    QStyleOptionToolBar::ToolBarPosition __qt_positionOfLine0 = (QStyleOptionToolBar::ToolBarPosition) positionOfLine0;
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    __qt_object->positionOfLine = __qt_positionOfLine0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolBar_features
(void* __this_nativeId){
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    QStyleOptionToolBar::ToolBarFeatures __tmp_features = __qt_object->features;
    int __d_return_value = __tmp_features;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBar_setFeatures_ToolBarFeatures
(void* __this_nativeId,
 int features0){
    QFlags<QStyleOptionToolBar::ToolBarFeature> __qt_features0 = (QFlags<QStyleOptionToolBar::ToolBarFeature>) features0;
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    __qt_object->features = __qt_features0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolBar_toolBarArea
(void* __this_nativeId){
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    Qt::ToolBarArea __tmp_toolBarArea = __qt_object->toolBarArea;
    int __d_return_value = __tmp_toolBarArea;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBar_setToolBarArea_ToolBarArea
(void* __this_nativeId,
 int toolBarArea0){
    Qt::ToolBarArea __qt_toolBarArea0 = (Qt::ToolBarArea) toolBarArea0;
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    __qt_object->toolBarArea = __qt_toolBarArea0;
}

QTD_EXTERN QTD_EXPORT int qtd_QStyleOptionToolBar_midLineWidth
(void* __this_nativeId){
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    int __tmp_midLineWidth = __qt_object->midLineWidth;
    int __d_return_value = __tmp_midLineWidth;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBar_setMidLineWidth_int
(void* __this_nativeId,
 int midLineWidth0){
    QStyleOptionToolBar_QtDShell *__qt_object = (QStyleOptionToolBar_QtDShell *) __this_nativeId;
    __qt_object->midLineWidth = midLineWidth0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBar_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionToolBar>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBar_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionToolBar>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBar_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionToolBar>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBar_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionToolBar>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionToolBar_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionToolBar>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionToolBar_placed_copy(void* orig, void* place) {
    const QStyleOptionToolBar_QtDShell&  __qt_orig = (const QStyleOptionToolBar_QtDShell& ) *(QStyleOptionToolBar_QtDShell *)orig;
    QStyleOptionToolBar *result = new (place) QStyleOptionToolBar (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionToolBar_native_copy(void* orig) {
    const QStyleOptionToolBar_QtDShell&  __qt_orig = (const QStyleOptionToolBar_QtDShell& ) *(QStyleOptionToolBar_QtDShell *)orig;
    QStyleOptionToolBar *result = new QStyleOptionToolBar (__qt_orig);
    return result;
}

