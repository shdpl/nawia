#include <QVariant>
#include <qlist.h>
#include <qsslcertificate.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslkey.h>

#include <iostream>
#include <qsslconfiguration.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_delete(void* nativeId)
{
    delete (QSslConfiguration*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_destroy(void* nativeId)
{
    call_destructor((QSslConfiguration*)nativeId);
}

// ---externC---
// QSslConfiguration::QSslConfiguration()
QTD_EXTERN QTD_EXPORT void* qtd_QSslConfiguration_QSslConfiguration
()
{
    QSslConfiguration *__qt_this = new QSslConfiguration();
    return (void *) __qt_this;

}

// QSslConfiguration::QSslConfiguration(const QSslConfiguration & other)
QTD_EXTERN QTD_EXPORT void* qtd_QSslConfiguration_QSslConfiguration_QSslConfiguration
(void* other0)
{
    const QSslConfiguration&  __qt_other0 = (const QSslConfiguration& ) *(QSslConfiguration *)other0;
    QSslConfiguration *__qt_this = new QSslConfiguration((const QSslConfiguration& )__qt_other0);
    return (void *) __qt_this;

}

// QSslConfiguration::caCertificates() const
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_caCertificates_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    QList<QSslCertificate >  __qt_return_value = __qt_this->caCertificates();

QList<QSslCertificate > &__d_return_value_tmp = (*(QList<QSslCertificate > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslConfiguration::ciphers() const
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_ciphers_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    QList<QSslCipher >  __qt_return_value = __qt_this->ciphers();

QList<QSslCipher > &__d_return_value_tmp = (*(QList<QSslCipher > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslConfiguration::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QSslConfiguration_isNull_const
(void* __this_nativeId)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslConfiguration::localCertificate() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslConfiguration_localCertificate_const
(void* __this_nativeId)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    QSslCertificate  __qt_return_value = __qt_this->localCertificate();

    void* __d_return_value = (void*) new QSslCertificate(__qt_return_value);

    return __d_return_value;
}

// QSslConfiguration::operator==(const QSslConfiguration & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QSslConfiguration_operator_equal_QSslConfiguration_const
(void* __this_nativeId,
 void* other0)
{
    const QSslConfiguration&  __qt_other0 = (const QSslConfiguration& ) *(QSslConfiguration *)other0;
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QSslConfiguration& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslConfiguration::peerCertificate() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslConfiguration_peerCertificate_const
(void* __this_nativeId)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    QSslCertificate  __qt_return_value = __qt_this->peerCertificate();

    void* __d_return_value = (void*) new QSslCertificate(__qt_return_value);

    return __d_return_value;
}

// QSslConfiguration::peerCertificateChain() const
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_peerCertificateChain_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    QList<QSslCertificate >  __qt_return_value = __qt_this->peerCertificateChain();

QList<QSslCertificate > &__d_return_value_tmp = (*(QList<QSslCertificate > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslConfiguration::peerVerifyDepth() const
QTD_EXTERN QTD_EXPORT int qtd_QSslConfiguration_peerVerifyDepth_const
(void* __this_nativeId)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    int  __qt_return_value = __qt_this->peerVerifyDepth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslConfiguration::peerVerifyMode() const
QTD_EXTERN QTD_EXPORT int qtd_QSslConfiguration_peerVerifyMode_const
(void* __this_nativeId)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    int  __qt_return_value = __qt_this->peerVerifyMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslConfiguration::privateKey() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslConfiguration_privateKey_const
(void* __this_nativeId)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    QSslKey  __qt_return_value = __qt_this->privateKey();

    void* __d_return_value = (void*) new QSslKey(__qt_return_value);

    return __d_return_value;
}

// QSslConfiguration::protocol() const
QTD_EXTERN QTD_EXPORT int qtd_QSslConfiguration_protocol_const
(void* __this_nativeId)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    int  __qt_return_value = __qt_this->protocol();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslConfiguration::sessionCipher() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslConfiguration_sessionCipher_const
(void* __this_nativeId)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    QSslCipher  __qt_return_value = __qt_this->sessionCipher();

    void* __d_return_value = (void*) new QSslCipher(__qt_return_value);

    return __d_return_value;
}

// QSslConfiguration::setCaCertificates(const QList<QSslCertificate > & certificates)
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_setCaCertificates_QList
(void* __this_nativeId,
 void* certificates0)
{
QList<QSslCertificate > __qt_certificates0 = (*(QList<QSslCertificate > *)certificates0);
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    __qt_this->setCaCertificates((const QList<QSslCertificate >& )__qt_certificates0);

}

// QSslConfiguration::setCiphers(const QList<QSslCipher > & ciphers)
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_setCiphers_QList
(void* __this_nativeId,
 void* ciphers0)
{
QList<QSslCipher > __qt_ciphers0 = (*(QList<QSslCipher > *)ciphers0);
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    __qt_this->setCiphers((const QList<QSslCipher >& )__qt_ciphers0);

}

// QSslConfiguration::setLocalCertificate(const QSslCertificate & certificate)
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_setLocalCertificate_QSslCertificate
(void* __this_nativeId,
 void* certificate0)
{
    const QSslCertificate&  __qt_certificate0 = (const QSslCertificate& ) *(QSslCertificate *)certificate0;
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    __qt_this->setLocalCertificate((const QSslCertificate& )__qt_certificate0);

}

// QSslConfiguration::setPeerVerifyDepth(int depth)
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_setPeerVerifyDepth_int
(void* __this_nativeId,
 int depth0)
{
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    __qt_this->setPeerVerifyDepth((int )depth0);

}

// QSslConfiguration::setPeerVerifyMode(QSslSocket::PeerVerifyMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_setPeerVerifyMode_PeerVerifyMode
(void* __this_nativeId,
 int mode0)
{
    QSslSocket::PeerVerifyMode __qt_mode0 = (QSslSocket::PeerVerifyMode) mode0;
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    __qt_this->setPeerVerifyMode((QSslSocket::PeerVerifyMode )__qt_mode0);

}

// QSslConfiguration::setPrivateKey(const QSslKey & key)
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_setPrivateKey_QSslKey
(void* __this_nativeId,
 void* key0)
{
    const QSslKey&  __qt_key0 = (const QSslKey& ) *(QSslKey *)key0;
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    __qt_this->setPrivateKey((const QSslKey& )__qt_key0);

}

// QSslConfiguration::setProtocol(QSsl::SslProtocol protocol)
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_setProtocol_SslProtocol
(void* __this_nativeId,
 int protocol0)
{
    QSsl::SslProtocol __qt_protocol0 = (QSsl::SslProtocol) protocol0;
    QSslConfiguration *__qt_this = (QSslConfiguration *) __this_nativeId;
    __qt_this->setProtocol((QSsl::SslProtocol )__qt_protocol0);

}

// QSslConfiguration::defaultConfiguration()
QTD_EXTERN QTD_EXPORT void* qtd_QSslConfiguration_defaultConfiguration
()
{
    QSslConfiguration  __qt_return_value = QSslConfiguration::defaultConfiguration();

    void* __d_return_value = (void*) new QSslConfiguration(__qt_return_value);

    return __d_return_value;
}

// QSslConfiguration::setDefaultConfiguration(const QSslConfiguration & configuration)
QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_setDefaultConfiguration_QSslConfiguration
(void* configuration0)
{
    const QSslConfiguration&  __qt_configuration0 = (const QSslConfiguration& ) *(QSslConfiguration *)configuration0;
    QSslConfiguration::setDefaultConfiguration((const QSslConfiguration& )__qt_configuration0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QSslConfiguration_QTypeInfo_isComplex() { return (bool) QTypeInfo<QSslConfiguration>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslConfiguration_QTypeInfo_isStatic() { return (bool) QTypeInfo<QSslConfiguration>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslConfiguration_QTypeInfo_isLarge() { return (bool) QTypeInfo<QSslConfiguration>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslConfiguration_QTypeInfo_isPointer() { return (bool) QTypeInfo<QSslConfiguration>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslConfiguration_QTypeInfo_isDummy() { return (bool) QTypeInfo<QSslConfiguration>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QSslConfiguration_placed_copy(void* orig, void* place) {
    const QSslConfiguration&  __qt_orig = (const QSslConfiguration& ) *(QSslConfiguration *)orig;
    QSslConfiguration *result = new (place) QSslConfiguration (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QSslConfiguration_native_copy(void* orig) {
    const QSslConfiguration&  __qt_orig = (const QSslConfiguration& ) *(QSslConfiguration *)orig;
    QSslConfiguration *result = new QSslConfiguration (__qt_orig);
    return result;
}

