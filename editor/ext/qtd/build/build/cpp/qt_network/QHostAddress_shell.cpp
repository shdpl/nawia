#include <QVariant>
#include <qdatastream.h>
#include <qhostaddress.h>
#include <qpair.h>

#include <iostream>
#include <qhostaddress.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_delete(void* nativeId)
{
    delete (QHostAddress*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_destroy(void* nativeId)
{
    call_destructor((QHostAddress*)nativeId);
}

// ---externC---
// QHostAddress::QHostAddress()
QTD_EXTERN QTD_EXPORT void* qtd_QHostAddress_QHostAddress
()
{
    QHostAddress *__qt_this = new QHostAddress();
    return (void *) __qt_this;

}

// QHostAddress::QHostAddress(QHostAddress::SpecialAddress address)
QTD_EXTERN QTD_EXPORT void* qtd_QHostAddress_QHostAddress_SpecialAddress
(int address0)
{
    QHostAddress::SpecialAddress __qt_address0 = (QHostAddress::SpecialAddress) address0;
    QHostAddress *__qt_this = new QHostAddress((QHostAddress::SpecialAddress )__qt_address0);
    return (void *) __qt_this;

}

// QHostAddress::QHostAddress(const QHostAddress & copy)
QTD_EXTERN QTD_EXPORT void* qtd_QHostAddress_QHostAddress_QHostAddress
(void* copy0)
{
    const QHostAddress&  __qt_copy0 = (const QHostAddress& ) *(QHostAddress *)copy0;
    QHostAddress *__qt_this = new QHostAddress((const QHostAddress& )__qt_copy0);
    return (void *) __qt_this;

}

// QHostAddress::QHostAddress(const QIPv6Address & ip6Addr)
QTD_EXTERN QTD_EXPORT void* qtd_QHostAddress_QHostAddress_QIPv6Address
(void* ip6Addr0)
{
    const QIPv6Address&  __qt_ip6Addr0 = (const QIPv6Address& ) *(QIPv6Address *)ip6Addr0;
    QHostAddress *__qt_this = new QHostAddress((const QIPv6Address& )__qt_ip6Addr0);
    return (void *) __qt_this;

}

// QHostAddress::QHostAddress(const QString & address)
QTD_EXTERN QTD_EXPORT void* qtd_QHostAddress_QHostAddress_string
(DArray address0)
{
    QString __qt_address0 = QString::fromUtf8((const char *)address0.ptr, address0.length);
    QHostAddress *__qt_this = new QHostAddress((const QString& )__qt_address0);
    return (void *) __qt_this;

}

// QHostAddress::QHostAddress(unsigned int ip4Addr)
QTD_EXTERN QTD_EXPORT void* qtd_QHostAddress_QHostAddress_uint
(unsigned int ip4Addr0)
{
    QHostAddress *__qt_this = new QHostAddress((unsigned int )ip4Addr0);
    return (void *) __qt_this;

}

// QHostAddress::clear()
QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_clear
(void* __this_nativeId)
{
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    __qt_this->clear();

}

// QHostAddress::isInSubnet(const QHostAddress & subnet, int netmask) const
QTD_EXTERN QTD_EXPORT bool qtd_QHostAddress_isInSubnet_QHostAddress_int_const
(void* __this_nativeId,
 void* subnet0,
 int netmask1)
{
    const QHostAddress&  __qt_subnet0 = (const QHostAddress& ) *(QHostAddress *)subnet0;
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isInSubnet((const QHostAddress& )__qt_subnet0, (int )netmask1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHostAddress::isInSubnet(const QPair<QHostAddress, int > & subnet) const
// QHostAddress::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QHostAddress_isNull_const
(void* __this_nativeId)
{
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHostAddress::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QHostAddress::operator==(QHostAddress::SpecialAddress address) const
QTD_EXTERN QTD_EXPORT bool qtd_QHostAddress_operator_equal_SpecialAddress_const
(void* __this_nativeId,
 int address0)
{
    QHostAddress::SpecialAddress __qt_address0 = (QHostAddress::SpecialAddress) address0;
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((QHostAddress::SpecialAddress )__qt_address0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHostAddress::operator==(const QHostAddress & address) const
QTD_EXTERN QTD_EXPORT bool qtd_QHostAddress_operator_equal_QHostAddress_const
(void* __this_nativeId,
 void* address0)
{
    const QHostAddress&  __qt_address0 = (const QHostAddress& ) *(QHostAddress *)address0;
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QHostAddress& )__qt_address0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHostAddress::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QHostAddress::protocol() const
QTD_EXTERN QTD_EXPORT int qtd_QHostAddress_protocol_const
(void* __this_nativeId)
{
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    int  __qt_return_value = __qt_this->protocol();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHostAddress::scopeId() const
QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_scopeId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    QString  __qt_return_value = __qt_this->scopeId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHostAddress::setAddress(const QIPv6Address & ip6Addr)
QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_setAddress_QIPv6Address
(void* __this_nativeId,
 void* ip6Addr0)
{
    const QIPv6Address&  __qt_ip6Addr0 = (const QIPv6Address& ) *(QIPv6Address *)ip6Addr0;
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    __qt_this->setAddress((const QIPv6Address& )__qt_ip6Addr0);

}

// QHostAddress::setAddress(const QString & address)
QTD_EXTERN QTD_EXPORT bool qtd_QHostAddress_setAddress_string
(void* __this_nativeId,
 DArray address0)
{
    QString __qt_address0 = QString::fromUtf8((const char *)address0.ptr, address0.length);
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setAddress((const QString& )__qt_address0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHostAddress::setAddress(unsigned int ip4Addr)
QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_setAddress_uint
(void* __this_nativeId,
 unsigned int ip4Addr0)
{
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    __qt_this->setAddress((unsigned int )ip4Addr0);

}

// QHostAddress::setScopeId(const QString & id)
QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_setScopeId_string
(void* __this_nativeId,
 DArray id0)
{
    QString __qt_id0 = QString::fromUtf8((const char *)id0.ptr, id0.length);
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    __qt_this->setScopeId((const QString& )__qt_id0);

}

// QHostAddress::toIPv4Address() const
QTD_EXTERN QTD_EXPORT unsigned int qtd_QHostAddress_toIPv4Address_const
(void* __this_nativeId)
{
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    unsigned int  __qt_return_value = __qt_this->toIPv4Address();

    unsigned int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHostAddress::toIPv6Address() const
QTD_EXTERN QTD_EXPORT void* qtd_QHostAddress_toIPv6Address_const
(void* __this_nativeId)
{
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    QIPv6Address  __qt_return_value = __qt_this->toIPv6Address();

    void* __d_return_value = (void*) new QIPv6Address(__qt_return_value);

    return __d_return_value;
}

// QHostAddress::toString() const
QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_toString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHostAddress *__qt_this = (QHostAddress *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHostAddress::parseSubnet(const QString & subnet)
// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QHostAddress_QTypeInfo_isComplex() { return (bool) QTypeInfo<QHostAddress>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QHostAddress_QTypeInfo_isStatic() { return (bool) QTypeInfo<QHostAddress>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QHostAddress_QTypeInfo_isLarge() { return (bool) QTypeInfo<QHostAddress>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QHostAddress_QTypeInfo_isPointer() { return (bool) QTypeInfo<QHostAddress>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QHostAddress_QTypeInfo_isDummy() { return (bool) QTypeInfo<QHostAddress>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QHostAddress_placed_copy(void* orig, void* place) {
    const QHostAddress&  __qt_orig = (const QHostAddress& ) *(QHostAddress *)orig;
    QHostAddress *result = new (place) QHostAddress (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QHostAddress_native_copy(void* orig) {
    const QHostAddress&  __qt_orig = (const QHostAddress& ) *(QHostAddress *)orig;
    QHostAddress *result = new QHostAddress (__qt_orig);
    return result;
}

