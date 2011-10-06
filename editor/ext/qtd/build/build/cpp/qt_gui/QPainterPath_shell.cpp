#include <QPainterPath>
#include <QVariant>
#include <qdatastream.h>
#include <qfont.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qpainterpath.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qtransform.h>

#include <iostream>
#include <qpainterpath.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_delete(void* nativeId)
{
    delete (QPainterPath*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_destroy(void* nativeId)
{
    call_destructor((QPainterPath*)nativeId);
}

// ---externC---
// QPainterPath::QPainterPath()
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_QPainterPath
()
{
    QPainterPath *__qt_this = new QPainterPath();
    return (void *) __qt_this;

}

// QPainterPath::QPainterPath(const QPainterPath & other)
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_QPainterPath_QPainterPath
(void* other0)
{
    const QPainterPath&  __qt_other0 = (const QPainterPath& ) *(QPainterPath *)other0;
    QPainterPath *__qt_this = new QPainterPath((const QPainterPath& )__qt_other0);
    return (void *) __qt_this;

}

// QPainterPath::QPainterPath(const QPointF & startPoint)
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_QPainterPath_QPointF
(QPointF startPoint0)
{
    QPainterPath *__qt_this = new QPainterPath((const QPointF& )startPoint0);
    return (void *) __qt_this;

}

// QPainterPath::addEllipse(const QPointF & center, double rx, double ry)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addEllipse_QPointF_double_double
(void* __this_nativeId,
 QPointF center0,
 double rx1,
 double ry2)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addEllipse((const QPointF& )center0, (double )rx1, (double )ry2);

}

// QPainterPath::addEllipse(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addEllipse_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addEllipse((const QRectF& )rect0);

}

// QPainterPath::addEllipse(double x, double y, double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addEllipse_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addEllipse((double )x0, (double )y1, (double )w2, (double )h3);

}

// QPainterPath::addPath(const QPainterPath & path)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addPath_QPainterPath
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addPath((const QPainterPath& )__qt_path0);

}

// QPainterPath::addPolygon(const QPolygonF & polygon)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addPolygon_QPolygonF
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addPolygon((const QPolygonF& )__qt_polygon0);

}

// QPainterPath::addRect(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addRect_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addRect((const QRectF& )rect0);

}

// QPainterPath::addRect(double x, double y, double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addRect_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addRect((double )x0, (double )y1, (double )w2, (double )h3);

}

// QPainterPath::addRegion(const QRegion & region)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addRegion_QRegion
(void* __this_nativeId,
 void* region0)
{
    const QRegion&  __qt_region0 = (const QRegion& ) *(QRegion *)region0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addRegion((const QRegion& )__qt_region0);

}

// QPainterPath::addRoundRect(const QRectF & rect, int roundness)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addRoundRect_QRectF_int
(void* __this_nativeId,
 QRectF rect0,
 int roundness1)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addRoundRect((const QRectF& )rect0, (int )roundness1);

}

// QPainterPath::addRoundRect(const QRectF & rect, int xRnd, int yRnd)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addRoundRect_QRectF_int_int
(void* __this_nativeId,
 QRectF rect0,
 int xRnd1,
 int yRnd2)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addRoundRect((const QRectF& )rect0, (int )xRnd1, (int )yRnd2);

}

// QPainterPath::addRoundRect(double x, double y, double w, double h, int roundness)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addRoundRect_double_double_double_double_int
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int roundness4)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addRoundRect((double )x0, (double )y1, (double )w2, (double )h3, (int )roundness4);

}

// QPainterPath::addRoundRect(double x, double y, double w, double h, int xRnd, int yRnd)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addRoundRect_double_double_double_double_int_int
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int xRnd4,
 int yRnd5)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addRoundRect((double )x0, (double )y1, (double )w2, (double )h3, (int )xRnd4, (int )yRnd5);

}

// QPainterPath::addRoundedRect(const QRectF & rect, double xRadius, double yRadius, Qt::SizeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addRoundedRect_QRectF_double_double_SizeMode
(void* __this_nativeId,
 QRectF rect0,
 double xRadius1,
 double yRadius2,
 int mode3)
{
    Qt::SizeMode __qt_mode3 = (Qt::SizeMode) mode3;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addRoundedRect((const QRectF& )rect0, (double )xRadius1, (double )yRadius2, (Qt::SizeMode )__qt_mode3);

}

