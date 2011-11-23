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

QTD_EXTERN QTD_EXPORT void qtd_QRadialGradient_delete(void* nativeId)
{
    delete (QRadialGradient*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QRadialGradient_destroy(void* nativeId)
{
    call_destructor((QRadialGradient*)nativeId);
}

// ---externC---
// QRadialGradient::QRadialGradient()
QTD_EXTERN QTD_EXPORT void* qtd_QRadialGradient_QRadialGradient
()
{
    QRadialGradient *__qt_this = new QRadialGradient();
    return (void *) __qt_this;

}

// QRadialGradient::QRadialGradient(const QPointF & center, double radius)
QTD_EXTERN QTD_EXPORT void* qtd_QRadialGradient_QRadialGradient_QPointF_double
(QPointF center0,
 double radius1)
{
    QRadialGradient *__qt_this = new QRadialGradient((const QPointF& )center0, (double )radius1);
    return (void *) __qt_this;

}

// QRadialGradient::QRadialGradient(const QPointF & center, double radius, const QPointF & focalPoint)
QTD_EXTERN QTD_EXPORT void* qtd_QRadialGradient_QRadialGradient_QPointF_double_QPointF
(QPointF center0,
 double radius1,
 QPointF focalPoint2)
{
    QRadialGradient *__qt_this = new QRadialGradient((const QPointF& )center0, (double )radius1, (const QPointF& )focalPoint2);
    return (void *) __qt_this;

}

// QRadialGradient::QRadialGradient(double cx, double cy, double radius)
QTD_EXTERN QTD_EXPORT void* qtd_QRadialGradient_QRadialGradient_double_double_double
(double cx0,
 double cy1,
 double radius2)
{
    QRadialGradient *__qt_this = new QRadialGradient((double )cx0, (double )cy1, (double )radius2);
    return (void *) __qt_this;

}

// QRadialGradient::QRadialGradient(double cx, double cy, double radius, double fx, double fy)
QTD_EXTERN QTD_EXPORT void* qtd_QRadialGradient_QRadialGradient_double_double_double_double_double
(double cx0,
 double cy1,
 double radius2,
 double fx3,
 double fy4)
{
    QRadialGradient *__qt_this = new QRadialGradient((double )cx0, (double )cy1, (double )radius2, (double )fx3, (double )fy4);
    return (void *) __qt_this;

}

// QRadialGradient::center() const
QTD_EXTERN QTD_EXPORT void qtd_QRadialGradient_center_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QRadialGradient *__qt_this = (QRadialGradient *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->center();

    *__d_return_value = __qt_return_value;

}

// QRadialGradient::focalPoint() const
QTD_EXTERN QTD_EXPORT void qtd_QRadialGradient_focalPoint_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QRadialGradient *__qt_this = (QRadialGradient *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->focalPoint();

    *__d_return_value = __qt_return_value;

}

// QRadialGradient::radius() const
QTD_EXTERN QTD_EXPORT double qtd_QRadialGradient_radius_const
(void* __this_nativeId)
{
    QRadialGradient *__qt_this = (QRadialGradient *) __this_nativeId;
    double  __qt_return_value = __qt_this->radius();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRadialGradient::setCenter(const QPointF & center)
QTD_EXTERN QTD_EXPORT void qtd_QRadialGradient_setCenter_QPointF
(void* __this_nativeId,
 QPointF center0)
{
    QRadialGradient *__qt_this = (QRadialGradient *) __this_nativeId;
    __qt_this->setCenter((const QPointF& )center0);

}

// QRadialGradient::setCenter(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QRadialGradient_setCenter_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QRadialGradient *__qt_this = (QRadialGradient *) __this_nativeId;
    __qt_this->setCenter((double )x0, (double )y1);

}

// QRadialGradient::setFocalPoint(const QPointF & focalPoint)
QTD_EXTERN QTD_EXPORT void qtd_QRadialGradient_setFocalPoint_QPointF
(void* __this_nativeId,
 QPointF focalPoint0)
{
    QRadialGradient *__qt_this = (QRadialGradient *) __this_nativeId;
    __qt_this->setFocalPoint((const QPointF& )focalPoint0);

}

// QRadialGradient::setFocalPoint(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QRadialGradient_setFocalPoint_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QRadialGradient *__qt_this = (QRadialGradient *) __this_nativeId;
    __qt_this->setFocalPoint((double )x0, (double )y1);

}

// QRadialGradient::setRadius(double radius)
QTD_EXTERN QTD_EXPORT void qtd_QRadialGradient_setRadius_double
(void* __this_nativeId,
 double radius0)
{
    QRadialGradient *__qt_this = (QRadialGradient *) __this_nativeId;
    __qt_this->setRadius((double )radius0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QRadialGradient_QTypeInfo_isComplex() { return (bool) QTypeInfo<QRadialGradient>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QRadialGradient_QTypeInfo_isStatic() { return (bool) QTypeInfo<QRadialGradient>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QRadialGradient_QTypeInfo_isLarge() { return (bool) QTypeInfo<QRadialGradient>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QRadialGradient_QTypeInfo_isPointer() { return (bool) QTypeInfo<QRadialGradient>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QRadialGradient_QTypeInfo_isDummy() { return (bool) QTypeInfo<QRadialGradient>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QRadialGradient_placed_copy(void* orig, void* place) {
    const QRadialGradient&  __qt_orig = (const QRadialGradient& ) *(QRadialGradient *)orig;
    QRadialGradient *result = new (place) QRadialGradient (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QRadialGradient_native_copy(void* orig) {
    const QRadialGradient&  __qt_orig = (const QRadialGradient& ) *(QRadialGradient *)orig;
    QRadialGradient *result = new QRadialGradient (__qt_orig);
    return result;
}

