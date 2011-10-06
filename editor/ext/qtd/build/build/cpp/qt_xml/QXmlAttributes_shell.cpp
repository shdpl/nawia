#include <QVariant>

#include "QXmlAttributes_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_delete(void* nativeId)
{
    delete (QXmlAttributes_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_destroy(void* nativeId)
{
    call_destructor((QXmlAttributes_QtDShell*)nativeId);
}

QXmlAttributes_QtDShell::QXmlAttributes_QtDShell(void *d_ptr)
    : QXmlAttributes(),
      QtdObjectLink(d_ptr)
{
}

QXmlAttributes_QtDShell::~QXmlAttributes_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QXmlAttributes::QXmlAttributes()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlAttributes_QXmlAttributes
(void *d_ptr)
{
    QXmlAttributes_QtDShell *__qt_this = new QXmlAttributes_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlAttributes::append(const QString & qName, const QString & uri, const QString & localPart, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_append_string_string_string_string
(void* __this_nativeId,
 DArray qName0,
 DArray uri1,
 DArray localPart2,
 DArray value3)
{
    QString __qt_qName0 = QString::fromUtf8((const char *)qName0.ptr, qName0.length);
    QString __qt_uri1 = QString::fromUtf8((const char *)uri1.ptr, uri1.length);
    QString __qt_localPart2 = QString::fromUtf8((const char *)localPart2.ptr, localPart2.length);
    QString __qt_value3 = QString::fromUtf8((const char *)value3.ptr, value3.length);
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    __qt_this->append((const QString& )__qt_qName0, (const QString& )__qt_uri1, (const QString& )__qt_localPart2, (const QString& )__qt_value3);

}

// QXmlAttributes::clear()
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_clear
(void* __this_nativeId)
{
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QXmlAttributes::count() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlAttributes_count_const
(void* __this_nativeId)
{
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlAttributes::index(const QString & qName) const
QTD_EXTERN QTD_EXPORT int qtd_QXmlAttributes_index_string_const
(void* __this_nativeId,
 DArray qName0)
{
    QString __qt_qName0 = QString::fromUtf8((const char *)qName0.ptr, qName0.length);
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->index((const QString& )__qt_qName0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlAttributes::index(const QString & uri, const QString & localPart) const
QTD_EXTERN QTD_EXPORT int qtd_QXmlAttributes_index_string_string_const
(void* __this_nativeId,
 DArray uri0,
 DArray localPart1)
{
    QString __qt_uri0 = QString::fromUtf8((const char *)uri0.ptr, uri0.length);
    QString __qt_localPart1 = QString::fromUtf8((const char *)localPart1.ptr, localPart1.length);
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->index((const QString& )__qt_uri0, (const QString& )__qt_localPart1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlAttributes::length() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlAttributes_length_const
(void* __this_nativeId)
{
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->length();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlAttributes::localName(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_localName_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->localName((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlAttributes::qName(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_qName_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->qName((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlAttributes::type(const QString & qName) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_type_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray qName0)
{
    QString __qt_qName0 = QString::fromUtf8((const char *)qName0.ptr, qName0.length);
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->type((const QString& )__qt_qName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlAttributes::type(const QString & uri, const QString & localName) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_type_string_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray uri0,
 DArray localName1)
{
    QString __qt_uri0 = QString::fromUtf8((const char *)uri0.ptr, uri0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->type((const QString& )__qt_uri0, (const QString& )__qt_localName1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlAttributes::type(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_type_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->type((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlAttributes::uri(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_uri_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->uri((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlAttributes::value(const QString & qName) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_value_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray qName0)
{
    QString __qt_qName0 = QString::fromUtf8((const char *)qName0.ptr, qName0.length);
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->value((const QString& )__qt_qName0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlAttributes::value(const QString & uri, const QString & localName) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_value_string_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray uri0,
 DArray localName1)
{
    QString __qt_uri0 = QString::fromUtf8((const char *)uri0.ptr, uri0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->value((const QString& )__qt_uri0, (const QString& )__qt_localName1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlAttributes::value(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_value_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QXmlAttributes_QtDShell *__qt_this = (QXmlAttributes_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->value((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QXmlAttributes_QTypeInfo_isComplex() { return (bool) QTypeInfo<QXmlAttributes>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlAttributes_QTypeInfo_isStatic() { return (bool) QTypeInfo<QXmlAttributes>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlAttributes_QTypeInfo_isLarge() { return (bool) QTypeInfo<QXmlAttributes>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlAttributes_QTypeInfo_isPointer() { return (bool) QTypeInfo<QXmlAttributes>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlAttributes_QTypeInfo_isDummy() { return (bool) QTypeInfo<QXmlAttributes>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QXmlAttributes_placed_copy(void* orig, void* place) {
    const QXmlAttributes_QtDShell&  __qt_orig = (const QXmlAttributes_QtDShell& ) *(QXmlAttributes_QtDShell *)orig;
    QXmlAttributes *result = new (place) QXmlAttributes (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QXmlAttributes_native_copy(void* orig) {
    const QXmlAttributes_QtDShell&  __qt_orig = (const QXmlAttributes_QtDShell& ) *(QXmlAttributes_QtDShell *)orig;
    QXmlAttributes *result = new QXmlAttributes (__qt_orig);
    return result;
}

