#include <QVariant>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

#include "QStyleOptionGraphicsItem_shell.h"
#include <iostream>
#include <qstyleoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGraphicsItem_delete(void* nativeId)
{
    delete (QStyleOptionGraphicsItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGraphicsItem_destroy(void* nativeId)
{
    call_destructor((QStyleOptionGraphicsItem_QtDShell*)nativeId);
}

QStyleOptionGraphicsItem_QtDShell::QStyleOptionGraphicsItem_QtDShell()
    : QStyleOptionGraphicsItem()
{
}

QStyleOptionGraphicsItem_QtDShell::QStyleOptionGraphicsItem_QtDShell(const QStyleOptionGraphicsItem&  other0)
    : QStyleOptionGraphicsItem(other0)
{
}

QStyleOptionGraphicsItem_QtDShell::QStyleOptionGraphicsItem_QtDShell(int  version0)
    : QStyleOptionGraphicsItem(version0)
{
}

QStyleOptionGraphicsItem_QtDShell::~QStyleOptionGraphicsItem_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGraphicsItem_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleOptionGraphicsItem::QStyleOptionGraphicsItem()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem
()
{
    QStyleOptionGraphicsItem_QtDShell *__qt_this = new QStyleOptionGraphicsItem_QtDShell();
    return (void *) __qt_this;

}

// QStyleOptionGraphicsItem::QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem
(void* other0)
{
    const QStyleOptionGraphicsItem&  __qt_other0 = (const QStyleOptionGraphicsItem& ) *(QStyleOptionGraphicsItem *)other0;
    QStyleOptionGraphicsItem_QtDShell *__qt_this = new QStyleOptionGraphicsItem_QtDShell((const QStyleOptionGraphicsItem& )__qt_other0);
    return (void *) __qt_this;

}

// QStyleOptionGraphicsItem::QStyleOptionGraphicsItem(int version_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem_int
(int version0)
{
    QStyleOptionGraphicsItem_QtDShell *__qt_this = new QStyleOptionGraphicsItem_QtDShell((int )version0);
    return (void *) __qt_this;

}

// QStyleOptionGraphicsItem::levelOfDetailFromTransform(const QTransform & worldTransform)
QTD_EXTERN QTD_EXPORT double qtd_QStyleOptionGraphicsItem_levelOfDetailFromTransform_QTransform
(void* worldTransform0)
{
    const QTransform&  __qt_worldTransform0 = (const QTransform& ) *(QTransform *)worldTransform0;
    double  __qt_return_value = QStyleOptionGraphicsItem_QtDShell::levelOfDetailFromTransform((const QTransform& )__qt_worldTransform0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGraphicsItem_exposedRect
(void* __this_nativeId,
 QRectF * __d_return_value){
    QStyleOptionGraphicsItem_QtDShell *__qt_object = (QStyleOptionGraphicsItem_QtDShell *) __this_nativeId;
    QRectF __tmp_exposedRect = __qt_object->exposedRect;
    *__d_return_value = __tmp_exposedRect;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGraphicsItem_setExposedRect_QRectF
(void* __this_nativeId,
 QRectF exposedRect0){
    QStyleOptionGraphicsItem_QtDShell *__qt_object = (QStyleOptionGraphicsItem_QtDShell *) __this_nativeId;
    __qt_object->exposedRect = exposedRect0;
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionGraphicsItem_matrix
(void* __this_nativeId){
    QStyleOptionGraphicsItem_QtDShell *__qt_object = (QStyleOptionGraphicsItem_QtDShell *) __this_nativeId;
    QMatrix __tmp_matrix = __qt_object->matrix;
    void* __d_return_value = (void*) new QMatrix(__tmp_matrix);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGraphicsItem_setMatrix_QMatrix
(void* __this_nativeId,
 void* matrix0){
    QMatrix  __qt_matrix0 = (QMatrix ) *(QMatrix *)matrix0;
    QStyleOptionGraphicsItem_QtDShell *__qt_object = (QStyleOptionGraphicsItem_QtDShell *) __this_nativeId;
    __qt_object->matrix = __qt_matrix0;
}

QTD_EXTERN QTD_EXPORT double qtd_QStyleOptionGraphicsItem_levelOfDetail
(void* __this_nativeId){
    QStyleOptionGraphicsItem_QtDShell *__qt_object = (QStyleOptionGraphicsItem_QtDShell *) __this_nativeId;
    double __tmp_levelOfDetail = __qt_object->levelOfDetail;
    double __d_return_value = __tmp_levelOfDetail;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGraphicsItem_setLevelOfDetail_double
(void* __this_nativeId,
 double levelOfDetail0){
    QStyleOptionGraphicsItem_QtDShell *__qt_object = (QStyleOptionGraphicsItem_QtDShell *) __this_nativeId;
    __qt_object->levelOfDetail = levelOfDetail0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionGraphicsItem_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStyleOptionGraphicsItem>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionGraphicsItem_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStyleOptionGraphicsItem>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionGraphicsItem_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStyleOptionGraphicsItem>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionGraphicsItem_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStyleOptionGraphicsItem>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStyleOptionGraphicsItem_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStyleOptionGraphicsItem>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStyleOptionGraphicsItem_placed_copy(void* orig, void* place) {
    const QStyleOptionGraphicsItem_QtDShell&  __qt_orig = (const QStyleOptionGraphicsItem_QtDShell& ) *(QStyleOptionGraphicsItem_QtDShell *)orig;
    QStyleOptionGraphicsItem *result = new (place) QStyleOptionGraphicsItem (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStyleOptionGraphicsItem_native_copy(void* orig) {
    const QStyleOptionGraphicsItem_QtDShell&  __qt_orig = (const QStyleOptionGraphicsItem_QtDShell& ) *(QStyleOptionGraphicsItem_QtDShell *)orig;
    QStyleOptionGraphicsItem *result = new QStyleOptionGraphicsItem (__qt_orig);
    return result;
}

