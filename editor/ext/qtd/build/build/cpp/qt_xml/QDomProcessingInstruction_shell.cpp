#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomProcessingInstruction_delete(void* nativeId)
{
    delete (QDomProcessingInstruction*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomProcessingInstruction_destroy(void* nativeId)
{
    call_destructor((QDomProcessingInstruction*)nativeId);
}

// ---externC---
// QDomProcessingInstruction::QDomProcessingInstruction()
QTD_EXTERN QTD_EXPORT void* qtd_QDomProcessingInstruction_QDomProcessingInstruction
()
{
    QDomProcessingInstruction *__qt_this = new QDomProcessingInstruction();
    return (void *) __qt_this;

}

// QDomProcessingInstruction::QDomProcessingInstruction(const QDomProcessingInstruction & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomProcessingInstruction_QDomProcessingInstruction_QDomProcessingInstruction
(void* x0)
{
    const QDomProcessingInstruction&  __qt_x0 = (const QDomProcessingInstruction& ) *(QDomProcessingInstruction *)x0;
    QDomProcessingInstruction *__qt_this = new QDomProcessingInstruction((const QDomProcessingInstruction& )__qt_x0);
    return (void *) __qt_this;

}

// QDomProcessingInstruction::data() const
QTD_EXTERN QTD_EXPORT void qtd_QDomProcessingInstruction_data_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomProcessingInstruction *__qt_this = (QDomProcessingInstruction *) __this_nativeId;
    QString  __qt_return_value = __qt_this->data();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomProcessingInstruction::setData(const QString & d)
QTD_EXTERN QTD_EXPORT void qtd_QDomProcessingInstruction_setData_string
(void* __this_nativeId,
 DArray d0)
{
    QString __qt_d0 = QString::fromUtf8((const char *)d0.ptr, d0.length);
    QDomProcessingInstruction *__qt_this = (QDomProcessingInstruction *) __this_nativeId;
    __qt_this->setData((const QString& )__qt_d0);

}

// QDomProcessingInstruction::target() const
QTD_EXTERN QTD_EXPORT void qtd_QDomProcessingInstruction_target_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomProcessingInstruction *__qt_this = (QDomProcessingInstruction *) __this_nativeId;
    QString  __qt_return_value = __qt_this->target();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomProcessingInstruction_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomProcessingInstruction>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomProcessingInstruction_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomProcessingInstruction>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomProcessingInstruction_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomProcessingInstruction>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomProcessingInstruction_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomProcessingInstruction>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomProcessingInstruction_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomProcessingInstruction>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomProcessingInstruction_placed_copy(void* orig, void* place) {
    const QDomProcessingInstruction&  __qt_orig = (const QDomProcessingInstruction& ) *(QDomProcessingInstruction *)orig;
    QDomProcessingInstruction *result = new (place) QDomProcessingInstruction (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomProcessingInstruction_native_copy(void* orig) {
    const QDomProcessingInstruction&  __qt_orig = (const QDomProcessingInstruction& ) *(QDomProcessingInstruction *)orig;
    QDomProcessingInstruction *result = new QDomProcessingInstruction (__qt_orig);
    return result;
}

