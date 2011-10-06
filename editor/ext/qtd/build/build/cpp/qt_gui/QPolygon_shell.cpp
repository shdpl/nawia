#include <QVariant>
#include <qdatastream.h>
#include <qlist.h>
#include <qpolygon.h>
#include <qvariant.h>
#include <qvector.h>

#include <iostream>
#include <qpolygon.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPolygon_delete(void* nativeId)
{
    delete (QPolygon*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPolygon_destroy(void* nativeId)
{
    call_destructor((QPolygon*)nativeId);
}

// QPolygon::insert(int i, const QPoint & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_insert_int_QPoint
    (void* __this_nativeId,
    int i0,
    QPoint t1)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->insert((int )i0, (const QPoint& )t1);

}

// QPolygon::insert(int i, int n, const QPoint & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_insert_int_int_QPoint
    (void* __this_nativeId,
    int i0,
    int n1,
    QPoint t2)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->insert((int )i0, (int )n1, (const QPoint& )t2);

}


// ---externC---
// QPolygon::QPolygon()
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_QPolygon
()
{
    QPolygon *__qt_this = new QPolygon();
    return (void *) __qt_this;

}

// QPolygon::QPolygon(const QPolygon & a)
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_QPolygon_QPolygon
(void* a0)
{
    const QPolygon&  __qt_a0 = (const QPolygon& ) *(QPolygon *)a0;
    QPolygon *__qt_this = new QPolygon((const QPolygon& )__qt_a0);
    return (void *) __qt_this;

}

// QPolygon::QPolygon(const QRect & r, bool closed)
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_QPolygon_QRect_bool
(QRect r0,
 bool closed1)
{
    QPolygon *__qt_this = new QPolygon((const QRect& )r0, (bool )closed1);
    return (void *) __qt_this;

}

// QPolygon::QPolygon(const QVector<QPoint > & v)
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_QPolygon_QVector
(DArray* v0)
{
    QVector<QPoint > __qt_v0;
    __qt_v0.reserve(v0->length);
    for (int i=0; i<v0->length; ++i) {
        QPoint __d_element;
        qtd_get_QPoint_from_array(v0, i, &__d_element);
        __qt_v0 << __d_element;
    }
    QPolygon *__qt_this = new QPolygon((const QVector<QPoint >& )__qt_v0);
    return (void *) __qt_this;

}

// QPolygon::QPolygon(int size)
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_QPolygon_int
(int size0)
{
    QPolygon *__qt_this = new QPolygon((int )size0);
    return (void *) __qt_this;

}

// QPolygon::append(const QPoint & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_append_QPoint
(void* __this_nativeId,
 QPoint t0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->append((const QPoint& )t0);

}

// QPolygon::at(int i) const
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_at_int_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 int i0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->at((int )i0);

    *__d_return_value = __qt_return_value;

}

// QPolygon::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_boundingRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->boundingRect();

    *__d_return_value = __qt_return_value;

}

// QPolygon::capacity() const
QTD_EXTERN QTD_EXPORT int qtd_QPolygon_capacity_const
(void* __this_nativeId)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    int  __qt_return_value = __qt_this->capacity();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::clear()
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_clear
(void* __this_nativeId)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->clear();

}

// QPolygon::contains(const QPoint & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_contains_QPoint_const
(void* __this_nativeId,
 QPoint t0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QPoint& )t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::containsPoint(const QPoint & pt, Qt::FillRule fillRule) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_containsPoint_QPoint_FillRule_const
