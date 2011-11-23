#include <QVariant>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkinterface.h>

#include <iostream>
#include <qnetworkinterface.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QNetworkInterface_delete(void* nativeId)
{
    delete (QNetworkInterface*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkInterface_destroy(void* nativeId)
{
    call_destructor((QNetworkInterface*)nativeId);
}

// ---externC---
// QNetworkInterface::QNetworkInterface()
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkInterface_QNetworkInterface
()
{
    QNetworkInterface *__qt_this = new QNetworkInterface();
    return (void *) __qt_this;

}

// QNetworkInterface::QNetworkInterface(const QNetworkInterface & other)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkInterface_QNetworkInterface_QNetworkInterface
(void* other0)
{
    const QNetworkInterface&  __qt_other0 = (const QNetworkInterface& ) *(QNetworkInterface *)other0;
    QNetworkInterface *__qt_this = new QNetworkInterface((const QNetworkInterface& )__qt_other0);
    return (void *) __qt_this;

}

// QNetworkInterface::addressEntries() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkInterface_addressEntries_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkInterface *__qt_this = (QNetworkInterface *) __this_nativeId;
    QList<QNetworkAddressEntry >  __qt_return_value = __qt_this->addressEntries();

QList<QNetworkAddressEntry > &__d_return_value_tmp = (*(QList<QNetworkAddressEntry > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QNetworkInterface::flags() const
QTD_EXTERN QTD_EXPORT int qtd_QNetworkInterface_flags_const
(void* __this_nativeId)
{
    QNetworkInterface *__qt_this = (QNetworkInterface *) __this_nativeId;
    int  __qt_return_value = __qt_this->flags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkInterface::hardwareAddress() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkInterface_hardwareAddress_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkInterface *__qt_this = (QNetworkInterface *) __this_nativeId;
    QString  __qt_return_value = __qt_this->hardwareAddress();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkInterface::humanReadableName() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkInterface_humanReadableName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkInterface *__qt_this = (QNetworkInterface *) __this_nativeId;
    QString  __qt_return_value = __qt_this->humanReadableName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkInterface::index() const
QTD_EXTERN QTD_EXPORT int qtd_QNetworkInterface_index_const
(void* __this_nativeId)
{
    QNetworkInterface *__qt_this = (QNetworkInterface *) __this_nativeId;
    int  __qt_return_value = __qt_this->index();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkInterface::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkInterface_isValid_const
(void* __this_nativeId)
{
    QNetworkInterface *__qt_this = (QNetworkInterface *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkInterface::name() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkInterface_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkInterface *__qt_this = (QNetworkInterface *) __this_nativeId;
    QString  __qt_return_value = __qt_this->name();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkInterface::allAddresses()
QTD_EXTERN QTD_EXPORT void qtd_QNetworkInterface_allAddresses
(void* __d_return_value)
{
    QList<QHostAddress >  __qt_return_value = QNetworkInterface::allAddresses();

QList<QHostAddress > &__d_return_value_tmp = (*(QList<QHostAddress > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QNetworkInterface::allInterfaces()
QTD_EXTERN QTD_EXPORT void qtd_QNetworkInterface_allInterfaces
(void* __d_return_value)
{
    QList<QNetworkInterface >  __qt_return_value = QNetworkInterface::allInterfaces();

QList<QNetworkInterface > &__d_return_value_tmp = (*(QList<QNetworkInterface > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QNetworkInterface::interfaceFromIndex(int index)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkInterface_interfaceFromIndex_int
(int index0)
{
    QNetworkInterface  __qt_return_value = QNetworkInterface::interfaceFromIndex((int )index0);

    void* __d_return_value = (void*) new QNetworkInterface(__qt_return_value);

    return __d_return_value;
}

// QNetworkInterface::interfaceFromName(const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkInterface_interfaceFromName_string
(DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QNetworkInterface  __qt_return_value = QNetworkInterface::interfaceFromName((const QString& )__qt_name0);

    void* __d_return_value = (void*) new QNetworkInterface(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkInterface_QTypeInfo_isComplex() { return (bool) QTypeInfo<QNetworkInterface>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkInterface_QTypeInfo_isStatic() { return (bool) QTypeInfo<QNetworkInterface>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkInterface_QTypeInfo_isLarge() { return (bool) QTypeInfo<QNetworkInterface>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkInterface_QTypeInfo_isPointer() { return (bool) QTypeInfo<QNetworkInterface>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkInterface_QTypeInfo_isDummy() { return (bool) QTypeInfo<QNetworkInterface>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QNetworkInterface_placed_copy(void* orig, void* place) {
    const QNetworkInterface&  __qt_orig = (const QNetworkInterface& ) *(QNetworkInterface *)orig;
    QNetworkInterface *result = new (place) QNetworkInterface (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QNetworkInterface_native_copy(void* orig) {
    const QNetworkInterface&  __qt_orig = (const QNetworkInterface& ) *(QNetworkInterface *)orig;
    QNetworkInterface *result = new QNetworkInterface (__qt_orig);
    return result;
}

