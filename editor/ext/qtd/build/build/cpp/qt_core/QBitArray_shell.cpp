#include <QVariant>
#include <qbitarray.h>
#include <qdatastream.h>

#include <iostream>
#include <qbitarray.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QBitArray_delete(void* nativeId)
{
    delete (QBitArray*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QBitArray_destroy(void* nativeId)
{
    call_destructor((QBitArray*)nativeId);
}

// ---externC---
// QBitArray::QBitArray()
QTD_EXTERN QTD_EXPORT void* qtd_QBitArray_QBitArray
()
{
    QBitArray *__qt_this = new QBitArray();
    return (void *) __qt_this;

}

// QBitArray::QBitArray(const QBitArray & other)
QTD_EXTERN QTD_EXPORT void* qtd_QBitArray_QBitArray_QBitArray
(void* other0)
{
    const QBitArray&  __qt_other0 = (const QBitArray& ) *(QBitArray *)other0;
    QBitArray *__qt_this = new QBitArray((const QBitArray& )__qt_other0);
    return (void *) __qt_this;

}

// QBitArray::QBitArray(int size, bool val)
QTD_EXTERN QTD_EXPORT void* qtd_QBitArray_QBitArray_int_bool
(int size0,
 bool val1)
{
    QBitArray *__qt_this = new QBitArray((int )size0, (bool )val1);
    return (void *) __qt_this;

}

// QBitArray::at(int i) const
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_at_int_const
(void* __this_nativeId,
 int i0)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->at((int )i0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBitArray::clear()
QTD_EXTERN QTD_EXPORT void qtd_QBitArray_clear
(void* __this_nativeId)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    __qt_this->clear();

}

// QBitArray::clearBit(int i)
QTD_EXTERN QTD_EXPORT void qtd_QBitArray_clearBit_int
(void* __this_nativeId,
 int i0)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    __qt_this->clearBit((int )i0);

}

// QBitArray::count() const
QTD_EXTERN QTD_EXPORT int qtd_QBitArray_count_const
(void* __this_nativeId)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBitArray::count(bool on) const
QTD_EXTERN QTD_EXPORT int qtd_QBitArray_count_bool_const
(void* __this_nativeId,
 bool on0)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->count((bool )on0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBitArray::fill(bool val, int first, int last)
QTD_EXTERN QTD_EXPORT void qtd_QBitArray_fill_bool_int_int
(void* __this_nativeId,
 bool val0,
 int first1,
 int last2)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    __qt_this->fill((bool )val0, (int )first1, (int )last2);

}

// QBitArray::fill(bool val, int size)
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_fill_bool_int
(void* __this_nativeId,
 bool val0,
 int size1)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fill((bool )val0, (int )size1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBitArray::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_isEmpty_const
(void* __this_nativeId)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBitArray::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_isNull_const
(void* __this_nativeId)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBitArray::operator&=(const QBitArray & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QBitArray_operator_and_assign_QBitArray
(void* __this_nativeId,
 void* arg__1)
{
    const QBitArray&  __qt_arg__1 = (const QBitArray& ) *(QBitArray *)arg__1;
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    QBitArray&  __qt_return_value = __qt_this->operator&=((const QBitArray& )__qt_arg__1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QBitArray::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBitArray_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QBitArray::operator=(const QBitArray & other)
QTD_EXTERN QTD_EXPORT void* qtd_QBitArray_operator_assign_QBitArray
(void* __this_nativeId,
 void* other0)
{
    const QBitArray&  __qt_other0 = (const QBitArray& ) *(QBitArray *)other0;
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    QBitArray&  __qt_return_value = __qt_this->operator=((const QBitArray& )__qt_other0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QBitArray::operator==(const QBitArray & a) const
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_operator_equal_QBitArray_const
(void* __this_nativeId,
 void* a0)
{
    const QBitArray&  __qt_a0 = (const QBitArray& ) *(QBitArray *)a0;
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QBitArray& )__qt_a0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBitArray::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBitArray_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QBitArray::operator^=(const QBitArray & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QBitArray_operator_xor_assign_QBitArray
(void* __this_nativeId,
 void* arg__1)
{
    const QBitArray&  __qt_arg__1 = (const QBitArray& ) *(QBitArray *)arg__1;
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    QBitArray&  __qt_return_value = __qt_this->operator^=((const QBitArray& )__qt_arg__1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QBitArray::operator|=(const QBitArray & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QBitArray_operator_or_assign_QBitArray
(void* __this_nativeId,
 void* arg__1)
{
    const QBitArray&  __qt_arg__1 = (const QBitArray& ) *(QBitArray *)arg__1;
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    QBitArray&  __qt_return_value = __qt_this->operator|=((const QBitArray& )__qt_arg__1);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QBitArray::operator~() const
QTD_EXTERN QTD_EXPORT void* qtd_QBitArray_operator_negate_const
(void* __this_nativeId)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    QBitArray  __qt_return_value = __qt_this->operator~();

    void* __d_return_value = (void*) new QBitArray(__qt_return_value);

    return __d_return_value;
}

// QBitArray::resize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QBitArray_resize_int
(void* __this_nativeId,
 int size0)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    __qt_this->resize((int )size0);

}

// QBitArray::setBit(int i)
QTD_EXTERN QTD_EXPORT void qtd_QBitArray_setBit_int
(void* __this_nativeId,
 int i0)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    __qt_this->setBit((int )i0);

}

// QBitArray::setBit(int i, bool val)
QTD_EXTERN QTD_EXPORT void qtd_QBitArray_setBit_int_bool
(void* __this_nativeId,
 int i0,
 bool val1)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    __qt_this->setBit((int )i0, (bool )val1);

}

// QBitArray::size() const
QTD_EXTERN QTD_EXPORT int qtd_QBitArray_size_const
(void* __this_nativeId)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    int  __qt_return_value = __qt_this->size();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBitArray::testBit(int i) const
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_testBit_int_const
(void* __this_nativeId,
 int i0)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testBit((int )i0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBitArray::toggleBit(int i)
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_toggleBit_int
(void* __this_nativeId,
 int i0)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    bool  __qt_return_value = __qt_this->toggleBit((int )i0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBitArray::truncate(int pos)
QTD_EXTERN QTD_EXPORT void qtd_QBitArray_truncate_int
(void* __this_nativeId,
 int pos0)
{
    QBitArray *__qt_this = (QBitArray *) __this_nativeId;
    __qt_this->truncate((int )pos0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_QTypeInfo_isComplex() { return (bool) QTypeInfo<QBitArray>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_QTypeInfo_isStatic() { return (bool) QTypeInfo<QBitArray>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_QTypeInfo_isLarge() { return (bool) QTypeInfo<QBitArray>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_QTypeInfo_isPointer() { return (bool) QTypeInfo<QBitArray>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QBitArray_QTypeInfo_isDummy() { return (bool) QTypeInfo<QBitArray>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QBitArray_placed_copy(void* orig, void* place) {
    const QBitArray&  __qt_orig = (const QBitArray& ) *(QBitArray *)orig;
    QBitArray *result = new (place) QBitArray (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QBitArray_native_copy(void* orig) {
    const QBitArray&  __qt_orig = (const QBitArray& ) *(QBitArray *)orig;
    QBitArray *result = new QBitArray (__qt_orig);
    return result;
}

