#include <QVariant>
#include <qxml.h>

#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlParseException_delete(void* nativeId)
{
    delete (QXmlParseException*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlParseException_destroy(void* nativeId)
{
    call_destructor((QXmlParseException*)nativeId);
}

// ---externC---
// QXmlParseException::QXmlParseException(const QString & name, int c, int l, const QString & p, const QString & s)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlParseException_QXmlParseException_string_int_int_string_string
(DArray name0,
 int c1,
 int l2,
 DArray p3,
 DArray s4)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_p3 = QString::fromUtf8((const char *)p3.ptr, p3.length);
    QString __qt_s4 = QString::fromUtf8((const char *)s4.ptr, s4.length);
    QXmlParseException *__qt_this = new QXmlParseException((const QString& )__qt_name0, (int )c1, (int )l2, (const QString& )__qt_p3, (const QString& )__qt_s4);
    return (void *) __qt_this;

}

// QXmlParseException::QXmlParseException(const QXmlParseException & other)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlParseException_QXmlParseException_QXmlParseException
(void* other0)
{
    const QXmlParseException&  __qt_other0 = (const QXmlParseException& ) *(QXmlParseException *)other0;
    QXmlParseException *__qt_this = new QXmlParseException((const QXmlParseException& )__qt_other0);
    return (void *) __qt_this;

}

// QXmlParseException::columnNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlParseException_columnNumber_const
(void* __this_nativeId)
{
    QXmlParseException *__qt_this = (QXmlParseException *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlParseException::lineNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlParseException_lineNumber_const
(void* __this_nativeId)
{
    QXmlParseException *__qt_this = (QXmlParseException *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlParseException::message() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlParseException_message_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlParseException *__qt_this = (QXmlParseException *) __this_nativeId;
    QString  __qt_return_value = __qt_this->message();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlParseException::publicId() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlParseException_publicId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlParseException *__qt_this = (QXmlParseException *) __this_nativeId;
    QString  __qt_return_value = __qt_this->publicId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlParseException::systemId() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlParseException_systemId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlParseException *__qt_this = (QXmlParseException *) __this_nativeId;
    QString  __qt_return_value = __qt_this->systemId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QXmlParseException_QTypeInfo_isComplex() { return (bool) QTypeInfo<QXmlParseException>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlParseException_QTypeInfo_isStatic() { return (bool) QTypeInfo<QXmlParseException>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlParseException_QTypeInfo_isLarge() { return (bool) QTypeInfo<QXmlParseException>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlParseException_QTypeInfo_isPointer() { return (bool) QTypeInfo<QXmlParseException>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlParseException_QTypeInfo_isDummy() { return (bool) QTypeInfo<QXmlParseException>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QXmlParseException_placed_copy(void* orig, void* place) {
    const QXmlParseException&  __qt_orig = (const QXmlParseException& ) *(QXmlParseException *)orig;
    QXmlParseException *result = new (place) QXmlParseException (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QXmlParseException_native_copy(void* orig) {
    const QXmlParseException&  __qt_orig = (const QXmlParseException& ) *(QXmlParseException *)orig;
    QXmlParseException *result = new QXmlParseException (__qt_orig);
    return result;
}

