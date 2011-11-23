#include <QVariant>
#include <qdatastream.h>
#include <qsizepolicy.h>
#include <qvariant.h>

#include <iostream>
#include <qsizepolicy.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_delete(void* nativeId)
{
    delete (QSizePolicy*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_destroy(void* nativeId)
{
    call_destructor((QSizePolicy*)nativeId);
}

// ---externC---
// QSizePolicy::QSizePolicy()
QTD_EXTERN QTD_EXPORT void* qtd_QSizePolicy_QSizePolicy
()
{
    QSizePolicy *__qt_this = new QSizePolicy();
    return (void *) __qt_this;

}

// QSizePolicy::QSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical)
QTD_EXTERN QTD_EXPORT void* qtd_QSizePolicy_QSizePolicy_Policy_Policy
(int horizontal0,
 int vertical1)
{
    QSizePolicy::Policy __qt_horizontal0 = (QSizePolicy::Policy) horizontal0;
    QSizePolicy::Policy __qt_vertical1 = (QSizePolicy::Policy) vertical1;
    QSizePolicy *__qt_this = new QSizePolicy((QSizePolicy::Policy )__qt_horizontal0, (QSizePolicy::Policy )__qt_vertical1);
    return (void *) __qt_this;

}

// QSizePolicy::QSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type)
QTD_EXTERN QTD_EXPORT void* qtd_QSizePolicy_QSizePolicy_Policy_Policy_ControlType
(int horizontal0,
 int vertical1,
 int type2)
{
    QSizePolicy::Policy __qt_horizontal0 = (QSizePolicy::Policy) horizontal0;
    QSizePolicy::Policy __qt_vertical1 = (QSizePolicy::Policy) vertical1;
    QSizePolicy::ControlType __qt_type2 = (QSizePolicy::ControlType) type2;
    QSizePolicy *__qt_this = new QSizePolicy((QSizePolicy::Policy )__qt_horizontal0, (QSizePolicy::Policy )__qt_vertical1, (QSizePolicy::ControlType )__qt_type2);
    return (void *) __qt_this;

}

// QSizePolicy::controlType() const
QTD_EXTERN QTD_EXPORT int qtd_QSizePolicy_controlType_const
(void* __this_nativeId)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    int  __qt_return_value = __qt_this->controlType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSizePolicy::expandingDirections() const
QTD_EXTERN QTD_EXPORT int qtd_QSizePolicy_expandingDirections_const
(void* __this_nativeId)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    int  __qt_return_value = __qt_this->expandingDirections();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSizePolicy::hasHeightForWidth() const
QTD_EXTERN QTD_EXPORT bool qtd_QSizePolicy_hasHeightForWidth_const
(void* __this_nativeId)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasHeightForWidth();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSizePolicy::horizontalPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QSizePolicy_horizontalPolicy_const
(void* __this_nativeId)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    int  __qt_return_value = __qt_this->horizontalPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSizePolicy::horizontalStretch() const
QTD_EXTERN QTD_EXPORT int qtd_QSizePolicy_horizontalStretch_const
(void* __this_nativeId)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    int  __qt_return_value = __qt_this->horizontalStretch();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSizePolicy::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QSizePolicy_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QSizePolicy::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QSizePolicy::operator==(const QSizePolicy & s) const
QTD_EXTERN QTD_EXPORT bool qtd_QSizePolicy_operator_equal_QSizePolicy_const
(void* __this_nativeId,
 void* s0)
{
    const QSizePolicy&  __qt_s0 = (const QSizePolicy& ) *(QSizePolicy *)s0;
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QSizePolicy& )__qt_s0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSizePolicy::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QSizePolicy::setControlType(QSizePolicy::ControlType type)
QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_setControlType_ControlType
(void* __this_nativeId,
 int type0)
{
    QSizePolicy::ControlType __qt_type0 = (QSizePolicy::ControlType) type0;
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    __qt_this->setControlType((QSizePolicy::ControlType )__qt_type0);

}

// QSizePolicy::setHeightForWidth(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_setHeightForWidth_bool
(void* __this_nativeId,
 bool b0)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    __qt_this->setHeightForWidth((bool )b0);

}

// QSizePolicy::setHorizontalPolicy(QSizePolicy::Policy d)
QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_setHorizontalPolicy_Policy
(void* __this_nativeId,
 int d0)
{
    QSizePolicy::Policy __qt_d0 = (QSizePolicy::Policy) d0;
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    __qt_this->setHorizontalPolicy((QSizePolicy::Policy )__qt_d0);

}

// QSizePolicy::setHorizontalStretch(unsigned char stretchFactor)
QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_setHorizontalStretch_ubyte
(void* __this_nativeId,
 unsigned char stretchFactor0)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    __qt_this->setHorizontalStretch((unsigned char )stretchFactor0);

}

// QSizePolicy::setVerticalPolicy(QSizePolicy::Policy d)
QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_setVerticalPolicy_Policy
(void* __this_nativeId,
 int d0)
{
    QSizePolicy::Policy __qt_d0 = (QSizePolicy::Policy) d0;
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    __qt_this->setVerticalPolicy((QSizePolicy::Policy )__qt_d0);

}

// QSizePolicy::setVerticalStretch(unsigned char stretchFactor)
QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_setVerticalStretch_ubyte
(void* __this_nativeId,
 unsigned char stretchFactor0)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    __qt_this->setVerticalStretch((unsigned char )stretchFactor0);

}

// QSizePolicy::transpose()
QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_transpose
(void* __this_nativeId)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    __qt_this->transpose();

}

// QSizePolicy::verticalPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QSizePolicy_verticalPolicy_const
(void* __this_nativeId)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    int  __qt_return_value = __qt_this->verticalPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSizePolicy::verticalStretch() const
QTD_EXTERN QTD_EXPORT int qtd_QSizePolicy_verticalStretch_const
(void* __this_nativeId)
{
    QSizePolicy *__qt_this = (QSizePolicy *) __this_nativeId;
    int  __qt_return_value = __qt_this->verticalStretch();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QSizePolicy_QTypeInfo_isComplex() { return (bool) QTypeInfo<QSizePolicy>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QSizePolicy_QTypeInfo_isStatic() { return (bool) QTypeInfo<QSizePolicy>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QSizePolicy_QTypeInfo_isLarge() { return (bool) QTypeInfo<QSizePolicy>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QSizePolicy_QTypeInfo_isPointer() { return (bool) QTypeInfo<QSizePolicy>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QSizePolicy_QTypeInfo_isDummy() { return (bool) QTypeInfo<QSizePolicy>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QSizePolicy_placed_copy(void* orig, void* place) {
    const QSizePolicy&  __qt_orig = (const QSizePolicy& ) *(QSizePolicy *)orig;
    QSizePolicy *result = new (place) QSizePolicy (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QSizePolicy_native_copy(void* orig) {
    const QSizePolicy&  __qt_orig = (const QSizePolicy& ) *(QSizePolicy *)orig;
    QSizePolicy *result = new QSizePolicy (__qt_orig);
    return result;
}

