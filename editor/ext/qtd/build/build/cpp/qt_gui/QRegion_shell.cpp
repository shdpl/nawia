#include <QVariant>
#include <qbitmap.h>
#include <qdatastream.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qvariant.h>
#include <qvector.h>

#include <iostream>
#include <qregion.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QRegion_delete(void* nativeId)
{
    delete (QRegion*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QRegion_destroy(void* nativeId)
{
    call_destructor((QRegion*)nativeId);
}

// ---externC---
// QRegion::QRegion()
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_QRegion
()
{
    QRegion *__qt_this = new QRegion();
    return (void *) __qt_this;

}

// QRegion::QRegion(const QBitmap & bitmap)
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_QRegion_QBitmap
(void* bitmap0)
{
    const QBitmap&  __qt_bitmap0 = (const QBitmap& ) *(QBitmap *)bitmap0;
    QRegion *__qt_this = new QRegion((const QBitmap& )__qt_bitmap0);
    return (void *) __qt_this;

}

// QRegion::QRegion(const QPolygon & pa, Qt::FillRule fillRule)
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_QRegion_QPolygon_FillRule
(void* pa0,
 int fillRule1)
{
    const QPolygon&  __qt_pa0 = (const QPolygon& ) *(QPolygon *)pa0;
    Qt::FillRule __qt_fillRule1 = (Qt::FillRule) fillRule1;
    QRegion *__qt_this = new QRegion((const QPolygon& )__qt_pa0, (Qt::FillRule )__qt_fillRule1);
    return (void *) __qt_this;

}

// QRegion::QRegion(const QRect & r, QRegion::RegionType t)
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_QRegion_QRect_RegionType
(QRect r0,
 int t1)
{
    QRegion::RegionType __qt_t1 = (QRegion::RegionType) t1;
    QRegion *__qt_this = new QRegion((const QRect& )r0, (QRegion::RegionType )__qt_t1);
    return (void *) __qt_this;

}

// QRegion::QRegion(const QRegion & region)
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_QRegion_QRegion
(void* region0)
{
    const QRegion&  __qt_region0 = (const QRegion& ) *(QRegion *)region0;
    QRegion *__qt_this = new QRegion((const QRegion& )__qt_region0);
    return (void *) __qt_this;

}

// QRegion::QRegion(int x, int y, int w, int h, QRegion::RegionType t)
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_QRegion_int_int_int_int_RegionType
(int x0,
 int y1,
 int w2,
 int h3,
 int t4)
{
    QRegion::RegionType __qt_t4 = (QRegion::RegionType) t4;
    QRegion *__qt_this = new QRegion((int )x0, (int )y1, (int )w2, (int )h3, (QRegion::RegionType )__qt_t4);
    return (void *) __qt_this;

}

// QRegion::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QRegion_boundingRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->boundingRect();

    *__d_return_value = __qt_return_value;

}

// QRegion::contains(const QPoint & p) const
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_contains_QPoint_const
(void* __this_nativeId,
 QPoint p0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QPoint& )p0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegion::contains(const QRect & r) const
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_contains_QRect_const
(void* __this_nativeId,
 QRect r0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QRect& )r0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegion::intersect(const QRect & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_intersect_QRect_const
(void* __this_nativeId,
 QRect r0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->intersect((const QRect& )r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::intersected(const QRect & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_intersected_QRect_const
(void* __this_nativeId,
 QRect r0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->intersected((const QRect& )r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::intersected(const QRegion & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_intersected_QRegion_const
(void* __this_nativeId,
 void* r0)
{
    const QRegion&  __qt_r0 = (const QRegion& ) *(QRegion *)r0;
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->intersected((const QRegion& )__qt_r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::intersects(const QRect & r) const
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_intersects_QRect_const
(void* __this_nativeId,
 QRect r0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    bool  __qt_return_value = __qt_this->intersects((const QRect& )r0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegion::intersects(const QRegion & r) const
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_intersects_QRegion_const
(void* __this_nativeId,
 void* r0)
{
    const QRegion&  __qt_r0 = (const QRegion& ) *(QRegion *)r0;
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    bool  __qt_return_value = __qt_this->intersects((const QRegion& )__qt_r0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegion::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_isEmpty_const
(void* __this_nativeId)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegion::numRects() const
QTD_EXTERN QTD_EXPORT int qtd_QRegion_numRects_const
(void* __this_nativeId)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    int  __qt_return_value = __qt_this->numRects();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegion::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QRegion::operator&(const QRect & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_operator_and_QRect_const
(void* __this_nativeId,
 QRect r0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    const QRegion  __qt_return_value = __qt_this->operator&((const QRect& )r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::operator+(const QRect & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_operator_add_QRect_const
(void* __this_nativeId,
 QRect r0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    const QRegion  __qt_return_value = __qt_this->operator+((const QRect& )r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QRegion_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QRegion::operator==(const QRegion & r) const
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_operator_equal_QRegion_const
(void* __this_nativeId,
 void* r0)
{
    const QRegion&  __qt_r0 = (const QRegion& ) *(QRegion *)r0;
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QRegion& )__qt_r0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegion::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QRegion_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QRegion::rectCount() const
QTD_EXTERN QTD_EXPORT int qtd_QRegion_rectCount_const
(void* __this_nativeId)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    int  __qt_return_value = __qt_this->rectCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegion::rects() const
QTD_EXTERN QTD_EXPORT void qtd_QRegion_rects_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QVector<QRect >  __qt_return_value = __qt_this->rects();


    qtd_allocate_QRect_array(__d_return_value, __qt_return_value.size());
    QVector<QRect > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QRect > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QRect  __qt_tmp = *__qt_return_value_it;
        QRect *__java_tmp = (QRect *) &__qt_tmp;
        qtd_assign_QRect_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QRegion::setRects(const QRect * rect, int num)
QTD_EXTERN QTD_EXPORT void qtd_QRegion_setRects_nativepointerQRect_int
(void* __this_nativeId,
 void* rect0,
 int num1)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    __qt_this->setRects((const QRect* )rect0, (int )num1);

}

// QRegion::subtracted(const QRegion & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_subtracted_QRegion_const
(void* __this_nativeId,
 void* r0)
{
    const QRegion&  __qt_r0 = (const QRegion& ) *(QRegion *)r0;
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->subtracted((const QRegion& )__qt_r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::translate(const QPoint & p)
QTD_EXTERN QTD_EXPORT void qtd_QRegion_translate_QPoint
(void* __this_nativeId,
 QPoint p0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    __qt_this->translate((const QPoint& )p0);

}

// QRegion::translate(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QRegion_translate_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    __qt_this->translate((int )dx0, (int )dy1);

}

// QRegion::translated(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_translated_QPoint_const
(void* __this_nativeId,
 QPoint p0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->translated((const QPoint& )p0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::translated(int dx, int dy) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_translated_int_int_const
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->translated((int )dx0, (int )dy1);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::unite(const QRect & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_unite_QRect_const
(void* __this_nativeId,
 QRect r0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->unite((const QRect& )r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::united(const QRect & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_united_QRect_const
(void* __this_nativeId,
 QRect r0)
{
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->united((const QRect& )r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::united(const QRegion & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_united_QRegion_const
(void* __this_nativeId,
 void* r0)
{
    const QRegion&  __qt_r0 = (const QRegion& ) *(QRegion *)r0;
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->united((const QRegion& )__qt_r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QRegion::xored(const QRegion & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QRegion_xored_QRegion_const
(void* __this_nativeId,
 void* r0)
{
    const QRegion&  __qt_r0 = (const QRegion& ) *(QRegion *)r0;
    QRegion *__qt_this = (QRegion *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->xored((const QRegion& )__qt_r0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_QTypeInfo_isComplex() { return (bool) QTypeInfo<QRegion>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_QTypeInfo_isStatic() { return (bool) QTypeInfo<QRegion>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_QTypeInfo_isLarge() { return (bool) QTypeInfo<QRegion>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_QTypeInfo_isPointer() { return (bool) QTypeInfo<QRegion>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QRegion_QTypeInfo_isDummy() { return (bool) QTypeInfo<QRegion>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QRegion_placed_copy(void* orig, void* place) {
    const QRegion&  __qt_orig = (const QRegion& ) *(QRegion *)orig;
    QRegion *result = new (place) QRegion (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QRegion_native_copy(void* orig) {
    const QRegion&  __qt_orig = (const QRegion& ) *(QRegion *)orig;
    QRegion *result = new QRegion (__qt_orig);
    return result;
}

