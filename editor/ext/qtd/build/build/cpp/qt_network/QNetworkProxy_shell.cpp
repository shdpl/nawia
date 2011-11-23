#include <QVariant>
#include <qnetworkproxy.h>

#include <iostream>
#include <qnetworkproxy.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_delete(void* nativeId)
{
    delete (QNetworkProxy*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_destroy(void* nativeId)
{
    call_destructor((QNetworkProxy*)nativeId);
}

// ---externC---
// QNetworkProxy::QNetworkProxy()
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxy_QNetworkProxy
()
{
    QNetworkProxy *__qt_this = new QNetworkProxy();
    return (void *) __qt_this;

}

// QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType type, const QString & hostName, unsigned short port, const QString & user, const QString & password)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxy_QNetworkProxy_ProxyType_string_ushort_string_string
(int type0,
 DArray hostName1,
 unsigned short port2,
 DArray user3,
 DArray password4)
{
    QNetworkProxy::ProxyType __qt_type0 = (QNetworkProxy::ProxyType) type0;
    QString __qt_hostName1 = QString::fromUtf8((const char *)hostName1.ptr, hostName1.length);
    QString __qt_user3 = QString::fromUtf8((const char *)user3.ptr, user3.length);
    QString __qt_password4 = QString::fromUtf8((const char *)password4.ptr, password4.length);
    QNetworkProxy *__qt_this = new QNetworkProxy((QNetworkProxy::ProxyType )__qt_type0, (const QString& )__qt_hostName1, (unsigned short )port2, (const QString& )__qt_user3, (const QString& )__qt_password4);
    return (void *) __qt_this;

}

// QNetworkProxy::QNetworkProxy(const QNetworkProxy & other)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxy_QNetworkProxy_QNetworkProxy
(void* other0)
{
    const QNetworkProxy&  __qt_other0 = (const QNetworkProxy& ) *(QNetworkProxy *)other0;
    QNetworkProxy *__qt_this = new QNetworkProxy((const QNetworkProxy& )__qt_other0);
    return (void *) __qt_this;

}

// QNetworkProxy::capabilities() const
QTD_EXTERN QTD_EXPORT int qtd_QNetworkProxy_capabilities_const
(void* __this_nativeId)
{
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    int  __qt_return_value = __qt_this->capabilities();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkProxy::hostName() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_hostName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    QString  __qt_return_value = __qt_this->hostName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkProxy::isCachingProxy() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxy_isCachingProxy_const
(void* __this_nativeId)
{
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCachingProxy();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkProxy::isTransparentProxy() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxy_isTransparentProxy_const
(void* __this_nativeId)
{
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTransparentProxy();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkProxy::operator==(const QNetworkProxy & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxy_operator_equal_QNetworkProxy_const
(void* __this_nativeId,
 void* other0)
{
    const QNetworkProxy&  __qt_other0 = (const QNetworkProxy& ) *(QNetworkProxy *)other0;
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QNetworkProxy& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkProxy::password() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_password_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    QString  __qt_return_value = __qt_this->password();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkProxy::port() const
QTD_EXTERN QTD_EXPORT unsigned short qtd_QNetworkProxy_port_const
(void* __this_nativeId)
{
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    unsigned short  __qt_return_value = __qt_this->port();

    unsigned short __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkProxy::setCapabilities(QFlags<QNetworkProxy::Capability> capab)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_setCapabilities_Capabilities
(void* __this_nativeId,
 int capab0)
{
    QFlags<QNetworkProxy::Capability> __qt_capab0 = (QFlags<QNetworkProxy::Capability>) capab0;
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    __qt_this->setCapabilities((QNetworkProxy::Capabilities )__qt_capab0);

}

// QNetworkProxy::setHostName(const QString & hostName)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_setHostName_string
(void* __this_nativeId,
 DArray hostName0)
{
    QString __qt_hostName0 = QString::fromUtf8((const char *)hostName0.ptr, hostName0.length);
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    __qt_this->setHostName((const QString& )__qt_hostName0);

}

// QNetworkProxy::setPassword(const QString & password)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_setPassword_string
(void* __this_nativeId,
 DArray password0)
{
    QString __qt_password0 = QString::fromUtf8((const char *)password0.ptr, password0.length);
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    __qt_this->setPassword((const QString& )__qt_password0);

}

// QNetworkProxy::setPort(unsigned short port)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_setPort_ushort
(void* __this_nativeId,
 unsigned short port0)
{
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    __qt_this->setPort((unsigned short )port0);

}

// QNetworkProxy::setType(QNetworkProxy::ProxyType type)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_setType_ProxyType
(void* __this_nativeId,
 int type0)
{
    QNetworkProxy::ProxyType __qt_type0 = (QNetworkProxy::ProxyType) type0;
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    __qt_this->setType((QNetworkProxy::ProxyType )__qt_type0);

}

// QNetworkProxy::setUser(const QString & userName)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_setUser_string
(void* __this_nativeId,
 DArray userName0)
{
    QString __qt_userName0 = QString::fromUtf8((const char *)userName0.ptr, userName0.length);
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    __qt_this->setUser((const QString& )__qt_userName0);

}

// QNetworkProxy::type() const
QTD_EXTERN QTD_EXPORT int qtd_QNetworkProxy_type_const
(void* __this_nativeId)
{
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkProxy::user() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_user_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkProxy *__qt_this = (QNetworkProxy *) __this_nativeId;
    QString  __qt_return_value = __qt_this->user();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkProxy::applicationProxy()
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxy_applicationProxy
()
{
    QNetworkProxy  __qt_return_value = QNetworkProxy::applicationProxy();

    void* __d_return_value = (void*) new QNetworkProxy(__qt_return_value);

    return __d_return_value;
}

// QNetworkProxy::setApplicationProxy(const QNetworkProxy & proxy)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_setApplicationProxy_QNetworkProxy
(void* proxy0)
{
    const QNetworkProxy&  __qt_proxy0 = (const QNetworkProxy& ) *(QNetworkProxy *)proxy0;
    QNetworkProxy::setApplicationProxy((const QNetworkProxy& )__qt_proxy0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxy_QTypeInfo_isComplex() { return (bool) QTypeInfo<QNetworkProxy>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxy_QTypeInfo_isStatic() { return (bool) QTypeInfo<QNetworkProxy>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxy_QTypeInfo_isLarge() { return (bool) QTypeInfo<QNetworkProxy>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxy_QTypeInfo_isPointer() { return (bool) QTypeInfo<QNetworkProxy>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkProxy_QTypeInfo_isDummy() { return (bool) QTypeInfo<QNetworkProxy>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxy_placed_copy(void* orig, void* place) {
    const QNetworkProxy&  __qt_orig = (const QNetworkProxy& ) *(QNetworkProxy *)orig;
    QNetworkProxy *result = new (place) QNetworkProxy (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxy_native_copy(void* orig) {
    const QNetworkProxy&  __qt_orig = (const QNetworkProxy& ) *(QNetworkProxy *)orig;
    QNetworkProxy *result = new QNetworkProxy (__qt_orig);
    return result;
}

