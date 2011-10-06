#include <QBrush>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpen.h>
#include <qvariant.h>
#include <qvector.h>

#include <iostream>
#include <qpen.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPen_delete(void* nativeId)
{
    delete (QPen*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPen_destroy(void* nativeId)
{
    call_destructor((QPen*)nativeId);
}

// ---externC---
// QPen::QPen()
QTD_EXTERN QTD_EXPORT void* qtd_QPen_QPen
()
{
    QPen *__qt_this = new QPen();
    return (void *) __qt_this;

}

// QPen::QPen(Qt::PenStyle arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QPen_QPen_PenStyle
(int arg__1)
{
    Qt::PenStyle __qt_arg__1 = (Qt::PenStyle) arg__1;
    QPen *__qt_this = new QPen((Qt::PenStyle )__qt_arg__1);
    return (void *) __qt_this;

}

// QPen::QPen(const QBrush & brush, double width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j)
QTD_EXTERN QTD_EXPORT void* qtd_QPen_QPen_QBrush_double_PenStyle_PenCapStyle_PenJoinStyle
(void* brush0,
 double width1,
 int s2,
 int c3,
 int j4)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    Qt::PenStyle __qt_s2 = (Qt::PenStyle) s2;
    Qt::PenCapStyle __qt_c3 = (Qt::PenCapStyle) c3;
    Qt::PenJoinStyle __qt_j4 = (Qt::PenJoinStyle) j4;
    QPen *__qt_this = new QPen((const QBrush& )__qt_brush0, (double )width1, (Qt::PenStyle )__qt_s2, (Qt::PenCapStyle )__qt_c3, (Qt::PenJoinStyle )__qt_j4);
    return (void *) __qt_this;

}

// QPen::QPen(const QColor & color)
QTD_EXTERN QTD_EXPORT void* qtd_QPen_QPen_QColor
(void* color0)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    QPen *__qt_this = new QPen((const QColor& )__qt_color0);
    return (void *) __qt_this;

}

// QPen::QPen(const QPen & pen)
QTD_EXTERN QTD_EXPORT void* qtd_QPen_QPen_QPen
(void* pen0)
{
    const QPen&  __qt_pen0 = (const QPen& ) *(QPen *)pen0;
    QPen *__qt_this = new QPen((const QPen& )__qt_pen0);
    return (void *) __qt_this;

}

// QPen::brush() const
QTD_EXTERN QTD_EXPORT void* qtd_QPen_brush_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->brush();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPen::capStyle() const
QTD_EXTERN QTD_EXPORT int qtd_QPen_capStyle_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    int  __qt_return_value = __qt_this->capStyle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPen::color() const
QTD_EXTERN QTD_EXPORT void* qtd_QPen_color_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->color();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QPen::dashOffset() const
QTD_EXTERN QTD_EXPORT double qtd_QPen_dashOffset_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    double  __qt_return_value = __qt_this->dashOffset();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPen::dashPattern() const
QTD_EXTERN QTD_EXPORT void qtd_QPen_dashPattern_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    QVector<double >  __qt_return_value = __qt_this->dashPattern();


    qtd_allocate_double_array(__d_return_value, __qt_return_value.size());
    QVector<double > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<double > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        double  __qt_tmp = *__qt_return_value_it;
        double __java_tmp = __qt_tmp;
        qtd_assign_double_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QPen::isCosmetic() const
