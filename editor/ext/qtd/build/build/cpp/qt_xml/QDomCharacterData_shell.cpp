#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomCharacterData_delete(void* nativeId)
{
    delete (QDomCharacterData*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomCharacterData_destroy(void* nativeId)
{
    call_destructor((QDomCharacterData*)nativeId);
}

// ---externC---
// QDomCharacterData::QDomCharacterData()
QTD_EXTERN QTD_EXPORT void* qtd_QDomCharacterData_QDomCharacterData
()
{
    QDomCharacterData *__qt_this = new QDomCharacterData();
    return (void *) __qt_this;

}

// QDomCharacterData::QDomCharacterData(const QDomCharacterData & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomCharacterData_QDomCharacterData_QDomCharacterData
(void* x0)
{
    const QDomCharacterData&  __qt_x0 = (const QDomCharacterData& ) *(QDomCharacterData *)x0;
    QDomCharacterData *__qt_this = new QDomCharacterData((const QDomCharacterData& )__qt_x0);
    return (void *) __qt_this;

}

// QDomCharacterData::appendData(const QString & arg)
QTD_EXTERN QTD_EXPORT void qtd_QDomCharacterData_appendData_string
(void* __this_nativeId,
 DArray arg0)
{
    QString __qt_arg0 = QString::fromUtf8((const char *)arg0.ptr, arg0.length);
    QDomCharacterData *__qt_this = (QDomCharacterData *) __this_nativeId;
    __qt_this->appendData((const QString& )__qt_arg0);

}

// QDomCharacterData::data() const
QTD_EXTERN QTD_EXPORT void qtd_QDomCharacterData_data_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomCharacterData *__qt_this = (QDomCharacterData *) __this_nativeId;
    QString  __qt_return_value = __qt_this->data();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomCharacterData::deleteData(unsigned long offset, unsigned long count)
QTD_EXTERN QTD_EXPORT void qtd_QDomCharacterData_deleteData_uint_uint
(void* __this_nativeId,
 unsigned long offset0,
 unsigned long count1)
{
    QDomCharacterData *__qt_this = (QDomCharacterData *) __this_nativeId;
    __qt_this->deleteData((unsigned long )offset0, (unsigned long )count1);

}

// QDomCharacterData::insertData(unsigned long offset, const QString & arg)
QTD_EXTERN QTD_EXPORT void qtd_QDomCharacterData_insertData_uint_string
(void* __this_nativeId,
 unsigned long offset0,
 DArray arg1)
{
    QString __qt_arg1 = QString::fromUtf8((const char *)arg1.ptr, arg1.length);
    QDomCharacterData *__qt_this = (QDomCharacterData *) __this_nativeId;
    __qt_this->insertData((unsigned long )offset0, (const QString& )__qt_arg1);

}

// QDomCharacterData::length() const
QTD_EXTERN QTD_EXPORT uint qtd_QDomCharacterData_length_const
(void* __this_nativeId)
{
    QDomCharacterData *__qt_this = (QDomCharacterData *) __this_nativeId;
    uint  __qt_return_value = __qt_this->length();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomCharacterData::replaceData(unsigned long offset, unsigned long count, const QString & arg)
QTD_EXTERN QTD_EXPORT void qtd_QDomCharacterData_replaceData_uint_uint_string
(void* __this_nativeId,
 unsigned long offset0,
 unsigned long count1,
 DArray arg2)
{
    QString __qt_arg2 = QString::fromUtf8((const char *)arg2.ptr, arg2.length);
    QDomCharacterData *__qt_this = (QDomCharacterData *) __this_nativeId;
    __qt_this->replaceData((unsigned long )offset0, (unsigned long )count1, (const QString& )__qt_arg2);

}

// QDomCharacterData::setData(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDomCharacterData_setData_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QDomCharacterData *__qt_this = (QDomCharacterData *) __this_nativeId;
    __qt_this->setData((const QString& )__qt_arg__1);

}

// QDomCharacterData::substringData(unsigned long offset, unsigned long count)
QTD_EXTERN QTD_EXPORT void qtd_QDomCharacterData_substringData_uint_uint
(void* __this_nativeId,
 void* __d_return_value,
 unsigned long offset0,
 unsigned long count1)
{
    QDomCharacterData *__qt_this = (QDomCharacterData *) __this_nativeId;
    QString  __qt_return_value = __qt_this->substringData((unsigned long )offset0, (unsigned long )count1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomCharacterData_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomCharacterData>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomCharacterData_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomCharacterData>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomCharacterData_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomCharacterData>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomCharacterData_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomCharacterData>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomCharacterData_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomCharacterData>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomCharacterData_placed_copy(void* orig, void* place) {
    const QDomCharacterData&  __qt_orig = (const QDomCharacterData& ) *(QDomCharacterData *)orig;
    QDomCharacterData *result = new (place) QDomCharacterData (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomCharacterData_native_copy(void* orig) {
    const QDomCharacterData&  __qt_orig = (const QDomCharacterData& ) *(QDomCharacterData *)orig;
    QDomCharacterData *result = new QDomCharacterData (__qt_orig);
    return result;
}

