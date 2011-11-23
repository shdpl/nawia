#include <QVariant>
#include <qsslcipher.h>

#include <iostream>
#include <qsslcipher.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QSslCipher_delete(void* nativeId)
{
    delete (QSslCipher*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSslCipher_destroy(void* nativeId)
{
    call_destructor((QSslCipher*)nativeId);
}

// ---externC---
// QSslCipher::QSslCipher()
QTD_EXTERN QTD_EXPORT void* qtd_QSslCipher_QSslCipher
()
{
    QSslCipher *__qt_this = new QSslCipher();
    return (void *) __qt_this;

}

// QSslCipher::QSslCipher(const QSslCipher & other)
QTD_EXTERN QTD_EXPORT void* qtd_QSslCipher_QSslCipher_QSslCipher
(void* other0)
{
    const QSslCipher&  __qt_other0 = (const QSslCipher& ) *(QSslCipher *)other0;
    QSslCipher *__qt_this = new QSslCipher((const QSslCipher& )__qt_other0);
    return (void *) __qt_this;

}

// QSslCipher::QSslCipher(const QString & name, QSsl::SslProtocol protocol)
QTD_EXTERN QTD_EXPORT void* qtd_QSslCipher_QSslCipher_string_SslProtocol
(DArray name0,
 int protocol1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QSsl::SslProtocol __qt_protocol1 = (QSsl::SslProtocol) protocol1;
    QSslCipher *__qt_this = new QSslCipher((const QString& )__qt_name0, (QSsl::SslProtocol )__qt_protocol1);
    return (void *) __qt_this;

}

// QSslCipher::authenticationMethod() const
QTD_EXTERN QTD_EXPORT void qtd_QSslCipher_authenticationMethod_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslCipher *__qt_this = (QSslCipher *) __this_nativeId;
    QString  __qt_return_value = __qt_this->authenticationMethod();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSslCipher::encryptionMethod() const
QTD_EXTERN QTD_EXPORT void qtd_QSslCipher_encryptionMethod_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslCipher *__qt_this = (QSslCipher *) __this_nativeId;
    QString  __qt_return_value = __qt_this->encryptionMethod();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSslCipher::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QSslCipher_isNull_const
(void* __this_nativeId)
{
    QSslCipher *__qt_this = (QSslCipher *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslCipher::keyExchangeMethod() const
QTD_EXTERN QTD_EXPORT void qtd_QSslCipher_keyExchangeMethod_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslCipher *__qt_this = (QSslCipher *) __this_nativeId;
    QString  __qt_return_value = __qt_this->keyExchangeMethod();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSslCipher::name() const
QTD_EXTERN QTD_EXPORT void qtd_QSslCipher_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslCipher *__qt_this = (QSslCipher *) __this_nativeId;
    QString  __qt_return_value = __qt_this->name();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSslCipher::operator==(const QSslCipher & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QSslCipher_operator_equal_QSslCipher_const
(void* __this_nativeId,
 void* other0)
{
    const QSslCipher&  __qt_other0 = (const QSslCipher& ) *(QSslCipher *)other0;
    QSslCipher *__qt_this = (QSslCipher *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QSslCipher& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslCipher::protocol() const
QTD_EXTERN QTD_EXPORT int qtd_QSslCipher_protocol_const
(void* __this_nativeId)
{
    QSslCipher *__qt_this = (QSslCipher *) __this_nativeId;
    int  __qt_return_value = __qt_this->protocol();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslCipher::protocolString() const
QTD_EXTERN QTD_EXPORT void qtd_QSslCipher_protocolString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslCipher *__qt_this = (QSslCipher *) __this_nativeId;
    QString  __qt_return_value = __qt_this->protocolString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSslCipher::supportedBits() const
QTD_EXTERN QTD_EXPORT int qtd_QSslCipher_supportedBits_const
(void* __this_nativeId)
{
    QSslCipher *__qt_this = (QSslCipher *) __this_nativeId;
    int  __qt_return_value = __qt_this->supportedBits();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslCipher::usedBits() const
QTD_EXTERN QTD_EXPORT int qtd_QSslCipher_usedBits_const
(void* __this_nativeId)
{
    QSslCipher *__qt_this = (QSslCipher *) __this_nativeId;
    int  __qt_return_value = __qt_this->usedBits();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QSslCipher_QTypeInfo_isComplex() { return (bool) QTypeInfo<QSslCipher>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslCipher_QTypeInfo_isStatic() { return (bool) QTypeInfo<QSslCipher>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslCipher_QTypeInfo_isLarge() { return (bool) QTypeInfo<QSslCipher>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslCipher_QTypeInfo_isPointer() { return (bool) QTypeInfo<QSslCipher>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslCipher_QTypeInfo_isDummy() { return (bool) QTypeInfo<QSslCipher>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QSslCipher_placed_copy(void* orig, void* place) {
    const QSslCipher&  __qt_orig = (const QSslCipher& ) *(QSslCipher *)orig;
    QSslCipher *result = new (place) QSslCipher (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QSslCipher_native_copy(void* orig) {
    const QSslCipher&  __qt_orig = (const QSslCipher& ) *(QSslCipher *)orig;
    QSslCipher *result = new QSslCipher (__qt_orig);
    return result;
}

