#include <QPainterPath>
#include <QVariant>
#include <qdatastream.h>
#include <qmatrix.h>
#include <qpainterpath.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qvariant.h>

#include <iostream>
#include <qmatrix.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QMatrix_delete(void* nativeId)
{
    delete (QMatrix*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QMatrix_destroy(void* nativeId)
{
    call_destructor((QMatrix*)nativeId);
}

// ---externC---
// QMatrix::QMatrix()
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_QMatrix
()
{
    QMatrix *__qt_this = new QMatrix();
    return (void *) __qt_this;

}

// QMatrix::QMatrix(const QMatrix & matrix)
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_QMatrix_QMatrix
(void* matrix0)
{
    const QMatrix&  __qt_matrix0 = (const QMatrix& ) *(QMatrix *)matrix0;
    QMatrix *__qt_this = new QMatrix((const QMatrix& )__qt_matrix0);
    return (void *) __qt_this;

}

// QMatrix::QMatrix(double m11, double m12, double m21, double m22, double dx, double dy)
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_QMatrix_double_double_double_double_double_double
(double m110,
 double m121,
 double m212,
 double m223,
 double dx4,
 double dy5)
{
    QMatrix *__qt_this = new QMatrix((double )m110, (double )m121, (double )m212, (double )m223, (double )dx4, (double )dy5);
    return (void *) __qt_this;

}

// QMatrix::det() const
QTD_EXTERN QTD_EXPORT double qtd_QMatrix_det_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    double  __qt_return_value = __qt_this->det();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::determinant() const
QTD_EXTERN QTD_EXPORT double qtd_QMatrix_determinant_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    double  __qt_return_value = __qt_this->determinant();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::dx() const
QTD_EXTERN QTD_EXPORT double qtd_QMatrix_dx_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    double  __qt_return_value = __qt_this->dx();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::dy() const
QTD_EXTERN QTD_EXPORT double qtd_QMatrix_dy_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    double  __qt_return_value = __qt_this->dy();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::inverted(bool * invertible) const
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_inverted_nativepointerbool_const
(void* __this_nativeId,
 bool* invertible0)
{
    bool*  __qt_invertible0 = (bool* ) invertible0;
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QMatrix  __qt_return_value = __qt_this->inverted((bool* )__qt_invertible0);

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QMatrix::isIdentity() const
QTD_EXTERN QTD_EXPORT bool qtd_QMatrix_isIdentity_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isIdentity();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::isInvertible() const
QTD_EXTERN QTD_EXPORT bool qtd_QMatrix_isInvertible_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isInvertible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::m11() const
QTD_EXTERN QTD_EXPORT double qtd_QMatrix_m11_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    double  __qt_return_value = __qt_this->m11();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::m12() const
QTD_EXTERN QTD_EXPORT double qtd_QMatrix_m12_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    double  __qt_return_value = __qt_this->m12();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::m21() const
QTD_EXTERN QTD_EXPORT double qtd_QMatrix_m21_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    double  __qt_return_value = __qt_this->m21();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::m22() const
QTD_EXTERN QTD_EXPORT double qtd_QMatrix_m22_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    double  __qt_return_value = __qt_this->m22();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::map(const QLine & l) const
QTD_EXTERN QTD_EXPORT void qtd_QMatrix_map_QLine_const
(void* __this_nativeId,
 QLine * __d_return_value,
 QLine l0)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QLine  __qt_return_value = __qt_this->map((const QLine& )l0);

    *__d_return_value = __qt_return_value;

}

// QMatrix::map(const QLineF & l) const
QTD_EXTERN QTD_EXPORT void qtd_QMatrix_map_QLineF_const
(void* __this_nativeId,
 QLineF * __d_return_value,
 QLineF l0)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QLineF  __qt_return_value = __qt_this->map((const QLineF& )l0);

    *__d_return_value = __qt_return_value;

}

// QMatrix::map(const QPainterPath & p) const
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_map_QPainterPath_const
(void* __this_nativeId,
 void* p0)
{
    const QPainterPath&  __qt_p0 = (const QPainterPath& ) *(QPainterPath *)p0;
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->map((const QPainterPath& )__qt_p0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QMatrix::map(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void qtd_QMatrix_map_QPoint_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint p0)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->map((const QPoint& )p0);

    *__d_return_value = __qt_return_value;

}

// QMatrix::map(const QPointF & p) const
QTD_EXTERN QTD_EXPORT void qtd_QMatrix_map_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF p0)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->map((const QPointF& )p0);

    *__d_return_value = __qt_return_value;

}

