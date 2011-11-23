#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qstringlist.h>
#include <qurl.h>

#include <iostream>
#include <qurl.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QUrl_delete(void* nativeId)
{
    delete (QUrl*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QUrl_destroy(void* nativeId)
{
    call_destructor((QUrl*)nativeId);
}

// ---externC---
// QUrl::QUrl()
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_QUrl
()
{
    QUrl *__qt_this = new QUrl();
    return (void *) __qt_this;

}

// QUrl::QUrl(const QString & url)
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_QUrl_string
(DArray url0)
{
    QString __qt_url0 = QString::fromUtf8((const char *)url0.ptr, url0.length);
    QUrl *__qt_this = new QUrl((const QString& )__qt_url0);
    return (void *) __qt_this;

}

// QUrl::QUrl(const QString & url, QUrl::ParsingMode mode)
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_QUrl_string_ParsingMode
(DArray url0,
 int mode1)
{
    QString __qt_url0 = QString::fromUtf8((const char *)url0.ptr, url0.length);
    QUrl::ParsingMode __qt_mode1 = (QUrl::ParsingMode) mode1;
    QUrl *__qt_this = new QUrl((const QString& )__qt_url0, (QUrl::ParsingMode )__qt_mode1);
    return (void *) __qt_this;

}

// QUrl::QUrl(const QUrl & copy)
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_QUrl_QUrl
(void* copy0)
{
    const QUrl&  __qt_copy0 = (const QUrl& ) *(QUrl *)copy0;
    QUrl *__qt_this = new QUrl((const QUrl& )__qt_copy0);
    return (void *) __qt_this;

}

// QUrl::addEncodedQueryItem(const QByteArray & key, const QByteArray & value)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_addEncodedQueryItem_QByteArray_QByteArray
(void* __this_nativeId,
 void* key0,
 void* value1)
{
    const QByteArray&  __qt_key0 = (const QByteArray& ) *(QByteArray *)key0;
    const QByteArray&  __qt_value1 = (const QByteArray& ) *(QByteArray *)value1;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->addEncodedQueryItem((const QByteArray& )__qt_key0, (const QByteArray& )__qt_value1);

}

// QUrl::addQueryItem(const QString & key, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_addQueryItem_string_string
(void* __this_nativeId,
 DArray key0,
 DArray value1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->addQueryItem((const QString& )__qt_key0, (const QString& )__qt_value1);

}

// QUrl::allEncodedQueryItemValues(const QByteArray & key) const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_allEncodedQueryItemValues_QByteArray_const
(void* __this_nativeId,
 void* __d_return_value,
 void* key0)
{
    const QByteArray&  __qt_key0 = (const QByteArray& ) *(QByteArray *)key0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QList<QByteArray >  __qt_return_value = __qt_this->allEncodedQueryItemValues((const QByteArray& )__qt_key0);

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QUrl::allQueryItemValues(const QString & key) const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_allQueryItemValues_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->allQueryItemValues((const QString& )__qt_key0);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QUrl::authority() const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_authority_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->authority();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::clear()
QTD_EXTERN QTD_EXPORT void qtd_QUrl_clear
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->clear();

}

// QUrl::encodedFragment() const
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_encodedFragment_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->encodedFragment();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QUrl::encodedHost() const
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_encodedHost_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->encodedHost();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QUrl::encodedPassword() const
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_encodedPassword_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->encodedPassword();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QUrl::encodedPath() const
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_encodedPath_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->encodedPath();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QUrl::encodedQuery() const
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_encodedQuery_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->encodedQuery();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QUrl::encodedQueryItemValue(const QByteArray & key) const
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_encodedQueryItemValue_QByteArray_const
(void* __this_nativeId,
 void* key0)
{
    const QByteArray&  __qt_key0 = (const QByteArray& ) *(QByteArray *)key0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->encodedQueryItemValue((const QByteArray& )__qt_key0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QUrl::encodedUserName() const
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_encodedUserName_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->encodedUserName();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QUrl::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::fragment() const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_fragment_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fragment();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::hasEncodedQueryItem(const QByteArray & key) const
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_hasEncodedQueryItem_QByteArray_const
(void* __this_nativeId,
 void* key0)
{
    const QByteArray&  __qt_key0 = (const QByteArray& ) *(QByteArray *)key0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasEncodedQueryItem((const QByteArray& )__qt_key0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::hasFragment() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_hasFragment_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFragment();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::hasQuery() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_hasQuery_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasQuery();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::hasQueryItem(const QString & key) const
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_hasQueryItem_string_const
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasQueryItem((const QString& )__qt_key0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::host() const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_host_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->host();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_isEmpty_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::isParentOf(const QUrl & url) const
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_isParentOf_QUrl_const
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isParentOf((const QUrl& )__qt_url0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::isRelative() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_isRelative_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRelative();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_isValid_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::operator<(const QUrl & url) const
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_operator_less_QUrl_const
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QUrl& )__qt_url0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QUrl::operator==(const QUrl & url) const
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_operator_equal_QUrl_const
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QUrl& )__qt_url0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QUrl::password() const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_password_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->password();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::path() const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_path_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->path();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::port() const
QTD_EXTERN QTD_EXPORT int qtd_QUrl_port_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    int  __qt_return_value = __qt_this->port();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::port(int defaultPort) const
QTD_EXTERN QTD_EXPORT int qtd_QUrl_port_int_const
(void* __this_nativeId,
 int defaultPort0)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    int  __qt_return_value = __qt_this->port((int )defaultPort0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::queryItemValue(const QString & key) const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_queryItemValue_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->queryItemValue((const QString& )__qt_key0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::queryPairDelimiter() const
QTD_EXTERN QTD_EXPORT char qtd_QUrl_queryPairDelimiter_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    char  __qt_return_value = __qt_this->queryPairDelimiter();

    char __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::queryValueDelimiter() const
QTD_EXTERN QTD_EXPORT char qtd_QUrl_queryValueDelimiter_const
(void* __this_nativeId)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    char  __qt_return_value = __qt_this->queryValueDelimiter();

    char __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUrl::removeAllEncodedQueryItems(const QByteArray & key)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_removeAllEncodedQueryItems_QByteArray
(void* __this_nativeId,
 void* key0)
{
    const QByteArray&  __qt_key0 = (const QByteArray& ) *(QByteArray *)key0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->removeAllEncodedQueryItems((const QByteArray& )__qt_key0);

}

// QUrl::removeAllQueryItems(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_removeAllQueryItems_string
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->removeAllQueryItems((const QString& )__qt_key0);

}

// QUrl::removeEncodedQueryItem(const QByteArray & key)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_removeEncodedQueryItem_QByteArray
(void* __this_nativeId,
 void* key0)
{
    const QByteArray&  __qt_key0 = (const QByteArray& ) *(QByteArray *)key0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->removeEncodedQueryItem((const QByteArray& )__qt_key0);

}

// QUrl::removeQueryItem(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_removeQueryItem_string
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->removeQueryItem((const QString& )__qt_key0);

}

// QUrl::resolved(const QUrl & relative) const
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_resolved_QUrl_const
(void* __this_nativeId,
 void* relative0)
{
    const QUrl&  __qt_relative0 = (const QUrl& ) *(QUrl *)relative0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->resolved((const QUrl& )__qt_relative0);

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QUrl::scheme() const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_scheme_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->scheme();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::setAuthority(const QString & authority)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setAuthority_string
(void* __this_nativeId,
 DArray authority0)
{
    QString __qt_authority0 = QString::fromUtf8((const char *)authority0.ptr, authority0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setAuthority((const QString& )__qt_authority0);

}

// QUrl::setEncodedFragment(const QByteArray & fragment)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setEncodedFragment_QByteArray
(void* __this_nativeId,
 void* fragment0)
{
    const QByteArray&  __qt_fragment0 = (const QByteArray& ) *(QByteArray *)fragment0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setEncodedFragment((const QByteArray& )__qt_fragment0);

}

// QUrl::setEncodedHost(const QByteArray & host)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setEncodedHost_QByteArray
(void* __this_nativeId,
 void* host0)
{
    const QByteArray&  __qt_host0 = (const QByteArray& ) *(QByteArray *)host0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setEncodedHost((const QByteArray& )__qt_host0);

}

// QUrl::setEncodedPassword(const QByteArray & password)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setEncodedPassword_QByteArray
(void* __this_nativeId,
 void* password0)
{
    const QByteArray&  __qt_password0 = (const QByteArray& ) *(QByteArray *)password0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setEncodedPassword((const QByteArray& )__qt_password0);

}

// QUrl::setEncodedPath(const QByteArray & path)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setEncodedPath_QByteArray
(void* __this_nativeId,
 void* path0)
{
    const QByteArray&  __qt_path0 = (const QByteArray& ) *(QByteArray *)path0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setEncodedPath((const QByteArray& )__qt_path0);

}

// QUrl::setEncodedQuery(const QByteArray & query)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setEncodedQuery_QByteArray
(void* __this_nativeId,
 void* query0)
{
    const QByteArray&  __qt_query0 = (const QByteArray& ) *(QByteArray *)query0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setEncodedQuery((const QByteArray& )__qt_query0);

}

// QUrl::setEncodedUrl(const QByteArray & url)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setEncodedUrl_QByteArray
(void* __this_nativeId,
 void* url0)
{
    const QByteArray&  __qt_url0 = (const QByteArray& ) *(QByteArray *)url0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setEncodedUrl((const QByteArray& )__qt_url0);

}

// QUrl::setEncodedUrl(const QByteArray & url, QUrl::ParsingMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setEncodedUrl_QByteArray_ParsingMode
(void* __this_nativeId,
 void* url0,
 int mode1)
{
    const QByteArray&  __qt_url0 = (const QByteArray& ) *(QByteArray *)url0;
    QUrl::ParsingMode __qt_mode1 = (QUrl::ParsingMode) mode1;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setEncodedUrl((const QByteArray& )__qt_url0, (QUrl::ParsingMode )__qt_mode1);

}

// QUrl::setEncodedUserName(const QByteArray & userName)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setEncodedUserName_QByteArray
(void* __this_nativeId,
 void* userName0)
{
    const QByteArray&  __qt_userName0 = (const QByteArray& ) *(QByteArray *)userName0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setEncodedUserName((const QByteArray& )__qt_userName0);

}

// QUrl::setFragment(const QString & fragment)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setFragment_string
(void* __this_nativeId,
 DArray fragment0)
{
    QString __qt_fragment0 = QString::fromUtf8((const char *)fragment0.ptr, fragment0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setFragment((const QString& )__qt_fragment0);

}

// QUrl::setHost(const QString & host)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setHost_string
(void* __this_nativeId,
 DArray host0)
{
    QString __qt_host0 = QString::fromUtf8((const char *)host0.ptr, host0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setHost((const QString& )__qt_host0);

}

// QUrl::setPassword(const QString & password)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setPassword_string
(void* __this_nativeId,
 DArray password0)
{
    QString __qt_password0 = QString::fromUtf8((const char *)password0.ptr, password0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setPassword((const QString& )__qt_password0);

}

// QUrl::setPath(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setPath_string
(void* __this_nativeId,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setPath((const QString& )__qt_path0);

}

// QUrl::setPort(int port)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setPort_int
(void* __this_nativeId,
 int port0)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setPort((int )port0);

}

// QUrl::setQueryDelimiters(char valueDelimiter, char pairDelimiter)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setQueryDelimiters_char_char
(void* __this_nativeId,
 char valueDelimiter0,
 char pairDelimiter1)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setQueryDelimiters((char )valueDelimiter0, (char )pairDelimiter1);

}

// QUrl::setScheme(const QString & scheme)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setScheme_string
(void* __this_nativeId,
 DArray scheme0)
{
    QString __qt_scheme0 = QString::fromUtf8((const char *)scheme0.ptr, scheme0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setScheme((const QString& )__qt_scheme0);

}

// QUrl::setUrl(const QString & url)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setUrl_string
(void* __this_nativeId,
 DArray url0)
{
    QString __qt_url0 = QString::fromUtf8((const char *)url0.ptr, url0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setUrl((const QString& )__qt_url0);

}

// QUrl::setUrl(const QString & url, QUrl::ParsingMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setUrl_string_ParsingMode
(void* __this_nativeId,
 DArray url0,
 int mode1)
{
    QString __qt_url0 = QString::fromUtf8((const char *)url0.ptr, url0.length);
    QUrl::ParsingMode __qt_mode1 = (QUrl::ParsingMode) mode1;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setUrl((const QString& )__qt_url0, (QUrl::ParsingMode )__qt_mode1);

}

// QUrl::setUserInfo(const QString & userInfo)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setUserInfo_string
(void* __this_nativeId,
 DArray userInfo0)
{
    QString __qt_userInfo0 = QString::fromUtf8((const char *)userInfo0.ptr, userInfo0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setUserInfo((const QString& )__qt_userInfo0);

}

// QUrl::setUserName(const QString & userName)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setUserName_string
(void* __this_nativeId,
 DArray userName0)
{
    QString __qt_userName0 = QString::fromUtf8((const char *)userName0.ptr, userName0.length);
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    __qt_this->setUserName((const QString& )__qt_userName0);

}

// QUrl::toEncoded(QFlags<QUrl::FormattingOption> options) const
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_toEncoded_FormattingOptions_const
(void* __this_nativeId,
 int options0)
{
    QFlags<QUrl::FormattingOption> __qt_options0 = (QFlags<QUrl::FormattingOption>) options0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toEncoded((QUrl::FormattingOptions )__qt_options0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QUrl::toLocalFile() const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_toLocalFile_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toLocalFile();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::toString(QFlags<QUrl::FormattingOption> options) const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_toString_FormattingOptions_const
(void* __this_nativeId,
 void* __d_return_value,
 int options0)
{
    QFlags<QUrl::FormattingOption> __qt_options0 = (QFlags<QUrl::FormattingOption>) options0;
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((QUrl::FormattingOptions )__qt_options0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::userInfo() const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_userInfo_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->userInfo();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::userName() const
QTD_EXTERN QTD_EXPORT void qtd_QUrl_userName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUrl *__qt_this = (QUrl *) __this_nativeId;
    QString  __qt_return_value = __qt_this->userName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::fromAce(const QByteArray & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_fromAce_QByteArray
(void* __d_return_value,
 void* arg__1)
{
    const QByteArray&  __qt_arg__1 = (const QByteArray& ) *(QByteArray *)arg__1;
    QString  __qt_return_value = QUrl::fromAce((const QByteArray& )__qt_arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::fromEncoded(const QByteArray & url)
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_fromEncoded_QByteArray
(void* url0)
{
    const QByteArray&  __qt_url0 = (const QByteArray& ) *(QByteArray *)url0;
    QUrl  __qt_return_value = QUrl::fromEncoded((const QByteArray& )__qt_url0);

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QUrl::fromEncoded(const QByteArray & url, QUrl::ParsingMode mode)
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_fromEncoded_QByteArray_ParsingMode
(void* url0,
 int mode1)
{
    const QByteArray&  __qt_url0 = (const QByteArray& ) *(QByteArray *)url0;
    QUrl::ParsingMode __qt_mode1 = (QUrl::ParsingMode) mode1;
    QUrl  __qt_return_value = QUrl::fromEncoded((const QByteArray& )__qt_url0, (QUrl::ParsingMode )__qt_mode1);

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QUrl::fromLocalFile(const QString & localfile)
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_fromLocalFile_string
(DArray localfile0)
{
    QString __qt_localfile0 = QString::fromUtf8((const char *)localfile0.ptr, localfile0.length);
    QUrl  __qt_return_value = QUrl::fromLocalFile((const QString& )__qt_localfile0);

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QUrl::fromPercentEncoding(const QByteArray & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_fromPercentEncoding_QByteArray
(void* __d_return_value,
 void* arg__1)
{
    const QByteArray&  __qt_arg__1 = (const QByteArray& ) *(QByteArray *)arg__1;
    QString  __qt_return_value = QUrl::fromPercentEncoding((const QByteArray& )__qt_arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUrl::fromUserInput(const QString & userInput)
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_fromUserInput_string
(DArray userInput0)
{
    QString __qt_userInput0 = QString::fromUtf8((const char *)userInput0.ptr, userInput0.length);
    QUrl  __qt_return_value = QUrl::fromUserInput((const QString& )__qt_userInput0);

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QUrl::idnWhitelist()
QTD_EXTERN QTD_EXPORT void qtd_QUrl_idnWhitelist
(void* __d_return_value)
{
    QStringList  __qt_return_value = QUrl::idnWhitelist();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QUrl::setIdnWhitelist(const QStringList & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QUrl_setIdnWhitelist_QList
(void* arg__1)
{
QStringList __qt_arg__1 = (*(QStringList *)arg__1);
    QUrl::setIdnWhitelist((const QStringList& )__qt_arg__1);

}

// QUrl::toAce(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_toAce_string
(DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QByteArray  __qt_return_value = QUrl::toAce((const QString& )__qt_arg__1);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QUrl::toPercentEncoding(const QString & arg__1, const QByteArray & exclude, const QByteArray & include)
QTD_EXTERN QTD_EXPORT void* qtd_QUrl_toPercentEncoding_string_QByteArray_QByteArray
(DArray arg__1,
 void* exclude1,
 void* include2)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    const QByteArray&  __qt_exclude1 = (const QByteArray& ) *(QByteArray *)exclude1;
    const QByteArray&  __qt_include2 = (const QByteArray& ) *(QByteArray *)include2;
    QByteArray  __qt_return_value = QUrl::toPercentEncoding((const QString& )__qt_arg__1, (const QByteArray& )__qt_exclude1, (const QByteArray& )__qt_include2);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_QTypeInfo_isComplex() { return (bool) QTypeInfo<QUrl>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_QTypeInfo_isStatic() { return (bool) QTypeInfo<QUrl>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_QTypeInfo_isLarge() { return (bool) QTypeInfo<QUrl>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_QTypeInfo_isPointer() { return (bool) QTypeInfo<QUrl>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QUrl_QTypeInfo_isDummy() { return (bool) QTypeInfo<QUrl>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QUrl_placed_copy(void* orig, void* place) {
    const QUrl&  __qt_orig = (const QUrl& ) *(QUrl *)orig;
    QUrl *result = new (place) QUrl (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QUrl_native_copy(void* orig) {
    const QUrl&  __qt_orig = (const QUrl& ) *(QUrl *)orig;
    QUrl *result = new QUrl (__qt_orig);
    return result;
}