QTD_EXTERN QTD_EXPORT bool qtd_QPen_isCosmetic_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCosmetic();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPen::isSolid() const
QTD_EXTERN QTD_EXPORT bool qtd_QPen_isSolid_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSolid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPen::joinStyle() const
QTD_EXTERN QTD_EXPORT int qtd_QPen_joinStyle_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    int  __qt_return_value = __qt_this->joinStyle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPen::miterLimit() const
QTD_EXTERN QTD_EXPORT double qtd_QPen_miterLimit_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    double  __qt_return_value = __qt_this->miterLimit();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPen::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QPen_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QPen::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPen_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QPen *__qt_this = (QPen *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QPen::operator==(const QPen & p) const
QTD_EXTERN QTD_EXPORT bool qtd_QPen_operator_equal_QPen_const
(void* __this_nativeId,
 void* p0)
{
    const QPen&  __qt_p0 = (const QPen& ) *(QPen *)p0;
    QPen *__qt_this = (QPen *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QPen& )__qt_p0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPen::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPen_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QPen *__qt_this = (QPen *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QPen::setBrush(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setBrush_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setBrush((const QBrush& )__qt_brush0);

}

// QPen::setCapStyle(Qt::PenCapStyle pcs)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setCapStyle_PenCapStyle
(void* __this_nativeId,
 int pcs0)
{
    Qt::PenCapStyle __qt_pcs0 = (Qt::PenCapStyle) pcs0;
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setCapStyle((Qt::PenCapStyle )__qt_pcs0);

}

// QPen::setColor(const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setColor_QColor
(void* __this_nativeId,
 void* color0)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setColor((const QColor& )__qt_color0);

}

// QPen::setCosmetic(bool cosmetic)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setCosmetic_bool
(void* __this_nativeId,
 bool cosmetic0)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setCosmetic((bool )cosmetic0);

}

// QPen::setDashOffset(double doffset)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setDashOffset_double
(void* __this_nativeId,
 double doffset0)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setDashOffset((double )doffset0);

}

// QPen::setDashPattern(const QVector<double > & pattern)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setDashPattern_QVector
(void* __this_nativeId,
 DArray* pattern0)
{
    QVector<double > __qt_pattern0;
    __qt_pattern0.reserve(pattern0->length);
    for (int i=0; i<pattern0->length; ++i) {
        double __d_element;
        qtd_get_double_from_array(pattern0, i, &__d_element);
        double  __qt_element = (double ) __d_element;
        __qt_pattern0 << __qt_element;
    }
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setDashPattern((const QVector<double >& )__qt_pattern0);

}

// QPen::setJoinStyle(Qt::PenJoinStyle pcs)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setJoinStyle_PenJoinStyle
(void* __this_nativeId,
 int pcs0)
{
    Qt::PenJoinStyle __qt_pcs0 = (Qt::PenJoinStyle) pcs0;
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setJoinStyle((Qt::PenJoinStyle )__qt_pcs0);

}

// QPen::setMiterLimit(double limit)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setMiterLimit_double
(void* __this_nativeId,
 double limit0)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setMiterLimit((double )limit0);

}

// QPen::setStyle(Qt::PenStyle arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setStyle_PenStyle
(void* __this_nativeId,
 int arg__1)
{
    Qt::PenStyle __qt_arg__1 = (Qt::PenStyle) arg__1;
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setStyle((Qt::PenStyle )__qt_arg__1);

}

// QPen::setWidth(int width)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setWidth_int
(void* __this_nativeId,
 int width0)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setWidth((int )width0);

}

// QPen::setWidthF(double width)
QTD_EXTERN QTD_EXPORT void qtd_QPen_setWidthF_double
(void* __this_nativeId,
 double width0)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    __qt_this->setWidthF((double )width0);

}

// QPen::style() const
QTD_EXTERN QTD_EXPORT int qtd_QPen_style_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    int  __qt_return_value = __qt_this->style();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPen::width() const
QTD_EXTERN QTD_EXPORT int qtd_QPen_width_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    int  __qt_return_value = __qt_this->width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPen::widthF() const
QTD_EXTERN QTD_EXPORT double qtd_QPen_widthF_const
(void* __this_nativeId)
{
    QPen *__qt_this = (QPen *) __this_nativeId;
    double  __qt_return_value = __qt_this->widthF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QPen_QTypeInfo_isComplex() { return (bool) QTypeInfo<QPen>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QPen_QTypeInfo_isStatic() { return (bool) QTypeInfo<QPen>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QPen_QTypeInfo_isLarge() { return (bool) QTypeInfo<QPen>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QPen_QTypeInfo_isPointer() { return (bool) QTypeInfo<QPen>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QPen_QTypeInfo_isDummy() { return (bool) QTypeInfo<QPen>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QPen_placed_copy(void* orig, void* place) {
    const QPen&  __qt_orig = (const QPen& ) *(QPen *)orig;
    QPen *result = new (place) QPen (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QPen_native_copy(void* orig) {
    const QPen&  __qt_orig = (const QPen& ) *(QPen *)orig;
    QPen *result = new QPen (__qt_orig);
    return result;
}

