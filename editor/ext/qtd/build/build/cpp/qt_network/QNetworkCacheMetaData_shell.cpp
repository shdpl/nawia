#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qpair.h>
#include <qurl.h>
#include <qvariant.h>

#include <iostream>
#include <qabstractnetworkcache.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QNetworkCacheMetaData_delete(void* nativeId)
{
    delete (QNetworkCacheMetaData*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkCacheMetaData_destroy(void* nativeId)
{
    call_destructor((QNetworkCacheMetaData*)nativeId);
}

// ---externC---
// QNetworkCacheMetaData::QNetworkCacheMetaData()
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCacheMetaData_QNetworkCacheMetaData
()
{
    QNetworkCacheMetaData *__qt_this = new QNetworkCacheMetaData();
    return (void *) __qt_this;

}

// QNetworkCacheMetaData::QNetworkCacheMetaData(const QNetworkCacheMetaData & other)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCacheMetaData_QNetworkCacheMetaData_QNetworkCacheMetaData
(void* other0)
{
    const QNetworkCacheMetaData&  __qt_other0 = (const QNetworkCacheMetaData& ) *(QNetworkCacheMetaData *)other0;
    QNetworkCacheMetaData *__qt_this = new QNetworkCacheMetaData((const QNetworkCacheMetaData& )__qt_other0);
    return (void *) __qt_this;

}

// QNetworkCacheMetaData::attributes() const
// QNetworkCacheMetaData::expirationDate() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCacheMetaData_expirationDate_const
(void* __this_nativeId)
{
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->expirationDate();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QNetworkCacheMetaData::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCacheMetaData_isValid_const
(void* __this_nativeId)
{
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkCacheMetaData::lastModified() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCacheMetaData_lastModified_const
(void* __this_nativeId)
{
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->lastModified();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QNetworkCacheMetaData::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCacheMetaData_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QNetworkCacheMetaData::operator==(const QNetworkCacheMetaData & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCacheMetaData_operator_equal_QNetworkCacheMetaData_const
(void* __this_nativeId,
 void* other0)
{
    const QNetworkCacheMetaData&  __qt_other0 = (const QNetworkCacheMetaData& ) *(QNetworkCacheMetaData *)other0;
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QNetworkCacheMetaData& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkCacheMetaData::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCacheMetaData_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QNetworkCacheMetaData::rawHeaders() const
// QNetworkCacheMetaData::saveToDisk() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCacheMetaData_saveToDisk_const
(void* __this_nativeId)
{
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    bool  __qt_return_value = __qt_this->saveToDisk();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkCacheMetaData::setAttributes(const QHash<QNetworkRequest::Attribute, QVariant > & attributes)
// QNetworkCacheMetaData::setExpirationDate(const QDateTime & dateTime)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCacheMetaData_setExpirationDate_QDateTime
(void* __this_nativeId,
 void* dateTime0)
{
    const QDateTime&  __qt_dateTime0 = (const QDateTime& ) *(QDateTime *)dateTime0;
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    __qt_this->setExpirationDate((const QDateTime& )__qt_dateTime0);

}

// QNetworkCacheMetaData::setLastModified(const QDateTime & dateTime)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCacheMetaData_setLastModified_QDateTime
(void* __this_nativeId,
 void* dateTime0)
{
    const QDateTime&  __qt_dateTime0 = (const QDateTime& ) *(QDateTime *)dateTime0;
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    __qt_this->setLastModified((const QDateTime& )__qt_dateTime0);

}

// QNetworkCacheMetaData::setRawHeaders(const QList<QPair<QByteArray, QByteArray > > & headers)
// QNetworkCacheMetaData::setSaveToDisk(bool allow)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCacheMetaData_setSaveToDisk_bool
(void* __this_nativeId,
 bool allow0)
{
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    __qt_this->setSaveToDisk((bool )allow0);

}

// QNetworkCacheMetaData::setUrl(const QUrl & url)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCacheMetaData_setUrl_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    __qt_this->setUrl((const QUrl& )__qt_url0);

}

// QNetworkCacheMetaData::url() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCacheMetaData_url_const
(void* __this_nativeId)
{
    QNetworkCacheMetaData *__qt_this = (QNetworkCacheMetaData *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->url();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCacheMetaData_QTypeInfo_isComplex() { return (bool) QTypeInfo<QNetworkCacheMetaData>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCacheMetaData_QTypeInfo_isStatic() { return (bool) QTypeInfo<QNetworkCacheMetaData>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCacheMetaData_QTypeInfo_isLarge() { return (bool) QTypeInfo<QNetworkCacheMetaData>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCacheMetaData_QTypeInfo_isPointer() { return (bool) QTypeInfo<QNetworkCacheMetaData>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCacheMetaData_QTypeInfo_isDummy() { return (bool) QTypeInfo<QNetworkCacheMetaData>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QNetworkCacheMetaData_placed_copy(void* orig, void* place) {
    const QNetworkCacheMetaData&  __qt_orig = (const QNetworkCacheMetaData& ) *(QNetworkCacheMetaData *)orig;
    QNetworkCacheMetaData *result = new (place) QNetworkCacheMetaData (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCacheMetaData_native_copy(void* orig) {
    const QNetworkCacheMetaData&  __qt_orig = (const QNetworkCacheMetaData& ) *(QNetworkCacheMetaData *)orig;
    QNetworkCacheMetaData *result = new QNetworkCacheMetaData (__qt_orig);
    return result;
}

