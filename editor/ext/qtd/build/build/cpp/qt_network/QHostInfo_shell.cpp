#include <QVariant>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qlist.h>
#include <qobject.h>

#include <iostream>
#include <qhostinfo.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_delete(void* nativeId)
{
    delete (QHostInfo*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_destroy(void* nativeId)
{
    call_destructor((QHostInfo*)nativeId);
}

// ---externC---
// QHostInfo::QHostInfo(const QHostInfo & d)
QTD_EXTERN QTD_EXPORT void* qtd_QHostInfo_QHostInfo_QHostInfo
(void* d0)
{
    const QHostInfo&  __qt_d0 = (const QHostInfo& ) *(QHostInfo *)d0;
    QHostInfo *__qt_this = new QHostInfo((const QHostInfo& )__qt_d0);
    return (void *) __qt_this;

}

// QHostInfo::QHostInfo(int lookupId)
QTD_EXTERN QTD_EXPORT void* qtd_QHostInfo_QHostInfo_int
(int lookupId0)
{
    QHostInfo *__qt_this = new QHostInfo((int )lookupId0);
    return (void *) __qt_this;

}

// QHostInfo::addresses() const
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_addresses_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHostInfo *__qt_this = (QHostInfo *) __this_nativeId;
    QList<QHostAddress >  __qt_return_value = __qt_this->addresses();

QList<QHostAddress > &__d_return_value_tmp = (*(QList<QHostAddress > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QHostInfo::error() const
QTD_EXTERN QTD_EXPORT int qtd_QHostInfo_error_const
(void* __this_nativeId)
{
    QHostInfo *__qt_this = (QHostInfo *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHostInfo::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHostInfo *__qt_this = (QHostInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHostInfo::hostName() const
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_hostName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHostInfo *__qt_this = (QHostInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->hostName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHostInfo::lookupId() const
QTD_EXTERN QTD_EXPORT int qtd_QHostInfo_lookupId_const
(void* __this_nativeId)
{
    QHostInfo *__qt_this = (QHostInfo *) __this_nativeId;
    int  __qt_return_value = __qt_this->lookupId();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHostInfo::setAddresses(const QList<QHostAddress > & addresses)
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_setAddresses_QList
(void* __this_nativeId,
 void* addresses0)
{
QList<QHostAddress > __qt_addresses0 = (*(QList<QHostAddress > *)addresses0);
    QHostInfo *__qt_this = (QHostInfo *) __this_nativeId;
    __qt_this->setAddresses((const QList<QHostAddress >& )__qt_addresses0);

}

// QHostInfo::setError(QHostInfo::HostInfoError error)
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_setError_HostInfoError
(void* __this_nativeId,
 int error0)
{
    QHostInfo::HostInfoError __qt_error0 = (QHostInfo::HostInfoError) error0;
    QHostInfo *__qt_this = (QHostInfo *) __this_nativeId;
    __qt_this->setError((QHostInfo::HostInfoError )__qt_error0);

}

// QHostInfo::setErrorString(const QString & errorString)
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_setErrorString_string
(void* __this_nativeId,
 DArray errorString0)
{
    QString __qt_errorString0 = QString::fromUtf8((const char *)errorString0.ptr, errorString0.length);
    QHostInfo *__qt_this = (QHostInfo *) __this_nativeId;
    __qt_this->setErrorString((const QString& )__qt_errorString0);

}

// QHostInfo::setHostName(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_setHostName_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QHostInfo *__qt_this = (QHostInfo *) __this_nativeId;
    __qt_this->setHostName((const QString& )__qt_name0);

}

// QHostInfo::setLookupId(int id)
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_setLookupId_int
(void* __this_nativeId,
 int id0)
{
    QHostInfo *__qt_this = (QHostInfo *) __this_nativeId;
    __qt_this->setLookupId((int )id0);

}

// QHostInfo::abortHostLookup(int lookupId)
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_abortHostLookup_int
(int lookupId0)
{
    QHostInfo::abortHostLookup((int )lookupId0);

}

// QHostInfo::fromName(const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QHostInfo_fromName_string
(DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QHostInfo  __qt_return_value = QHostInfo::fromName((const QString& )__qt_name0);

    void* __d_return_value = (void*) new QHostInfo(__qt_return_value);

    return __d_return_value;
}

// QHostInfo::localDomainName()
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_localDomainName
(void* __d_return_value)
{
    QString  __qt_return_value = QHostInfo::localDomainName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHostInfo::localHostName()
QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_localHostName
(void* __d_return_value)
{
    QString  __qt_return_value = QHostInfo::localHostName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHostInfo::lookupHost(const QString & name, QObject * receiver, const char * member)
QTD_EXTERN QTD_EXPORT int qtd_QHostInfo_lookupHost_string_QObject_nativepointerchar
(DArray name0,
 void* receiver1,
 char* member2)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QObject*  __qt_receiver1 = (QObject* ) receiver1;
    const char*  __qt_member2 = (const char* ) member2;
    int  __qt_return_value = QHostInfo::lookupHost((const QString& )__qt_name0, (QObject* )__qt_receiver1, (const char* )__qt_member2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QHostInfo_QTypeInfo_isComplex() { return (bool) QTypeInfo<QHostInfo>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QHostInfo_QTypeInfo_isStatic() { return (bool) QTypeInfo<QHostInfo>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QHostInfo_QTypeInfo_isLarge() { return (bool) QTypeInfo<QHostInfo>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QHostInfo_QTypeInfo_isPointer() { return (bool) QTypeInfo<QHostInfo>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QHostInfo_QTypeInfo_isDummy() { return (bool) QTypeInfo<QHostInfo>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QHostInfo_placed_copy(void* orig, void* place) {
    const QHostInfo&  __qt_orig = (const QHostInfo& ) *(QHostInfo *)orig;
    QHostInfo *result = new (place) QHostInfo (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QHostInfo_native_copy(void* orig) {
    const QHostInfo&  __qt_orig = (const QHostInfo& ) *(QHostInfo *)orig;
    QHostInfo *result = new QHostInfo (__qt_orig);
    return result;
}

