#include <QVariant>
#include <qxmlstream.h>

#include <iostream>
#include <qxmlstream.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityDeclaration_delete(void* nativeId)
{
    delete (QXmlStreamEntityDeclaration*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityDeclaration_destroy(void* nativeId)
{
    call_destructor((QXmlStreamEntityDeclaration*)nativeId);
}

// ---externC---
// QXmlStreamEntityDeclaration::QXmlStreamEntityDeclaration()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration
()
{
    QXmlStreamEntityDeclaration *__qt_this = new QXmlStreamEntityDeclaration();
    return (void *) __qt_this;

}

// QXmlStreamEntityDeclaration::QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration
(void* arg__1)
{
    const QXmlStreamEntityDeclaration&  __qt_arg__1 = (const QXmlStreamEntityDeclaration& ) *(QXmlStreamEntityDeclaration *)arg__1;
    QXmlStreamEntityDeclaration *__qt_this = new QXmlStreamEntityDeclaration((const QXmlStreamEntityDeclaration& )__qt_arg__1);
    return (void *) __qt_this;

}

// QXmlStreamEntityDeclaration::name() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityDeclaration_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamEntityDeclaration *__qt_this = (QXmlStreamEntityDeclaration *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->name();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamEntityDeclaration::notationName() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityDeclaration_notationName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamEntityDeclaration *__qt_this = (QXmlStreamEntityDeclaration *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->notationName();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamEntityDeclaration::operator==(const QXmlStreamEntityDeclaration & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamEntityDeclaration_operator_equal_QXmlStreamEntityDeclaration_const
(void* __this_nativeId,
 void* other0)
{
    const QXmlStreamEntityDeclaration&  __qt_other0 = (const QXmlStreamEntityDeclaration& ) *(QXmlStreamEntityDeclaration *)other0;
    QXmlStreamEntityDeclaration *__qt_this = (QXmlStreamEntityDeclaration *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QXmlStreamEntityDeclaration& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamEntityDeclaration::publicId() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityDeclaration_publicId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamEntityDeclaration *__qt_this = (QXmlStreamEntityDeclaration *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->publicId();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamEntityDeclaration::systemId() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityDeclaration_systemId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamEntityDeclaration *__qt_this = (QXmlStreamEntityDeclaration *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->systemId();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamEntityDeclaration::value() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityDeclaration_value_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamEntityDeclaration *__qt_this = (QXmlStreamEntityDeclaration *) __this_nativeId;
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
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamEntityDeclaration_QTypeInfo_isComplex() { return (bool) QTypeInfo<QXmlStreamEntityDeclaration>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamEntityDeclaration_QTypeInfo_isStatic() { return (bool) QTypeInfo<QXmlStreamEntityDeclaration>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamEntityDeclaration_QTypeInfo_isLarge() { return (bool) QTypeInfo<QXmlStreamEntityDeclaration>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamEntityDeclaration_QTypeInfo_isPointer() { return (bool) QTypeInfo<QXmlStreamEntityDeclaration>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamEntityDeclaration_QTypeInfo_isDummy() { return (bool) QTypeInfo<QXmlStreamEntityDeclaration>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityDeclaration_placed_copy(void* orig, void* place) {
    const QXmlStreamEntityDeclaration&  __qt_orig = (const QXmlStreamEntityDeclaration& ) *(QXmlStreamEntityDeclaration *)orig;
    QXmlStreamEntityDeclaration *result = new (place) QXmlStreamEntityDeclaration (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamEntityDeclaration_native_copy(void* orig) {
    const QXmlStreamEntityDeclaration&  __qt_orig = (const QXmlStreamEntityDeclaration& ) *(QXmlStreamEntityDeclaration *)orig;
    QXmlStreamEntityDeclaration *result = new QXmlStreamEntityDeclaration (__qt_orig);
    return result;
}

