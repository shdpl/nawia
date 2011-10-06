#include <QVariant>
#include <qhostaddress.h>
#include <qnetworkinterface.h>

#include <iostream>
#include <qnetworkinterface.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QNetworkAddressEntry_delete(void* nativeId)
{
    delete (QNetworkAddressEntry*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkAddressEntry_destroy(void* nativeId)
{
    call_destructor((QNetworkAddressEntry*)nativeId);
}

// ---externC---
// QNetworkAddressEntry::QNetworkAddressEntry()
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAddressEntry_QNetworkAddressEntry
()
{
    QNetworkAddressEntry *__qt_this = new QNetworkAddressEntry();
    return (void *) __qt_this;

}

// QNetworkAddressEntry::QNetworkAddressEntry(const QNetworkAddressEntry & other)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAddressEntry_QNetworkAddressEntry_QNetworkAddressEntry
(void* other0)
{
    const QNetworkAddressEntry&  __qt_other0 = (const QNetworkAddressEntry& ) *(QNetworkAddressEntry *)other0;
    QNetworkAddressEntry *__qt_this = new QNetworkAddressEntry((const QNetworkAddressEntry& )__qt_other0);
    return (void *) __qt_this;

}

// QNetworkAddressEntry::broadcast() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAddressEntry_broadcast_const
(void* __this_nativeId)
{
    QNetworkAddressEntry *__qt_this = (QNetworkAddressEntry *) __this_nativeId;
    QHostAddress  __qt_return_value = __qt_this->broadcast();

    void* __d_return_value = (void*) new QHostAddress(__qt_return_value);

    return __d_return_value;
}

// QNetworkAddressEntry::ip() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAddressEntry_ip_const
(void* __this_nativeId)
{
    QNetworkAddressEntry *__qt_this = (QNetworkAddressEntry *) __this_nativeId;
    QHostAddress  __qt_return_value = __qt_this->ip();

    void* __d_return_value = (void*) new QHostAddress(__qt_return_value);

    return __d_return_value;
}

// QNetworkAddressEntry::netmask() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAddressEntry_netmask_const
(void* __this_nativeId)
{
    QNetworkAddressEntry *__qt_this = (QNetworkAddressEntry *) __this_nativeId;
    QHostAddress  __qt_return_value = __qt_this->netmask();

    void* __d_return_value = (void*) new QHostAddress(__qt_return_value);

    return __d_return_value;
}

// QNetworkAddressEntry::operator==(const QNetworkAddressEntry & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkAddressEntry_operator_equal_QNetworkAddressEntry_const
(void* __this_nativeId,
 void* other0)
{
    const QNetworkAddressEntry&  __qt_other0 = (const QNetworkAddressEntry& ) *(QNetworkAddressEntry *)other0;
    QNetworkAddressEntry *__qt_this = (QNetworkAddressEntry *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QNetworkAddressEntry& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkAddressEntry::prefixLength() const
QTD_EXTERN QTD_EXPORT int qtd_QNetworkAddressEntry_prefixLength_const
(void* __this_nativeId)
{
    QNetworkAddressEntry *__qt_this = (QNetworkAddressEntry *) __this_nativeId;
    int  __qt_return_value = __qt_this->prefixLength();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkAddressEntry::setBroadcast(const QHostAddress & newBroadcast)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAddressEntry_setBroadcast_QHostAddress
(void* __this_nativeId,
 void* newBroadcast0)
{
    const QHostAddress&  __qt_newBroadcast0 = (const QHostAddress& ) *(QHostAddress *)newBroadcast0;
    QNetworkAddressEntry *__qt_this = (QNetworkAddressEntry *) __this_nativeId;
    __qt_this->setBroadcast((const QHostAddress& )__qt_newBroadcast0);

}

// QNetworkAddressEntry::setIp(const QHostAddress & newIp)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAddressEntry_setIp_QHostAddress
(void* __this_nativeId,
 void* newIp0)
{
    const QHostAddress&  __qt_newIp0 = (const QHostAddress& ) *(QHostAddress *)newIp0;
    QNetworkAddressEntry *__qt_this = (QNetworkAddressEntry *) __this_nativeId;
    __qt_this->setIp((const QHostAddress& )__qt_newIp0);

}

// QNetworkAddressEntry::setNetmask(const QHostAddress & newNetmask)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAddressEntry_setNetmask_QHostAddress
(void* __this_nativeId,
 void* newNetmask0)
{
    const QHostAddress&  __qt_newNetmask0 = (const QHostAddress& ) *(QHostAddress *)newNetmask0;
    QNetworkAddressEntry *__qt_this = (QNetworkAddressEntry *) __this_nativeId;
    __qt_this->setNetmask((const QHostAddress& )__qt_newNetmask0);

}

// QNetworkAddressEntry::setPrefixLength(int length)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAddressEntry_setPrefixLength_int
(void* __this_nativeId,
 int length0)
{
    QNetworkAddressEntry *__qt_this = (QNetworkAddressEntry *) __this_nativeId;
    __qt_this->setPrefixLength((int )length0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkAddressEntry_QTypeInfo_isComplex() { return (bool) QTypeInfo<QNetworkAddressEntry>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkAddressEntry_QTypeInfo_isStatic() { return (bool) QTypeInfo<QNetworkAddressEntry>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkAddressEntry_QTypeInfo_isLarge() { return (bool) QTypeInfo<QNetworkAddressEntry>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkAddressEntry_QTypeInfo_isPointer() { return (bool) QTypeInfo<QNetworkAddressEntry>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkAddressEntry_QTypeInfo_isDummy() { return (bool) QTypeInfo<QNetworkAddressEntry>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QNetworkAddressEntry_placed_copy(void* orig, void* place) {
    const QNetworkAddressEntry&  __qt_orig = (const QNetworkAddressEntry& ) *(QNetworkAddressEntry *)orig;
    QNetworkAddressEntry *result = new (place) QNetworkAddressEntry (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAddressEntry_native_copy(void* orig) {
    const QNetworkAddressEntry&  __qt_orig = (const QNetworkAddressEntry& ) *(QNetworkAddressEntry *)orig;
    QNetworkAddressEntry *result = new QNetworkAddressEntry (__qt_orig);
    return result;
}

