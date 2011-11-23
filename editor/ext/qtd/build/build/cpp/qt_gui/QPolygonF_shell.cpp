#include <QVariant>
#include <qdatastream.h>
#include <qlist.h>
#include <qpolygon.h>
#include <qvector.h>

#include <iostream>
#include <qpolygon.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_delete(void* nativeId)
{
    delete (QPolygonF*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_destroy(void* nativeId)
{
    call_destructor((QPolygonF*)nativeId);
}

// QPolygonF::insert(int i, const QPointF & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_insert_int_QPointF
    (void* __this_nativeId,
    int i0,
    QPointF t1)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->insert((int )i0, (const QPointF& )t1);

}

// QPolygonF::insert(int i, int n, const QPointF & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_insert_int_int_QPointF
    (void* __this_nativeId,
    int i0,
    int n1,
    QPointF t2)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->insert((int )i0, (int )n1, (const QPointF& )t2);

}


// ---externC---
// QPolygonF::QPolygonF()
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_QPolygonF
()
{
    QPolygonF *__qt_this = new QPolygonF();
    return (void *) __qt_this;

}

// QPolygonF::QPolygonF(const QPolygon & a)
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_QPolygonF_QPolygon
(void* a0)
{
    const QPolygon&  __qt_a0 = (const QPolygon& ) *(QPolygon *)a0;
    QPolygonF *__qt_this = new QPolygonF((const QPolygon& )__qt_a0);
    return (void *) __qt_this;

}

// QPolygonF::QPolygonF(const QPolygonF & a)
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_QPolygonF_QPolygonF
(void* a0)
{
    const QPolygonF&  __qt_a0 = (const QPolygonF& ) *(QPolygonF *)a0;
    QPolygonF *__qt_this = new QPolygonF((const QPolygonF& )__qt_a0);
    return (void *) __qt_this;

}

// QPolygonF::QPolygonF(const QRectF & r)
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_QPolygonF_QRectF
(QRectF r0)
{
    QPolygonF *__qt_this = new QPolygonF((const QRectF& )r0);
    return (void *) __qt_this;

}

// QPolygonF::QPolygonF(const QVector<QPointF > & v)
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_QPolygonF_QVector
(DArray* v0)
{
    QVector<QPointF > __qt_v0;
    __qt_v0.reserve(v0->length);
    for (int i=0; i<v0->length; ++i) {
        QPointF __d_element;
        qtd_get_QPointF_from_array(v0, i, &__d_element);
        __qt_v0 << __d_element;
    }
    QPolygonF *__qt_this = new QPolygonF((const QVector<QPointF >& )__qt_v0);
    return (void *) __qt_this;

}

// QPolygonF::QPolygonF(int size)
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_QPolygonF_int
(int size0)
{
    QPolygonF *__qt_this = new QPolygonF((int )size0);
    return (void *) __qt_this;

}

// QPolygonF::append(const QPointF & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_append_QPointF
(void* __this_nativeId,
 QPointF t0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->append((const QPointF& )t0);

}

// QPolygonF::at(int i) const
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_at_int_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 int i0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    const QPointF&  __qt_return_value = __qt_this->at((int )i0);

    *__d_return_value = __qt_return_value;

}

// QPolygonF::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_boundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->boundingRect();

    *__d_return_value = __qt_return_value;

}

// QPolygonF::capacity() const
QTD_EXTERN QTD_EXPORT int qtd_QPolygonF_capacity_const
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    int  __qt_return_value = __qt_this->capacity();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::clear()
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_clear
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->clear();

}

// QPolygonF::contains(const QPointF & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_contains_QPointF_const
(void* __this_nativeId,
 QPointF t0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QPointF& )t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::containsPoint(const QPointF & pt, Qt::FillRule fillRule) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_containsPoint_QPointF_FillRule_const
