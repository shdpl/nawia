#include <QVariant>
#include <qdatastream.h>
#include <qtextformat.h>
#include <qvariant.h>

#include <iostream>
#include <qtextformat.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextLength_delete(void* nativeId)
{
    delete (QTextLength*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextLength_destroy(void* nativeId)
{
    call_destructor((QTextLength*)nativeId);
}

// ---externC---
// QTextLength::QTextLength()
QTD_EXTERN QTD_EXPORT void* qtd_QTextLength_QTextLength
()
{
    QTextLength *__qt_this = new QTextLength();
    return (void *) __qt_this;

}

// QTextLength::QTextLength(QTextLength::Type type, double value)
QTD_EXTERN QTD_EXPORT void* qtd_QTextLength_QTextLength_Type_double
(int type0,
 double value1)
{
    QTextLength::Type __qt_type0 = (QTextLength::Type) type0;
    QTextLength *__qt_this = new QTextLength((QTextLength::Type )__qt_type0, (double )value1);
    return (void *) __qt_this;

}

// QTextLength::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextLength_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QTextLength *__qt_this = (QTextLength *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTextLength::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextLength_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QTextLength *__qt_this = (QTextLength *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QTextLength::operator==(const QTextLength & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextLength_operator_equal_QTextLength_const
(void* __this_nativeId,
 void* other0)
{
    const QTextLength&  __qt_other0 = (const QTextLength& ) *(QTextLength *)other0;
    QTextLength *__qt_this = (QTextLength *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTextLength& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLength::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextLength_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QTextLength *__qt_this = (QTextLength *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QTextLength::rawValue() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLength_rawValue_const
(void* __this_nativeId)
{
    QTextLength *__qt_this = (QTextLength *) __this_nativeId;
    double  __qt_return_value = __qt_this->rawValue();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLength::type() const
QTD_EXTERN QTD_EXPORT int qtd_QTextLength_type_const
(void* __this_nativeId)
{
    QTextLength *__qt_this = (QTextLength *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLength::value(double maximumLength) const
QTD_EXTERN QTD_EXPORT double qtd_QTextLength_value_double_const
(void* __this_nativeId,
 double maximumLength0)
{
    QTextLength *__qt_this = (QTextLength *) __this_nativeId;
    double  __qt_return_value = __qt_this->value((double )maximumLength0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextLength_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextLength>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLength_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextLength>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLength_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextLength>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLength_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextLength>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLength_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextLength>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextLength_placed_copy(void* orig, void* place) {
    const QTextLength&  __qt_orig = (const QTextLength& ) *(QTextLength *)orig;
    QTextLength *result = new (place) QTextLength (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextLength_native_copy(void* orig) {
    const QTextLength&  __qt_orig = (const QTextLength& ) *(QTextLength *)orig;
    QTextLength *result = new QTextLength (__qt_orig);
    return result;
}

