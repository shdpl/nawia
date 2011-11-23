#include <QVariant>
#include <qlist.h>
#include <qvector.h>
#include <qxmlstream.h>

#include <iostream>
#include <qxmlstream.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_delete(void* nativeId)
{
    delete (QXmlStreamAttributes*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_destroy(void* nativeId)
{
    call_destructor((QXmlStreamAttributes*)nativeId);
}

// ---externC---
// QXmlStreamAttributes::()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamAttributes_QXmlStreamAttributes
()
{
    QXmlStreamAttributes *__qt_this = new QXmlStreamAttributes();
    return (void *) __qt_this;

}

// QXmlStreamAttributes::append(const QString & namespaceUri, const QString & name, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_append_string_string_string
(void* __this_nativeId,
 DArray namespaceUri0,
 DArray name1,
 DArray value2)
{
    QString __qt_namespaceUri0 = QString::fromUtf8((const char *)namespaceUri0.ptr, namespaceUri0.length);
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QString __qt_value2 = QString::fromUtf8((const char *)value2.ptr, value2.length);
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->append((const QString& )__qt_namespaceUri0, (const QString& )__qt_name1, (const QString& )__qt_value2);

}

// QXmlStreamAttributes::append(const QString & qualifiedName, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_append_string_string
(void* __this_nativeId,
 DArray qualifiedName0,
 DArray value1)
{
    QString __qt_qualifiedName0 = QString::fromUtf8((const char *)qualifiedName0.ptr, qualifiedName0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->append((const QString& )__qt_qualifiedName0, (const QString& )__qt_value1);

}

// QXmlStreamAttributes::append(const QXmlStreamAttribute & attribute)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_append_QXmlStreamAttribute
(void* __this_nativeId,
 void* attribute0)
{
    const QXmlStreamAttribute&  __qt_attribute0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)attribute0;
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->append((const QXmlStreamAttribute& )__qt_attribute0);

}

// QXmlStreamAttributes::at(int i) const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamAttributes_at_int_const
(void* __this_nativeId,
 int i0)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    const QXmlStreamAttribute&  __qt_return_value = __qt_this->at((int )i0);

    void* __d_return_value = (void*) new QXmlStreamAttribute(__qt_return_value);

    return __d_return_value;
}

// QXmlStreamAttributes::capacity() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlStreamAttributes_capacity_const
(void* __this_nativeId)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    int  __qt_return_value = __qt_this->capacity();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::clear()
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_clear
(void* __this_nativeId)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->clear();

}

