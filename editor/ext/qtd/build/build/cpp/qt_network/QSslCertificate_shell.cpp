#include <QVariant>
#include <qbytearray.h>
#include <qdatetime.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qsslcertificate.h>
#include <qsslkey.h>

#include <iostream>
#include <qsslcertificate.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_delete(void* nativeId)
{
    delete (QSslCertificate*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_destroy(void* nativeId)
{
    call_destructor((QSslCertificate*)nativeId);
}

// ---externC---
// QSslCertificate::QSslCertificate(QIODevice * device, QSsl::EncodingFormat format)
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_QSslCertificate_QIODevice_EncodingFormat
(void* device0,
 int format1)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QSsl::EncodingFormat __qt_format1 = (QSsl::EncodingFormat) format1;
    QSslCertificate *__qt_this = new QSslCertificate((QIODevice* )__qt_device0, (QSsl::EncodingFormat )__qt_format1);
    return (void *) __qt_this;

}

// QSslCertificate::QSslCertificate(const QByteArray & encoded, QSsl::EncodingFormat format)
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_QSslCertificate_QByteArray_EncodingFormat
(void* encoded0,
 int format1)
{
    const QByteArray&  __qt_encoded0 = (const QByteArray& ) *(QByteArray *)encoded0;
    QSsl::EncodingFormat __qt_format1 = (QSsl::EncodingFormat) format1;
    QSslCertificate *__qt_this = new QSslCertificate((const QByteArray& )__qt_encoded0, (QSsl::EncodingFormat )__qt_format1);
    return (void *) __qt_this;

}

// QSslCertificate::QSslCertificate(const QSslCertificate & other)
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_QSslCertificate_QSslCertificate
(void* other0)
{
    const QSslCertificate&  __qt_other0 = (const QSslCertificate& ) *(QSslCertificate *)other0;
    QSslCertificate *__qt_this = new QSslCertificate((const QSslCertificate& )__qt_other0);
    return (void *) __qt_this;

}

// QSslCertificate::alternateSubjectNames() const
// QSslCertificate::clear()
QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_clear
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    __qt_this->clear();

}

