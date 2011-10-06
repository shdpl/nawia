#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomCDATASection_delete(void* nativeId)
{
    delete (QDomCDATASection*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomCDATASection_destroy(void* nativeId)
{
    call_destructor((QDomCDATASection*)nativeId);
}

// ---externC---
// QDomCDATASection::QDomCDATASection()
QTD_EXTERN QTD_EXPORT void* qtd_QDomCDATASection_QDomCDATASection
()
{
    QDomCDATASection *__qt_this = new QDomCDATASection();
    return (void *) __qt_this;

}

// QDomCDATASection::QDomCDATASection(const QDomCDATASection & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomCDATASection_QDomCDATASection_QDomCDATASection
(void* x0)
{
    const QDomCDATASection&  __qt_x0 = (const QDomCDATASection& ) *(QDomCDATASection *)x0;
    QDomCDATASection *__qt_this = new QDomCDATASection((const QDomCDATASection& )__qt_x0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomCDATASection_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomCDATASection>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomCDATASection_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomCDATASection>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomCDATASection_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomCDATASection>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomCDATASection_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomCDATASection>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomCDATASection_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomCDATASection>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomCDATASection_placed_copy(void* orig, void* place) {
    const QDomCDATASection&  __qt_orig = (const QDomCDATASection& ) *(QDomCDATASection *)orig;
    QDomCDATASection *result = new (place) QDomCDATASection (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomCDATASection_native_copy(void* orig) {
    const QDomCDATASection&  __qt_orig = (const QDomCDATASection& ) *(QDomCDATASection *)orig;
    QDomCDATASection *result = new QDomCDATASection (__qt_orig);
    return result;
}

