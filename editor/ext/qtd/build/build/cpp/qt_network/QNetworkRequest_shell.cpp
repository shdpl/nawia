#include <QVariant>
#include <qbytearray.h>
#include <qlist.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qsslconfiguration.h>
#include <qurl.h>
#include <qvariant.h>

#include <iostream>
#include <qnetworkrequest.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QNetworkRequest_delete(void* nativeId)
{
    delete (QNetworkRequest*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkRequest_destroy(void* nativeId)
{
    call_destructor((QNetworkRequest*)nativeId);
}

// ---externC---
// QNetworkRequest::QNetworkRequest(const QNetworkRequest & other)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkRequest_QNetworkRequest_QNetworkRequest
(void* other0)
{
    const QNetworkRequest&  __qt_other0 = (const QNetworkRequest& ) *(QNetworkRequest *)other0;
    QNetworkRequest *__qt_this = new QNetworkRequest((const QNetworkRequest& )__qt_other0);
    return (void *) __qt_this;

}

// QNetworkRequest::QNetworkRequest(const QUrl & url)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkRequest_QNetworkRequest_QUrl
(void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QNetworkRequest *__qt_this = new QNetworkRequest((const QUrl& )__qt_url0);
    return (void *) __qt_this;

}

// QNetworkRequest::attribute(QNetworkRequest::Attribute code, const QVariant & defaultValue) const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkRequest_attribute_Attribute_QVariant_const
(void* __this_nativeId,
 int code0,
 QVariant* defaultValue1)
{
    QNetworkRequest::Attribute __qt_code0 = (QNetworkRequest::Attribute) code0;
    QVariant __qt_defaultValue1 = defaultValue1 == NULL ? QVariant() : QVariant(*defaultValue1);
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->attribute((QNetworkRequest::Attribute )__qt_code0, (const QVariant& )__qt_defaultValue1);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QNetworkRequest::hasRawHeader(const QByteArray & headerName) const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkRequest_hasRawHeader_QByteArray_const
(void* __this_nativeId,
 void* headerName0)
{
    const QByteArray&  __qt_headerName0 = (const QByteArray& ) *(QByteArray *)headerName0;
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasRawHeader((const QByteArray& )__qt_headerName0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkRequest::header(QNetworkRequest::KnownHeaders header) const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkRequest_header_KnownHeaders_const
(void* __this_nativeId,
 int header0)
{
    QNetworkRequest::KnownHeaders __qt_header0 = (QNetworkRequest::KnownHeaders) header0;
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->header((QNetworkRequest::KnownHeaders )__qt_header0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QNetworkRequest::operator==(const QNetworkRequest & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkRequest_operator_equal_QNetworkRequest_const
(void* __this_nativeId,
 void* other0)
{
    const QNetworkRequest&  __qt_other0 = (const QNetworkRequest& ) *(QNetworkRequest *)other0;
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QNetworkRequest& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkRequest::originatingObject() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkRequest_originatingObject_const
(void* __this_nativeId)
{
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    QObject*  __qt_return_value = __qt_this->originatingObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkRequest::rawHeader(const QByteArray & headerName) const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkRequest_rawHeader_QByteArray_const
(void* __this_nativeId,
 void* headerName0)
{
    const QByteArray&  __qt_headerName0 = (const QByteArray& ) *(QByteArray *)headerName0;
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->rawHeader((const QByteArray& )__qt_headerName0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QNetworkRequest::rawHeaderList() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkRequest_rawHeaderList_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    QList<QByteArray >  __qt_return_value = __qt_this->rawHeaderList();

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QNetworkRequest::setAttribute(QNetworkRequest::Attribute code, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkRequest_setAttribute_Attribute_QVariant
(void* __this_nativeId,
 int code0,
 QVariant* value1)
{
    QNetworkRequest::Attribute __qt_code0 = (QNetworkRequest::Attribute) code0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    __qt_this->setAttribute((QNetworkRequest::Attribute )__qt_code0, (const QVariant& )__qt_value1);

}

// QNetworkRequest::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkRequest_setHeader_KnownHeaders_QVariant
(void* __this_nativeId,
 int header0,
 QVariant* value1)
{
    QNetworkRequest::KnownHeaders __qt_header0 = (QNetworkRequest::KnownHeaders) header0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    __qt_this->setHeader((QNetworkRequest::KnownHeaders )__qt_header0, (const QVariant& )__qt_value1);

}

// QNetworkRequest::setOriginatingObject(QObject * object)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkRequest_setOriginatingObject_QObject
(void* __this_nativeId,
 void* object0)
{
    QObject*  __qt_object0 = (QObject* ) object0;
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    __qt_this->setOriginatingObject((QObject* )__qt_object0);

}

// QNetworkRequest::setRawHeader(const QByteArray & headerName, const QByteArray & value)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkRequest_setRawHeader_QByteArray_QByteArray
(void* __this_nativeId,
 void* headerName0,
 void* value1)
{
    const QByteArray&  __qt_headerName0 = (const QByteArray& ) *(QByteArray *)headerName0;
    const QByteArray&  __qt_value1 = (const QByteArray& ) *(QByteArray *)value1;
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    __qt_this->setRawHeader((const QByteArray& )__qt_headerName0, (const QByteArray& )__qt_value1);

}

// QNetworkRequest::setSslConfiguration(const QSslConfiguration & configuration)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkRequest_setSslConfiguration_QSslConfiguration
(void* __this_nativeId,
 void* configuration0)
{
    const QSslConfiguration&  __qt_configuration0 = (const QSslConfiguration& ) *(QSslConfiguration *)configuration0;
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    __qt_this->setSslConfiguration((const QSslConfiguration& )__qt_configuration0);

}

// QNetworkRequest::setUrl(const QUrl & url)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkRequest_setUrl_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    __qt_this->setUrl((const QUrl& )__qt_url0);

}

// QNetworkRequest::sslConfiguration() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkRequest_sslConfiguration_const
(void* __this_nativeId)
{
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    QSslConfiguration  __qt_return_value = __qt_this->sslConfiguration();

    void* __d_return_value = (void*) new QSslConfiguration(__qt_return_value);

    return __d_return_value;
}

// QNetworkRequest::url() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkRequest_url_const
(void* __this_nativeId)
{
    QNetworkRequest *__qt_this = (QNetworkRequest *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->url();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkRequest_QTypeInfo_isComplex() { return (bool) QTypeInfo<QNetworkRequest>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkRequest_QTypeInfo_isStatic() { return (bool) QTypeInfo<QNetworkRequest>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkRequest_QTypeInfo_isLarge() { return (bool) QTypeInfo<QNetworkRequest>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkRequest_QTypeInfo_isPointer() { return (bool) QTypeInfo<QNetworkRequest>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkRequest_QTypeInfo_isDummy() { return (bool) QTypeInfo<QNetworkRequest>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QNetworkRequest_placed_copy(void* orig, void* place) {
    const QNetworkRequest&  __qt_orig = (const QNetworkRequest& ) *(QNetworkRequest *)orig;
    QNetworkRequest *result = new (place) QNetworkRequest (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QNetworkRequest_native_copy(void* orig) {
    const QNetworkRequest&  __qt_orig = (const QNetworkRequest& ) *(QNetworkRequest *)orig;
    QNetworkRequest *result = new QNetworkRequest (__qt_orig);
    return result;
}