// QXmlStreamAttributes::contains(const QXmlStreamAttribute & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_contains_QXmlStreamAttribute_const
(void* __this_nativeId,
 void* t0)
{
    const QXmlStreamAttribute&  __qt_t0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)t0;
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QXmlStreamAttribute& )__qt_t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::count() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlStreamAttributes_count_const
(void* __this_nativeId)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::count(const QXmlStreamAttribute & t) const
QTD_EXTERN QTD_EXPORT int qtd_QXmlStreamAttributes_count_QXmlStreamAttribute_const
(void* __this_nativeId,
 void* t0)
{
    const QXmlStreamAttribute&  __qt_t0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)t0;
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    int  __qt_return_value = __qt_this->count((const QXmlStreamAttribute& )__qt_t0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::empty() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_empty_const
(void* __this_nativeId)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    bool  __qt_return_value = __qt_this->empty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::endsWith(const QXmlStreamAttribute & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_endsWith_QXmlStreamAttribute_const
(void* __this_nativeId,
 void* t0)
{
    const QXmlStreamAttribute&  __qt_t0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)t0;
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    bool  __qt_return_value = __qt_this->endsWith((const QXmlStreamAttribute& )__qt_t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::fill(const QXmlStreamAttribute & t, int size)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_fill_QXmlStreamAttribute_int
(void* __this_nativeId,
 void* __d_return_value,
 void* t0,
 int size1)
{
    const QXmlStreamAttribute&  __qt_t0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)t0;
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    QVector<QXmlStreamAttribute >&  __qt_return_value = __qt_this->fill((const QXmlStreamAttribute& )__qt_t0, (int )size1);


    qtd_allocate_QXmlStreamAttribute_array(__d_return_value, __qt_return_value.size());
    QVector<QXmlStreamAttribute > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QXmlStreamAttribute > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QXmlStreamAttribute  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QXmlStreamAttribute(__qt_tmp);
        qtd_assign_QXmlStreamAttribute_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QXmlStreamAttributes::first() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamAttributes_first_const
(void* __this_nativeId)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    const QXmlStreamAttribute&  __qt_return_value = __qt_this->first();

    void* __d_return_value = (void*) new QXmlStreamAttribute(__qt_return_value);

    return __d_return_value;
}

// QXmlStreamAttributes::hasAttribute(const QString & namespaceUri, const QString & name) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_hasAttribute_string_string_const
(void* __this_nativeId,
 DArray namespaceUri0,
 DArray name1)
{
    QString __qt_namespaceUri0 = QString::fromUtf8((const char *)namespaceUri0.ptr, namespaceUri0.length);
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAttribute((const QString& )__qt_namespaceUri0, (const QString& )__qt_name1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::hasAttribute(const QString & qualifiedName) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_hasAttribute_string_const
(void* __this_nativeId,
 DArray qualifiedName0)
{
    QString __qt_qualifiedName0 = QString::fromUtf8((const char *)qualifiedName0.ptr, qualifiedName0.length);
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAttribute((const QString& )__qt_qualifiedName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::indexOf(const QXmlStreamAttribute & t, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QXmlStreamAttributes_indexOf_QXmlStreamAttribute_int_const
(void* __this_nativeId,
 void* t0,
 int from1)
{
    const QXmlStreamAttribute&  __qt_t0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)t0;
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOf((const QXmlStreamAttribute& )__qt_t0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_isEmpty_const
(void* __this_nativeId)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::isSharedWith(const QVector<QXmlStreamAttribute > & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_isSharedWith_QVector_const
(void* __this_nativeId,
 DArray* other0)
{
    QVector<QXmlStreamAttribute > __qt_other0;
    __qt_other0.reserve(other0->length);
    for (int i=0; i<other0->length; ++i) {
        QXmlStreamAttribute* __d_element;
        qtd_get_QXmlStreamAttribute_from_array(other0, i, &__d_element);
        QXmlStreamAttribute  __qt_element = (QXmlStreamAttribute ) *(QXmlStreamAttribute *)__d_element;
        __qt_other0 << __qt_element;
    }
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSharedWith((const QVector<QXmlStreamAttribute >& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::last() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamAttributes_last_const
(void* __this_nativeId)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    const QXmlStreamAttribute&  __qt_return_value = __qt_this->last();

    void* __d_return_value = (void*) new QXmlStreamAttribute(__qt_return_value);

    return __d_return_value;
}

// QXmlStreamAttributes::lastIndexOf(const QXmlStreamAttribute & t, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QXmlStreamAttributes_lastIndexOf_QXmlStreamAttribute_int_const
(void* __this_nativeId,
 void* t0,
 int from1)
{
    const QXmlStreamAttribute&  __qt_t0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)t0;
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    int  __qt_return_value = __qt_this->lastIndexOf((const QXmlStreamAttribute& )__qt_t0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::mid(int pos, int length) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_mid_int_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int pos0,
 int length1)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    QVector<QXmlStreamAttribute >  __qt_return_value = __qt_this->mid((int )pos0, (int )length1);


    qtd_allocate_QXmlStreamAttribute_array(__d_return_value, __qt_return_value.size());
    QVector<QXmlStreamAttribute > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QXmlStreamAttribute > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QXmlStreamAttribute  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QXmlStreamAttribute(__qt_tmp);
        qtd_assign_QXmlStreamAttribute_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QXmlStreamAttributes::operator==(const QVector<QXmlStreamAttribute > & v) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_operator_equal_QVector_const
(void* __this_nativeId,
 DArray* v0)
{
    QVector<QXmlStreamAttribute > __qt_v0;
    __qt_v0.reserve(v0->length);
    for (int i=0; i<v0->length; ++i) {
        QXmlStreamAttribute* __d_element;
        qtd_get_QXmlStreamAttribute_from_array(v0, i, &__d_element);
        QXmlStreamAttribute  __qt_element = (QXmlStreamAttribute ) *(QXmlStreamAttribute *)__d_element;
        __qt_v0 << __qt_element;
    }
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QVector<QXmlStreamAttribute >& )__qt_v0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::prepend(const QXmlStreamAttribute & t)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_prepend_QXmlStreamAttribute
(void* __this_nativeId,
 void* t0)
{
    const QXmlStreamAttribute&  __qt_t0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)t0;
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->prepend((const QXmlStreamAttribute& )__qt_t0);

}

// QXmlStreamAttributes::remove(int i)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_remove_int
(void* __this_nativeId,
 int i0)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->remove((int )i0);

}

// QXmlStreamAttributes::remove(int i, int n)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_remove_int_int
(void* __this_nativeId,
 int i0,
 int n1)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->remove((int )i0, (int )n1);

}

// QXmlStreamAttributes::replace(int i, const QXmlStreamAttribute & t)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_replace_int_QXmlStreamAttribute
(void* __this_nativeId,
 int i0,
 void* t1)
{
    const QXmlStreamAttribute&  __qt_t1 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)t1;
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->replace((int )i0, (const QXmlStreamAttribute& )__qt_t1);

}

// QXmlStreamAttributes::reserve(int size)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_reserve_int
(void* __this_nativeId,
 int size0)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->reserve((int )size0);

}

// QXmlStreamAttributes::resize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_resize_int
(void* __this_nativeId,
 int size0)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->resize((int )size0);

}

// QXmlStreamAttributes::setSharable(bool sharable)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_setSharable_bool
(void* __this_nativeId,
 bool sharable0)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->setSharable((bool )sharable0);

}

// QXmlStreamAttributes::size() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlStreamAttributes_size_const
(void* __this_nativeId)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    int  __qt_return_value = __qt_this->size();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::squeeze()
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_squeeze
(void* __this_nativeId)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    __qt_this->squeeze();

}

// QXmlStreamAttributes::startsWith(const QXmlStreamAttribute & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_startsWith_QXmlStreamAttribute_const
(void* __this_nativeId,
 void* t0)
{
    const QXmlStreamAttribute&  __qt_t0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)t0;
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    bool  __qt_return_value = __qt_this->startsWith((const QXmlStreamAttribute& )__qt_t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttributes::toList() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_toList_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    QList<QXmlStreamAttribute >  __qt_return_value = __qt_this->toList();

QList<QXmlStreamAttribute > &__d_return_value_tmp = (*(QList<QXmlStreamAttribute > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QXmlStreamAttributes::value(const QString & namespaceUri, const QString & name) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_value_string_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray namespaceUri0,
 DArray name1)
{
    QString __qt_namespaceUri0 = QString::fromUtf8((const char *)namespaceUri0.ptr, namespaceUri0.length);
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->value((const QString& )__qt_namespaceUri0, (const QString& )__qt_name1);

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamAttributes::value(const QString & qualifiedName) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_value_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray qualifiedName0)
{
    QString __qt_qualifiedName0 = QString::fromUtf8((const char *)qualifiedName0.ptr, qualifiedName0.length);
    QXmlStreamAttributes *__qt_this = (QXmlStreamAttributes *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->value((const QString& )__qt_qualifiedName0);

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamAttributes::fromList(const QList<QXmlStreamAttribute > & list)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_fromList_QList
(void* __d_return_value,
 void* list0)
{
QList<QXmlStreamAttribute > __qt_list0 = (*(QList<QXmlStreamAttribute > *)list0);
    QVector<QXmlStreamAttribute >  __qt_return_value = QXmlStreamAttributes::fromList((const QList<QXmlStreamAttribute >& )__qt_list0);


    qtd_allocate_QXmlStreamAttribute_array(__d_return_value, __qt_return_value.size());
    QVector<QXmlStreamAttribute > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QXmlStreamAttribute > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QXmlStreamAttribute  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QXmlStreamAttribute(__qt_tmp);
        qtd_assign_QXmlStreamAttribute_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_QTypeInfo_isComplex() { return (bool) QTypeInfo<QXmlStreamAttributes>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_QTypeInfo_isStatic() { return (bool) QTypeInfo<QXmlStreamAttributes>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_QTypeInfo_isLarge() { return (bool) QTypeInfo<QXmlStreamAttributes>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_QTypeInfo_isPointer() { return (bool) QTypeInfo<QXmlStreamAttributes>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttributes_QTypeInfo_isDummy() { return (bool) QTypeInfo<QXmlStreamAttributes>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttributes_placed_copy(void* orig, void* place) {
    const QXmlStreamAttributes&  __qt_orig = (const QXmlStreamAttributes& ) *(QXmlStreamAttributes *)orig;
    QXmlStreamAttributes *result = new (place) QXmlStreamAttributes (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamAttributes_native_copy(void* orig) {
    const QXmlStreamAttributes&  __qt_orig = (const QXmlStreamAttributes& ) *(QXmlStreamAttributes *)orig;
    QXmlStreamAttributes *result = new QXmlStreamAttributes (__qt_orig);
    return result;
}

