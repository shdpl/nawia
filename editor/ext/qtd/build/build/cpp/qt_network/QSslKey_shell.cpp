#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qsslkey.h>

#include <iostream>
#include <qsslkey.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QSslKey_delete(void* nativeId)
{
    delete (QSslKey*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSslKey_destroy(void* nativeId)
{
    call_destructor((QSslKey*)nativeId);
}

// ---externC---
// QSslKey::QSslKey()
QTD_EXTERN QTD_EXPORT void* qtd_QSslKey_QSslKey
()
{
    QSslKey *__qt_this = new QSslKey();
    return (void *) __qt_this;

}

// QSslKey::QSslKey(QIODevice * device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray & passPhrase)
QTD_EXTERN QTD_EXPORT void* qtd_QSslKey_QSslKey_QIODevice_KeyAlgorithm_EncodingFormat_KeyType_QByteArray
(void* device0,
 int algorithm1,
 int format2,
 int type3,
 void* passPhrase4)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QSsl::KeyAlgorithm __qt_algorithm1 = (QSsl::KeyAlgorithm) algorithm1;
    QSsl::EncodingFormat __qt_format2 = (QSsl::EncodingFormat) format2;
    QSsl::KeyType __qt_type3 = (QSsl::KeyType) type3;
    const QByteArray&  __qt_passPhrase4 = (const QByteArray& ) *(QByteArray *)passPhrase4;
    QSslKey *__qt_this = new QSslKey((QIODevice* )__qt_device0, (QSsl::KeyAlgorithm )__qt_algorithm1, (QSsl::EncodingFormat )__qt_format2, (QSsl::KeyType )__qt_type3, (const QByteArray& )__qt_passPhrase4);
    return (void *) __qt_this;

}

// QSslKey::QSslKey(const QByteArray & encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray & passPhrase)
QTD_EXTERN QTD_EXPORT void* qtd_QSslKey_QSslKey_QByteArray_KeyAlgorithm_EncodingFormat_KeyType_QByteArray
(void* encoded0,
 int algorithm1,
 int format2,
 int type3,
 void* passPhrase4)
{
    const QByteArray&  __qt_encoded0 = (const QByteArray& ) *(QByteArray *)encoded0;
    QSsl::KeyAlgorithm __qt_algorithm1 = (QSsl::KeyAlgorithm) algorithm1;
    QSsl::EncodingFormat __qt_format2 = (QSsl::EncodingFormat) format2;
    QSsl::KeyType __qt_type3 = (QSsl::KeyType) type3;
    const QByteArray&  __qt_passPhrase4 = (const QByteArray& ) *(QByteArray *)passPhrase4;
    QSslKey *__qt_this = new QSslKey((const QByteArray& )__qt_encoded0, (QSsl::KeyAlgorithm )__qt_algorithm1, (QSsl::EncodingFormat )__qt_format2, (QSsl::KeyType )__qt_type3, (const QByteArray& )__qt_passPhrase4);
    return (void *) __qt_this;

}

// QSslKey::QSslKey(const QSslKey & other)
QTD_EXTERN QTD_EXPORT void* qtd_QSslKey_QSslKey_QSslKey
(void* other0)
{
    const QSslKey&  __qt_other0 = (const QSslKey& ) *(QSslKey *)other0;
    QSslKey *__qt_this = new QSslKey((const QSslKey& )__qt_other0);
    return (void *) __qt_this;

}

// QSslKey::algorithm() const
QTD_EXTERN QTD_EXPORT int qtd_QSslKey_algorithm_const
(void* __this_nativeId)
{
    QSslKey *__qt_this = (QSslKey *) __this_nativeId;
    int  __qt_return_value = __qt_this->algorithm();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslKey::clear()
QTD_EXTERN QTD_EXPORT void qtd_QSslKey_clear
(void* __this_nativeId)
{
    QSslKey *__qt_this = (QSslKey *) __this_nativeId;
    __qt_this->clear();

}

// QSslKey::handle() const
QTD_EXTERN QTD_EXPORT Qt::HANDLE qtd_QSslKey_handle_const
(void* __this_nativeId)
{
    QSslKey *__qt_this = (QSslKey *) __this_nativeId;
    Qt::HANDLE  __qt_return_value = __qt_this->handle();

    Qt::HANDLE __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslKey::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QSslKey_isNull_const
(void* __this_nativeId)
{
    QSslKey *__qt_this = (QSslKey *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslKey::length() const
QTD_EXTERN QTD_EXPORT int qtd_QSslKey_length_const
(void* __this_nativeId)
{
    QSslKey *__qt_this = (QSslKey *) __this_nativeId;
    int  __qt_return_value = __qt_this->length();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslKey::operator==(const QSslKey & key) const
QTD_EXTERN QTD_EXPORT bool qtd_QSslKey_operator_equal_QSslKey_const
(void* __this_nativeId,
 void* key0)
{
    const QSslKey&  __qt_key0 = (const QSslKey& ) *(QSslKey *)key0;
    QSslKey *__qt_this = (QSslKey *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QSslKey& )__qt_key0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslKey::toDer(const QByteArray & passPhrase) const
QTD_EXTERN QTD_EXPORT void* qtd_QSslKey_toDer_QByteArray_const
(void* __this_nativeId,
 void* passPhrase0)
{
    const QByteArray&  __qt_passPhrase0 = (const QByteArray& ) *(QByteArray *)passPhrase0;
    QSslKey *__qt_this = (QSslKey *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toDer((const QByteArray& )__qt_passPhrase0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QSslKey::toPem(const QByteArray & passPhrase) const
QTD_EXTERN QTD_EXPORT void* qtd_QSslKey_toPem_QByteArray_const
(void* __this_nativeId,
 void* passPhrase0)
{
    const QByteArray&  __qt_passPhrase0 = (const QByteArray& ) *(QByteArray *)passPhrase0;
    QSslKey *__qt_this = (QSslKey *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toPem((const QByteArray& )__qt_passPhrase0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QSslKey::type() const
QTD_EXTERN QTD_EXPORT int qtd_QSslKey_type_const
(void* __this_nativeId)
{
    QSslKey *__qt_this = (QSslKey *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QSslKey_QTypeInfo_isComplex() { return (bool) QTypeInfo<QSslKey>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslKey_QTypeInfo_isStatic() { return (bool) QTypeInfo<QSslKey>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslKey_QTypeInfo_isLarge() { return (bool) QTypeInfo<QSslKey>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslKey_QTypeInfo_isPointer() { return (bool) QTypeInfo<QSslKey>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslKey_QTypeInfo_isDummy() { return (bool) QTypeInfo<QSslKey>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QSslKey_placed_copy(void* orig, void* place) {
    const QSslKey&  __qt_orig = (const QSslKey& ) *(QSslKey *)orig;
    QSslKey *result = new (place) QSslKey (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QSslKey_native_copy(void* orig) {
    const QSslKey&  __qt_orig = (const QSslKey& ) *(QSslKey *)orig;
    QSslKey *result = new QSslKey (__qt_orig);
    return result;
}