// QPainterPath::addRoundedRect(double x, double y, double w, double h, double xRadius, double yRadius, Qt::SizeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addRoundedRect_double_double_double_double_double_double_SizeMode
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 double xRadius4,
 double yRadius5,
 int mode6)
{
    Qt::SizeMode __qt_mode6 = (Qt::SizeMode) mode6;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addRoundedRect((double )x0, (double )y1, (double )w2, (double )h3, (double )xRadius4, (double )yRadius5, (Qt::SizeMode )__qt_mode6);

}

// QPainterPath::addText(const QPointF & point, const QFont & f, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addText_QPointF_QFont_string
(void* __this_nativeId,
 QPointF point0,
 void* f1,
 DArray text2)
{
    const QFont&  __qt_f1 = (const QFont& ) *(QFont *)f1;
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addText((const QPointF& )point0, (const QFont& )__qt_f1, (const QString& )__qt_text2);

}

// QPainterPath::addText(double x, double y, const QFont & f, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_addText_double_double_QFont_string
(void* __this_nativeId,
 double x0,
 double y1,
 void* f2,
 DArray text3)
{
    const QFont&  __qt_f2 = (const QFont& ) *(QFont *)f2;
    QString __qt_text3 = QString::fromUtf8((const char *)text3.ptr, text3.length);
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->addText((double )x0, (double )y1, (const QFont& )__qt_f2, (const QString& )__qt_text3);

}

// QPainterPath::angleAtPercent(double t) const
QTD_EXTERN QTD_EXPORT double qtd_QPainterPath_angleAtPercent_double_const
(void* __this_nativeId,
 double t0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    double  __qt_return_value = __qt_this->angleAtPercent((double )t0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::arcMoveTo(const QRectF & rect, double angle)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_arcMoveTo_QRectF_double
(void* __this_nativeId,
 QRectF rect0,
 double angle1)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->arcMoveTo((const QRectF& )rect0, (double )angle1);

}

// QPainterPath::arcMoveTo(double x, double y, double w, double h, double angle)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_arcMoveTo_double_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 double angle4)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->arcMoveTo((double )x0, (double )y1, (double )w2, (double )h3, (double )angle4);

}

// QPainterPath::arcTo(const QRectF & rect, double startAngle, double arcLength)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_arcTo_QRectF_double_double
(void* __this_nativeId,
 QRectF rect0,
 double startAngle1,
 double arcLength2)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->arcTo((const QRectF& )rect0, (double )startAngle1, (double )arcLength2);

}

// QPainterPath::arcTo(double x, double y, double w, double h, double startAngle, double arcLength)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_arcTo_double_double_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 double startAngle4,
 double arcLength5)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->arcTo((double )x0, (double )y1, (double )w2, (double )h3, (double )startAngle4, (double )arcLength5);

}

// QPainterPath::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_boundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->boundingRect();

    *__d_return_value = __qt_return_value;

}

// QPainterPath::closeSubpath()
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_closeSubpath
(void* __this_nativeId)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->closeSubpath();

}

// QPainterPath::connectPath(const QPainterPath & path)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_connectPath_QPainterPath
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->connectPath((const QPainterPath& )__qt_path0);

}

// QPainterPath::contains(const QPainterPath & p) const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_contains_QPainterPath_const
(void* __this_nativeId,
 void* p0)
{
    const QPainterPath&  __qt_p0 = (const QPainterPath& ) *(QPainterPath *)p0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QPainterPath& )__qt_p0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::contains(const QPointF & pt) const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_contains_QPointF_const
(void* __this_nativeId,
 QPointF pt0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QPointF& )pt0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::contains(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_contains_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QRectF& )rect0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::controlPointRect() const
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_controlPointRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->controlPointRect();

    *__d_return_value = __qt_return_value;

}

// QPainterPath::cubicTo(const QPointF & ctrlPt1, const QPointF & ctrlPt2, const QPointF & endPt)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_cubicTo_QPointF_QPointF_QPointF
(void* __this_nativeId,
 QPointF ctrlPt10,
 QPointF ctrlPt21,
 QPointF endPt2)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->cubicTo((const QPointF& )ctrlPt10, (const QPointF& )ctrlPt21, (const QPointF& )endPt2);

}

