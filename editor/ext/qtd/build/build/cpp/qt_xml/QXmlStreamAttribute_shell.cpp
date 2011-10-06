#include <QVariant>
#include <qxmlstream.h>

#include <iostream>
#include <qxmlstream.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttribute_delete(void* nativeId)
{
    delete (QXmlStreamAttribute*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttribute_destroy(void* nativeId)
{
    call_destructor((QXmlStreamAttribute*)nativeId);
}

// ---externC---
// QXmlStreamAttribute::QXmlStreamAttribute()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamAttribute_QXmlStreamAttribute
()
{
    QXmlStreamAttribute *__qt_this = new QXmlStreamAttribute();
    return (void *) __qt_this;

}

// QXmlStreamAttribute::QXmlStreamAttribute(const QString & namespaceUri, const QString & name, const QString & value)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamAttribute_QXmlStreamAttribute_string_string_string
(DArray namespaceUri0,
 DArray name1,
 DArray value2)
{
    QString __qt_namespaceUri0 = QString::fromUtf8((const char *)namespaceUri0.ptr, namespaceUri0.length);
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QString __qt_value2 = QString::fromUtf8((const char *)value2.ptr, value2.length);
    QXmlStreamAttribute *__qt_this = new QXmlStreamAttribute((const QString& )__qt_namespaceUri0, (const QString& )__qt_name1, (const QString& )__qt_value2);
    return (void *) __qt_this;

}

// QXmlStreamAttribute::QXmlStreamAttribute(const QString & qualifiedName, const QString & value)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamAttribute_QXmlStreamAttribute_string_string
(DArray qualifiedName0,
 DArray value1)
{
    QString __qt_qualifiedName0 = QString::fromUtf8((const char *)qualifiedName0.ptr, qualifiedName0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QXmlStreamAttribute *__qt_this = new QXmlStreamAttribute((const QString& )__qt_qualifiedName0, (const QString& )__qt_value1);
    return (void *) __qt_this;

}

// QXmlStreamAttribute::QXmlStreamAttribute(const QXmlStreamAttribute & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamAttribute_QXmlStreamAttribute_QXmlStreamAttribute
(void* arg__1)
{
    const QXmlStreamAttribute&  __qt_arg__1 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)arg__1;
    QXmlStreamAttribute *__qt_this = new QXmlStreamAttribute((const QXmlStreamAttribute& )__qt_arg__1);
    return (void *) __qt_this;

}

// QXmlStreamAttribute::isDefault() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttribute_isDefault_const
(void* __this_nativeId)
{
    QXmlStreamAttribute *__qt_this = (QXmlStreamAttribute *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDefault();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttribute::name() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttribute_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamAttribute *__qt_this = (QXmlStreamAttribute *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->name();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamAttribute::namespaceUri() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttribute_namespaceUri_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamAttribute *__qt_this = (QXmlStreamAttribute *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->namespaceUri();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamAttribute::operator==(const QXmlStreamAttribute & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttribute_operator_equal_QXmlStreamAttribute_const
(void* __this_nativeId,
 void* other0)
{
    const QXmlStreamAttribute&  __qt_other0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)other0;
    QXmlStreamAttribute *__qt_this = (QXmlStreamAttribute *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QXmlStreamAttribute& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamAttribute::prefix() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttribute_prefix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamAttribute *__qt_this = (QXmlStreamAttribute *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->prefix();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamAttribute::qualifiedName() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttribute_qualifiedName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamAttribute *__qt_this = (QXmlStreamAttribute *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->qualifiedName();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamAttribute::value() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttribute_value_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamAttribute *__qt_this = (QXmlStreamAttribute *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->value();

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
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttribute_QTypeInfo_isComplex() { return (bool) QTypeInfo<QXmlStreamAttribute>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttribute_QTypeInfo_isStatic() { return (bool) QTypeInfo<QXmlStreamAttribute>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttribute_QTypeInfo_isLarge() { return (bool) QTypeInfo<QXmlStreamAttribute>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttribute_QTypeInfo_isPointer() { return (bool) QTypeInfo<QXmlStreamAttribute>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamAttribute_QTypeInfo_isDummy() { return (bool) QTypeInfo<QXmlStreamAttribute>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamAttribute_placed_copy(void* orig, void* place) {
    const QXmlStreamAttribute&  __qt_orig = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)orig;
    QXmlStreamAttribute *result = new (place) QXmlStreamAttribute (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamAttribute_native_copy(void* orig) {
    const QXmlStreamAttribute&  __qt_orig = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)orig;
    QXmlStreamAttribute *result = new QXmlStreamAttribute (__qt_orig);
    return result;
}

