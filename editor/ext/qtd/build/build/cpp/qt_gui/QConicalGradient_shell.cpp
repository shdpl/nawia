#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qvector.h>

#include <iostream>
#include <qbrush.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QConicalGradient_delete(void* nativeId)
{
    delete (QConicalGradient*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QConicalGradient_destroy(void* nativeId)
{
    call_destructor((QConicalGradient*)nativeId);
}

// ---externC---
// QConicalGradient::QConicalGradient()
QTD_EXTERN QTD_EXPORT void* qtd_QConicalGradient_QConicalGradient
()
{
    QConicalGradient *__qt_this = new QConicalGradient();
    return (void *) __qt_this;

}

// QConicalGradient::QConicalGradient(const QPointF & center, double startAngle)
QTD_EXTERN QTD_EXPORT void* qtd_QConicalGradient_QConicalGradient_QPointF_double
(QPointF center0,
 double startAngle1)
{
    QConicalGradient *__qt_this = new QConicalGradient((const QPointF& )center0, (double )startAngle1);
    return (void *) __qt_this;

}

// QConicalGradient::QConicalGradient(double cx, double cy, double startAngle)
QTD_EXTERN QTD_EXPORT void* qtd_QConicalGradient_QConicalGradient_double_double_double
(double cx0,
 double cy1,
 double startAngle2)
{
    QConicalGradient *__qt_this = new QConicalGradient((double )cx0, (double )cy1, (double )startAngle2);
    return (void *) __qt_this;

}

// QConicalGradient::angle() const
QTD_EXTERN QTD_EXPORT double qtd_QConicalGradient_angle_const
(void* __this_nativeId)
{
    QConicalGradient *__qt_this = (QConicalGradient *) __this_nativeId;
    double  __qt_return_value = __qt_this->angle();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QConicalGradient::center() const
QTD_EXTERN QTD_EXPORT void qtd_QConicalGradient_center_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QConicalGradient *__qt_this = (QConicalGradient *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->center();

    *__d_return_value = __qt_return_value;

}

// QConicalGradient::setAngle(double angle)
QTD_EXTERN QTD_EXPORT void qtd_QConicalGradient_setAngle_double
(void* __this_nativeId,
 double angle0)
{
    QConicalGradient *__qt_this = (QConicalGradient *) __this_nativeId;
    __qt_this->setAngle((double )angle0);

}

// QConicalGradient::setCenter(const QPointF & center)
QTD_EXTERN QTD_EXPORT void qtd_QConicalGradient_setCenter_QPointF
(void* __this_nativeId,
 QPointF center0)
{
    QConicalGradient *__qt_this = (QConicalGradient *) __this_nativeId;
    __qt_this->setCenter((const QPointF& )center0);

}

// QConicalGradient::setCenter(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QConicalGradient_setCenter_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QConicalGradient *__qt_this = (QConicalGradient *) __this_nativeId;
    __qt_this->setCenter((double )x0, (double )y1);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QConicalGradient_QTypeInfo_isComplex() { return (bool) QTypeInfo<QConicalGradient>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QConicalGradient_QTypeInfo_isStatic() { return (bool) QTypeInfo<QConicalGradient>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QConicalGradient_QTypeInfo_isLarge() { return (bool) QTypeInfo<QConicalGradient>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QConicalGradient_QTypeInfo_isPointer() { return (bool) QTypeInfo<QConicalGradient>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QConicalGradient_QTypeInfo_isDummy() { return (bool) QTypeInfo<QConicalGradient>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QConicalGradient_placed_copy(void* orig, void* place) {
    const QConicalGradient&  __qt_orig = (const QConicalGradient& ) *(QConicalGradient *)orig;
    QConicalGradient *result = new (place) QConicalGradient (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QConicalGradient_native_copy(void* orig) {
    const QConicalGradient&  __qt_orig = (const QConicalGradient& ) *(QConicalGradient *)orig;
    QConicalGradient *result = new QConicalGradient (__qt_orig);
    return result;
}

