#include <QTextFrame>
#include <QVariant>
#include <qtextobject.h>

#include <iostream>
#include <QTextFrame>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextFrame_iterator_delete(void* nativeId)
{
    delete (QTextFrame::iterator*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextFrame_iterator_destroy(void* nativeId)
{
    call_destructor((QTextFrame::iterator*)nativeId);
}

// ---externC---
// QTextFrame_iterator::iterator()
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_iterator_QTextFrame_iterator
()
{
    QTextFrame::iterator *__qt_this = new QTextFrame::iterator();
    return (void *) __qt_this;

}

// QTextFrame_iterator::iterator(const QTextFrame::iterator & o)
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_iterator_QTextFrame_iterator_QTextFrame_iterator
(void* o0)
{
    const QTextFrame::iterator&  __qt_o0 = (const QTextFrame::iterator& ) *(QTextFrame::iterator *)o0;
    QTextFrame::iterator *__qt_this = new QTextFrame::iterator((const QTextFrame::iterator& )__qt_o0);
    return (void *) __qt_this;

}

// QTextFrame_iterator::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrame_iterator_atEnd_const
(void* __this_nativeId)
{
    QTextFrame::iterator *__qt_this = (QTextFrame::iterator *) __this_nativeId;
    bool  __qt_return_value = __qt_this->atEnd();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrame_iterator::currentBlock() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_iterator_currentBlock_const
(void* __this_nativeId)
{
    QTextFrame::iterator *__qt_this = (QTextFrame::iterator *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->currentBlock();

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextFrame_iterator::currentFrame() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_iterator_currentFrame_const
(void* __this_nativeId)
{
    QTextFrame::iterator *__qt_this = (QTextFrame::iterator *) __this_nativeId;
    QTextFrame*  __qt_return_value = __qt_this->currentFrame();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextFrame_iterator::operator++()
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_iterator_operator_increment
(void* __this_nativeId)
{
    QTextFrame::iterator *__qt_this = (QTextFrame::iterator *) __this_nativeId;
    QTextFrame::iterator&  __qt_return_value = __qt_this->operator++();

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTextFrame_iterator::operator--()
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_iterator_operator_decrement
(void* __this_nativeId)
{
    QTextFrame::iterator *__qt_this = (QTextFrame::iterator *) __this_nativeId;
    QTextFrame::iterator&  __qt_return_value = __qt_this->operator--();

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTextFrame_iterator::operator==(const QTextFrame::iterator & o) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrame_iterator_operator_equal_QTextFrame_iterator_const
(void* __this_nativeId,
 void* o0)
{
    const QTextFrame::iterator&  __qt_o0 = (const QTextFrame::iterator& ) *(QTextFrame::iterator *)o0;
    QTextFrame::iterator *__qt_this = (QTextFrame::iterator *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTextFrame::iterator& )__qt_o0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrame_iterator::parentFrame() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_iterator_parentFrame_const
(void* __this_nativeId)
{
    QTextFrame::iterator *__qt_this = (QTextFrame::iterator *) __this_nativeId;
    QTextFrame*  __qt_return_value = __qt_this->parentFrame();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrame_iterator_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextFrame::iterator>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrame_iterator_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextFrame::iterator>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrame_iterator_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextFrame::iterator>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrame_iterator_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextFrame::iterator>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrame_iterator_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextFrame::iterator>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextFrame_iterator_placed_copy(void* orig, void* place) {
    const QTextFrame::iterator&  __qt_orig = (const QTextFrame::iterator& ) *(QTextFrame::iterator *)orig;
    QTextFrame::iterator *result = new (place) QTextFrame::iterator (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_iterator_native_copy(void* orig) {
    const QTextFrame::iterator&  __qt_orig = (const QTextFrame::iterator& ) *(QTextFrame::iterator *)orig;
    QTextFrame::iterator *result = new QTextFrame::iterator (__qt_orig);
    return result;
}

