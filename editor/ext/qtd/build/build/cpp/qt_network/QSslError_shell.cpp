#include <QVariant>
#include <qsslcertificate.h>
#include <qsslerror.h>

#include <iostream>
#include <qsslerror.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QSslError_delete(void* nativeId)
{
    delete (QSslError*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSslError_destroy(void* nativeId)
{
    call_destructor((QSslError*)nativeId);
}

// ---externC---
// QSslError::QSslError()
QTD_EXTERN QTD_EXPORT void* qtd_QSslError_QSslError
()
{
    QSslError *__qt_this = new QSslError();
    return (void *) __qt_this;

}

// QSslError::QSslError(QSslError::SslError error)
QTD_EXTERN QTD_EXPORT void* qtd_QSslError_QSslError_SslError
(int error0)
{
    QSslError::SslError __qt_error0 = (QSslError::SslError) error0;
    QSslError *__qt_this = new QSslError((QSslError::SslError )__qt_error0);
    return (void *) __qt_this;

}

// QSslError::QSslError(QSslError::SslError error, const QSslCertificate & certificate)
QTD_EXTERN QTD_EXPORT void* qtd_QSslError_QSslError_SslError_QSslCertificate
(int error0,
 void* certificate1)
{
    QSslError::SslError __qt_error0 = (QSslError::SslError) error0;
    const QSslCertificate&  __qt_certificate1 = (const QSslCertificate& ) *(QSslCertificate *)certificate1;
    QSslError *__qt_this = new QSslError((QSslError::SslError )__qt_error0, (const QSslCertificate& )__qt_certificate1);
    return (void *) __qt_this;

}

// QSslError::QSslError(const QSslError & other)
QTD_EXTERN QTD_EXPORT void* qtd_QSslError_QSslError_QSslError
(void* other0)
{
    const QSslError&  __qt_other0 = (const QSslError& ) *(QSslError *)other0;
    QSslError *__qt_this = new QSslError((const QSslError& )__qt_other0);
    return (void *) __qt_this;

}

// QSslError::certificate() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslError_certificate_const
(void* __this_nativeId)
{
    QSslError *__qt_this = (QSslError *) __this_nativeId;
    QSslCertificate  __qt_return_value = __qt_this->certificate();

    void* __d_return_value = (void*) new QSslCertificate(__qt_return_value);

    return __d_return_value;
}

// QSslError::error() const
QTD_EXTERN QTD_EXPORT int qtd_QSslError_error_const
(void* __this_nativeId)
{
    QSslError *__qt_this = (QSslError *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslError::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QSslError_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSslError *__qt_this = (QSslError *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSslError::operator==(const QSslError & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QSslError_operator_equal_QSslError_const
(void* __this_nativeId,
 void* other0)
{
    const QSslError&  __qt_other0 = (const QSslError& ) *(QSslError *)other0;
    QSslError *__qt_this = (QSslError *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QSslError& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QSslError_QTypeInfo_isComplex() { return (bool) QTypeInfo<QSslError>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslError_QTypeInfo_isStatic() { return (bool) QTypeInfo<QSslError>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslError_QTypeInfo_isLarge() { return (bool) QTypeInfo<QSslError>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslError_QTypeInfo_isPointer() { return (bool) QTypeInfo<QSslError>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslError_QTypeInfo_isDummy() { return (bool) QTypeInfo<QSslError>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QSslError_placed_copy(void* orig, void* place) {
    const QSslError&  __qt_orig = (const QSslError& ) *(QSslError *)orig;
    QSslError *result = new (place) QSslError (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QSslError_native_copy(void* orig) {
    const QSslError&  __qt_orig = (const QSslError& ) *(QSslError *)orig;
    QSslError *result = new QSslError (__qt_orig);
    return result;
}