(void* __this_nativeId,
 QPoint pt0,
 int fillRule1)
{
    Qt::FillRule __qt_fillRule1 = (Qt::FillRule) fillRule1;
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    bool  __qt_return_value = __qt_this->containsPoint((const QPoint& )pt0, (Qt::FillRule )__qt_fillRule1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::count() const
QTD_EXTERN QTD_EXPORT int qtd_QPolygon_count_const
(void* __this_nativeId)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::count(const QPoint & t) const
QTD_EXTERN QTD_EXPORT int qtd_QPolygon_count_QPoint_const
(void* __this_nativeId,
 QPoint t0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    int  __qt_return_value = __qt_this->count((const QPoint& )t0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::empty() const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_empty_const
(void* __this_nativeId)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    bool  __qt_return_value = __qt_this->empty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::endsWith(const QPoint & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_endsWith_QPoint_const
(void* __this_nativeId,
 QPoint t0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    bool  __qt_return_value = __qt_this->endsWith((const QPoint& )t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::fill(const QPoint & t, int size)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_fill_QPoint_int
(void* __this_nativeId,
 void* __d_return_value,
 QPoint t0,
 int size1)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QVector<QPoint >&  __qt_return_value = __qt_this->fill((const QPoint& )t0, (int )size1);


    qtd_allocate_QPoint_array(__d_return_value, __qt_return_value.size());
    QVector<QPoint > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QPoint > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QPoint  __qt_tmp = *__qt_return_value_it;
        QPoint *__java_tmp = (QPoint *) &__qt_tmp;
        qtd_assign_QPoint_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QPolygon::first() const
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_first_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->first();

    *__d_return_value = __qt_return_value;

}

// QPolygon::indexOf(const QPoint & t, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QPolygon_indexOf_QPoint_int_const
(void* __this_nativeId,
 QPoint t0,
 int from1)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOf((const QPoint& )t0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::intersected(const QPolygon & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_intersected_QPolygon_const
(void* __this_nativeId,
 void* r0)
{
    const QPolygon&  __qt_r0 = (const QPolygon& ) *(QPolygon *)r0;
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->intersected((const QPolygon& )__qt_r0);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QPolygon::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_isEmpty_const
(void* __this_nativeId)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::isSharedWith(const QVector<QPoint > & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_isSharedWith_QVector_const
(void* __this_nativeId,
 DArray* other0)
{
    QVector<QPoint > __qt_other0;
    __qt_other0.reserve(other0->length);
    for (int i=0; i<other0->length; ++i) {
        QPoint __d_element;
        qtd_get_QPoint_from_array(other0, i, &__d_element);
        __qt_other0 << __d_element;
    }
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSharedWith((const QVector<QPoint >& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::last() const
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_last_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->last();

    *__d_return_value = __qt_return_value;

}

// QPolygon::lastIndexOf(const QPoint & t, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QPolygon_lastIndexOf_QPoint_int_const
(void* __this_nativeId,
 QPoint t0,
 int from1)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    int  __qt_return_value = __qt_this->lastIndexOf((const QPoint& )t0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::mid(int pos, int length) const
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_mid_int_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int pos0,
 int length1)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QVector<QPoint >  __qt_return_value = __qt_this->mid((int )pos0, (int )length1);


    qtd_allocate_QPoint_array(__d_return_value, __qt_return_value.size());
    QVector<QPoint > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QPoint > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QPoint  __qt_tmp = *__qt_return_value_it;
        QPoint *__java_tmp = (QPoint *) &__qt_tmp;
        qtd_assign_QPoint_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QPolygon::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QPolygon::operator<<(QDataStream & stream)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_writeTo_QDataStream
(void* __this_nativeId,
 void* stream0)
{
    QDataStream&  __qt_stream0 = (QDataStream& ) * (QDataStream *) stream0;
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_stream0, *__qt_this);

}

// QPolygon::operator==(const QVector<QPoint > & v) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_operator_equal_QVector_const
(void* __this_nativeId,
 DArray* v0)
{
    QVector<QPoint > __qt_v0;
    __qt_v0.reserve(v0->length);
    for (int i=0; i<v0->length; ++i) {
        QPoint __d_element;
        qtd_get_QPoint_from_array(v0, i, &__d_element);
        __qt_v0 << __d_element;
    }
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QVector<QPoint >& )__qt_v0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::operator>>(QDataStream & stream)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_readFrom_QDataStream
(void* __this_nativeId,
 void* stream0)
{
    QDataStream&  __qt_stream0 = (QDataStream& ) * (QDataStream *) stream0;
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_stream0, *__qt_this);

}

// QPolygon::pop_back()
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_pop_back
(void* __this_nativeId)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->pop_back();

}

// QPolygon::pop_front()
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_pop_front
(void* __this_nativeId)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->pop_front();

}

// QPolygon::prepend(const QPoint & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_prepend_QPoint
(void* __this_nativeId,
 QPoint t0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->prepend((const QPoint& )t0);

}

// QPolygon::push_back(const QPoint & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_push_back_QPoint
(void* __this_nativeId,
 QPoint t0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->push_back((const QPoint& )t0);

}

// QPolygon::push_front(const QPoint & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_push_front_QPoint
(void* __this_nativeId,
 QPoint t0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->push_front((const QPoint& )t0);

}

// QPolygon::remove(int i)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_remove_int
(void* __this_nativeId,
 int i0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->remove((int )i0);

}

// QPolygon::remove(int i, int n)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_remove_int_int
(void* __this_nativeId,
 int i0,
 int n1)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->remove((int )i0, (int )n1);

}

// QPolygon::replace(int i, const QPoint & t)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_replace_int_QPoint
(void* __this_nativeId,
 int i0,
 QPoint t1)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->replace((int )i0, (const QPoint& )t1);

}

// QPolygon::reserve(int size)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_reserve_int
(void* __this_nativeId,
 int size0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->reserve((int )size0);

}

// QPolygon::resize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_resize_int
(void* __this_nativeId,
 int size0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->resize((int )size0);

}

// QPolygon::setSharable(bool sharable)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_setSharable_bool
(void* __this_nativeId,
 bool sharable0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->setSharable((bool )sharable0);

}

// QPolygon::size() const
QTD_EXTERN QTD_EXPORT int qtd_QPolygon_size_const
(void* __this_nativeId)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    int  __qt_return_value = __qt_this->size();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::squeeze()
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_squeeze
(void* __this_nativeId)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->squeeze();

}

// QPolygon::startsWith(const QPoint & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_startsWith_QPoint_const
(void* __this_nativeId,
 QPoint t0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    bool  __qt_return_value = __qt_this->startsWith((const QPoint& )t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPolygon::subtracted(const QPolygon & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_subtracted_QPolygon_const
(void* __this_nativeId,
 void* r0)
{
    const QPolygon&  __qt_r0 = (const QPolygon& ) *(QPolygon *)r0;
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->subtracted((const QPolygon& )__qt_r0);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QPolygon::toList() const
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_toList_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QList<QPoint >  __qt_return_value = __qt_this->toList();

QList<QPoint > &__d_return_value_tmp = (*(QList<QPoint > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPolygon::translate(const QPoint & offset)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_translate_QPoint
(void* __this_nativeId,
 QPoint offset0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->translate((const QPoint& )offset0);

}

// QPolygon::translate(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_translate_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    __qt_this->translate((int )dx0, (int )dy1);

}

// QPolygon::translated(const QPoint & offset) const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_translated_QPoint_const
(void* __this_nativeId,
 QPoint offset0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->translated((const QPoint& )offset0);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QPolygon::translated(int dx, int dy) const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_translated_int_int_const
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->translated((int )dx0, (int )dy1);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QPolygon::united(const QPolygon & r) const
QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_united_QPolygon_const
(void* __this_nativeId,
 void* r0)
{
    const QPolygon&  __qt_r0 = (const QPolygon& ) *(QPolygon *)r0;
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->united((const QPolygon& )__qt_r0);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QPolygon::value(int i) const
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_value_int_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 int i0)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->value((int )i0);

    *__d_return_value = __qt_return_value;

}

// QPolygon::value(int i, const QPoint & defaultValue) const
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_value_int_QPoint_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 int i0,
 QPoint defaultValue1)
{
    QPolygon *__qt_this = (QPolygon *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->value((int )i0, (const QPoint& )defaultValue1);

    *__d_return_value = __qt_return_value;

}

// QPolygon::fromList(const QList<QPoint > & list)
QTD_EXTERN QTD_EXPORT void qtd_QPolygon_fromList_QList
(void* __d_return_value,
 void* list0)
{
QList<QPoint > __qt_list0 = (*(QList<QPoint > *)list0);
    QVector<QPoint >  __qt_return_value = QPolygon::fromList((const QList<QPoint >& )__qt_list0);


    qtd_allocate_QPoint_array(__d_return_value, __qt_return_value.size());
    QVector<QPoint > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QPoint > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QPoint  __qt_tmp = *__qt_return_value_it;
        QPoint *__java_tmp = (QPoint *) &__qt_tmp;
        qtd_assign_QPoint_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_QTypeInfo_isComplex() { return (bool) QTypeInfo<QPolygon>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_QTypeInfo_isStatic() { return (bool) QTypeInfo<QPolygon>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_QTypeInfo_isLarge() { return (bool) QTypeInfo<QPolygon>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_QTypeInfo_isPointer() { return (bool) QTypeInfo<QPolygon>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QPolygon_QTypeInfo_isDummy() { return (bool) QTypeInfo<QPolygon>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QPolygon_placed_copy(void* orig, void* place) {
    const QPolygon&  __qt_orig = (const QPolygon& ) *(QPolygon *)orig;
    QPolygon *result = new (place) QPolygon (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QPolygon_native_copy(void* orig) {
    const QPolygon&  __qt_orig = (const QPolygon& ) *(QPolygon *)orig;
    QPolygon *result = new QPolygon (__qt_orig);
    return result;
}

