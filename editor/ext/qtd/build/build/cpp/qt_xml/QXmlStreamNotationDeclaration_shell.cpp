#include <QVariant>
#include <qxmlstream.h>

#include <iostream>
#include <qxmlstream.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNotationDeclaration_delete(void* nativeId)
{
    delete (QXmlStreamNotationDeclaration*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNotationDeclaration_destroy(void* nativeId)
{
    call_destructor((QXmlStreamNotationDeclaration*)nativeId);
}

// ---externC---
// QXmlStreamNotationDeclaration::QXmlStreamNotationDeclaration()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration
()
{
    QXmlStreamNotationDeclaration *__qt_this = new QXmlStreamNotationDeclaration();
    return (void *) __qt_this;

}

// QXmlStreamNotationDeclaration::QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration
(void* arg__1)
{
    const QXmlStreamNotationDeclaration&  __qt_arg__1 = (const QXmlStreamNotationDeclaration& ) *(QXmlStreamNotationDeclaration *)arg__1;
    QXmlStreamNotationDeclaration *__qt_this = new QXmlStreamNotationDeclaration((const QXmlStreamNotationDeclaration& )__qt_arg__1);
    return (void *) __qt_this;

}

// QXmlStreamNotationDeclaration::name() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNotationDeclaration_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamNotationDeclaration *__qt_this = (QXmlStreamNotationDeclaration *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->name();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamNotationDeclaration::operator==(const QXmlStreamNotationDeclaration & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNotationDeclaration_operator_equal_QXmlStreamNotationDeclaration_const
(void* __this_nativeId,
 void* other0)
{
    const QXmlStreamNotationDeclaration&  __qt_other0 = (const QXmlStreamNotationDeclaration& ) *(QXmlStreamNotationDeclaration *)other0;
    QXmlStreamNotationDeclaration *__qt_this = (QXmlStreamNotationDeclaration *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QXmlStreamNotationDeclaration& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamNotationDeclaration::publicId() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNotationDeclaration_publicId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamNotationDeclaration *__qt_this = (QXmlStreamNotationDeclaration *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->publicId();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamNotationDeclaration::systemId() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNotationDeclaration_systemId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamNotationDeclaration *__qt_this = (QXmlStreamNotationDeclaration *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->systemId();

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
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNotationDeclaration_QTypeInfo_isComplex() { return (bool) QTypeInfo<QXmlStreamNotationDeclaration>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNotationDeclaration_QTypeInfo_isStatic() { return (bool) QTypeInfo<QXmlStreamNotationDeclaration>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNotationDeclaration_QTypeInfo_isLarge() { return (bool) QTypeInfo<QXmlStreamNotationDeclaration>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNotationDeclaration_QTypeInfo_isPointer() { return (bool) QTypeInfo<QXmlStreamNotationDeclaration>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamNotationDeclaration_QTypeInfo_isDummy() { return (bool) QTypeInfo<QXmlStreamNotationDeclaration>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamNotationDeclaration_placed_copy(void* orig, void* place) {
    const QXmlStreamNotationDeclaration&  __qt_orig = (const QXmlStreamNotationDeclaration& ) *(QXmlStreamNotationDeclaration *)orig;
    QXmlStreamNotationDeclaration *result = new (place) QXmlStreamNotationDeclaration (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamNotationDeclaration_native_copy(void* orig) {
    const QXmlStreamNotationDeclaration&  __qt_orig = (const QXmlStreamNotationDeclaration& ) *(QXmlStreamNotationDeclaration *)orig;
    QXmlStreamNotationDeclaration *result = new QXmlStreamNotationDeclaration (__qt_orig);
    return result;
}