// QPainterPath::cubicTo(double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_cubicTo_double_double_double_double_double_double
(void* __this_nativeId,
 double ctrlPt1x0,
 double ctrlPt1y1,
 double ctrlPt2x2,
 double ctrlPt2y3,
 double endPtx4,
 double endPty5)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->cubicTo((double )ctrlPt1x0, (double )ctrlPt1y1, (double )ctrlPt2x2, (double )ctrlPt2y3, (double )endPtx4, (double )endPty5);

}

// QPainterPath::currentPosition() const
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_currentPosition_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->currentPosition();

    *__d_return_value = __qt_return_value;

}

// QPainterPath::elementAt(int i) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_elementAt_int_const
(void* __this_nativeId,
 int i0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    const QPainterPath::Element&  __qt_return_value = __qt_this->elementAt((int )i0);

    void* __d_return_value = (void*) new QPainterPath::Element(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::elementCount() const
QTD_EXTERN QTD_EXPORT int qtd_QPainterPath_elementCount_const
(void* __this_nativeId)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    int  __qt_return_value = __qt_this->elementCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::fillRule() const
QTD_EXTERN QTD_EXPORT int qtd_QPainterPath_fillRule_const
(void* __this_nativeId)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    int  __qt_return_value = __qt_this->fillRule();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::intersected(const QPainterPath & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_intersected_QPainterPath_const
(void* __this_nativeId,
 void* r0)
{
    const QPainterPath&  __qt_r0 = (const QPainterPath& ) *(QPainterPath *)r0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->intersected((const QPainterPath& )__qt_r0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::intersects(const QPainterPath & p) const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_intersects_QPainterPath_const
(void* __this_nativeId,
 void* p0)
{
    const QPainterPath&  __qt_p0 = (const QPainterPath& ) *(QPainterPath *)p0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    bool  __qt_return_value = __qt_this->intersects((const QPainterPath& )__qt_p0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::intersects(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_intersects_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    bool  __qt_return_value = __qt_this->intersects((const QRectF& )rect0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_isEmpty_const
(void* __this_nativeId)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::length() const
QTD_EXTERN QTD_EXPORT double qtd_QPainterPath_length_const
(void* __this_nativeId)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    double  __qt_return_value = __qt_this->length();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::lineTo(const QPointF & p)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_lineTo_QPointF
(void* __this_nativeId,
 QPointF p0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->lineTo((const QPointF& )p0);

}

// QPainterPath::lineTo(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_lineTo_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->lineTo((double )x0, (double )y1);

}

// QPainterPath::moveTo(const QPointF & p)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_moveTo_QPointF
(void* __this_nativeId,
 QPointF p0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->moveTo((const QPointF& )p0);

}

// QPainterPath::moveTo(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_moveTo_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->moveTo((double )x0, (double )y1);

}

// QPainterPath::operator&(const QPainterPath & other) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_operator_and_QPainterPath_const
(void* __this_nativeId,
 void* other0)
{
    const QPainterPath&  __qt_other0 = (const QPainterPath& ) *(QPainterPath *)other0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->operator&((const QPainterPath& )__qt_other0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::operator&=(const QPainterPath & other)
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_operator_and_assign_QPainterPath
(void* __this_nativeId,
 void* other0)
{
    const QPainterPath&  __qt_other0 = (const QPainterPath& ) *(QPainterPath *)other0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath&  __qt_return_value = __qt_this->operator&=((const QPainterPath& )__qt_other0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QPainterPath::operator+(const QPainterPath & other) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_operator_add_QPainterPath_const
(void* __this_nativeId,
 void* other0)
{
    const QPainterPath&  __qt_other0 = (const QPainterPath& ) *(QPainterPath *)other0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->operator+((const QPainterPath& )__qt_other0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::operator+=(const QPainterPath & other)
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_operator_add_assign_QPainterPath
(void* __this_nativeId,
 void* other0)
{
    const QPainterPath&  __qt_other0 = (const QPainterPath& ) *(QPainterPath *)other0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath&  __qt_return_value = __qt_this->operator+=((const QPainterPath& )__qt_other0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QPainterPath::operator-(const QPainterPath & other) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_operator_subtract_QPainterPath_const
(void* __this_nativeId,
 void* other0)
{
    const QPainterPath&  __qt_other0 = (const QPainterPath& ) *(QPainterPath *)other0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->operator-((const QPainterPath& )__qt_other0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::operator-=(const QPainterPath & other)
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_operator_subtract_assign_QPainterPath
(void* __this_nativeId,
 void* other0)
{
    const QPainterPath&  __qt_other0 = (const QPainterPath& ) *(QPainterPath *)other0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath&  __qt_return_value = __qt_this->operator-=((const QPainterPath& )__qt_other0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QPainterPath::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QPainterPath::operator==(const QPainterPath & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_operator_equal_QPainterPath_const
(void* __this_nativeId,
 void* other0)
{
    const QPainterPath&  __qt_other0 = (const QPainterPath& ) *(QPainterPath *)other0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QPainterPath& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QPainterPath::operator|(const QPainterPath & other) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_operator_or_QPainterPath_const
(void* __this_nativeId,
 void* other0)
{
    const QPainterPath&  __qt_other0 = (const QPainterPath& ) *(QPainterPath *)other0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->operator|((const QPainterPath& )__qt_other0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::operator|=(const QPainterPath & other)
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_operator_or_assign_QPainterPath
(void* __this_nativeId,
 void* other0)
{
    const QPainterPath&  __qt_other0 = (const QPainterPath& ) *(QPainterPath *)other0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath&  __qt_return_value = __qt_this->operator|=((const QPainterPath& )__qt_other0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QPainterPath::percentAtLength(double t) const
QTD_EXTERN QTD_EXPORT double qtd_QPainterPath_percentAtLength_double_const
(void* __this_nativeId,
 double t0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    double  __qt_return_value = __qt_this->percentAtLength((double )t0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::pointAtPercent(double t) const
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_pointAtPercent_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double t0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->pointAtPercent((double )t0);

    *__d_return_value = __qt_return_value;

}

// QPainterPath::quadTo(const QPointF & ctrlPt, const QPointF & endPt)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_quadTo_QPointF_QPointF
(void* __this_nativeId,
 QPointF ctrlPt0,
 QPointF endPt1)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->quadTo((const QPointF& )ctrlPt0, (const QPointF& )endPt1);

}

// QPainterPath::quadTo(double ctrlPtx, double ctrlPty, double endPtx, double endPty)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_quadTo_double_double_double_double
(void* __this_nativeId,
 double ctrlPtx0,
 double ctrlPty1,
 double endPtx2,
 double endPty3)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->quadTo((double )ctrlPtx0, (double )ctrlPty1, (double )endPtx2, (double )endPty3);

}

// QPainterPath::setElementPositionAt(int i, double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_setElementPositionAt_int_double_double
(void* __this_nativeId,
 int i0,
 double x1,
 double y2)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->setElementPositionAt((int )i0, (double )x1, (double )y2);

}

// QPainterPath::setFillRule(Qt::FillRule fillRule)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_setFillRule_FillRule
(void* __this_nativeId,
 int fillRule0)
{
    Qt::FillRule __qt_fillRule0 = (Qt::FillRule) fillRule0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->setFillRule((Qt::FillRule )__qt_fillRule0);

}

// QPainterPath::simplified() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_simplified_const
(void* __this_nativeId)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->simplified();

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::slopeAtPercent(double t) const
QTD_EXTERN QTD_EXPORT double qtd_QPainterPath_slopeAtPercent_double_const
(void* __this_nativeId,
 double t0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    double  __qt_return_value = __qt_this->slopeAtPercent((double )t0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPath::subtracted(const QPainterPath & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_subtracted_QPainterPath_const
(void* __this_nativeId,
 void* r0)
{
    const QPainterPath&  __qt_r0 = (const QPainterPath& ) *(QPainterPath *)r0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->subtracted((const QPainterPath& )__qt_r0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::subtractedInverted(const QPainterPath & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_subtractedInverted_QPainterPath_const
(void* __this_nativeId,
 void* r0)
{
    const QPainterPath&  __qt_r0 = (const QPainterPath& ) *(QPainterPath *)r0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->subtractedInverted((const QPainterPath& )__qt_r0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::toFillPolygon(const QMatrix & matrix) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_toFillPolygon_QMatrix_const
(void* __this_nativeId,
 void* matrix0)
{
    const QMatrix&  __qt_matrix0 = (const QMatrix& ) *(QMatrix *)matrix0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->toFillPolygon((const QMatrix& )__qt_matrix0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::toFillPolygon(const QTransform & matrix) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_toFillPolygon_QTransform_const
(void* __this_nativeId,
 void* matrix0)
{
    const QTransform&  __qt_matrix0 = (const QTransform& ) *(QTransform *)matrix0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->toFillPolygon((const QTransform& )__qt_matrix0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::toFillPolygons(const QMatrix & matrix) const
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_toFillPolygons_QMatrix_const
(void* __this_nativeId,
 void* __d_return_value,
 void* matrix0)
{
    const QMatrix&  __qt_matrix0 = (const QMatrix& ) *(QMatrix *)matrix0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QList<QPolygonF >  __qt_return_value = __qt_this->toFillPolygons((const QMatrix& )__qt_matrix0);

QList<QPolygonF > &__d_return_value_tmp = (*(QList<QPolygonF > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPainterPath::toFillPolygons(const QTransform & matrix) const
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_toFillPolygons_QTransform_const
(void* __this_nativeId,
 void* __d_return_value,
 void* matrix0)
{
    const QTransform&  __qt_matrix0 = (const QTransform& ) *(QTransform *)matrix0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QList<QPolygonF >  __qt_return_value = __qt_this->toFillPolygons((const QTransform& )__qt_matrix0);

QList<QPolygonF > &__d_return_value_tmp = (*(QList<QPolygonF > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPainterPath::toReversed() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_toReversed_const
(void* __this_nativeId)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->toReversed();

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::toSubpathPolygons(const QMatrix & matrix) const
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_toSubpathPolygons_QMatrix_const
(void* __this_nativeId,
 void* __d_return_value,
 void* matrix0)
{
    const QMatrix&  __qt_matrix0 = (const QMatrix& ) *(QMatrix *)matrix0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QList<QPolygonF >  __qt_return_value = __qt_this->toSubpathPolygons((const QMatrix& )__qt_matrix0);

QList<QPolygonF > &__d_return_value_tmp = (*(QList<QPolygonF > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPainterPath::toSubpathPolygons(const QTransform & matrix) const
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_toSubpathPolygons_QTransform_const
(void* __this_nativeId,
 void* __d_return_value,
 void* matrix0)
{
    const QTransform&  __qt_matrix0 = (const QTransform& ) *(QTransform *)matrix0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QList<QPolygonF >  __qt_return_value = __qt_this->toSubpathPolygons((const QTransform& )__qt_matrix0);

QList<QPolygonF > &__d_return_value_tmp = (*(QList<QPolygonF > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPainterPath::translate(const QPointF & offset)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_translate_QPointF
(void* __this_nativeId,
 QPointF offset0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->translate((const QPointF& )offset0);

}

// QPainterPath::translate(double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_translate_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    __qt_this->translate((double )dx0, (double )dy1);

}

// QPainterPath::translated(const QPointF & offset) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_translated_QPointF_const
(void* __this_nativeId,
 QPointF offset0)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->translated((const QPointF& )offset0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::translated(double dx, double dy) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_translated_double_double_const
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->translated((double )dx0, (double )dy1);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPath::united(const QPainterPath & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_united_QPainterPath_const
(void* __this_nativeId,
 void* r0)
{
    const QPainterPath&  __qt_r0 = (const QPainterPath& ) *(QPainterPath *)r0;
    QPainterPath *__qt_this = (QPainterPath *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->united((const QPainterPath& )__qt_r0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_QTypeInfo_isComplex() { return (bool) QTypeInfo<QPainterPath>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_QTypeInfo_isStatic() { return (bool) QTypeInfo<QPainterPath>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_QTypeInfo_isLarge() { return (bool) QTypeInfo<QPainterPath>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_QTypeInfo_isPointer() { return (bool) QTypeInfo<QPainterPath>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QPainterPath_QTypeInfo_isDummy() { return (bool) QTypeInfo<QPainterPath>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QPainterPath_placed_copy(void* orig, void* place) {
    const QPainterPath&  __qt_orig = (const QPainterPath& ) *(QPainterPath *)orig;
    QPainterPath *result = new (place) QPainterPath (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QPainterPath_native_copy(void* orig) {
    const QPainterPath&  __qt_orig = (const QPainterPath& ) *(QPainterPath *)orig;
    QPainterPath *result = new QPainterPath (__qt_orig);
    return result;
}

