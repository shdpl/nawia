#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomDocumentType_delete(void* nativeId)
{
    delete (QDomDocumentType*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomDocumentType_destroy(void* nativeId)
{
    call_destructor((QDomDocumentType*)nativeId);
}

// ---externC---
// QDomDocumentType::QDomDocumentType()
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocumentType_QDomDocumentType
()
{
    QDomDocumentType *__qt_this = new QDomDocumentType();
    return (void *) __qt_this;

}

// QDomDocumentType::QDomDocumentType(const QDomDocumentType & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocumentType_QDomDocumentType_QDomDocumentType
(void* x0)
{
    const QDomDocumentType&  __qt_x0 = (const QDomDocumentType& ) *(QDomDocumentType *)x0;
    QDomDocumentType *__qt_this = new QDomDocumentType((const QDomDocumentType& )__qt_x0);
    return (void *) __qt_this;

}

// QDomDocumentType::entities() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocumentType_entities_const
(void* __this_nativeId)
{
    QDomDocumentType *__qt_this = (QDomDocumentType *) __this_nativeId;
    QDomNamedNodeMap  __qt_return_value = __qt_this->entities();

    void* __d_return_value = (void*) new QDomNamedNodeMap(__qt_return_value);

    return __d_return_value;
}

// QDomDocumentType::internalSubset() const
QTD_EXTERN QTD_EXPORT void qtd_QDomDocumentType_internalSubset_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomDocumentType *__qt_this = (QDomDocumentType *) __this_nativeId;
    QString  __qt_return_value = __qt_this->internalSubset();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomDocumentType::name() const
QTD_EXTERN QTD_EXPORT void qtd_QDomDocumentType_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomDocumentType *__qt_this = (QDomDocumentType *) __this_nativeId;
    QString  __qt_return_value = __qt_this->name();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomDocumentType::notations() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocumentType_notations_const
(void* __this_nativeId)
{
    QDomDocumentType *__qt_this = (QDomDocumentType *) __this_nativeId;
    QDomNamedNodeMap  __qt_return_value = __qt_this->notations();

    void* __d_return_value = (void*) new QDomNamedNodeMap(__qt_return_value);

    return __d_return_value;
}

// QDomDocumentType::publicId() const
QTD_EXTERN QTD_EXPORT void qtd_QDomDocumentType_publicId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomDocumentType *__qt_this = (QDomDocumentType *) __this_nativeId;
    QString  __qt_return_value = __qt_this->publicId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomDocumentType::systemId() const
QTD_EXTERN QTD_EXPORT void qtd_QDomDocumentType_systemId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomDocumentType *__qt_this = (QDomDocumentType *) __this_nativeId;
    QString  __qt_return_value = __qt_this->systemId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocumentType_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomDocumentType>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocumentType_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomDocumentType>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocumentType_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomDocumentType>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocumentType_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomDocumentType>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocumentType_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomDocumentType>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomDocumentType_placed_copy(void* orig, void* place) {
    const QDomDocumentType&  __qt_orig = (const QDomDocumentType& ) *(QDomDocumentType *)orig;
    QDomDocumentType *result = new (place) QDomDocumentType (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomDocumentType_native_copy(void* orig) {
    const QDomDocumentType&  __qt_orig = (const QDomDocumentType& ) *(QDomDocumentType *)orig;
    QDomDocumentType *result = new QDomDocumentType (__qt_orig);
    return result;
}