(void* __this_nativeId,
 QPointF pt0,
 int fillRule1)
{
    Qt::FillRule __qt_fillRule1 = (Qt::FillRule) fillRule1;
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    bool  __qt_return_value = __qt_this->containsPoint((const QPointF& )pt0, (Qt::FillRule )__qt_fillRule1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::count() const
QTD_EXTERN QTD_EXPORT int qtd_QPolygonF_count_const
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::count(const QPointF & t) const
QTD_EXTERN QTD_EXPORT int qtd_QPolygonF_count_QPointF_const
(void* __this_nativeId,
 QPointF t0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    int  __qt_return_value = __qt_this->count((const QPointF& )t0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::empty() const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_empty_const
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    bool  __qt_return_value = __qt_this->empty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::endsWith(const QPointF & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_endsWith_QPointF_const
(void* __this_nativeId,
 QPointF t0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    bool  __qt_return_value = __qt_this->endsWith((const QPointF& )t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::fill(const QPointF & t, int size)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_fill_QPointF_int
(void* __this_nativeId,
 void* __d_return_value,
 QPointF t0,
 int size1)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QVector<QPointF >&  __qt_return_value = __qt_this->fill((const QPointF& )t0, (int )size1);


    qtd_allocate_QPointF_array(__d_return_value, __qt_return_value.size());
    QVector<QPointF > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QPointF > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QPointF  __qt_tmp = *__qt_return_value_it;
        QPointF *__java_tmp = (QPointF *) &__qt_tmp;
        qtd_assign_QPointF_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QPolygonF::first() const
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_first_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    const QPointF&  __qt_return_value = __qt_this->first();

    *__d_return_value = __qt_return_value;

}

// QPolygonF::indexOf(const QPointF & t, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QPolygonF_indexOf_QPointF_int_const
(void* __this_nativeId,
 QPointF t0,
 int from1)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOf((const QPointF& )t0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::intersected(const QPolygonF & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_intersected_QPolygonF_const
(void* __this_nativeId,
 void* r0)
{
    const QPolygonF&  __qt_r0 = (const QPolygonF& ) *(QPolygonF *)r0;
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->intersected((const QPolygonF& )__qt_r0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QPolygonF::isClosed() const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_isClosed_const
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isClosed();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_isEmpty_const
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::isSharedWith(const QVector<QPointF > & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_isSharedWith_QVector_const
(void* __this_nativeId,
 DArray* other0)
{
    QVector<QPointF > __qt_other0;
    __qt_other0.reserve(other0->length);
    for (int i=0; i<other0->length; ++i) {
        QPointF __d_element;
        qtd_get_QPointF_from_array(other0, i, &__d_element);
        __qt_other0 << __d_element;
    }
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSharedWith((const QVector<QPointF >& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::last() const
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_last_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    const QPointF&  __qt_return_value = __qt_this->last();

    *__d_return_value = __qt_return_value;

}

// QPolygonF::lastIndexOf(const QPointF & t, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QPolygonF_lastIndexOf_QPointF_int_const
(void* __this_nativeId,
 QPointF t0,
 int from1)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    int  __qt_return_value = __qt_this->lastIndexOf((const QPointF& )t0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::mid(int pos, int length) const
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_mid_int_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int pos0,
 int length1)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QVector<QPointF >  __qt_return_value = __qt_this->mid((int )pos0, (int )length1);


    qtd_allocate_QPointF_array(__d_return_value, __qt_return_value.size());
    QVector<QPointF > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QPointF > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QPointF  __qt_tmp = *__qt_return_value_it;
        QPointF *__java_tmp = (QPointF *) &__qt_tmp;
        qtd_assign_QPointF_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QPolygonF::operator<<(QDataStream & stream)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_writeTo_QDataStream
(void* __this_nativeId,
 void* stream0)
{
    QDataStream&  __qt_stream0 = (QDataStream& ) * (QDataStream *) stream0;
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_stream0, *__qt_this);

}

// QPolygonF::operator==(const QVector<QPointF > & v) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_operator_equal_QVector_const
(void* __this_nativeId,
 DArray* v0)
{
    QVector<QPointF > __qt_v0;
    __qt_v0.reserve(v0->length);
    for (int i=0; i<v0->length; ++i) {
        QPointF __d_element;
        qtd_get_QPointF_from_array(v0, i, &__d_element);
        __qt_v0 << __d_element;
    }
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QVector<QPointF >& )__qt_v0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::operator>>(QDataStream & stream)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_readFrom_QDataStream
(void* __this_nativeId,
 void* stream0)
{
    QDataStream&  __qt_stream0 = (QDataStream& ) * (QDataStream *) stream0;
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_stream0, *__qt_this);

}

// QPolygonF::pop_back()
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_pop_back
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->pop_back();

}

// QPolygonF::pop_front()
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_pop_front
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->pop_front();

}

// QPolygonF::prepend(const QPointF & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_prepend_QPointF
(void* __this_nativeId,
 QPointF t0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->prepend((const QPointF& )t0);

}

// QPolygonF::push_back(const QPointF & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_push_back_QPointF
(void* __this_nativeId,
 QPointF t0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->push_back((const QPointF& )t0);

}

// QPolygonF::push_front(const QPointF & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_push_front_QPointF
(void* __this_nativeId,
 QPointF t0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->push_front((const QPointF& )t0);

}

// QPolygonF::remove(int i)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_remove_int
(void* __this_nativeId,
 int i0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->remove((int )i0);

}

// QPolygonF::remove(int i, int n)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_remove_int_int
(void* __this_nativeId,
 int i0,
 int n1)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->remove((int )i0, (int )n1);

}

// QPolygonF::replace(int i, const QPointF & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_replace_int_QPointF
(void* __this_nativeId,
 int i0,
 QPointF t1)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->replace((int )i0, (const QPointF& )t1);

}

// QPolygonF::reserve(int size)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_reserve_int
(void* __this_nativeId,
 int size0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->reserve((int )size0);

}

// QPolygonF::resize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_resize_int
(void* __this_nativeId,
 int size0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->resize((int )size0);

}

// QPolygonF::setSharable(bool sharable)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_setSharable_bool
(void* __this_nativeId,
 bool sharable0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->setSharable((bool )sharable0);

}

// QPolygonF::size() const
QTD_EXTERN QTD_EXPORT int qtd_QPolygonF_size_const
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    int  __qt_return_value = __qt_this->size();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::squeeze()
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_squeeze
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->squeeze();

}

// QPolygonF::startsWith(const QPointF & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_startsWith_QPointF_const
(void* __this_nativeId,
 QPointF t0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    bool  __qt_return_value = __qt_this->startsWith((const QPointF& )t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygonF::subtracted(const QPolygonF & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_subtracted_QPolygonF_const
(void* __this_nativeId,
 void* r0)
{
    const QPolygonF&  __qt_r0 = (const QPolygonF& ) *(QPolygonF *)r0;
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->subtracted((const QPolygonF& )__qt_r0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QPolygonF::toList() const
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_toList_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QList<QPointF >  __qt_return_value = __qt_this->toList();

QList<QPointF > &__d_return_value_tmp = (*(QList<QPointF > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPolygonF::toPolygon() const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_toPolygon_const
(void* __this_nativeId)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->toPolygon();

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QPolygonF::translate(const QPointF & offset)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_translate_QPointF
(void* __this_nativeId,
 QPointF offset0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->translate((const QPointF& )offset0);

}

// QPolygonF::translate(double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_translate_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    __qt_this->translate((double )dx0, (double )dy1);

}

// QPolygonF::translated(const QPointF & offset) const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_translated_QPointF_const
(void* __this_nativeId,
 QPointF offset0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->translated((const QPointF& )offset0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QPolygonF::translated(double dx, double dy) const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_translated_double_double_const
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->translated((double )dx0, (double )dy1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QPolygonF::united(const QPolygonF & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_united_QPolygonF_const
(void* __this_nativeId,
 void* r0)
{
    const QPolygonF&  __qt_r0 = (const QPolygonF& ) *(QPolygonF *)r0;
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->united((const QPolygonF& )__qt_r0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QPolygonF::value(int i) const
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_value_int_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 int i0)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->value((int )i0);

    *__d_return_value = __qt_return_value;

}

// QPolygonF::value(int i, const QPointF & defaultValue) const
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_value_int_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 int i0,
 QPointF defaultValue1)
{
    QPolygonF *__qt_this = (QPolygonF *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->value((int )i0, (const QPointF& )defaultValue1);

    *__d_return_value = __qt_return_value;

}

// QPolygonF::fromList(const QList<QPointF > & list)
QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_fromList_QList
(void* __d_return_value,
 void* list0)
{
QList<QPointF > __qt_list0 = (*(QList<QPointF > *)list0);
    QVector<QPointF >  __qt_return_value = QPolygonF::fromList((const QList<QPointF >& )__qt_list0);


    qtd_allocate_QPointF_array(__d_return_value, __qt_return_value.size());
    QVector<QPointF > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QPointF > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QPointF  __qt_tmp = *__qt_return_value_it;
        QPointF *__java_tmp = (QPointF *) &__qt_tmp;
        qtd_assign_QPointF_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_QTypeInfo_isComplex() { return (bool) QTypeInfo<QPolygonF>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_QTypeInfo_isStatic() { return (bool) QTypeInfo<QPolygonF>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_QTypeInfo_isLarge() { return (bool) QTypeInfo<QPolygonF>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_QTypeInfo_isPointer() { return (bool) QTypeInfo<QPolygonF>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QPolygonF_QTypeInfo_isDummy() { return (bool) QTypeInfo<QPolygonF>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QPolygonF_placed_copy(void* orig, void* place) {
    const QPolygonF&  __qt_orig = (const QPolygonF& ) *(QPolygonF *)orig;
    QPolygonF *result = new (place) QPolygonF (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QPolygonF_native_copy(void* orig) {
    const QPolygonF&  __qt_orig = (const QPolygonF& ) *(QPolygonF *)orig;
    QPolygonF *result = new QPolygonF (__qt_orig);
    return result;
}

