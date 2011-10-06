#include <QNoImplicitBoolCast>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qlist.h>

#include <iostream>
#include <qbytearray.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QByteArray_delete(void* nativeId)
{
    delete (QByteArray*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QByteArray_destroy(void* nativeId)
{
    call_destructor((QByteArray*)nativeId);
}

// ---externC---
// QByteArray::QByteArray()
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_QByteArray
()
{
    QByteArray *__qt_this = new QByteArray();
    return (void *) __qt_this;

}

// QByteArray::QByteArray(const QByteArray & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_QByteArray_QByteArray
(void* arg__1)
{
    const QByteArray&  __qt_arg__1 = (const QByteArray& ) *(QByteArray *)arg__1;
    QByteArray *__qt_this = new QByteArray((const QByteArray& )__qt_arg__1);
    return (void *) __qt_this;

}

// QByteArray::QByteArray(const char * arg__1, int size)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_QByteArray_nativepointerchar_int
(char* arg__1,
 int size1)
{
    const char*  __qt_arg__1 = (const char* ) arg__1;
    QByteArray *__qt_this = new QByteArray((const char* )__qt_arg__1, (int )size1);
    return (void *) __qt_this;

}

// QByteArray::QByteArray(int size, char c)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_QByteArray_int_char
(int size0,
 char c1)
{
    QByteArray *__qt_this = new QByteArray((int )size0, (char )c1);
    return (void *) __qt_this;

}

// QByteArray::append(char c)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_append_char
(void* __this_nativeId,
 char c0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->append((char )c0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::append(const QByteArray & a)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_append_QByteArray
(void* __this_nativeId,
 void* a0)
{
    const QByteArray&  __qt_a0 = (const QByteArray& ) *(QByteArray *)a0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->append((const QByteArray& )__qt_a0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::append(const QString & s)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_append_string
(void* __this_nativeId,
 DArray s0)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->append((const QString& )__qt_s0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::append(const char * s, int len)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_append_nativepointerchar_int
(void* __this_nativeId,
 char* s0,
 int len1)
{
    const char*  __qt_s0 = (const char* ) s0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->append((const char* )__qt_s0, (int )len1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::at(int i) const
QTD_EXTERN QTD_EXPORT char qtd_QByteArray_at_int_const
(void* __this_nativeId,
 int i0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    char  __qt_return_value = __qt_this->at((int )i0);

    char __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::capacity() const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_capacity_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->capacity();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::chop(int n)
QTD_EXTERN QTD_EXPORT void qtd_QByteArray_chop_int
(void* __this_nativeId,
 int n0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    __qt_this->chop((int )n0);

}

// QByteArray::clear()
QTD_EXTERN QTD_EXPORT void qtd_QByteArray_clear
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    __qt_this->clear();

}

// QByteArray::contains(char c) const
QTD_EXTERN QTD_EXPORT QBool qtd_QByteArray_contains_char_const
(void* __this_nativeId,
 char c0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QBool  __qt_return_value = __qt_this->contains((char )c0);

    QBool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::contains(const QByteArray & a) const
QTD_EXTERN QTD_EXPORT QBool qtd_QByteArray_contains_QByteArray_const
(void* __this_nativeId,
 void* a0)
{
    const QByteArray&  __qt_a0 = (const QByteArray& ) *(QByteArray *)a0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QBool  __qt_return_value = __qt_this->contains((const QByteArray& )__qt_a0);

    QBool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::count(char c) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_count_char_const
(void* __this_nativeId,
 char c0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->count((char )c0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::count(const QByteArray & a) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_count_QByteArray_const
(void* __this_nativeId,
 void* a0)
{
    const QByteArray&  __qt_a0 = (const QByteArray& ) *(QByteArray *)a0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->count((const QByteArray& )__qt_a0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::data()
QTD_EXTERN QTD_EXPORT char* qtd_QByteArray_data
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    char*  __qt_return_value = __qt_this->data();

    char* __d_return_value = (char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::endsWith(char c) const
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_endsWith_char_const
(void* __this_nativeId,
 char c0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->endsWith((char )c0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::endsWith(const QByteArray & a) const
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_endsWith_QByteArray_const
(void* __this_nativeId,
 void* a0)
{
    const QByteArray&  __qt_a0 = (const QByteArray& ) *(QByteArray *)a0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->endsWith((const QByteArray& )__qt_a0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::fill(char c, int size)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_fill_char_int
(void* __this_nativeId,
 char c0,
 int size1)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->fill((char )c0, (int )size1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::indexOf(char c, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_indexOf_char_int_const
(void* __this_nativeId,
 char c0,
 int from1)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOf((char )c0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::indexOf(const QByteArray & a, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_indexOf_QByteArray_int_const
(void* __this_nativeId,
 void* a0,
 int from1)
{
    const QByteArray&  __qt_a0 = (const QByteArray& ) *(QByteArray *)a0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOf((const QByteArray& )__qt_a0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::indexOf(const QString & s, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_indexOf_string_int_const
(void* __this_nativeId,
 DArray s0,
 int from1)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOf((const QString& )__qt_s0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::insert(int i, char c)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_insert_int_char
(void* __this_nativeId,
 int i0,
 char c1)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->insert((int )i0, (char )c1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::insert(int i, const QByteArray & a)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_insert_int_QByteArray
(void* __this_nativeId,
 int i0,
 void* a1)
{
    const QByteArray&  __qt_a1 = (const QByteArray& ) *(QByteArray *)a1;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->insert((int )i0, (const QByteArray& )__qt_a1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::insert(int i, const QString & s)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_insert_int_string
(void* __this_nativeId,
 int i0,
 DArray s1)
{
    QString __qt_s1 = QString::fromUtf8((const char *)s1.ptr, s1.length);
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->insert((int )i0, (const QString& )__qt_s1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::insert(int i, const char * s, int len)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_insert_int_nativepointerchar_int
(void* __this_nativeId,
 int i0,
 char* s1,
 int len2)
{
    const char*  __qt_s1 = (const char* ) s1;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->insert((int )i0, (const char* )__qt_s1, (int )len2);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_isEmpty_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_isNull_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::isSharedWith(const QByteArray & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_isSharedWith_QByteArray_const
(void* __this_nativeId,
 void* other0)
{
    const QByteArray&  __qt_other0 = (const QByteArray& ) *(QByteArray *)other0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSharedWith((const QByteArray& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::lastIndexOf(char c, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_lastIndexOf_char_int_const
(void* __this_nativeId,
 char c0,
 int from1)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->lastIndexOf((char )c0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::lastIndexOf(const QByteArray & a, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_lastIndexOf_QByteArray_int_const
(void* __this_nativeId,
 void* a0,
 int from1)
{
    const QByteArray&  __qt_a0 = (const QByteArray& ) *(QByteArray *)a0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->lastIndexOf((const QByteArray& )__qt_a0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::lastIndexOf(const QString & s, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_lastIndexOf_string_int_const
(void* __this_nativeId,
 DArray s0,
 int from1)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->lastIndexOf((const QString& )__qt_s0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::left(int len) const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_left_int_const
(void* __this_nativeId,
 int len0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->left((int )len0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::leftJustified(int width, char fill, bool truncate) const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_leftJustified_int_char_bool_const
(void* __this_nativeId,
 int width0,
 char fill1,
 bool truncate2)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->leftJustified((int )width0, (char )fill1, (bool )truncate2);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::length() const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_length_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->length();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::mid(int index, int len) const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_mid_int_int_const
(void* __this_nativeId,
 int index0,
 int len1)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->mid((int )index0, (int )len1);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::operator<(const QByteArray & a2)
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_operator_less_QByteArray
(void* __this_nativeId,
 void* a21)
{
    const QByteArray&  __qt_a21 = (const QByteArray& ) *(QByteArray *)a21;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = (__qt_this != 0) ? ::operator<(*__qt_this, (const QByteArray& )__qt_a21) :  false;

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::operator<(const QString & s2) const
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_operator_less_string_const
(void* __this_nativeId,
 DArray s20)
{
    QString __qt_s20 = QString::fromUtf8((const char *)s20.ptr, s20.length);
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QString& )__qt_s20);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QByteArray_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QByteArray::operator=(const QByteArray & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_operator_assign_QByteArray
(void* __this_nativeId,
 void* arg__1)
{
    const QByteArray&  __qt_arg__1 = (const QByteArray& ) *(QByteArray *)arg__1;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->operator=((const QByteArray& )__qt_arg__1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::operator==(const QByteArray & a2)
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_operator_equal_QByteArray
(void* __this_nativeId,
 void* a21)
{
    const QByteArray&  __qt_a21 = (const QByteArray& ) *(QByteArray *)a21;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = (__qt_this != 0) ? ::operator==(*__qt_this, (const QByteArray& )__qt_a21) :  false;

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::operator==(const QString & s2) const
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_operator_equal_string_const
(void* __this_nativeId,
 DArray s20)
{
    QString __qt_s20 = QString::fromUtf8((const char *)s20.ptr, s20.length);
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QString& )__qt_s20);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QByteArray_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QByteArray::prepend(char c)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_prepend_char
(void* __this_nativeId,
 char c0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->prepend((char )c0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::prepend(const QByteArray & a)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_prepend_QByteArray
(void* __this_nativeId,
 void* a0)
{
    const QByteArray&  __qt_a0 = (const QByteArray& ) *(QByteArray *)a0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->prepend((const QByteArray& )__qt_a0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::prepend(const char * s, int len)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_prepend_nativepointerchar_int
(void* __this_nativeId,
 char* s0,
 int len1)
{
    const char*  __qt_s0 = (const char* ) s0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->prepend((const char* )__qt_s0, (int )len1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::remove(int index, int len)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_remove_int_int
(void* __this_nativeId,
 int index0,
 int len1)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->remove((int )index0, (int )len1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::repeated(int times) const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_repeated_int_const
(void* __this_nativeId,
 int times0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->repeated((int )times0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::replace(char before, char after)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_replace_char_char
(void* __this_nativeId,
 char before0,
 char after1)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->replace((char )before0, (char )after1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::replace(char before, const QByteArray & after)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_replace_char_QByteArray
(void* __this_nativeId,
 char before0,
 void* after1)
{
    const QByteArray&  __qt_after1 = (const QByteArray& ) *(QByteArray *)after1;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->replace((char )before0, (const QByteArray& )__qt_after1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::replace(char c, const QString & after)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_replace_char_string
(void* __this_nativeId,
 char c0,
 DArray after1)
{
    QString __qt_after1 = QString::fromUtf8((const char *)after1.ptr, after1.length);
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->replace((char )c0, (const QString& )__qt_after1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::replace(const QByteArray & before, const QByteArray & after)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_replace_QByteArray_QByteArray
(void* __this_nativeId,
 void* before0,
 void* after1)
{
    const QByteArray&  __qt_before0 = (const QByteArray& ) *(QByteArray *)before0;
    const QByteArray&  __qt_after1 = (const QByteArray& ) *(QByteArray *)after1;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->replace((const QByteArray& )__qt_before0, (const QByteArray& )__qt_after1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::replace(const QString & before, const QByteArray & after)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_replace_string_QByteArray
(void* __this_nativeId,
 DArray before0,
 void* after1)
{
    QString __qt_before0 = QString::fromUtf8((const char *)before0.ptr, before0.length);
    const QByteArray&  __qt_after1 = (const QByteArray& ) *(QByteArray *)after1;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->replace((const QString& )__qt_before0, (const QByteArray& )__qt_after1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::replace(const char * before, int bsize, const char * after, int asize)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_replace_nativepointerchar_int_nativepointerchar_int
(void* __this_nativeId,
 char* before0,
 int bsize1,
 char* after2,
 int asize3)
{
    const char*  __qt_before0 = (const char* ) before0;
    const char*  __qt_after2 = (const char* ) after2;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->replace((const char* )__qt_before0, (int )bsize1, (const char* )__qt_after2, (int )asize3);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::replace(int index, int len, const QByteArray & s)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_replace_int_int_QByteArray
(void* __this_nativeId,
 int index0,
 int len1,
 void* s2)
{
    const QByteArray&  __qt_s2 = (const QByteArray& ) *(QByteArray *)s2;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->replace((int )index0, (int )len1, (const QByteArray& )__qt_s2);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::replace(int index, int len, const char * s, int alen)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_replace_int_int_nativepointerchar_int
(void* __this_nativeId,
 int index0,
 int len1,
 char* s2,
 int alen3)
{
    const char*  __qt_s2 = (const char* ) s2;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->replace((int )index0, (int )len1, (const char* )__qt_s2, (int )alen3);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::reserve(int size)
QTD_EXTERN QTD_EXPORT void qtd_QByteArray_reserve_int
(void* __this_nativeId,
 int size0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    __qt_this->reserve((int )size0);

}

// QByteArray::resize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QByteArray_resize_int
(void* __this_nativeId,
 int size0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    __qt_this->resize((int )size0);

}

// QByteArray::right(int len) const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_right_int_const
(void* __this_nativeId,
 int len0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->right((int )len0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::rightJustified(int width, char fill, bool truncate) const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_rightJustified_int_char_bool_const
(void* __this_nativeId,
 int width0,
 char fill1,
 bool truncate2)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->rightJustified((int )width0, (char )fill1, (bool )truncate2);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::setNum(double arg__1, char f, int prec)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_setNum_double_char_int
(void* __this_nativeId,
 double arg__1,
 char f1,
 int prec2)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->setNum((double )arg__1, (char )f1, (int )prec2);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::setNum(float arg__1, char f, int prec)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_setNum_float_char_int
(void* __this_nativeId,
 float arg__1,
 char f1,
 int prec2)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->setNum((float )arg__1, (char )f1, (int )prec2);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::setNum(int arg__1, int base)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_setNum_int_int
(void* __this_nativeId,
 int arg__1,
 int base1)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->setNum((int )arg__1, (int )base1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::setNum(short arg__1, int base)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_setNum_short_int
(void* __this_nativeId,
 short arg__1,
 int base1)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->setNum((short )arg__1, (int )base1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::setRawData(const char * a, uint n)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_setRawData_nativepointerchar_uint
(void* __this_nativeId,
 char* a0,
 uint n1)
{
    const char*  __qt_a0 = (const char* ) a0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray&  __qt_return_value = __qt_this->setRawData((const char* )__qt_a0, (uint )n1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QByteArray::simplified() const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_simplified_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->simplified();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::size() const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_size_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->size();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::split(char sep) const
QTD_EXTERN QTD_EXPORT void qtd_QByteArray_split_char_const
(void* __this_nativeId,
 void* __d_return_value,
 char sep0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QList<QByteArray >  __qt_return_value = __qt_this->split((char )sep0);

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QByteArray::squeeze()
QTD_EXTERN QTD_EXPORT void qtd_QByteArray_squeeze
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    __qt_this->squeeze();

}

// QByteArray::startsWith(char c) const
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_startsWith_char_const
(void* __this_nativeId,
 char c0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->startsWith((char )c0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::startsWith(const QByteArray & a) const
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_startsWith_QByteArray_const
(void* __this_nativeId,
 void* a0)
{
    const QByteArray&  __qt_a0 = (const QByteArray& ) *(QByteArray *)a0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->startsWith((const QByteArray& )__qt_a0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::toBase64() const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_toBase64_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toBase64();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::toDouble(bool * ok) const
QTD_EXTERN QTD_EXPORT double qtd_QByteArray_toDouble_nativepointerbool_const
(void* __this_nativeId,
 bool* ok0)
{
    bool*  __qt_ok0 = (bool* ) ok0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    double  __qt_return_value = __qt_this->toDouble((bool* )__qt_ok0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::toFloat(bool * ok) const
QTD_EXTERN QTD_EXPORT float qtd_QByteArray_toFloat_nativepointerbool_const
(void* __this_nativeId,
 bool* ok0)
{
    bool*  __qt_ok0 = (bool* ) ok0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    float  __qt_return_value = __qt_this->toFloat((bool* )__qt_ok0);

    float __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::toHex() const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_toHex_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toHex();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::toInt(bool * ok, int base) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArray_toInt_nativepointerbool_int_const
(void* __this_nativeId,
 bool* ok0,
 int base1)
{
    bool*  __qt_ok0 = (bool* ) ok0;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->toInt((bool* )__qt_ok0, (int )base1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArray::toLower() const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_toLower_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toLower();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::toPercentEncoding(const QByteArray & exclude, const QByteArray & include, char percent) const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_toPercentEncoding_QByteArray_QByteArray_char_const
(void* __this_nativeId,
 void* exclude0,
 void* include1,
 char percent2)
{
    const QByteArray&  __qt_exclude0 = (const QByteArray& ) *(QByteArray *)exclude0;
    const QByteArray&  __qt_include1 = (const QByteArray& ) *(QByteArray *)include1;
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toPercentEncoding((const QByteArray& )__qt_exclude0, (const QByteArray& )__qt_include1, (char )percent2);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::toUpper() const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_toUpper_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toUpper();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::trimmed() const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_trimmed_const
(void* __this_nativeId)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->trimmed();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::truncate(int pos)
QTD_EXTERN QTD_EXPORT void qtd_QByteArray_truncate_int
(void* __this_nativeId,
 int pos0)
{
    QByteArray *__qt_this = (QByteArray *) __this_nativeId;
    __qt_this->truncate((int )pos0);

}

// QByteArray::fromBase64(const QByteArray & base64)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_fromBase64_QByteArray
(void* base640)
{
    const QByteArray&  __qt_base640 = (const QByteArray& ) *(QByteArray *)base640;
    QByteArray  __qt_return_value = QByteArray::fromBase64((const QByteArray& )__qt_base640);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::fromHex(const QByteArray & hexEncoded)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_fromHex_QByteArray
(void* hexEncoded0)
{
    const QByteArray&  __qt_hexEncoded0 = (const QByteArray& ) *(QByteArray *)hexEncoded0;
    QByteArray  __qt_return_value = QByteArray::fromHex((const QByteArray& )__qt_hexEncoded0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::fromPercentEncoding(const QByteArray & pctEncoded, char percent)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_fromPercentEncoding_QByteArray_char
(void* pctEncoded0,
 char percent1)
{
    const QByteArray&  __qt_pctEncoded0 = (const QByteArray& ) *(QByteArray *)pctEncoded0;
    QByteArray  __qt_return_value = QByteArray::fromPercentEncoding((const QByteArray& )__qt_pctEncoded0, (char )percent1);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::number(double arg__1, char f, int prec)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_number_double_char_int
(double arg__1,
 char f1,
 int prec2)
{
    QByteArray  __qt_return_value = QByteArray::number((double )arg__1, (char )f1, (int )prec2);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArray::number(int arg__1, int base)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_number_int_int
(int arg__1,
 int base1)
{
    QByteArray  __qt_return_value = QByteArray::number((int )arg__1, (int )base1);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_QTypeInfo_isComplex() { return (bool) QTypeInfo<QByteArray>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_QTypeInfo_isStatic() { return (bool) QTypeInfo<QByteArray>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_QTypeInfo_isLarge() { return (bool) QTypeInfo<QByteArray>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_QTypeInfo_isPointer() { return (bool) QTypeInfo<QByteArray>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QByteArray_QTypeInfo_isDummy() { return (bool) QTypeInfo<QByteArray>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QByteArray_placed_copy(void* orig, void* place) {
    const QByteArray&  __qt_orig = (const QByteArray& ) *(QByteArray *)orig;
    QByteArray *result = new (place) QByteArray (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QByteArray_native_copy(void* orig) {
    const QByteArray&  __qt_orig = (const QByteArray& ) *(QByteArray *)orig;
    QByteArray *result = new QByteArray (__qt_orig);
    return result;
}

