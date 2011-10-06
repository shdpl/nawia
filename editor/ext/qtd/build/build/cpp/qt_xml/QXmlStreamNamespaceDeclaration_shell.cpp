#include <QVariant>
#include <qxmlstream.h>

#include <iostream>
#include <qxmlstream.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNamespaceDeclaration_delete(void* nativeId)
{
    delete (QXmlStreamNamespaceDeclaration*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNamespaceDeclaration_destroy(void* nativeId)
{
    call_destructor((QXmlStreamNamespaceDeclaration*)nativeId);
}

// ---externC---
// QXmlStreamNamespaceDeclaration::QXmlStreamNamespaceDeclaration()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration
()
{
    QXmlStreamNamespaceDeclaration *__qt_this = new QXmlStreamNamespaceDeclaration();
    return (void *) __qt_this;

}

// QXmlStreamNamespaceDeclaration::QXmlStreamNamespaceDeclaration(const QString & prefix, const QString & namespaceUri)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration_string_string
(DArray prefix0,
 DArray namespaceUri1)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QString __qt_namespaceUri1 = QString::fromUtf8((const char *)namespaceUri1.ptr, namespaceUri1.length);
    QXmlStreamNamespaceDeclaration *__qt_this = new QXmlStreamNamespaceDeclaration((const QString& )__qt_prefix0, (const QString& )__qt_namespaceUri1);
    return (void *) __qt_this;

}

// QXmlStreamNamespaceDeclaration::QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration
(void* arg__1)
{
    const QXmlStreamNamespaceDeclaration&  __qt_arg__1 = (const QXmlStreamNamespaceDeclaration& ) *(QXmlStreamNamespaceDeclaration *)arg__1;
    QXmlStreamNamespaceDeclaration *__qt_this = new QXmlStreamNamespaceDeclaration((const QXmlStreamNamespaceDeclaration& )__qt_arg__1);
    return (void *) __qt_this;

}

// QXmlStreamNamespaceDeclaration::namespaceUri() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNamespaceDeclaration_namespaceUri_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamNamespaceDeclaration *__qt_this = (QXmlStreamNamespaceDeclaration *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->namespaceUri();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamNamespaceDeclaration::operator==(const QXmlStreamNamespaceDeclaration & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNamespaceDeclaration_operator_equal_QXmlStreamNamespaceDeclaration_const
(void* __this_nativeId,
 void* other0)
{
    const QXmlStreamNamespaceDeclaration&  __qt_other0 = (const QXmlStreamNamespaceDeclaration& ) *(QXmlStreamNamespaceDeclaration *)other0;
    QXmlStreamNamespaceDeclaration *__qt_this = (QXmlStreamNamespaceDeclaration *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QXmlStreamNamespaceDeclaration& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamNamespaceDeclaration::prefix() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNamespaceDeclaration_prefix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamNamespaceDeclaration *__qt_this = (QXmlStreamNamespaceDeclaration *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->prefix();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isComplex() { return (bool) QTypeInfo<QXmlStreamNamespaceDeclaration>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isStatic() { return (bool) QTypeInfo<QXmlStreamNamespaceDeclaration>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isLarge() { return (bool) QTypeInfo<QXmlStreamNamespaceDeclaration>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isPointer() { return (bool) QTypeInfo<QXmlStreamNamespaceDeclaration>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isDummy() { return (bool) QTypeInfo<QXmlStreamNamespaceDeclaration>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNamespaceDeclaration_placed_copy(void* orig, void* place) {
    const QXmlStreamNamespaceDeclaration&  __qt_orig = (const QXmlStreamNamespaceDeclaration& ) *(QXmlStreamNamespaceDeclaration *)orig;
    QXmlStreamNamespaceDeclaration *result = new (place) QXmlStreamNamespaceDeclaration (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamNamespaceDeclaration_native_copy(void* orig) {
    const QXmlStreamNamespaceDeclaration&  __qt_orig = (const QXmlStreamNamespaceDeclaration& ) *(QXmlStreamNamespaceDeclaration *)orig;
    QXmlStreamNamespaceDeclaration *result = new QXmlStreamNamespaceDeclaration (__qt_orig);
    return result;
}

