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

QTD_EXTERN QTD_EXPORT void qtd_QGradient_delete(void* nativeId)
{
    delete (QGradient*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGradient_destroy(void* nativeId)
{
    call_destructor((QGradient*)nativeId);
}

// ---externC---
// QGradient::QGradient()
QTD_EXTERN QTD_EXPORT void* qtd_QGradient_QGradient
()
{
    QGradient *__qt_this = new QGradient();
    return (void *) __qt_this;

}

// QGradient::coordinateMode() const
QTD_EXTERN QTD_EXPORT int qtd_QGradient_coordinateMode_const
(void* __this_nativeId)
{
    QGradient *__qt_this = (QGradient *) __this_nativeId;
    int  __qt_return_value = __qt_this->coordinateMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGradient::operator==(const QGradient & gradient) const
QTD_EXTERN QTD_EXPORT bool qtd_QGradient_operator_equal_QGradient_const
(void* __this_nativeId,
 void* gradient0)
{
    const QGradient&  __qt_gradient0 = (const QGradient& ) *(QGradient *)gradient0;
    QGradient *__qt_this = (QGradient *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QGradient& )__qt_gradient0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGradient::setColorAt(double pos, const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QGradient_setColorAt_double_QColor
(void* __this_nativeId,
 double pos0,
 void* color1)
{
    const QColor&  __qt_color1 = (const QColor& ) *(QColor *)color1;
    QGradient *__qt_this = (QGradient *) __this_nativeId;
    __qt_this->setColorAt((double )pos0, (const QColor& )__qt_color1);

}

// QGradient::setCoordinateMode(QGradient::CoordinateMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QGradient_setCoordinateMode_CoordinateMode
(void* __this_nativeId,
 int mode0)
{
    QGradient::CoordinateMode __qt_mode0 = (QGradient::CoordinateMode) mode0;
    QGradient *__qt_this = (QGradient *) __this_nativeId;
    __qt_this->setCoordinateMode((QGradient::CoordinateMode )__qt_mode0);

}

// QGradient::setSpread(QGradient::Spread spread)
QTD_EXTERN QTD_EXPORT void qtd_QGradient_setSpread_Spread
(void* __this_nativeId,
 int spread0)
{
    QGradient::Spread __qt_spread0 = (QGradient::Spread) spread0;
    QGradient *__qt_this = (QGradient *) __this_nativeId;
    __qt_this->setSpread((QGradient::Spread )__qt_spread0);

}

// QGradient::setStops(const QVector<QPair<double, QColor > > & stops)
// QGradient::spread() const
QTD_EXTERN QTD_EXPORT int qtd_QGradient_spread_const
(void* __this_nativeId)
{
    QGradient *__qt_this = (QGradient *) __this_nativeId;
    int  __qt_return_value = __qt_this->spread();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGradient::stops() const
// QGradient::type() const
QTD_EXTERN QTD_EXPORT int qtd_QGradient_type_const
(void* __this_nativeId)
{
    QGradient *__qt_this = (QGradient *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QGradient_QTypeInfo_isComplex() { return (bool) QTypeInfo<QGradient>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QGradient_QTypeInfo_isStatic() { return (bool) QTypeInfo<QGradient>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QGradient_QTypeInfo_isLarge() { return (bool) QTypeInfo<QGradient>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QGradient_QTypeInfo_isPointer() { return (bool) QTypeInfo<QGradient>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QGradient_QTypeInfo_isDummy() { return (bool) QTypeInfo<QGradient>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QGradient_placed_copy(void* orig, void* place) {
    const QGradient&  __qt_orig = (const QGradient& ) *(QGradient *)orig;
    QGradient *result = new (place) QGradient (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QGradient_native_copy(void* orig) {
    const QGradient&  __qt_orig = (const QGradient& ) *(QGradient *)orig;
    QGradient *result = new QGradient (__qt_orig);
    return result;
}

