#include <QTextBlock>
#include <QVariant>
#include <qtextobject.h>

#include <iostream>
#include <QTextBlock>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_iterator_delete(void* nativeId)
{
    delete (QTextBlock::iterator*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_iterator_destroy(void* nativeId)
{
    call_destructor((QTextBlock::iterator*)nativeId);
}

// ---externC---
// QTextBlock_iterator::iterator()
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_iterator_QTextBlock_iterator
()
{
    QTextBlock::iterator *__qt_this = new QTextBlock::iterator();
    return (void *) __qt_this;

}

// QTextBlock_iterator::iterator(const QTextBlock::iterator & o)
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_iterator_QTextBlock_iterator_QTextBlock_iterator
(void* o0)
{
    const QTextBlock::iterator&  __qt_o0 = (const QTextBlock::iterator& ) *(QTextBlock::iterator *)o0;
    QTextBlock::iterator *__qt_this = new QTextBlock::iterator((const QTextBlock::iterator& )__qt_o0);
    return (void *) __qt_this;

}

// QTextBlock_iterator::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_iterator_atEnd_const
(void* __this_nativeId)
{
    QTextBlock::iterator *__qt_this = (QTextBlock::iterator *) __this_nativeId;
    bool  __qt_return_value = __qt_this->atEnd();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock_iterator::fragment() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_iterator_fragment_const
(void* __this_nativeId)
{
    QTextBlock::iterator *__qt_this = (QTextBlock::iterator *) __this_nativeId;
    QTextFragment  __qt_return_value = __qt_this->fragment();

    void* __d_return_value = (void*) new QTextFragment(__qt_return_value);

    return __d_return_value;
}

// QTextBlock_iterator::operator++()
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_iterator_operator_increment
(void* __this_nativeId)
{
    QTextBlock::iterator *__qt_this = (QTextBlock::iterator *) __this_nativeId;
    QTextBlock::iterator&  __qt_return_value = __qt_this->operator++();

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTextBlock_iterator::operator--()
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_iterator_operator_decrement
(void* __this_nativeId)
{
    QTextBlock::iterator *__qt_this = (QTextBlock::iterator *) __this_nativeId;
    QTextBlock::iterator&  __qt_return_value = __qt_this->operator--();

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTextBlock_iterator::operator==(const QTextBlock::iterator & o) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_iterator_operator_equal_QTextBlock_iterator_const
(void* __this_nativeId,
 void* o0)
{
    const QTextBlock::iterator&  __qt_o0 = (const QTextBlock::iterator& ) *(QTextBlock::iterator *)o0;
    QTextBlock::iterator *__qt_this = (QTextBlock::iterator *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTextBlock::iterator& )__qt_o0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_iterator_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextBlock::iterator>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_iterator_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextBlock::iterator>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_iterator_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextBlock::iterator>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_iterator_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextBlock::iterator>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_iterator_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextBlock::iterator>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_iterator_placed_copy(void* orig, void* place) {
    const QTextBlock::iterator&  __qt_orig = (const QTextBlock::iterator& ) *(QTextBlock::iterator *)orig;
    QTextBlock::iterator *result = new (place) QTextBlock::iterator (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_iterator_native_copy(void* orig) {
    const QTextBlock::iterator&  __qt_orig = (const QTextBlock::iterator& ) *(QTextBlock::iterator *)orig;
    QTextBlock::iterator *result = new QTextBlock::iterator (__qt_orig);
    return result;
}

