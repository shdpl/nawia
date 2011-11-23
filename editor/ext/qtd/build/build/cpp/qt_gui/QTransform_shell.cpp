#include <QVariant>
#include <qdatastream.h>
#include <qmatrix.h>
#include <qpainterpath.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qtransform.h>
#include <qvariant.h>

#include <iostream>
#include <qtransform.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTransform_delete(void* nativeId)
{
    delete (QTransform*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTransform_destroy(void* nativeId)
{
    call_destructor((QTransform*)nativeId);
}

// ---externC---
// QTransform::QTransform()
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_QTransform
()
{
    QTransform *__qt_this = new QTransform();
    return (void *) __qt_this;

}

// QTransform::QTransform(const QMatrix & mtx)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_QTransform_QMatrix
(void* mtx0)
{
    const QMatrix&  __qt_mtx0 = (const QMatrix& ) *(QMatrix *)mtx0;
    QTransform *__qt_this = new QTransform((const QMatrix& )__qt_mtx0);
    return (void *) __qt_this;

}

// QTransform::QTransform(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_QTransform_double_double_double_double_double_double_double_double_double
(double h110,
 double h121,
 double h132,
 double h213,
 double h224,
 double h235,
 double h316,
 double h327,
 double h338)
{
    QTransform *__qt_this = new QTransform((double )h110, (double )h121, (double )h132, (double )h213, (double )h224, (double )h235, (double )h316, (double )h327, (double )h338);
    return (void *) __qt_this;

}

// QTransform::QTransform(double h11, double h12, double h21, double h22, double dx, double dy)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_QTransform_double_double_double_double_double_double
(double h110,
 double h121,
 double h212,
 double h223,
 double dx4,
 double dy5)
{
    QTransform *__qt_this = new QTransform((double )h110, (double )h121, (double )h212, (double )h223, (double )dx4, (double )dy5);
    return (void *) __qt_this;

}

// QTransform::adjoint() const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_adjoint_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->adjoint();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QTransform::det() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_det_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->det();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::determinant() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_determinant_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->determinant();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::dx() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_dx_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->dx();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::dy() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_dy_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->dy();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::inverted(bool * invertible) const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_inverted_nativepointerbool_const
(void* __this_nativeId,
 bool* invertible0)
{
    bool*  __qt_invertible0 = (bool* ) invertible0;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->inverted((bool* )__qt_invertible0);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QTransform::isAffine() const
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_isAffine_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAffine();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::isIdentity() const
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_isIdentity_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isIdentity();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::isInvertible() const
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_isInvertible_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isInvertible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::isRotating() const
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_isRotating_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRotating();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::isScaling() const
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_isScaling_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isScaling();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::isTranslating() const
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_isTranslating_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTranslating();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::m11() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_m11_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->m11();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::m12() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_m12_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->m12();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::m13() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_m13_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->m13();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::m21() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_m21_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->m21();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::m22() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_m22_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->m22();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::m23() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_m23_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->m23();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::m31() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_m31_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->m31();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::m32() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_m32_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->m32();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::m33() const
QTD_EXTERN QTD_EXPORT double qtd_QTransform_m33_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    double  __qt_return_value = __qt_this->m33();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::map(const QLine & l) const
QTD_EXTERN QTD_EXPORT void qtd_QTransform_map_QLine_const
(void* __this_nativeId,
 QLine * __d_return_value,
 QLine l0)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QLine  __qt_return_value = __qt_this->map((const QLine& )l0);

    *__d_return_value = __qt_return_value;

}

// QTransform::map(const QLineF & l) const
QTD_EXTERN QTD_EXPORT void qtd_QTransform_map_QLineF_const
(void* __this_nativeId,
 QLineF * __d_return_value,
 QLineF l0)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QLineF  __qt_return_value = __qt_this->map((const QLineF& )l0);

    *__d_return_value = __qt_return_value;

}

// QTransform::map(const QPainterPath & p) const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_map_QPainterPath_const
(void* __this_nativeId,
 void* p0)
{
    const QPainterPath&  __qt_p0 = (const QPainterPath& ) *(QPainterPath *)p0;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->map((const QPainterPath& )__qt_p0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QTransform::map(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void qtd_QTransform_map_QPoint_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint p0)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->map((const QPoint& )p0);

    *__d_return_value = __qt_return_value;

}

// QTransform::map(const QPointF & p) const
QTD_EXTERN QTD_EXPORT void qtd_QTransform_map_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF p0)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->map((const QPointF& )p0);

    *__d_return_value = __qt_return_value;

}

