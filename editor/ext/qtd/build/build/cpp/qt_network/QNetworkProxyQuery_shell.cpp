#include <QVariant>
#include <qnetworkproxy.h>
#include <qurl.h>

#include <iostream>
#include <qnetworkproxy.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_delete(void* nativeId)
{
    delete (QNetworkProxyQuery*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_destroy(void* nativeId)
{
    call_destructor((QNetworkProxyQuery*)nativeId);
}

// ---externC---
// QNetworkProxyQuery::QNetworkProxyQuery()
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxyQuery_QNetworkProxyQuery
()
{
    QNetworkProxyQuery *__qt_this = new QNetworkProxyQuery();
    return (void *) __qt_this;

}

// QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkProxyQuery & other)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxyQuery_QNetworkProxyQuery_QNetworkProxyQuery
(void* other0)
{
    const QNetworkProxyQuery&  __qt_other0 = (const QNetworkProxyQuery& ) *(QNetworkProxyQuery *)other0;
    QNetworkProxyQuery *__qt_this = new QNetworkProxyQuery((const QNetworkProxyQuery& )__qt_other0);
    return (void *) __qt_this;

}

// QNetworkProxyQuery::QNetworkProxyQuery(const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxyQuery_QNetworkProxyQuery_string_int_string_QueryType
(DArray hostname0,
 int port1,
 DArray protocolTag2,
 int queryType3)
{
    QString __qt_hostname0 = QString::fromUtf8((const char *)hostname0.ptr, hostname0.length);
    QString __qt_protocolTag2 = QString::fromUtf8((const char *)protocolTag2.ptr, protocolTag2.length);
    QNetworkProxyQuery::QueryType __qt_queryType3 = (QNetworkProxyQuery::QueryType) queryType3;
    QNetworkProxyQuery *__qt_this = new QNetworkProxyQuery((const QString& )__qt_hostname0, (int )port1, (const QString& )__qt_protocolTag2, (QNetworkProxyQuery::QueryType )__qt_queryType3);
    return (void *) __qt_this;

}

// QNetworkProxyQuery::QNetworkProxyQuery(const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxyQuery_QNetworkProxyQuery_QUrl_QueryType
(void* requestUrl0,
 int queryType1)
{
    const QUrl&  __qt_requestUrl0 = (const QUrl& ) *(QUrl *)requestUrl0;
    QNetworkProxyQuery::QueryType __qt_queryType1 = (QNetworkProxyQuery::QueryType) queryType1;
    QNetworkProxyQuery *__qt_this = new QNetworkProxyQuery((const QUrl& )__qt_requestUrl0, (QNetworkProxyQuery::QueryType )__qt_queryType1);
    return (void *) __qt_this;

}

// QNetworkProxyQuery::QNetworkProxyQuery(unsigned short bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxyQuery_QNetworkProxyQuery_ushort_string_QueryType
(unsigned short bindPort0,
 DArray protocolTag1,
 int queryType2)
{
    QString __qt_protocolTag1 = QString::fromUtf8((const char *)protocolTag1.ptr, protocolTag1.length);
    QNetworkProxyQuery::QueryType __qt_queryType2 = (QNetworkProxyQuery::QueryType) queryType2;
    QNetworkProxyQuery *__qt_this = new QNetworkProxyQuery((unsigned short )bindPort0, (const QString& )__qt_protocolTag1, (QNetworkProxyQuery::QueryType )__qt_queryType2);
    return (void *) __qt_this;

}

// QNetworkProxyQuery::localPort() const
QTD_EXTERN QTD_EXPORT int qtd_QNetworkProxyQuery_localPort_const
(void* __this_nativeId)
{
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    int  __qt_return_value = __qt_this->localPort();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkProxyQuery::operator==(const QNetworkProxyQuery & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxyQuery_operator_equal_QNetworkProxyQuery_const
(void* __this_nativeId,
 void* other0)
{
    const QNetworkProxyQuery&  __qt_other0 = (const QNetworkProxyQuery& ) *(QNetworkProxyQuery *)other0;
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QNetworkProxyQuery& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkProxyQuery::peerHostName() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_peerHostName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    QString  __qt_return_value = __qt_this->peerHostName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkProxyQuery::peerPort() const
QTD_EXTERN QTD_EXPORT int qtd_QNetworkProxyQuery_peerPort_const
(void* __this_nativeId)
{
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    int  __qt_return_value = __qt_this->peerPort();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkProxyQuery::protocolTag() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_protocolTag_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    QString  __qt_return_value = __qt_this->protocolTag();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkProxyQuery::queryType() const
QTD_EXTERN QTD_EXPORT int qtd_QNetworkProxyQuery_queryType_const
(void* __this_nativeId)
{
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    int  __qt_return_value = __qt_this->queryType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkProxyQuery::setLocalPort(int port)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_setLocalPort_int
(void* __this_nativeId,
 int port0)
{
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    __qt_this->setLocalPort((int )port0);

}

// QNetworkProxyQuery::setPeerHostName(const QString & hostname)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_setPeerHostName_string
(void* __this_nativeId,
 DArray hostname0)
{
    QString __qt_hostname0 = QString::fromUtf8((const char *)hostname0.ptr, hostname0.length);
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    __qt_this->setPeerHostName((const QString& )__qt_hostname0);

}

// QNetworkProxyQuery::setPeerPort(int port)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_setPeerPort_int
(void* __this_nativeId,
 int port0)
{
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    __qt_this->setPeerPort((int )port0);

}

// QNetworkProxyQuery::setProtocolTag(const QString & protocolTag)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_setProtocolTag_string
(void* __this_nativeId,
 DArray protocolTag0)
{
    QString __qt_protocolTag0 = QString::fromUtf8((const char *)protocolTag0.ptr, protocolTag0.length);
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    __qt_this->setProtocolTag((const QString& )__qt_protocolTag0);

}

// QNetworkProxyQuery::setQueryType(QNetworkProxyQuery::QueryType type)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_setQueryType_QueryType
(void* __this_nativeId,
 int type0)
{
    QNetworkProxyQuery::QueryType __qt_type0 = (QNetworkProxyQuery::QueryType) type0;
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    __qt_this->setQueryType((QNetworkProxyQuery::QueryType )__qt_type0);

}

// QNetworkProxyQuery::setUrl(const QUrl & url)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_setUrl_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    __qt_this->setUrl((const QUrl& )__qt_url0);

}

// QNetworkProxyQuery::url() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxyQuery_url_const
(void* __this_nativeId)
{
    QNetworkProxyQuery *__qt_this = (QNetworkProxyQuery *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->url();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxyQuery_QTypeInfo_isComplex() { return (bool) QTypeInfo<QNetworkProxyQuery>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxyQuery_QTypeInfo_isStatic() { return (bool) QTypeInfo<QNetworkProxyQuery>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxyQuery_QTypeInfo_isLarge() { return (bool) QTypeInfo<QNetworkProxyQuery>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxyQuery_QTypeInfo_isPointer() { return (bool) QTypeInfo<QNetworkProxyQuery>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxyQuery_QTypeInfo_isDummy() { return (bool) QTypeInfo<QNetworkProxyQuery>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyQuery_placed_copy(void* orig, void* place) {
    const QNetworkProxyQuery&  __qt_orig = (const QNetworkProxyQuery& ) *(QNetworkProxyQuery *)orig;
    QNetworkProxyQuery *result = new (place) QNetworkProxyQuery (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxyQuery_native_copy(void* orig) {
    const QNetworkProxyQuery&  __qt_orig = (const QNetworkProxyQuery& ) *(QNetworkProxyQuery *)orig;
    QNetworkProxyQuery *result = new QNetworkProxyQuery (__qt_orig);
    return result;
}

