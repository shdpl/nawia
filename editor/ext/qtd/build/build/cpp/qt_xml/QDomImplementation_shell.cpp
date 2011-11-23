#include <QVariant>
#include <qdom.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomImplementation_delete(void* nativeId)
{
    delete (QDomImplementation*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomImplementation_destroy(void* nativeId)
{
    call_destructor((QDomImplementation*)nativeId);
}

// ---externC---
// QDomImplementation::QDomImplementation()
QTD_EXTERN QTD_EXPORT void* qtd_QDomImplementation_QDomImplementation
()
{
    QDomImplementation *__qt_this = new QDomImplementation();
    return (void *) __qt_this;

}

// QDomImplementation::QDomImplementation(const QDomImplementation & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QDomImplementation_QDomImplementation_QDomImplementation
(void* arg__1)
{
    const QDomImplementation&  __qt_arg__1 = (const QDomImplementation& ) *(QDomImplementation *)arg__1;
    QDomImplementation *__qt_this = new QDomImplementation((const QDomImplementation& )__qt_arg__1);
    return (void *) __qt_this;

}

// QDomImplementation::createDocument(const QString & nsURI, const QString & qName, const QDomDocumentType & doctype)
QTD_EXTERN QTD_EXPORT void* qtd_QDomImplementation_createDocument_string_string_QDomDocumentType
(void* __this_nativeId,
 DArray nsURI0,
 DArray qName1,
 void* doctype2)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_qName1 = QString::fromUtf8((const char *)qName1.ptr, qName1.length);
    const QDomDocumentType&  __qt_doctype2 = (const QDomDocumentType& ) *(QDomDocumentType *)doctype2;
    QDomImplementation *__qt_this = (QDomImplementation *) __this_nativeId;
    QDomDocument  __qt_return_value = __qt_this->createDocument((const QString& )__qt_nsURI0, (const QString& )__qt_qName1, (const QDomDocumentType& )__qt_doctype2);

    void* __d_return_value = (void*) new QDomDocument(__qt_return_value);

    return __d_return_value;
}

// QDomImplementation::createDocumentType(const QString & qName, const QString & publicId, const QString & systemId)
QTD_EXTERN QTD_EXPORT void* qtd_QDomImplementation_createDocumentType_string_string_string
(void* __this_nativeId,
 DArray qName0,
 DArray publicId1,
 DArray systemId2)
{
    QString __qt_qName0 = QString::fromUtf8((const char *)qName0.ptr, qName0.length);
    QString __qt_publicId1 = QString::fromUtf8((const char *)publicId1.ptr, publicId1.length);
    QString __qt_systemId2 = QString::fromUtf8((const char *)systemId2.ptr, systemId2.length);
    QDomImplementation *__qt_this = (QDomImplementation *) __this_nativeId;
    QDomDocumentType  __qt_return_value = __qt_this->createDocumentType((const QString& )__qt_qName0, (const QString& )__qt_publicId1, (const QString& )__qt_systemId2);

    void* __d_return_value = (void*) new QDomDocumentType(__qt_return_value);

    return __d_return_value;
}

// QDomImplementation::hasFeature(const QString & feature, const QString & version_) const
QTD_EXTERN QTD_EXPORT bool qtd_QDomImplementation_hasFeature_string_string_const
(void* __this_nativeId,
 DArray feature0,
 DArray version1)
{
    QString __qt_feature0 = QString::fromUtf8((const char *)feature0.ptr, feature0.length);
    QString __qt_version1 = QString::fromUtf8((const char *)version1.ptr, version1.length);
    QDomImplementation *__qt_this = (QDomImplementation *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFeature((const QString& )__qt_feature0, (const QString& )__qt_version1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomImplementation::isNull()
QTD_EXTERN QTD_EXPORT bool qtd_QDomImplementation_isNull
(void* __this_nativeId)
{
    QDomImplementation *__qt_this = (QDomImplementation *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomImplementation::operator==(const QDomImplementation & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QDomImplementation_operator_equal_QDomImplementation_const
(void* __this_nativeId,
 void* arg__1)
{
    const QDomImplementation&  __qt_arg__1 = (const QDomImplementation& ) *(QDomImplementation *)arg__1;
    QDomImplementation *__qt_this = (QDomImplementation *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QDomImplementation& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomImplementation::invalidDataPolicy()
QTD_EXTERN QTD_EXPORT int qtd_QDomImplementation_invalidDataPolicy
()
{
    int  __qt_return_value = QDomImplementation::invalidDataPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomImplementation::setInvalidDataPolicy(QDomImplementation::InvalidDataPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QDomImplementation_setInvalidDataPolicy_InvalidDataPolicy
(int policy0)
{
    QDomImplementation::InvalidDataPolicy __qt_policy0 = (QDomImplementation::InvalidDataPolicy) policy0;
    QDomImplementation::setInvalidDataPolicy((QDomImplementation::InvalidDataPolicy )__qt_policy0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomImplementation_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomImplementation>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomImplementation_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomImplementation>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomImplementation_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomImplementation>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomImplementation_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomImplementation>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomImplementation_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomImplementation>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomImplementation_placed_copy(void* orig, void* place) {
    const QDomImplementation&  __qt_orig = (const QDomImplementation& ) *(QDomImplementation *)orig;
    QDomImplementation *result = new (place) QDomImplementation (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomImplementation_native_copy(void* orig) {
    const QDomImplementation&  __qt_orig = (const QDomImplementation& ) *(QDomImplementation *)orig;
    QDomImplementation *result = new QDomImplementation (__qt_orig);
    return result;
}