// QTransform::map(const QPolygon & a) const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_map_QPolygon_const
(void* __this_nativeId,
 void* a0)
{
    const QPolygon&  __qt_a0 = (const QPolygon& ) *(QPolygon *)a0;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->map((const QPolygon& )__qt_a0);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QTransform::map(const QPolygonF & a) const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_map_QPolygonF_const
(void* __this_nativeId,
 void* a0)
{
    const QPolygonF&  __qt_a0 = (const QPolygonF& ) *(QPolygonF *)a0;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->map((const QPolygonF& )__qt_a0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QTransform::map(const QRegion & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_map_QRegion_const
(void* __this_nativeId,
 void* r0)
{
    const QRegion&  __qt_r0 = (const QRegion& ) *(QRegion *)r0;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->map((const QRegion& )__qt_r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QTransform::mapRect(const QRect & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QTransform_mapRect_QRect_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QRect arg__1)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->mapRect((const QRect& )arg__1);

    *__d_return_value = __qt_return_value;

}

// QTransform::mapRect(const QRectF & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QTransform_mapRect_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF arg__1)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRect((const QRectF& )arg__1);

    *__d_return_value = __qt_return_value;

}

// QTransform::mapToPolygon(const QRect & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_mapToPolygon_QRect_const
(void* __this_nativeId,
 QRect r0)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->mapToPolygon((const QRect& )r0);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QTransform::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTransform::operator*(const QTransform & o) const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_multiplied_QTransform_const
(void* __this_nativeId,
 void* o0)
{
    const QTransform&  __qt_o0 = (const QTransform& ) *(QTransform *)o0;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->operator*((const QTransform& )__qt_o0);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QTransform::operator*=(const QTransform & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_operator_multiply_assign_QTransform
(void* __this_nativeId,
 void* arg__1)
{
    const QTransform&  __qt_arg__1 = (const QTransform& ) *(QTransform *)arg__1;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform&  __qt_return_value = __qt_this->operator*=((const QTransform& )__qt_arg__1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTransform::operator*=(double div)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_operator_multiply_assign_double
(void* __this_nativeId,
 double div0)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform&  __qt_return_value = __qt_this->operator*=((double )div0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTransform::operator+=(double div)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_operator_add_assign_double
(void* __this_nativeId,
 double div0)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform&  __qt_return_value = __qt_this->operator+=((double )div0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTransform::operator-=(double div)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_operator_subtract_assign_double
(void* __this_nativeId,
 double div0)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform&  __qt_return_value = __qt_this->operator-=((double )div0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTransform::operator/=(double div)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_operator_divide_assign_double
(void* __this_nativeId,
 double div0)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform&  __qt_return_value = __qt_this->operator/=((double )div0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTransform::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTransform_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QTransform::operator==(const QTransform & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_operator_equal_QTransform_const
(void* __this_nativeId,
 void* arg__1)
{
    const QTransform&  __qt_arg__1 = (const QTransform& ) *(QTransform *)arg__1;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTransform& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTransform_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QTransform::reset()
QTD_EXTERN QTD_EXPORT void qtd_QTransform_reset
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    __qt_this->reset();

}

// QTransform::rotate(double a, Qt::Axis axis)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_rotate_private_double_Axis
(void* __this_nativeId,
 double a0,
 int axis1)
{
    Qt::Axis __qt_axis1 = (Qt::Axis) axis1;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform&  __qt_return_value = __qt_this->rotate((double )a0, (Qt::Axis )__qt_axis1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTransform::rotateRadians(double a, Qt::Axis axis)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_rotateRadians_private_double_Axis
(void* __this_nativeId,
 double a0,
 int axis1)
{
    Qt::Axis __qt_axis1 = (Qt::Axis) axis1;
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform&  __qt_return_value = __qt_this->rotateRadians((double )a0, (Qt::Axis )__qt_axis1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTransform::scale(double sx, double sy)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_scale_private_double_double
(void* __this_nativeId,
 double sx0,
 double sy1)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform&  __qt_return_value = __qt_this->scale((double )sx0, (double )sy1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTransform::setMatrix(double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33)
QTD_EXTERN QTD_EXPORT void qtd_QTransform_setMatrix_double_double_double_double_double_double_double_double_double
(void* __this_nativeId,
 double m110,
 double m121,
 double m132,
 double m213,
 double m224,
 double m235,
 double m316,
 double m327,
 double m338)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    __qt_this->setMatrix((double )m110, (double )m121, (double )m132, (double )m213, (double )m224, (double )m235, (double )m316, (double )m327, (double )m338);

}

// QTransform::shear(double sh, double sv)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_shear_private_double_double
(void* __this_nativeId,
 double sh0,
 double sv1)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform&  __qt_return_value = __qt_this->shear((double )sh0, (double )sv1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTransform::toAffine() const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_toAffine_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    const QMatrix&  __qt_return_value = __qt_this->toAffine();

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QTransform::translate(double dx, double dy)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_translate_private_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform&  __qt_return_value = __qt_this->translate((double )dx0, (double )dy1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTransform::transposed() const
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_transposed_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->transposed();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QTransform::type() const
QTD_EXTERN QTD_EXPORT int qtd_QTransform_type_const
(void* __this_nativeId)
{
    QTransform *__qt_this = (QTransform *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::fromScale(double dx, double dy)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_fromScale_double_double
(double dx0,
 double dy1)
{
    QTransform  __qt_return_value = QTransform::fromScale((double )dx0, (double )dy1);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QTransform::fromTranslate(double dx, double dy)
QTD_EXTERN QTD_EXPORT void* qtd_QTransform_fromTranslate_double_double
(double dx0,
 double dy1)
{
    QTransform  __qt_return_value = QTransform::fromTranslate((double )dx0, (double )dy1);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QTransform::quadToQuad(const QPolygonF & one, const QPolygonF & two, QTransform & result)
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_quadToQuadPrivate_QPolygonF_QPolygonF_nativepointerQTransform
(void* one0,
 void* two1,
 void* result2)
{
    const QPolygonF&  __qt_one0 = (const QPolygonF& ) *(QPolygonF *)one0;
    const QPolygonF&  __qt_two1 = (const QPolygonF& ) *(QPolygonF *)two1;
    QTransform&  __qt_result2 = (QTransform& ) * (QTransform *) result2;
    bool  __qt_return_value = QTransform::quadToQuad((const QPolygonF& )__qt_one0, (const QPolygonF& )__qt_two1, (QTransform& )__qt_result2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::quadToSquare(const QPolygonF & quad, QTransform & result)
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_quadToSquarePrivate_QPolygonF_nativepointerQTransform
(void* quad0,
 void* result1)
{
    const QPolygonF&  __qt_quad0 = (const QPolygonF& ) *(QPolygonF *)quad0;
    QTransform&  __qt_result1 = (QTransform& ) * (QTransform *) result1;
    bool  __qt_return_value = QTransform::quadToSquare((const QPolygonF& )__qt_quad0, (QTransform& )__qt_result1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTransform::squareToQuad(const QPolygonF & square, QTransform & result)
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_squareToQuadPrivate_QPolygonF_nativepointerQTransform
(void* square0,
 void* result1)
{
    const QPolygonF&  __qt_square0 = (const QPolygonF& ) *(QPolygonF *)square0;
    QTransform&  __qt_result1 = (QTransform& ) * (QTransform *) result1;
    bool  __qt_return_value = QTransform::squareToQuad((const QPolygonF& )__qt_square0, (QTransform& )__qt_result1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTransform>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTransform>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTransform>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTransform>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTransform_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTransform>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTransform_placed_copy(void* orig, void* place) {
    const QTransform&  __qt_orig = (const QTransform& ) *(QTransform *)orig;
    QTransform *result = new (place) QTransform (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTransform_native_copy(void* orig) {
    const QTransform&  __qt_orig = (const QTransform& ) *(QTransform *)orig;
    QTransform *result = new QTransform (__qt_orig);
    return result;
}