// QSslCertificate::digest(QCryptographicHash::Algorithm algorithm) const
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_digest_Algorithm_const
(void* __this_nativeId,
 int algorithm0)
{
    QCryptographicHash::Algorithm __qt_algorithm0 = (QCryptographicHash::Algorithm) algorithm0;
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->digest((QCryptographicHash::Algorithm )__qt_algorithm0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QSslCertificate::effectiveDate() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_effectiveDate_const
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->effectiveDate();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QSslCertificate::expiryDate() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_expiryDate_const
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->expiryDate();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QSslCertificate::handle() const
QTD_EXTERN QTD_EXPORT Qt::HANDLE qtd_QSslCertificate_handle_const
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    Qt::HANDLE  __qt_return_value = __qt_this->handle();

    Qt::HANDLE __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslCertificate::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QSslCertificate_isNull_const
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslCertificate::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QSslCertificate_isValid_const
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslCertificate::issuerInfo(QSslCertificate::SubjectInfo info) const
QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_issuerInfo_SubjectInfo_const
(void* __this_nativeId,
 void* __d_return_value,
 int info0)
{
    QSslCertificate::SubjectInfo __qt_info0 = (QSslCertificate::SubjectInfo) info0;
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QString  __qt_return_value = __qt_this->issuerInfo((QSslCertificate::SubjectInfo )__qt_info0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSslCertificate::issuerInfo(const QByteArray & tag) const
QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_issuerInfo_QByteArray_const
(void* __this_nativeId,
 void* __d_return_value,
 void* tag0)
{
    const QByteArray&  __qt_tag0 = (const QByteArray& ) *(QByteArray *)tag0;
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QString  __qt_return_value = __qt_this->issuerInfo((const QByteArray& )__qt_tag0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSslCertificate::operator==(const QSslCertificate & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QSslCertificate_operator_equal_QSslCertificate_const
(void* __this_nativeId,
 void* other0)
{
    const QSslCertificate&  __qt_other0 = (const QSslCertificate& ) *(QSslCertificate *)other0;
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QSslCertificate& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSslCertificate::publicKey() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_publicKey_const
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QSslKey  __qt_return_value = __qt_this->publicKey();

    void* __d_return_value = (void*) new QSslKey(__qt_return_value);

    return __d_return_value;
}

// QSslCertificate::serialNumber() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_serialNumber_const
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->serialNumber();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QSslCertificate::subjectInfo(QSslCertificate::SubjectInfo info) const
QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_subjectInfo_SubjectInfo_const
(void* __this_nativeId,
 void* __d_return_value,
 int info0)
{
    QSslCertificate::SubjectInfo __qt_info0 = (QSslCertificate::SubjectInfo) info0;
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QString  __qt_return_value = __qt_this->subjectInfo((QSslCertificate::SubjectInfo )__qt_info0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSslCertificate::subjectInfo(const QByteArray & tag) const
QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_subjectInfo_QByteArray_const
(void* __this_nativeId,
 void* __d_return_value,
 void* tag0)
{
    const QByteArray&  __qt_tag0 = (const QByteArray& ) *(QByteArray *)tag0;
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QString  __qt_return_value = __qt_this->subjectInfo((const QByteArray& )__qt_tag0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSslCertificate::toDer() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_toDer_const
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toDer();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QSslCertificate::toPem() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_toPem_const
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toPem();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QSslCertificate::version() const
QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_version__const
(void* __this_nativeId)
{
    QSslCertificate *__qt_this = (QSslCertificate *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->version();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QSslCertificate::fromData(const QByteArray & data, QSsl::EncodingFormat format)
QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_fromData_QByteArray_EncodingFormat
(void* __d_return_value,
 void* data0,
 int format1)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QSsl::EncodingFormat __qt_format1 = (QSsl::EncodingFormat) format1;
    QList<QSslCertificate >  __qt_return_value = QSslCertificate::fromData((const QByteArray& )__qt_data0, (QSsl::EncodingFormat )__qt_format1);

QList<QSslCertificate > &__d_return_value_tmp = (*(QList<QSslCertificate > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslCertificate::fromDevice(QIODevice * device, QSsl::EncodingFormat format)
QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_fromDevice_QIODevice_EncodingFormat
(void* __d_return_value,
 void* device0,
 int format1)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QSsl::EncodingFormat __qt_format1 = (QSsl::EncodingFormat) format1;
    QList<QSslCertificate >  __qt_return_value = QSslCertificate::fromDevice((QIODevice* )__qt_device0, (QSsl::EncodingFormat )__qt_format1);

QList<QSslCertificate > &__d_return_value_tmp = (*(QList<QSslCertificate > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSslCertificate::fromPath(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax)
QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_fromPath_string_EncodingFormat_PatternSyntax
(void* __d_return_value,
 DArray path0,
 int format1,
 int syntax2)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QSsl::EncodingFormat __qt_format1 = (QSsl::EncodingFormat) format1;
    QRegExp::PatternSyntax __qt_syntax2 = (QRegExp::PatternSyntax) syntax2;
    QList<QSslCertificate >  __qt_return_value = QSslCertificate::fromPath((const QString& )__qt_path0, (QSsl::EncodingFormat )__qt_format1, (QRegExp::PatternSyntax )__qt_syntax2);

QList<QSslCertificate > &__d_return_value_tmp = (*(QList<QSslCertificate > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QSslCertificate_QTypeInfo_isComplex() { return (bool) QTypeInfo<QSslCertificate>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslCertificate_QTypeInfo_isStatic() { return (bool) QTypeInfo<QSslCertificate>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslCertificate_QTypeInfo_isLarge() { return (bool) QTypeInfo<QSslCertificate>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslCertificate_QTypeInfo_isPointer() { return (bool) QTypeInfo<QSslCertificate>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QSslCertificate_QTypeInfo_isDummy() { return (bool) QTypeInfo<QSslCertificate>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QSslCertificate_placed_copy(void* orig, void* place) {
    const QSslCertificate&  __qt_orig = (const QSslCertificate& ) *(QSslCertificate *)orig;
    QSslCertificate *result = new (place) QSslCertificate (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QSslCertificate_native_copy(void* orig) {
    const QSslCertificate&  __qt_orig = (const QSslCertificate& ) *(QSslCertificate *)orig;
    QSslCertificate *result = new QSslCertificate (__qt_orig);
    return result;
}

