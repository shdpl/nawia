#include <QVariant>
#include <qtextformat.h>
#include <qtextobject.h>

#include <iostream>
#include <qtextobject.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextFragment_delete(void* nativeId)
{
    delete (QTextFragment*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextFragment_destroy(void* nativeId)
{
    call_destructor((QTextFragment*)nativeId);
}

// ---externC---
// QTextFragment::QTextFragment()
QTD_EXTERN QTD_EXPORT void* qtd_QTextFragment_QTextFragment
()
{
    QTextFragment *__qt_this = new QTextFragment();
    return (void *) __qt_this;

}

// QTextFragment::QTextFragment(const QTextFragment & o)
QTD_EXTERN QTD_EXPORT void* qtd_QTextFragment_QTextFragment_QTextFragment
(void* o0)
{
    const QTextFragment&  __qt_o0 = (const QTextFragment& ) *(QTextFragment *)o0;
    QTextFragment *__qt_this = new QTextFragment((const QTextFragment& )__qt_o0);
    return (void *) __qt_this;

}

// QTextFragment::charFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFragment_charFormat_const
(void* __this_nativeId)
{
    QTextFragment *__qt_this = (QTextFragment *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->charFormat();

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QTextFragment::charFormatIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFragment_charFormatIndex_const
(void* __this_nativeId)
{
    QTextFragment *__qt_this = (QTextFragment *) __this_nativeId;
    int  __qt_return_value = __qt_this->charFormatIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFragment::contains(int position) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFragment_contains_int_const
(void* __this_nativeId,
 int position0)
{
    QTextFragment *__qt_this = (QTextFragment *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((int )position0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFragment::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFragment_isValid_const
(void* __this_nativeId)
{
    QTextFragment *__qt_this = (QTextFragment *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFragment::length() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFragment_length_const
(void* __this_nativeId)
{
    QTextFragment *__qt_this = (QTextFragment *) __this_nativeId;
    int  __qt_return_value = __qt_this->length();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFragment::operator<(const QTextFragment & o) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFragment_operator_less_QTextFragment_const
(void* __this_nativeId,
 void* o0)
{
    const QTextFragment&  __qt_o0 = (const QTextFragment& ) *(QTextFragment *)o0;
    QTextFragment *__qt_this = (QTextFragment *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QTextFragment& )__qt_o0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFragment::operator==(const QTextFragment & o) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFragment_operator_equal_QTextFragment_const
(void* __this_nativeId,
 void* o0)
{
    const QTextFragment&  __qt_o0 = (const QTextFragment& ) *(QTextFragment *)o0;
    QTextFragment *__qt_this = (QTextFragment *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTextFragment& )__qt_o0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFragment::position() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFragment_position_const
(void* __this_nativeId)
{
    QTextFragment *__qt_this = (QTextFragment *) __this_nativeId;
    int  __qt_return_value = __qt_this->position();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFragment::text() const
QTD_EXTERN QTD_EXPORT void qtd_QTextFragment_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextFragment *__qt_this = (QTextFragment *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextFragment_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextFragment>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFragment_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextFragment>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFragment_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextFragment>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFragment_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextFragment>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFragment_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextFragment>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextFragment_placed_copy(void* orig, void* place) {
    const QTextFragment&  __qt_orig = (const QTextFragment& ) *(QTextFragment *)orig;
    QTextFragment *result = new (place) QTextFragment (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextFragment_native_copy(void* orig) {
    const QTextFragment&  __qt_orig = (const QTextFragment& ) *(QTextFragment *)orig;
    QTextFragment *result = new QTextFragment (__qt_orig);
    return result;
}

