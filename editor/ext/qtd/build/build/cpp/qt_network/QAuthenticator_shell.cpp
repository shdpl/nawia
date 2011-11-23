#include <QVariant>
#include <qauthenticator.h>
#include <qvariant.h>

#include <iostream>
#include <qauthenticator.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QAuthenticator_delete(void* nativeId)
{
    delete (QAuthenticator*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAuthenticator_destroy(void* nativeId)
{
    call_destructor((QAuthenticator*)nativeId);
}

// ---externC---
// QAuthenticator::QAuthenticator()
QTD_EXTERN QTD_EXPORT void* qtd_QAuthenticator_QAuthenticator
()
{
    QAuthenticator *__qt_this = new QAuthenticator();
    return (void *) __qt_this;

}

// QAuthenticator::QAuthenticator(const QAuthenticator & other)
QTD_EXTERN QTD_EXPORT void* qtd_QAuthenticator_QAuthenticator_QAuthenticator
(void* other0)
{
    const QAuthenticator&  __qt_other0 = (const QAuthenticator& ) *(QAuthenticator *)other0;
    QAuthenticator *__qt_this = new QAuthenticator((const QAuthenticator& )__qt_other0);
    return (void *) __qt_this;

}

// QAuthenticator::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QAuthenticator_isNull_const
(void* __this_nativeId)
{
    QAuthenticator *__qt_this = (QAuthenticator *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAuthenticator::operator==(const QAuthenticator & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QAuthenticator_operator_equal_QAuthenticator_const
(void* __this_nativeId,
 void* other0)
{
    const QAuthenticator&  __qt_other0 = (const QAuthenticator& ) *(QAuthenticator *)other0;
    QAuthenticator *__qt_this = (QAuthenticator *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QAuthenticator& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAuthenticator::option(const QString & opt) const
QTD_EXTERN QTD_EXPORT void* qtd_QAuthenticator_option_string_const
(void* __this_nativeId,
 DArray opt0)
{
    QString __qt_opt0 = QString::fromUtf8((const char *)opt0.ptr, opt0.length);
    QAuthenticator *__qt_this = (QAuthenticator *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->option((const QString& )__qt_opt0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QAuthenticator::options() const
// QAuthenticator::password() const
QTD_EXTERN QTD_EXPORT void qtd_QAuthenticator_password_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAuthenticator *__qt_this = (QAuthenticator *) __this_nativeId;
    QString  __qt_return_value = __qt_this->password();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAuthenticator::realm() const
QTD_EXTERN QTD_EXPORT void qtd_QAuthenticator_realm_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAuthenticator *__qt_this = (QAuthenticator *) __this_nativeId;
    QString  __qt_return_value = __qt_this->realm();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAuthenticator::setOption(const QString & opt, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QAuthenticator_setOption_string_QVariant
(void* __this_nativeId,
 DArray opt0,
 QVariant* value1)
{
    QString __qt_opt0 = QString::fromUtf8((const char *)opt0.ptr, opt0.length);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QAuthenticator *__qt_this = (QAuthenticator *) __this_nativeId;
    __qt_this->setOption((const QString& )__qt_opt0, (const QVariant& )__qt_value1);

}

// QAuthenticator::setPassword(const QString & password)
QTD_EXTERN QTD_EXPORT void qtd_QAuthenticator_setPassword_string
(void* __this_nativeId,
 DArray password0)
{
    QString __qt_password0 = QString::fromUtf8((const char *)password0.ptr, password0.length);
    QAuthenticator *__qt_this = (QAuthenticator *) __this_nativeId;
    __qt_this->setPassword((const QString& )__qt_password0);

}

// QAuthenticator::setUser(const QString & user)
QTD_EXTERN QTD_EXPORT void qtd_QAuthenticator_setUser_string
(void* __this_nativeId,
 DArray user0)
{
    QString __qt_user0 = QString::fromUtf8((const char *)user0.ptr, user0.length);
    QAuthenticator *__qt_this = (QAuthenticator *) __this_nativeId;
    __qt_this->setUser((const QString& )__qt_user0);

}

// QAuthenticator::user() const
QTD_EXTERN QTD_EXPORT void qtd_QAuthenticator_user_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAuthenticator *__qt_this = (QAuthenticator *) __this_nativeId;
    QString  __qt_return_value = __qt_this->user();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QAuthenticator_QTypeInfo_isComplex() { return (bool) QTypeInfo<QAuthenticator>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QAuthenticator_QTypeInfo_isStatic() { return (bool) QTypeInfo<QAuthenticator>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QAuthenticator_QTypeInfo_isLarge() { return (bool) QTypeInfo<QAuthenticator>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QAuthenticator_QTypeInfo_isPointer() { return (bool) QTypeInfo<QAuthenticator>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QAuthenticator_QTypeInfo_isDummy() { return (bool) QTypeInfo<QAuthenticator>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QAuthenticator_placed_copy(void* orig, void* place) {
    const QAuthenticator&  __qt_orig = (const QAuthenticator& ) *(QAuthenticator *)orig;
    QAuthenticator *result = new (place) QAuthenticator (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QAuthenticator_native_copy(void* orig) {
    const QAuthenticator&  __qt_orig = (const QAuthenticator& ) *(QAuthenticator *)orig;
    QAuthenticator *result = new QAuthenticator (__qt_orig);
    return result;
}

