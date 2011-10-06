#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomEntityReference_delete(void* nativeId)
{
    delete (QDomEntityReference*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomEntityReference_destroy(void* nativeId)
{
    call_destructor((QDomEntityReference*)nativeId);
}

// ---externC---
// QDomEntityReference::QDomEntityReference()
QTD_EXTERN QTD_EXPORT void* qtd_QDomEntityReference_QDomEntityReference
()
{
    QDomEntityReference *__qt_this = new QDomEntityReference();
    return (void *) __qt_this;

}

// QDomEntityReference::QDomEntityReference(const QDomEntityReference & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomEntityReference_QDomEntityReference_QDomEntityReference
(void* x0)
{
    const QDomEntityReference&  __qt_x0 = (const QDomEntityReference& ) *(QDomEntityReference *)x0;
    QDomEntityReference *__qt_this = new QDomEntityReference((const QDomEntityReference& )__qt_x0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomEntityReference_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomEntityReference>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomEntityReference_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomEntityReference>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomEntityReference_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomEntityReference>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomEntityReference_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomEntityReference>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomEntityReference_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomEntityReference>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomEntityReference_placed_copy(void* orig, void* place) {
    const QDomEntityReference&  __qt_orig = (const QDomEntityReference& ) *(QDomEntityReference *)orig;
    QDomEntityReference *result = new (place) QDomEntityReference (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomEntityReference_native_copy(void* orig) {
    const QDomEntityReference&  __qt_orig = (const QDomEntityReference& ) *(QDomEntityReference *)orig;
    QDomEntityReference *result = new QDomEntityReference (__qt_orig);
    return result;
}

