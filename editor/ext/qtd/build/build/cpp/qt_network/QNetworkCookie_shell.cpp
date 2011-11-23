#include <QVariant>
#include <qbytearray.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qnetworkcookie.h>

#include <iostream>
#include <qnetworkcookie.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_delete(void* nativeId)
{
    delete (QNetworkCookie*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_destroy(void* nativeId)
{
    call_destructor((QNetworkCookie*)nativeId);
}

// ---externC---
// QNetworkCookie::QNetworkCookie(const QByteArray & name, const QByteArray & value)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCookie_QNetworkCookie_QByteArray_QByteArray
(void* name0,
 void* value1)
{
    const QByteArray&  __qt_name0 = (const QByteArray& ) *(QByteArray *)name0;
    const QByteArray&  __qt_value1 = (const QByteArray& ) *(QByteArray *)value1;
    QNetworkCookie *__qt_this = new QNetworkCookie((const QByteArray& )__qt_name0, (const QByteArray& )__qt_value1);
    return (void *) __qt_this;

}

// QNetworkCookie::QNetworkCookie(const QNetworkCookie & other)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCookie_QNetworkCookie_QNetworkCookie
(void* other0)
{
    const QNetworkCookie&  __qt_other0 = (const QNetworkCookie& ) *(QNetworkCookie *)other0;
    QNetworkCookie *__qt_this = new QNetworkCookie((const QNetworkCookie& )__qt_other0);
    return (void *) __qt_this;

}

// QNetworkCookie::domain() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_domain_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    QString  __qt_return_value = __qt_this->domain();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkCookie::expirationDate() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCookie_expirationDate_const
(void* __this_nativeId)
{
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->expirationDate();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QNetworkCookie::isHttpOnly() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCookie_isHttpOnly_const
(void* __this_nativeId)
{
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isHttpOnly();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkCookie::isSecure() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCookie_isSecure_const
(void* __this_nativeId)
{
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSecure();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkCookie::isSessionCookie() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCookie_isSessionCookie_const
(void* __this_nativeId)
{
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSessionCookie();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkCookie::name() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCookie_name_const
(void* __this_nativeId)
{
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->name();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QNetworkCookie::operator==(const QNetworkCookie & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCookie_operator_equal_QNetworkCookie_const
(void* __this_nativeId,
 void* other0)
{
    const QNetworkCookie&  __qt_other0 = (const QNetworkCookie& ) *(QNetworkCookie *)other0;
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QNetworkCookie& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkCookie::path() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_path_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    QString  __qt_return_value = __qt_this->path();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkCookie::setDomain(const QString & domain)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_setDomain_string
(void* __this_nativeId,
 DArray domain0)
{
    QString __qt_domain0 = QString::fromUtf8((const char *)domain0.ptr, domain0.length);
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    __qt_this->setDomain((const QString& )__qt_domain0);

}

// QNetworkCookie::setExpirationDate(const QDateTime & date)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_setExpirationDate_QDateTime
(void* __this_nativeId,
 void* date0)
{
    const QDateTime&  __qt_date0 = (const QDateTime& ) *(QDateTime *)date0;
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    __qt_this->setExpirationDate((const QDateTime& )__qt_date0);

}

// QNetworkCookie::setHttpOnly(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_setHttpOnly_bool
(void* __this_nativeId,
 bool enable0)
{
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    __qt_this->setHttpOnly((bool )enable0);

}

// QNetworkCookie::setName(const QByteArray & cookieName)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_setName_QByteArray
(void* __this_nativeId,
 void* cookieName0)
{
    const QByteArray&  __qt_cookieName0 = (const QByteArray& ) *(QByteArray *)cookieName0;
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    __qt_this->setName((const QByteArray& )__qt_cookieName0);

}

// QNetworkCookie::setPath(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_setPath_string
(void* __this_nativeId,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    __qt_this->setPath((const QString& )__qt_path0);

}

// QNetworkCookie::setSecure(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_setSecure_bool
(void* __this_nativeId,
 bool enable0)
{
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    __qt_this->setSecure((bool )enable0);

}

// QNetworkCookie::setValue(const QByteArray & value)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_setValue_QByteArray
(void* __this_nativeId,
 void* value0)
{
    const QByteArray&  __qt_value0 = (const QByteArray& ) *(QByteArray *)value0;
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    __qt_this->setValue((const QByteArray& )__qt_value0);

}

// QNetworkCookie::toRawForm(QNetworkCookie::RawForm form) const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCookie_toRawForm_RawForm_const
(void* __this_nativeId,
 int form0)
{
    QNetworkCookie::RawForm __qt_form0 = (QNetworkCookie::RawForm) form0;
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toRawForm((QNetworkCookie::RawForm )__qt_form0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QNetworkCookie::value() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCookie_value_const
(void* __this_nativeId)
{
    QNetworkCookie *__qt_this = (QNetworkCookie *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->value();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QNetworkCookie::parseCookies(const QByteArray & cookieString)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_parseCookies_QByteArray
(void* __d_return_value,
 void* cookieString0)
{
    const QByteArray&  __qt_cookieString0 = (const QByteArray& ) *(QByteArray *)cookieString0;
    QList<QNetworkCookie >  __qt_return_value = QNetworkCookie::parseCookies((const QByteArray& )__qt_cookieString0);

QList<QNetworkCookie > &__d_return_value_tmp = (*(QList<QNetworkCookie > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCookie_QTypeInfo_isComplex() { return (bool) QTypeInfo<QNetworkCookie>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCookie_QTypeInfo_isStatic() { return (bool) QTypeInfo<QNetworkCookie>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCookie_QTypeInfo_isLarge() { return (bool) QTypeInfo<QNetworkCookie>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCookie_QTypeInfo_isPointer() { return (bool) QTypeInfo<QNetworkCookie>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCookie_QTypeInfo_isDummy() { return (bool) QTypeInfo<QNetworkCookie>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookie_placed_copy(void* orig, void* place) {
    const QNetworkCookie&  __qt_orig = (const QNetworkCookie& ) *(QNetworkCookie *)orig;
    QNetworkCookie *result = new (place) QNetworkCookie (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCookie_native_copy(void* orig) {
    const QNetworkCookie&  __qt_orig = (const QNetworkCookie& ) *(QNetworkCookie *)orig;
    QNetworkCookie *result = new QNetworkCookie (__qt_orig);
    return result;
}