// QMatrix::map(const QPolygon & a) const
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_map_QPolygon_const
(void* __this_nativeId,
 void* a0)
{
    const QPolygon&  __qt_a0 = (const QPolygon& ) *(QPolygon *)a0;
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->map((const QPolygon& )__qt_a0);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QMatrix::map(const QPolygonF & a) const
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_map_QPolygonF_const
(void* __this_nativeId,
 void* a0)
{
    const QPolygonF&  __qt_a0 = (const QPolygonF& ) *(QPolygonF *)a0;
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->map((const QPolygonF& )__qt_a0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QMatrix::map(const QRegion & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_map_QRegion_const
(void* __this_nativeId,
 void* r0)
{
    const QRegion&  __qt_r0 = (const QRegion& ) *(QRegion *)r0;
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->map((const QRegion& )__qt_r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QMatrix::mapRect(const QRect & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QMatrix_mapRect_QRect_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QRect arg__1)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->mapRect((const QRect& )arg__1);

    *__d_return_value = __qt_return_value;

}

// QMatrix::mapRect(const QRectF & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QMatrix_mapRect_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF arg__1)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRect((const QRectF& )arg__1);

    *__d_return_value = __qt_return_value;

}

// QMatrix::mapToPolygon(const QRect & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_mapToPolygon_QRect_const
(void* __this_nativeId,
 QRect r0)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->mapToPolygon((const QRect& )r0);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QMatrix::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QMatrix::operator*(const QMatrix & o) const
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_operator_multiply_QMatrix_const
(void* __this_nativeId,
 void* o0)
{
    const QMatrix&  __qt_o0 = (const QMatrix& ) *(QMatrix *)o0;
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QMatrix  __qt_return_value = __qt_this->operator*((const QMatrix& )__qt_o0);

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QMatrix::operator*=(const QMatrix & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_operator_multiply_assign_QMatrix
(void* __this_nativeId,
 void* arg__1)
{
    const QMatrix&  __qt_arg__1 = (const QMatrix& ) *(QMatrix *)arg__1;
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QMatrix&  __qt_return_value = __qt_this->operator*=((const QMatrix& )__qt_arg__1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QMatrix::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMatrix_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QMatrix::operator==(const QMatrix & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QMatrix_operator_equal_QMatrix_const
(void* __this_nativeId,
 void* arg__1)
{
    const QMatrix&  __qt_arg__1 = (const QMatrix& ) *(QMatrix *)arg__1;
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QMatrix& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMatrix::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMatrix_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QMatrix::reset()
QTD_EXTERN QTD_EXPORT void qtd_QMatrix_reset
(void* __this_nativeId)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    __qt_this->reset();

}

// QMatrix::rotate(double a)
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_rotate_private_double
(void* __this_nativeId,
 double a0)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QMatrix&  __qt_return_value = __qt_this->rotate((double )a0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QMatrix::scale(double sx, double sy)
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_scale_private_double_double
(void* __this_nativeId,
 double sx0,
 double sy1)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QMatrix&  __qt_return_value = __qt_this->scale((double )sx0, (double )sy1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QMatrix::setMatrix(double m11, double m12, double m21, double m22, double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QMatrix_setMatrix_double_double_double_double_double_double
(void* __this_nativeId,
 double m110,
 double m121,
 double m212,
 double m223,
 double dx4,
 double dy5)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    __qt_this->setMatrix((double )m110, (double )m121, (double )m212, (double )m223, (double )dx4, (double )dy5);

}

// QMatrix::shear(double sh, double sv)
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_shear_private_double_double
(void* __this_nativeId,
 double sh0,
 double sv1)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QMatrix&  __qt_return_value = __qt_this->shear((double )sh0, (double )sv1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QMatrix::translate(double dx, double dy)
QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_translate_private_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QMatrix *__qt_this = (QMatrix *) __this_nativeId;
    QMatrix&  __qt_return_value = __qt_this->translate((double )dx0, (double )dy1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QMatrix_QTypeInfo_isComplex() { return (bool) QTypeInfo<QMatrix>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QMatrix_QTypeInfo_isStatic() { return (bool) QTypeInfo<QMatrix>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QMatrix_QTypeInfo_isLarge() { return (bool) QTypeInfo<QMatrix>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QMatrix_QTypeInfo_isPointer() { return (bool) QTypeInfo<QMatrix>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QMatrix_QTypeInfo_isDummy() { return (bool) QTypeInfo<QMatrix>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QMatrix_placed_copy(void* orig, void* place) {
    const QMatrix&  __qt_orig = (const QMatrix& ) *(QMatrix *)orig;
    QMatrix *result = new (place) QMatrix (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QMatrix_native_copy(void* orig) {
    const QMatrix&  __qt_orig = (const QMatrix& ) *(QMatrix *)orig;
    QMatrix *result = new QMatrix (__qt_orig);
    return result;
}

